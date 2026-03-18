/*
 * XREFs of ?xxxSend3FingerTapHotkey@@YGXXZ @ 0x178925
 * Callers:
 *     _Send3FingerTapHotkey@0 @ 0x178D3A (_Send3FingerTapHotkey@0.c)
 * Callees:
 *     _xxxSendInput@8 @ 0xAFB7E (_xxxSendInput@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __stdcall xxxSend3FingerTapHotkey()
{
  int CurrentKbdTables; // eax
  int v1; // edi
  _DWORD v2[56]; // [esp+Ch] [ebp-E4h] BYREF

  memset(v2, 0, sizeof(v2));
  v2[49] = 1;
  v2[42] = 1;
  v2[35] = 1;
  v2[28] = 1;
  v2[21] = 1;
  v2[14] = 1;
  v2[7] = 1;
  v2[0] = 1;
  LOWORD(v2[43]) = 17;
  LOWORD(v2[8]) = 17;
  LOWORD(v2[36]) = 16;
  LOWORD(v2[15]) = 16;
  LOWORD(v2[50]) = 91;
  LOWORD(v2[1]) = 91;
  LOWORD(v2[29]) = 133;
  LOWORD(v2[22]) = 133;
  CurrentKbdTables = GetCurrentKbdTables();
  v1 = CurrentKbdTables;
  if ( CurrentKbdTables )
  {
    HIWORD(v2[50]) = InternalMapVirtualKeyEx(91, 0, CurrentKbdTables);
    HIWORD(v2[1]) = HIWORD(v2[50]);
    HIWORD(v2[43]) = InternalMapVirtualKeyEx(17, 0, v1);
    HIWORD(v2[8]) = HIWORD(v2[43]);
    HIWORD(v2[36]) = InternalMapVirtualKeyEx(16, 0, v1);
    HIWORD(v2[15]) = HIWORD(v2[36]);
    HIWORD(v2[29]) = InternalMapVirtualKeyEx(133, 0, v1);
    HIWORD(v2[22]) = HIWORD(v2[29]);
  }
  v2[51] = 2;
  v2[44] = 2;
  v2[37] = 2;
  v2[30] = 2;
  xxxSendInput(8u, (int)v2);
}
