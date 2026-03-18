/*
 * XREFs of TtmGetSessionDisplayRequiredCount @ 0x140900E4C
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1403636EC (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140901E40 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140905314 (TtmiLogError.c)
 */

__int64 __fastcall TtmGetSessionDisplayRequiredCount(unsigned int a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v4 = 0LL;
  v2 = TtmpAcquireSessionById(&v4, a1);
  if ( v2 < 0 )
  {
    TtmiLogError("TtmGetSessionDisplayRequiredCount", 4015LL, (unsigned int)v2, 0xFFFFFFFFLL);
  }
  else
  {
    v1 = *(_DWORD *)(v4 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v1;
}
