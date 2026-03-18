/*
 * XREFs of NtDuplicateObject @ 0x1405FACE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140611880 (ObReferenceObjectByHandleWithTag.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 */

NTSTATUS __fastcall NtDuplicateObject(void *a1, __int64 a2, void *a3, _QWORD *a4, int a5, int a6)
{
  PVOID v9; // rdi
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  NTSTATUS v12; // r14d
  __int64 v13; // rdx
  PVOID v14; // r15
  int v15; // esi
  __int64 v16; // rdx
  PVOID v17; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v19[3]; // [rsp+58h] [rbp-30h] BYREF

  v9 = 0LL;
  v19[0] = 0LL;
  Object = 0LL;
  v17 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a4 && PreviousMode )
  {
    v16 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v16 = *(_QWORD *)v16;
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
      v12 = ObReferenceObjectByHandleWithTag(
              a3,
              0x40u,
              (POBJECT_TYPE)PsProcessType,
              PreviousMode,
              0x7544624Fu,
              &v17,
              0LL);
      if ( v12 < 0 )
      {
        v17 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v12 = 0;
    }
    v9 = v17;
LABEL_7:
    v13 = a2;
    v14 = Object;
    v15 = ObDuplicateObject(Object, v13, v9, v19, a5, a6);
    if ( a4 )
      *a4 = v19[0];
    ObfDereferenceObjectWithTag(v14, 0x7544624Fu);
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x7544624Fu);
    if ( v12 < 0 )
      return v12;
    return v15;
  }
  return result;
}
