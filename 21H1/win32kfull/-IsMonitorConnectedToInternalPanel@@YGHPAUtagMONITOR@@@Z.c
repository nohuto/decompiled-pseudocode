/*
 * XREFs of ?IsMonitorConnectedToInternalPanel@@YGHPAUtagMONITOR@@@Z @ 0x140964
 * Callers:
 *     _xxxSetActivePpiForMonitor@8 @ 0xB2078 (_xxxSetActivePpiForMonitor@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall IsMonitorConnectedToInternalPanel(_DWORD *this)
{
  int v1; // esi
  int v4; // [esp+Ch] [ebp-DCh] BYREF
  int v5; // [esp+10h] [ebp-D8h] BYREF
  int v6; // [esp+14h] [ebp-D4h]
  int v7; // [esp+18h] [ebp-D0h] BYREF
  _BYTE v8[16]; // [esp+1Ch] [ebp-CCh] BYREF
  int v9; // [esp+2Ch] [ebp-BCh]
  int v10; // [esp+30h] [ebp-B8h]
  int v11; // [esp+34h] [ebp-B4h]

  v5 = 0;
  v6 = 0;
  v1 = 1;
  v7 = 0;
  v4 = 1;
  if ( (int)DrvQueryDisplayConfig(-1073741822, &v4, v8, 0) < 0 || !DrvGetWDDMAdapterInfo(this[30], 0, &v5, &v7) )
    return 0;
  if ( v5 != v9 || v6 != v10 || v7 != v11 )
    return 0;
  return v1;
}
