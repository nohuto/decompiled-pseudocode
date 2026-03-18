/*
 * XREFs of HMCleanupGrantedHandle @ 0x1C0119598
 * Callers:
 *     HMFreeObject @ 0x1C00213D0 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C00218C0 (HMRemoveHandleForObject.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C0055648 (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C006B6D4 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall HMCleanupGrantedHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 i; // rbx
  unsigned int v7; // ecx
  __int64 v8; // rdx
  _QWORD *v9; // r9
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  result = CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>((__int64)v10, a2, a3, a4);
  for ( i = gpJobsList; i; i = *(_QWORD *)i )
  {
    v7 = *(_DWORD *)(i + 48);
    v8 = 0LL;
    if ( v7 )
    {
      while ( 1 )
      {
        v9 = (_QWORD *)(*(_QWORD *)(i + 56) + 8 * v8);
        if ( *v9 == a1 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          goto LABEL_7;
      }
      result = (__int64)memmove(v9, v9 + 1, 8LL * (v7 - (unsigned int)v8 - 1));
      --*(_DWORD *)(i + 48);
    }
LABEL_7:
    ;
  }
  return result;
}
