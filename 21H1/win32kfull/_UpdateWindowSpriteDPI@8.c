/*
 * XREFs of _UpdateWindowSpriteDPI@8 @ 0x23C14
 * Callers:
 *     _ComposeWindow@8 @ 0x1BF3E (_ComposeWindow@8.c)
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _UpdateWindowMonitor@8 @ 0x2A95A (_UpdateWindowMonitor@8.c)
 *     _xxxEnableNonClientDpiScaling@4 @ 0x1522FC (_xxxEnableNonClientDpiScaling@4.c)
 * Callees:
 *     _GreDwmNotifySpriteDPIChange@16 @ 0x23C66 (_GreDwmNotifySpriteDPIChange@16.c)
 *     _InitializeDPIINFO@16 @ 0x24784 (_InitializeDPIINFO@16.c)
 */

int __fastcall UpdateWindowSpriteDPI(int a1, int a2)
{
  int result; // eax
  _BYTE v3[40]; // [esp+10h] [ebp-28h] BYREF

  if ( a2 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(a1 + 20) + 18) & 8) != 0 )
    {
      memset(v3, 0, sizeof(v3));
      InitializeDPIINFO(a2, a1);
      return GreDwmNotifySpriteDPIChange(0, v3);
    }
  }
  return result;
}
