/*
 * XREFs of _NtGdiBeginPath@4 @ 0x21154D
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall NtGdiBeginPath(HDC a1)
{
  int v1; // esi
  DC *v2; // ecx
  int v3; // eax
  _BYTE v5[8]; // [esp+4h] [ebp-50h] BYREF
  struct HPATH__ **v6; // [esp+Ch] [ebp-48h]
  DC *v7[3]; // [esp+48h] [ebp-Ch] BYREF

  v1 = 0;
  memset(v7, 0, sizeof(v7));
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  v2 = v7[0];
  if ( v7[0] )
  {
    if ( *((_DWORD *)v7[0] + 34) )
    {
      v3 = *((_DWORD *)v7[0] + 43);
      if ( (v3 & 2) != 0 )
      {
        *((_DWORD *)v7[0] + 43) = v3 & 0xFFFFFFFD;
        v2 = v7[0];
      }
      *((_DWORD *)v2 + 43) &= ~1u;
      DC::hpath(v2, 0);
    }
    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v5);
    if ( v6 )
    {
      DC::hpath(v7[0], *v6);
      v1 = 1;
      *((_DWORD *)v7[0] + 43) |= 1u;
    }
    else
    {
      EngSetLastError(8u);
    }
    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v5);
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v1;
}
