/*
 * XREFs of DestroyKL @ 0x1C00BCED8
 * Callers:
 *     _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0085208 (_lambda_2ad0db6ebdddb84bde70c96348b25c2b_--operator().c)
 *     ?DestroyKLIfSupported@@YAXPEAUtagKL@@@Z @ 0x1C00BCEC0 (-DestroyKLIfSupported@@YAXPEAUtagKL@@@Z.c)
 * Callees:
 *     HMFreeObject @ 0x1C00213D0 (HMFreeObject.c)
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     DestroyKF @ 0x1C00BCF68 (DestroyKF.c)
 */

__int64 __fastcall DestroyKL(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rax
  __int64 v10; // rcx
  __int64 i; // rdi
  __int64 *v13; // rcx
  void *v14; // rax

  *(_QWORD *)(a1[3] + 16LL) = a1[2];
  v5 = a1[2];
  *(_QWORD *)(v5 + 24) = a1[3];
  if ( HMAssignmentUnlock(a1 + 6, v5, a3, a4) )
  {
    v9 = (void *)HMAssignmentUnlock(a1 + 7, v6, v7, v8);
    if ( v9 )
      DestroyKF(v9);
  }
  if ( a1[12] )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 22); i = (unsigned int)(i + 1) )
    {
      v13 = (__int64 *)(a1[12] + 8 * i);
      if ( !*v13 )
        break;
      v14 = (void *)HMAssignmentUnlock(v13, v6, v7, v8);
      if ( v14 )
        DestroyKF(v14);
    }
    Win32FreePool(a1[12]);
  }
  v10 = a1[10];
  if ( v10 )
    Win32FreePool(v10);
  if ( a1 == (_QWORD *)gpKL )
    gpKL = 0LL;
  return HMFreeObject(a1);
}
