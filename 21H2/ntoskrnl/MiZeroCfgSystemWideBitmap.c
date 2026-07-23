/*
 * XREFs of MiZeroCfgSystemWideBitmap @ 0x140256EA4
 * Callers:
 *     MiReturnImageBase @ 0x140701FB8 (MiReturnImageBase.c)
 * Callees:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 */

__int64 __fastcall MiZeroCfgSystemWideBitmap(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r9

  v2 = qword_140C4CC68;
  if ( *(_DWORD *)(a1 + 16) == 3 )
    v2 = unk_140C4CC00;
  return MiZeroCfgSystemWideBitmapWorker(
           v2 + 128,
           2 * (a2 >> 4),
           2 * (((unsigned __int64)*(unsigned int *)(a1 + 8) << 12) & 0xFFFFFFFFFFFFFFFLL));
}
