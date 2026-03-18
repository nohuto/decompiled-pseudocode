/*
 * XREFs of ?_GetStackTraceSum@@YAKXZ @ 0x1C01337E0
 * Callers:
 *     ?_IsStackThrottled@@YAHXZ @ 0x1C01338F0 (-_IsStackThrottled@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 _GetStackTraceSum(void)
{
  unsigned int v0; // ebx
  ULONG v1; // ebp
  unsigned __int16 v2; // si
  int v3; // eax
  __int128 MemoryInformation; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v6; // [rsp+40h] [rbp-B8h]
  PVOID Callers[16]; // [rsp+50h] [rbp-A8h] BYREF

  v0 = 0;
  memset(Callers, 0, sizeof(Callers));
  v6 = 0LL;
  MemoryInformation = 0LL;
  v1 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  v2 = 0;
  if ( v1 > 0x10 )
    v1 = 16;
  if ( v1 )
  {
    do
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             Callers[v2],
             MemoryWorkingSetExList|MemorySectionName,
             &MemoryInformation,
             0x18uLL,
             0LL) < 0
        || (unsigned __int64)Callers[v2] < (unsigned __int64)MemoryInformation )
      {
        v3 = (int)Callers[v2];
      }
      else
      {
        v3 = LODWORD(Callers[v2]) - MemoryInformation;
      }
      ++v2;
      v0 += v3;
    }
    while ( v2 < v1 );
  }
  return v0;
}
