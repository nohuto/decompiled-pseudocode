/*
 * XREFs of _ALIGN_MEM @ 0x1C00D7990
 * Callers:
 *     BuildShrinkAAInfo @ 0x1C0001F70 (BuildShrinkAAInfo.c)
 *     SetupAAHeader @ 0x1C00D70EC (SetupAAHeader.c)
 *     BuildExpandAAInfo @ 0x1C00E9C30 (BuildExpandAAInfo.c)
 *     BuildBltAAInfo @ 0x1C00FF3F0 (BuildBltAAInfo.c)
 *     BuildTileAAInfo @ 0x1C0266DD0 (BuildTileAAInfo.c)
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
