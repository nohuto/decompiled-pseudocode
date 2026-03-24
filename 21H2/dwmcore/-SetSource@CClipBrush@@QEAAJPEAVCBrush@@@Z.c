/*
 * XREFs of ?SetSource@CClipBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801B8350
 * Callers:
 *     ?SetBrush@CCompositionTextLine@@UEAAJPEAVCBrush@@@Z @ 0x1801BD0A0 (-SetBrush@CCompositionTextLine@@UEAAJPEAVCBrush@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D530 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?IsBrushGraphRequired@CClipBrush@@AEBA_NXZ @ 0x1801B81C8 (-IsBrushGraphRequired@CClipBrush@@AEBA_NXZ.c)
 */

__int64 __fastcall CClipBrush::SetSource(struct CBrush **this, struct CBrush *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx

  if ( a2 == this[10] )
    return 0;
  if ( !a2 || (v4 = CResource::RegisterNotifier((CResource *)this, a2), v6 = v4, v4 >= 0) )
  {
    CResource::UnRegisterNotifierInternal((CResource *)this, this[10]);
    this[10] = a2;
    *((_BYTE *)this + 72) = CClipBrush::IsBrushGraphRequired((CClipBrush *)this);
    (*((void (__fastcall **)(struct CBrush **, __int64))*this + 9))(this, 14LL);
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x65u, 0LL);
  return v6;
}
