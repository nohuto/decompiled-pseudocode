/*
 * XREFs of ?IsValid@CDxHandleBitmapRealization@@UEBAJXZ @ 0x1802A2A0C
 * Callers:
 *     ?IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBAJXZ @ 0x18010BA30 (-IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@A@EBAJXZ.c)
 *     ?IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBAJXZ @ 0x18010BA50 (-IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@CA@EBAJXZ.c)
 *     ?IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBAJXZ @ 0x18010C090 (-IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@DA@EBAJXZ.c)
 *     ?IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBAJXZ @ 0x18010C330 (-IsValid@CDxHandleBitmapRealization@@$4PPPPPPPM@GI@EBAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::IsValid(CDxHandleBitmapRealization *this)
{
  __int64 v1; // rdx
  __int64 (__fastcall ***v2)(_QWORD); // rcx
  unsigned int v3; // ebx

  v1 = *((_QWORD *)this - 14);
  if ( v1 )
  {
    v2 = (__int64 (__fastcall ***)(_QWORD))(v1 + 16 + *(int *)(*(_QWORD *)(v1 + 16) + 8LL));
    return (unsigned int)(**v2)(v2);
  }
  else
  {
    v3 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003292412, 0x5Fu);
  }
  return v3;
}
