/*
 * XREFs of ?GetDesktopName@@YGPBGPAUtagDESKTOP@@@Z @ 0x7CBEE
 * Callers:
 *     ?DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z @ 0x7CC38 (-DestroyPendingDesktops@@YGXPAUtagTHREADINFO@@PAUtagTERMINAL@@@Z.c)
 *     ?DestroyDesktop@@YGHPAUtagDESKTOP@@@Z @ 0x82432 (-DestroyDesktop@@YGHPAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__thiscall GetDesktopName(void *this)
{
  ULONG ReturnLength; // [esp+0h] [ebp-4h] BYREF

  ReturnLength = 198;
  if ( !this || ObQueryNameString(this, &s_strName, 0xC6u, &ReturnLength) < 0 )
    return L"null";
  s_strName.Name.Buffer[s_strName.Name.Length >> 1] = 0;
  return s_strName.Name.Buffer;
}
