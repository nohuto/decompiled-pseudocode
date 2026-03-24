/*
 * XREFs of ?SetBrush@CCompositionTextLine@@UEAAJPEAVCBrush@@@Z @ 0x1801BD0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D530 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetSource@CClipBrush@@QEAAJPEAVCBrush@@@Z @ 0x1801B8350 (-SetSource@CClipBrush@@QEAAJPEAVCBrush@@@Z.c)
 */

__int64 __fastcall CCompositionTextLine::SetBrush(CCompositionTextLine *this, struct CBrush *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 != *((struct CBrush **)this + 10) )
  {
    v4 = CResource::RegisterNotifier(this, a2);
    v6 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x1119u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
      v7 = *(_QWORD *)this;
      *((_QWORD *)this + 10) = a2;
      (*(void (__fastcall **)(CCompositionTextLine *, _QWORD, _QWORD))(v7 + 72))(this, 0LL, 0LL);
    }
    if ( v6 < 0 )
    {
      v8 = 29LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositiontextline.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
  }
  v6 = CClipBrush::SetSource(*((struct CBrush ***)this + 13), a2);
  if ( v6 < 0 )
  {
    v8 = 31LL;
    goto LABEL_7;
  }
  return 0LL;
}
