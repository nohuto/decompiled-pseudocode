/*
 * XREFs of _RtlpStackDbEntryCleanup@8 @ 0x4B38A8FB
 * Callers:
 *     _RtlStackDbStackAdd@12 @ 0x4B38A376 (_RtlStackDbStackAdd@12.c)
 *     _RtlStackDbStackRemove@8 @ 0x4B38A807 (_RtlStackDbStackRemove@8.c)
 *     _RtlpStackDbEntryCreate@12 @ 0x4B38A959 (_RtlpStackDbEntryCreate@12.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpStackDbSegmentRemoveRef@8 @ 0x4B38AFF7 (_RtlpStackDbSegmentRemoveRef@8.c)
 */

int __fastcall RtlpStackDbEntryCleanup(int a1, int a2)
{
  unsigned int v4; // esi
  _DWORD *v5; // eax
  int v7; // [esp+10h] [ebp-8h]
  unsigned int v8; // [esp+14h] [ebp-4h]

  v8 = 0;
  v4 = ((unsigned int)*(unsigned __int8 *)(a2 + 11) + 7) >> 3;
  if ( v4 )
  {
    v5 = (_DWORD *)(a2 + 12);
    v7 = a2 + 12;
    do
    {
      if ( !*v5 )
        break;
      RtlpStackDbSegmentRemoveRef(a1);
      v5 = (_DWORD *)(v7 + 4);
      ++v8;
      v7 += 4;
    }
    while ( v8 < v4 );
  }
  return (*(int (__thiscall **)(_DWORD, int, _DWORD))(a1 + 36))(*(_DWORD *)(a1 + 36), a2, *(_DWORD *)(a1 + 40));
}
