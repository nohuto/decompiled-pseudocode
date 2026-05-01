/*
 * XREFs of wistd::__function::__func__lambda_27fc886f5939726dd42846aa68734223__void___cdecl(enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const_&)_::operator() @ 0x1800A2150
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x18032C408 (-OnHolographicDisplayChanged@TouchKeyboardExperienceManager@@AEAAJAEBW4UserDisplayContext@Hologr.c)
 */

void __fastcall wistd::__function::__func__lambda_27fc886f5939726dd42846aa68734223__void___cdecl_enum_Windows::Internal::Shell::Holographic::UserDisplayContext_const____::operator()(
        __int64 a1,
        const enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = TouchKeyboardExperienceManager::OnHolographicDisplayChanged(*(TouchKeyboardExperienceManager **)(a1 + 8), a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x711,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
}
