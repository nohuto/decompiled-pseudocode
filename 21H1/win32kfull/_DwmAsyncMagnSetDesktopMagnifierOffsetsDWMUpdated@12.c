/*
 * XREFs of _DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated@12 @ 0x1D1CF2
 * Callers:
 *     _NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated@4 @ 0x169842 (_NtUserSetMagnificationDesktopMagnifierOffsetsDWMUpdated@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall DwmAsyncMagnSetDesktopMagnifierOffsetsDWMUpdated(PVOID Object, int a2, int a3)
{
  int v4; // edi
  _WORD v6[3]; // [esp+8h] [ebp-28h] BYREF
  int v7; // [esp+Eh] [ebp-22h]
  int v8; // [esp+12h] [ebp-1Eh]
  int v9; // [esp+16h] [ebp-1Ah]
  int v10; // [esp+1Ah] [ebp-16h]
  __int16 v11; // [esp+1Eh] [ebp-12h]
  int v12; // [esp+20h] [ebp-10h]
  int v13; // [esp+24h] [ebp-Ch]
  int v14; // [esp+28h] [ebp-8h]

  v4 = -1073741823;
  if ( Object )
  {
    v13 = a2;
    v11 = 0;
    v6[0] = 12;
    v6[1] = 36;
    v6[2] = 0x8000;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v12 = 1073741933;
    v14 = a3;
    EtwUpdateEvent(0, 1073741933);
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
