/*
 * XREFs of NtDuplicateObject @ 0x14061D820
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __cdecl NtDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  PVOID v10; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  int v13; // r14d
  HANDLE v14; // rdx
  PVOID v15; // r15
  NTSTATUS v16; // esi
  __int64 v17; // rdx
  KPROCESSOR_MODE v18; // [rsp+38h] [rbp-50h]
  PVOID v19; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  void *v21; // [rsp+58h] [rbp-30h] BYREF

  v10 = 0LL;
  v21 = 0LL;
  Object = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( TargetHandle && PreviousMode )
  {
    v17 = (__int64)TargetHandle;
    if ( (unsigned __int64)TargetHandle >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
    *TargetHandle = 0LL;
  }
  result = ObReferenceObjectByHandleWithTag(
             SourceProcessHandle,
             0x40u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x7544624Fu,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    if ( TargetProcessHandle )
    {
      v13 = ObReferenceObjectByHandleWithTag(
              TargetProcessHandle,
              0x40u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x7544624Fu,
              &v19,
              0LL);
      if ( v13 < 0 )
      {
        v19 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v13 = 0;
    }
    v10 = v19;
LABEL_7:
    v18 = PreviousMode;
    v14 = SourceHandle;
    v15 = Object;
    v16 = ObDuplicateObject(Object, v14, v10, &v21, DesiredAccess, HandleAttributes, Options, v18);
    if ( TargetHandle )
      *TargetHandle = v21;
    ObfDereferenceObjectWithTag(v15, 0x7544624Fu);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x7544624Fu);
    if ( v13 < 0 )
      return v13;
    return v16;
  }
  return result;
}
