/*
 * XREFs of _RtlpInsertStringAtom@8 @ 0x4B2E0590
 * Callers:
 *     _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8 (_RtlAddAtomToAtomTableEx@16.c)
 * Callees:
 *     _RtlAllocateHandle@8 @ 0x4B2E0600 (_RtlAllocateHandle@8.c)
 *     _RtlFreeHandle@8 @ 0x4B2E7780 (_RtlFreeHandle@8.c)
 */

char __fastcall RtlpInsertStringAtom(int a1, ULONG a2)
{
  _RTL_HANDLE_TABLE *v3; // esi
  PRTL_HANDLE_TABLE_ENTRY v4; // ecx
  __int16 v5; // ax
  char result; // al
  ULONG HandleIndex; // [esp+8h] [ebp-4h] BYREF

  v3 = (_RTL_HANDLE_TABLE *)(a1 + 12);
  v4 = RtlAllocateHandle((PRTL_HANDLE_TABLE)(a1 + 12), &HandleIndex);
  if ( !v4 )
    return 0;
  v5 = HandleIndex;
  if ( HandleIndex > 0xFFFF || HandleIndex + 49152 < HandleIndex || HandleIndex + 49152 > 0xFFFF )
  {
    RtlFreeHandle(v3, v4);
    return 0;
  }
  else
  {
    *(_WORD *)(a2 + 4) = HandleIndex;
    *(_WORD *)(a2 + 6) = v5 - 0x4000;
    HIWORD(v4->NextFree) = 0;
    result = 1;
    v4[1].Flags = a2;
    LOWORD(v4->Flags) = 1;
  }
  return result;
}
