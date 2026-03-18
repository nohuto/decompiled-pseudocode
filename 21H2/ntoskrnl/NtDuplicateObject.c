/*
 * XREFs of NtDuplicateObject @ 0x1407A1DC0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 */

__int64 __fastcall NtDuplicateObject(
        ULONG_PTR a1,
        __int64 a2,
        ULONG_PTR a3,
        _QWORD *a4,
        ACCESS_MASK AccessMask,
        int a6,
        int a7)
{
  PVOID v9; // rdi
  char PreviousMode; // bl
  __int64 result; // rax
  int v12; // r14d
  PVOID v13; // r15
  unsigned int v14; // ebx
  __int64 v15; // rdx
  PVOID v16; // [rsp+48h] [rbp-40h] BYREF
  PVOID Object; // [rsp+50h] [rbp-38h] BYREF
  __int64 v18; // [rsp+58h] [rbp-30h]

  v9 = 0LL;
  v18 = 0LL;
  Object = 0LL;
  v16 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a4 && PreviousMode )
  {
    v15 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    *a4 = 0LL;
  }
  result = ObpReferenceObjectByHandleWithTag(
             a1,
             64,
             (__int64)PsProcessType,
             PreviousMode,
             0x7544624Fu,
             &Object,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v12 = ObpReferenceObjectByHandleWithTag(a3, 64, (__int64)PsProcessType, PreviousMode, 0x7544624Fu, &v16, 0LL, 0LL);
      if ( v12 < 0 )
      {
        v16 = 0LL;
        goto LABEL_7;
      }
    }
    else
    {
      v12 = 0;
    }
    v9 = v16;
LABEL_7:
    v13 = Object;
    v14 = ObDuplicateObject((ULONG_PTR)Object, AccessMask, a6, a7, PreviousMode);
    if ( a4 )
      *a4 = v18;
    ObfDereferenceObjectWithTag(v13, 0x7544624Fu);
    if ( v9 )
      ObfDereferenceObjectWithTag(v9, 0x7544624Fu);
    if ( v12 < 0 )
      return (unsigned int)v12;
    return v14;
  }
  return result;
}
