/*
 * XREFs of ?_UpdateBorder@CSwitchItemElement@@IEAAXXZ @ 0x180381010
 * Callers:
 *     ?SetFocused@CSwitchItemElement@@UEAAX_N@Z @ 0x180380820 (-SetFocused@CSwitchItemElement@@UEAAX_N@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18037FED0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ @ 0x180383CC8 (-_ShouldRenderAsFocused@CMultitaskingViewElementBase@@IEAA_NXZ.c)
 */

void __fastcall CSwitchItemElement::_UpdateBorder(CSwitchItemElement *this)
{
  int Color; // eax
  __int64 v3; // rcx
  int v4; // eax
  _DWORD v5[4]; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v6[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *((_QWORD *)this + 78) )
  {
    if ( CMultitaskingViewElementBase::_ShouldRenderAsFocused(this) )
    {
      v6[0] = *((_DWORD *)this + 101);
      Color = CImmersiveColor::GetColor(0xB2u);
      v3 = *((_QWORD *)this + 78);
      v5[0] = 0;
      v5[1] = 0;
      *(float *)&v6[2] = FLOAT_1_0;
      v6[1] = Color;
      v5[2] = 0;
      v4 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _DWORD *))(*(_QWORD *)v3 + 216LL))(v3, v6, v5);
      if ( v4 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xED,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemelement.cpp",
          (const char *)(unsigned int)v4);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 78) + 224LL))(*((_QWORD *)this + 78));
    }
  }
}
