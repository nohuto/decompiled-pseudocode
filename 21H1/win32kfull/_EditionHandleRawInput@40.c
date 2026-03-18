/*
 * XREFs of _EditionHandleRawInput@40 @ 0xB1D98
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleRawInput@@YG?AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0xB1E22 (-HandleRawInput@@YG-AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUP.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __stdcall EditionHandleRawInput(
        int a1,
        int a2,
        unsigned __int8 a3,
        char a4,
        int a5,
        int a6,
        __int16 a7,
        __int16 a8,
        int a9,
        int a10)
{
  __int16 v11; // cx
  _DWORD v12[2]; // [esp+8h] [ebp-28h] BYREF
  __int16 v13; // [esp+10h] [ebp-20h]
  __int16 v14; // [esp+12h] [ebp-1Eh]
  int v15; // [esp+14h] [ebp-1Ch]
  BOOL v16; // [esp+18h] [ebp-18h]
  int v17; // [esp+1Ch] [ebp-14h]
  int v18; // [esp+20h] [ebp-10h]
  int v19; // [esp+24h] [ebp-Ch]
  int v20; // [esp+28h] [ebp-8h]

  v14 = 0;
  v12[0] = a1;
  v15 = a2;
  v16 = a4 == 0;
  v12[1] = a5;
  v13 = a3;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  if ( a6 )
  {
    v17 = 0;
  }
  else
  {
    v17 = 1;
    HIWORD(v18) = a7;
    if ( (a8 & 0x100) != 0 )
      v11 = 2;
    else
      v11 = 0;
    LOWORD(v19) = (a9 != 0) | v11;
  }
  return HandleRawInput(a10, v12) == 1;
}
