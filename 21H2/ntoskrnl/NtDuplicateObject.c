/*
 * XREFs of NtDuplicateObject @ 0x1406D4D20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1406F0B80 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __fastcall NtDuplicateObject(void *a1, void *a2, void *a3, _QWORD *a4, ACCESS_MASK a5, int a6, char a7)
{
  struct _KPROCESS *v10; // rdi
  char PreviousMode; // si
  NTSTATUS result; // eax
  NTSTATUS v13; // r14d
  void *v14; // rdx
  PVOID v15; // r15
  int v16; // esi
  __int64 v17; // rdx
  PVOID v18; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v20[3]; // [rsp+58h] [rbp-30h] BYREF

  v10 = 0LL;
  v20[0] = 0LL;
  Object = 0LL;
  v18 = 0LL;
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
              &v18,
              0LL);
      if ( v13 < 0 )
      {
        v18 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v13 = 0;
    }
    v10 = (struct _KPROCESS *)v18;
LABEL_7:
    v14 = a2;
    v15 = Object;
    v16 = ObDuplicateObject((struct _KPROCESS *)Object, v14, v10, v20, a5, a6, a7, PreviousMode);
    if ( a4 )
      *a4 = v20[0];
    ObfDereferenceObjectWithTag(v15, 0x7544624Fu);
    if ( v10 )
      ObfDereferenceObjectWithTag(v10, 0x7544624Fu);
    if ( v13 < 0 )
      return v13;
    return v16;
  }
  return result;
}
