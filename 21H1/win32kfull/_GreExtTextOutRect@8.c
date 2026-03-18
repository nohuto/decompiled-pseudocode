/*
 * XREFs of _GreExtTextOutRect@8 @ 0x78BA6
 * Callers:
 *     _NtGdiExtTextOutW@36 @ 0x5684C (_NtGdiExtTextOutW@36.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z @ 0x53A9C (-ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 */

int __fastcall GreExtTextOutRect(HDC a1, int *a2)
{
  int v2; // ebx
  DC *v4; // eax
  DEVLOCKOBJ *v5; // ecx
  int v6; // eax
  DC *v8[3]; // [esp+Ch] [ebp-3Ch] BYREF
  _BYTE v9[20]; // [esp+18h] [ebp-30h] BYREF
  _DWORD v10[3]; // [esp+2Ch] [ebp-1Ch] BYREF
  __int16 v11; // [esp+38h] [ebp-10h]

  v2 = 0;
  memset(v8, 0, sizeof(v8));
  XDCOBJ::vLock((XDCOBJ *)v8, a1);
  v4 = v8[0];
  if ( v8[0] )
  {
    if ( (*((_DWORD *)v8[0] + 6) & 0x10000) == 0 )
    {
      memset(v10, 0, sizeof(v10));
      v11 = 256;
      DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v9);
      if ( DEVLOCKOBJ::bLock(v5, (struct XDCOBJ *)v8, 0) )
        v6 = ExtTextOutRect((struct XDCOBJ *)v8, a2);
      else
        v6 = XDCOBJ::bFullScreen(v8);
      v2 = v6;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v9);
      if ( v10[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v10);
      v4 = v8[0];
    }
    if ( v4 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v2;
}
