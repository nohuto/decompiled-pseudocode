/*
 * XREFs of ?bSetLinkedUFIs@XDCOBJ@@QAEHPAU_UNIVERSAL_FONT_ID@@I@Z @ 0x211326
 * Callers:
 *     _NtGdiSetLinkedUFIs@12 @ 0x1D985F (_NtGdiSetLinkedUFIs@12.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __thiscall XDCOBJ::bSetLinkedUFIs(XDCOBJ *this, struct _UNIVERSAL_FONT_ID *Src, unsigned int a3)
{
  int v4; // eax
  PATHOBJ *v5; // ecx
  int result; // eax

  *(_DWORD *)(*(_DWORD *)this + 228) = a3 == 0;
  v4 = *(_DWORD *)this;
  v5 = *(PATHOBJ **)(*(_DWORD *)this + 220);
  if ( v5 )
  {
    if ( a3 <= *(_DWORD *)(v4 + 224) )
    {
LABEL_7:
      memcpy(*(void **)(v4 + 220), Src, 8 * a3);
      result = 1;
      *(_DWORD *)(*(_DWORD *)this + 224) = a3;
      return result;
    }
    if ( v5 != (PATHOBJ *)(v4 + 188) )
    {
      Win32FreePool(v5);
      *(_DWORD *)(*(_DWORD *)this + 220) = 0;
    }
  }
  if ( a3 <= 4 )
  {
    *(_DWORD *)(*(_DWORD *)this + 220) = *(_DWORD *)this + 188;
    v4 = *(_DWORD *)this;
    goto LABEL_7;
  }
  *(_DWORD *)(*(_DWORD *)this + 220) = PALLOCMEM2(8 * a3, 1684300103, 1);
  v4 = *(_DWORD *)this;
  if ( *(_DWORD *)(*(_DWORD *)this + 220) )
    goto LABEL_7;
  *(_DWORD *)(v4 + 224) = 0;
  return 0;
}
