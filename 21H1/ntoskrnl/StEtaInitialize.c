/*
 * XREFs of StEtaInitialize @ 0x140597804
 * Callers:
 *     SmcCacheInitialize @ 0x140928C1C (SmcCacheInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StEtaInitialize(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}
