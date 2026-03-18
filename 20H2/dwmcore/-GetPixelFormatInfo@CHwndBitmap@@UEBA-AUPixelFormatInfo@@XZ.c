/*
 * XREFs of ?GetPixelFormatInfo@CHwndBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801C3CF0
 * Callers:
 *     ?IsOpaque@CHwndBitmap@@UEBA_NXZ @ 0x1801C3F20 (-IsOpaque@CHwndBitmap@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetEffectAlpha@CVisual@@QEBAMXZ @ 0x1801AD078 (-GetEffectAlpha@CVisual@@QEBAMXZ.c)
 *     ?IsClipSimpleRect@CWindowNode@@QEAA_NXZ @ 0x1801F2C98 (-IsClipSimpleRect@CWindowNode@@QEAA_NXZ.c)
 */

_DWORD *__fastcall CHwndBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  int v3; // esi
  _DWORD *v4; // rdx
  __int64 v6; // rcx
  int v7; // edi
  CVisual *v8; // rbp

  v3 = 0;
  v4 = *(_DWORD **)(a1 + 40);
  if ( v4 )
  {
    LOBYTE(v3) = v4[39] == 2;
    *a2 = v4[37];
    a2[1] = v4[38] != 0 ? 1 : 3;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = 1;
    if ( v6 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 203LL) )
      {
        v8 = *(CVisual **)(a1 + 24);
        if ( (*((_BYTE *)v8 + 836) & 1) != 0 && CWindowNode::IsClipSimpleRect(v8) )
        {
          v7 = 3;
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(CVisual::GetEffectAlpha(v8) - 1.0) & _xmm) >= 0.0000011920929 )
            v7 = 1;
        }
      }
    }
    *a2 = 87;
    a2[1] = v7;
  }
  a2[2] = v3;
  return a2;
}
