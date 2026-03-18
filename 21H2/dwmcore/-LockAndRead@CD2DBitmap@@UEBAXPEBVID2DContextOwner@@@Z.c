/*
 * XREFs of ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x180290238
 * Callers:
 *     ?LockAndRead@CD2DBitmap@@$4PPPPPPPM@A@EBAXPEBVID2DContextOwner@@@Z @ 0x180109850 (-LockAndRead@CD2DBitmap@@$4PPPPPPPM@A@EBAXPEBVID2DContextOwner@@@Z.c)
 *     ?LockAndRead@CD2DBitmap@@$4PPPPPPPM@CI@EBAXPEBVID2DContextOwner@@@Z @ 0x180109B30 (-LockAndRead@CD2DBitmap@@$4PPPPPPPM@CI@EBAXPEBVID2DContextOwner@@@Z.c)
 *     ?LockAndRead@CD2DBitmap@@$4PPPPPPPM@FI@EBAXPEBVID2DContextOwner@@@Z @ 0x18010CCF0 (-LockAndRead@CD2DBitmap@@$4PPPPPPPM@FI@EBAXPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z @ 0x180262AA4 (-DebugInspectTexture@@YAJPEAUID3D11Texture2D@@I@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x180278C80 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 */

void __fastcall CD2DBitmap::LockAndRead(CD2DBitmap *this, const struct ID2DContextOwner *a2)
{
  char *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  struct ID3D11Texture2D *v8; // rcx
  int v9; // eax
  __int64 v10; // rcx

  if ( a2 )
  {
    v4 = (char *)this + *(int *)(*((_QWORD *)this - 38) + 8LL) - 304;
    v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v4 + 8LL))(v4);
    v6 = CD2DContext::FlushD2D((CD2DContext *)(v5 + 16), a2);
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0xA1u);
  }
  v8 = (struct ID3D11Texture2D *)*((_QWORD *)this - 25);
  if ( v8 )
  {
    v9 = DebugInspectTexture(v8, *((_DWORD *)this - 20));
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0xA6u);
  }
}
