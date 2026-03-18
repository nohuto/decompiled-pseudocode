/*
 * XREFs of EtwpSetPmcProfileSource @ 0x140932CBC
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402486F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeInitializeProfileCallback @ 0x1408B791C (KeInitializeProfileCallback.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpSetPmcProfileSource(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v5; // r14
  _DWORD *v6; // rsi

  v2 = 0;
  v3 = a2;
  if ( !a2 || a2 > EtwpMaxProfilingSources )
    return 3221225485LL;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  if ( (WORD2(PerfGlobalGroupMask[0]) & 0x400) != 0 )
  {
    v2 = -1073741053;
  }
  else
  {
    if ( qword_140C19DB8 )
    {
      ExFreePoolWithTag(qword_140C19DB8, 0);
      qword_140C19DB8 = 0LL;
      EtwpPmcProfile = 0;
    }
    v5 = v3;
    qword_140C19DB8 = ExAllocatePoolWithTag(NonPagedPoolNx, 248 * v3, 0x58777445u);
    v6 = qword_140C19DB8;
    if ( qword_140C19DB8 )
    {
      EtwpPmcProfile = v3;
      if ( (_DWORD)v3 )
      {
        do
        {
          KeInitializeProfileCallback(v6, (__int64)EtwpPmcInterrupt, (unsigned int)*a1, *a1);
          v6 += 62;
          ++a1;
          --v5;
        }
        while ( v5 );
      }
    }
    else
    {
      v2 = -1073741801;
    }
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return v2;
}
