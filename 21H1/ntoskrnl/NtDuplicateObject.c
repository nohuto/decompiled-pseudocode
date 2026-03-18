/*
 * XREFs of NtDuplicateObject @ 0x14061D820
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14062B1C0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall NtDuplicateObject(void *a1, __int64 a2, void *a3, _QWORD *a4, int a5, int a6, int a7)
{
  PVOID v10; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  NTSTATUS v13; // r14d
  __int64 v14; // rdx
  PVOID v15; // r15
  int v16; // esi
  __int64 v17; // rdx
  KPROCESSOR_MODE v18; // [rsp+38h] [rbp-50h]
  PVOID v19; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v21[3]; // [rsp+58h] [rbp-30h] BYREF

  v10 = 0LL;
  v21[0] = 0LL;
  Object = 0LL;
  v19 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a4 && PreviousMode )
  {
    v17 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v17 = *(_QWORD *)v17;
    *a4 = 0LL;
  }
  result = ObReferenceObjectByHandleWithTag(
             a1,
             0x40u,
             (POBJECT_TYPE)PsProcessType,
             PreviousMode,
             0x7544624Fu,
             &Object,
             0LL);
  if ( result >= 0 )
  {
    if ( a3 )
    {
      v13 = ObReferenceObjectByHandleWithTag(
              a3,
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
    v14 = a2;
    v15 = Object;
    v16 = ObDuplicateObject(Object, v14, v10, v21, a5, a6, a7, v18);
    if ( a4 )
      *a4 = v21[0];
    ObfDereferenceObjectWithTag(v15, 0x7544624Fu);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x7544624Fu);
    if ( v13 < 0 )
      return v13;
    return v16;
  }
  return result;
}
