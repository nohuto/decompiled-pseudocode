/*
 * XREFs of VidSchRequestDeferredVidPnSourceVisibility @ 0x1C00888A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchRequestDeferredVidPnSourceVisibility(__int64 a1, unsigned int a2)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(*(_QWORD *)(a1 + 8LL * a2 + 3104) + 66432LL), 1);
}
