/*
 * XREFs of _RtlpHpVsChunkSize@16 @ 0x4B37ED6E
 * Callers:
 *     _RtlpHpSegSizeInternal@20 @ 0x4B37D95E (_RtlpHpSegSizeInternal@20.c)
 *     _RtlpHpVsSubsegmentWalk@24 @ 0x4B37FF5E (_RtlpHpVsSubsegmentWalk@24.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpVsChunkSize(int a1, int a2, int a3, int *a4)
{
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // ecx
  __int16 v9; // ax
  unsigned int v10; // edx
  int v11; // edx
  signed __int32 v13; // [esp+8h] [ebp-4h] BYREF

  v5 = a2 - 8;
  v6 = *(_DWORD *)(a1 + 152) & 1;
  if ( v6 && (a2 & 0xFFF) == 0 )
    v5 = a2 - 16;
  v7 = v5 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v5;
  if ( v7 >= 0 )
    return -1;
  v8 = 8 * ((unsigned __int16)v7 >> 1) - 8;
  if ( v6 && ((v5 + 16) & 0xFFF) == 0 )
    v8 -= 8;
  if ( (*(_DWORD *)(v5 + 4) & 0x100) != 0 )
  {
    v9 = *(_WORD *)(v8 + a2 - 2);
    v10 = (unsigned __int16)v9;
    if ( (v9 & 0x4000) != 0 )
    {
      _InterlockedOr(&v13, 0);
      v9 = *(_WORD *)(v8 + a2 - 2);
    }
    v11 = (v10 >> 14) & 1;
    if ( v9 >= 0 )
      v8 -= v9 & 0x1FFF;
    else
      --v8;
  }
  else
  {
    v11 = 0;
  }
  if ( a4 )
    *a4 = v11;
  return v8;
}
