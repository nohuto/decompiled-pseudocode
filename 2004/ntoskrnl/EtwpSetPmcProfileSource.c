/*
 * XREFs of EtwpSetPmcProfileSource @ 0x140933F5C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140284E90 (KeReleaseMutex.c)
 *     KeInitializeProfileCallback @ 0x1408B8C3C (KeInitializeProfileCallback.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
    if ( qword_140C19C28 )
    {
      ExFreePoolWithTag(qword_140C19C28, 0);
      qword_140C19C28 = 0LL;
      EtwpPmcProfile = 0;
    }
    v5 = v3;
    qword_140C19C28 = ExAllocatePoolWithTag(NonPagedPoolNx, 248 * v3, 0x58777445u);
    v6 = qword_140C19C28;
    if ( qword_140C19C28 )
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
