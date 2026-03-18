/*
 * XREFs of HMCleanupGrantedHandle @ 0x1C011B058
 * Callers:
 *     HMFreeObject @ 0x1C0017080 (HMFreeObject.c)
 *     HMRemoveHandleForObject @ 0x1C0017370 (HMRemoveHandleForObject.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C007447C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C000F304 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

__int64 __fastcall HMCleanupGrantedHandle(__int64 a1)
{
  __int64 result; // rax
  __int64 i; // rbx
  unsigned int v4; // ecx
  __int64 v5; // rdx
  _QWORD *v6; // r9
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  result = CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>((__int64)v7);
  for ( i = gpJobsList; i; i = *(_QWORD *)i )
  {
    v4 = *(_DWORD *)(i + 48);
    v5 = 0LL;
    if ( v4 )
    {
      while ( 1 )
      {
        v6 = (_QWORD *)(*(_QWORD *)(i + 56) + 8 * v5);
        if ( *v6 == a1 )
          break;
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= v4 )
          goto LABEL_7;
      }
      result = (__int64)memmove(v6, v6 + 1, 8LL * (v4 - (unsigned int)v5 - 1));
      --*(_DWORD *)(i + 48);
    }
LABEL_7:
    ;
  }
  return result;
}
