/*
 * XREFs of MiDetermineModifiedPageListHead @ 0x14024E640
 * Callers:
 *     MiUpdatePageAttributeStamp @ 0x14024DD20 (MiUpdatePageAttributeStamp.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402710C4 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x1402E7704 (MiReplaceTransitionPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDetermineModifiedPageListHead(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // cx
  char v3; // al
  unsigned int v4; // ecx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = (unsigned __int8)v2 >> 1;
  v4 = v2 >> 12;
  if ( (v3 & 1) != 0 || v4 == *(_DWORD *)(a2 + 1172) )
    return 88LL * v4 + a2 + 3712;
  else
    return a2 + 3584;
}
