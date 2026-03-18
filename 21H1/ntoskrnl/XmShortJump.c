/*
 * XREFs of XmShortJump @ 0x140394C10
 * Callers:
 *     XmEmulateStream @ 0x140393D08 (XmEmulateStream.c)
 * Callees:
 *     XmGetCodeByte @ 0x140393E68 (XmGetCodeByte.c)
 */

__int64 __fastcall XmShortJump(__int64 a1)
{
  *(_DWORD *)(a1 + 104) = (unsigned __int16)(XmGetCodeByte(a1) + *(_WORD *)(a1 + 20));
  *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 112) & 0xF;
  return 1LL;
}
