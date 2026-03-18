/*
 * XREFs of _ALIGN_MEM @ 0x1C0070134
 * Callers:
 *     BuildShrinkAAInfo @ 0x1C0001E10 (BuildShrinkAAInfo.c)
 *     SetupAAHeader @ 0x1C006F890 (SetupAAHeader.c)
 *     BuildExpandAAInfo @ 0x1C00E5E90 (BuildExpandAAInfo.c)
 *     BuildBltAAInfo @ 0x1C00F9090 (BuildBltAAInfo.c)
 *     BuildTileAAInfo @ 0x1C02657B0 (BuildTileAAInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ALIGN_MEM(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  int v3; // r9d
  __int64 result; // rax

  v2 = a2 + 8;
  v3 = -1;
  if ( a2 + 8 >= a2 )
    v3 = a2 + 8;
  result = v2 < a2 ? 0x80070216 : 0;
  *a1 = v3;
  if ( v2 >= a2 )
    *a1 = v3 & 0xFFFFFFF8;
  return result;
}
