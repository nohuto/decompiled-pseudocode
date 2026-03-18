/*
 * XREFs of ?pfnXlateBetweenBitfields@XLATE@@QAEP6IKPAU_XLATEOBJ@@K@ZXZ @ 0xBB29C
 * Callers:
 *     ?vSrcCopyS24D32@@YGXPAUBLTINFO@@@Z @ 0x97606 (-vSrcCopyS24D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D24@@YGXPAUBLTINFO@@@Z @ 0xA7E1A (-vSrcCopyS32D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D32@@YGXPAUBLTINFO@@@Z @ 0xBB1BE (-vTransparentCopyS24D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D16@@YGXPAUBLTINFO@@@Z @ 0xFB94C (-vSrcCopyS24D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YGXPAUBLTINFO@@@Z @ 0xFBC32 (-vSrcCopyS32D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D16@@YGXPAUBLTINFO@@@Z @ 0x1F1F8A (-vTransparentCopyS16D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D24@@YGXPAUBLTINFO@@@Z @ 0x1F20ED (-vTransparentCopyS16D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D32@@YGXPAUBLTINFO@@@Z @ 0x1F21C5 (-vTransparentCopyS16D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D16@@YGXPAUBLTINFO@@@Z @ 0x1F2333 (-vTransparentCopyS24D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D24@@YGXPAUBLTINFO@@@Z @ 0x1F23E2 (-vTransparentCopyS24D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D16@@YGXPAUBLTINFO@@@Z @ 0x1F25D5 (-vTransparentCopyS32D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D24@@YGXPAUBLTINFO@@@Z @ 0x1F2699 (-vTransparentCopyS32D24@@YGXPAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D32@@YGXPAUBLTINFO@@@Z @ 0x1F2777 (-vTransparentCopyS32D32@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YGXPAUBLTINFO@@@Z @ 0x230957 (-vSrcCopyS16D16@@YGXPAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YGXPAUBLTINFO@@@Z @ 0x231257 (-vSrcCopyS16D24@@YGXPAUBLTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

int (__fastcall *__thiscall XLATE::pfnXlateBetweenBitfields(XLATE *this))(struct _XLATEOBJ *a1, unsigned int a2)
{
  int (__fastcall *v1)(struct _XLATEOBJ *, unsigned int); // edx
  int v2; // ebx
  int v3; // eax

  v1 = iXlateBitfieldsToBitfields;
  v2 = *(_DWORD *)(*((_DWORD *)this + 10) + 16);
  v3 = *(_DWORD *)(*((_DWORD *)this + 9) + 16);
  if ( (v2 & 8) != 0 )
  {
    if ( (v3 & 0x400000) != 0 )
    {
      return (int (__fastcall *)(struct _XLATEOBJ *, unsigned int))iXlate565ToBGR;
    }
    else if ( (((unsigned int)&loc_1FFFFC + 4) & v3) != 0 )
    {
      return (int (__fastcall *)(struct _XLATEOBJ *, unsigned int))iXlate555ToBGR;
    }
  }
  else if ( (v3 & 8) != 0 )
  {
    if ( (v2 & 0x400000) != 0 )
    {
      return (int (__fastcall *)(struct _XLATEOBJ *, unsigned int))iXlateBGRTo565;
    }
    else if ( (((unsigned int)&loc_1FFFFC + 4) & v2) != 0 )
    {
      return (int (__fastcall *)(struct _XLATEOBJ *, unsigned int))iXlateBGRTo555;
    }
  }
  return v1;
}
