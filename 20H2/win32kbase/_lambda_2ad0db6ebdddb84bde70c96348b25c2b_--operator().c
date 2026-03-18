/*
 * XREFs of _lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator() @ 0x1C0085208
 * Callers:
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C008445C (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 * Callees:
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0021884 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     HMAssignmentUnlock @ 0x1C0054AD0 (HMAssignmentUnlock.c)
 *     DestroyKL @ 0x1C00BCED8 (DestroyKL.c)
 */

__int64 __fastcall lambda_2ad0db6ebdddb84bde70c96348b25c2b_::operator()(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 result; // rax
  _QWORD *v10; // rbx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v4 = *(_QWORD **)(a2 + 16);
  if ( (_QWORD *)v4[2] != v4 )
  {
    do
    {
      v10 = (_QWORD *)v4[2];
      DestroyKL(v4);
      v4 = v10;
    }
    while ( (_QWORD *)v10[2] != v10 );
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v11,
    a2,
    a3,
    a4);
  if ( (*((_BYTE *)qword_1C0248D48 + dword_1C0248D50 * (unsigned int)(unsigned __int16)*(_DWORD *)a2 + 25) & 1) == 0 )
  {
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v11,
      v6,
      v7,
      v8);
    HMMarkObjectDestroyWorker((_DWORD *)a2);
  }
  gdwHydraHint |= 0x8000u;
  result = HMAssignmentUnlock(&v12, v6, v7, v8);
  if ( result )
    return DestroyKL(v4);
  return result;
}
