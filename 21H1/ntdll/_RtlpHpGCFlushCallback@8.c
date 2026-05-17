/*
 * XREFs of _RtlpHpGCFlushCallback@8 @ 0x4B358460
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpHpHeapCompact@8 @ 0x4B378991 (_RtlpHpHeapCompact@8.c)
 */

int __stdcall RtlpHpGCFlushCallback(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // edx
  unsigned int v4; // eax

  if ( *(_DWORD *)(a1 + 8) != -571548178 || (*(_BYTE *)(a1 + 12) & 1) != 0 )
    return 0;
  v2 = *(__int16 *)(a1 + 274);
  v3 = *(_DWORD *)(v2 + a1 + 264) + *(_DWORD *)(v2 + a1 + 268);
  v4 = *(_DWORD *)(v2 + a1 + 260) >> *(_BYTE *)(a1 + 263);
  if ( v4 <= 8 )
    v4 = 8;
  if ( v3 <= v4 )
    return 0;
  else
    return RtlpHpHeapCompact(a1, 0);
}
