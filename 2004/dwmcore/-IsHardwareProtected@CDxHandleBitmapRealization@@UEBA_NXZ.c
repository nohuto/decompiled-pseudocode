/*
 * XREFs of ?IsHardwareProtected@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x180261570
 * Callers:
 *     ?IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x1800F3140 (-IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA_NXZ @ 0x1800F3150 (-IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NXZ @ 0x1800F33E0 (-IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBA_NXZ.c)
 *     ?IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NXZ @ 0x1800F35A0 (-IsHardwareProtected@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleBitmapRealization::IsHardwareProtected(CDxHandleBitmapRealization *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this - 14);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 96) + 16LL))(v1 + 96) != 0;
  return v2;
}
