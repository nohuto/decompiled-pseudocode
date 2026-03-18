/*
 * XREFs of ?GetPixelFormatInfo@CDxHandleBitmapRealization@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800BB36C
 * Callers:
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F2D30 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F2D40 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA?AUPixelFormatInfo@@XZ @ 0x1800F3000 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F31C0 (-GetPixelFormatInfo@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall CDxHandleBitmapRealization::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r8
  void (__fastcall ***v5)(_QWORD, _DWORD *); // rcx
  int v7; // ecx

  v2 = *(_QWORD *)(a1 - 64);
  if ( v2 )
  {
    v5 = (void (__fastcall ***)(_QWORD, _DWORD *))(v2 + 16 + *(int *)(*(_QWORD *)(v2 + 16) + 12LL));
    (**v5)(v5, a2);
  }
  else
  {
    *a2 = 0;
    v7 = 3;
    if ( *(_DWORD *)(a1 - 312) )
      v7 = *(_DWORD *)(a1 - 312);
    a2[1] = v7;
    a2[2] = *(_DWORD *)(a1 - 268);
  }
  return a2;
}
