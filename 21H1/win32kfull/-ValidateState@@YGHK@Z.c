/*
 * XREFs of ?ValidateState@@YGHK@Z @ 0x1A0184
 * Callers:
 *     _ClearWindowState@8 @ 0x1A01A5 (_ClearWindowState@8.c)
 *     _SetWindowState@8 @ 0x1A01E8 (_SetWindowState@8.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall ValidateState(__int16 a1)
{
  return HIBYTE(a1) <= 0xFu && ((unsigned __int8)a1 & (unsigned __int8)byte_25899C[HIBYTE(a1)]) == (_BYTE)a1;
}
