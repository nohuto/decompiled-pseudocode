/*
 * XREFs of ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1800C3CA8
 * Callers:
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C2FF8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C309C (-InjectHover@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DeskToDigiPt@ManipulationInjector@@AEAA?AUtagPOINT@@U2@@Z @ 0x1800C20C4 (-DeskToDigiPt@ManipulationInjector@@AEAA-AUtagPOINT@@U2@@Z.c)
 *     ?GetFirstContactIndexForDeviceId@ManipulationInjector@@AEAAIK@Z @ 0x1800C228C (-GetFirstContactIndexForDeviceId@ManipulationInjector@@AEAAIK@Z.c)
 */

void __fastcall ManipulationInjector::UpdateContact(
        ManipulationInjector *this,
        struct tagPOINT a2,
        __int64 a3,
        const char *a4)
{
  int v5; // esi
  __int64 v7; // r9
  _QWORD *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct tagPOINT v10; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned __int8)a3;
  if ( !*((_DWORD *)this + 12) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      1122LL,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      a4);
    __debugbreak();
  }
  if ( !(_BYTE)a3 || *((_DWORD *)this + 178) == (_DWORD)a4 )
  {
    v7 = 152LL * (unsigned int)ManipulationInjector::GetFirstContactIndexForDeviceId(this, (int)a4, a3, a4);
    *(struct tagPOINT *)((char *)this + v7 + 144) = a2;
    if ( *(_DWORD *)this == 2 )
    {
      v8 = (_QWORD *)ManipulationInjector::DeskToDigiPt(this, (struct tagPOINT)&v10, *(_QWORD *)&a2);
      *(_QWORD *)((char *)this + v7 + 152) = *v8;
    }
    *(_DWORD *)((char *)this + v7 + 124) = 4 * (v5 ^ 1) + 131074;
  }
}
