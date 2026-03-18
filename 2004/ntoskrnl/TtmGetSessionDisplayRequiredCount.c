/*
 * XREFs of TtmGetSessionDisplayRequiredCount @ 0x1408FB224
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1402DC750 (PopGetConsoleDisplayRequestCount.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1408FC218 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408FF6C0 (TtmiLogError.c)
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
    TtmiLogError("TtmGetSessionDisplayRequiredCount", 4016LL, (unsigned int)v2, 0xFFFFFFFFLL);
  }
  else
  {
    v1 = *(_DWORD *)(v4 + 20);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  return v1;
}
