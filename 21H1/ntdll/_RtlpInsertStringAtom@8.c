/*
 * XREFs of _RtlpInsertStringAtom@8 @ 0x4B2E0590
 * Callers:
 *     _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8 (_RtlAddAtomToAtomTableEx@16.c)
 * Callees:
 *     _RtlAllocateHandle@8 @ 0x4B2E0600 (_RtlAllocateHandle@8.c)
 *     _RtlFreeHandle@8 @ 0x4B2E7780 (_RtlFreeHandle@8.c)
 */

char __fastcall RtlpInsertStringAtom(int a1, int a2)
{
  int v3; // esi
  _WORD *v4; // ecx
  __int16 v5; // ax
  char result; // al
  unsigned int v7; // [esp+8h] [ebp-4h] BYREF

  v3 = a1 + 12;
  v4 = (_WORD *)RtlAllocateHandle(a1 + 12, &v7);
  if ( !v4 )
    return 0;
  v5 = v7;
  if ( v7 > 0xFFFF || v7 + 49152 < v7 || v7 + 49152 > 0xFFFF )
  {
    RtlFreeHandle(v3, v4);
    return 0;
  }
  else
  {
    *(_WORD *)(a2 + 4) = v7;
    *(_WORD *)(a2 + 6) = v5 - 0x4000;
    v4[1] = 0;
    result = 1;
    *((_DWORD *)v4 + 1) = a2;
    *v4 = 1;
  }
  return result;
}
