/*
 * XREFs of ?OnDeviceAttach@GameInputProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180037310
 * Callers:
 *     <none>
 * Callees:
 *     ?IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z @ 0x1800373FC (-IsLegacyPnpDevice@GameInputProcessor@@CA_NPEAUDeviceInfo@@@Z.c)
 *     ?LazyInitialize@GameInputProcessor@@AEAAJXZ @ 0x18003741C (-LazyInitialize@GameInputProcessor@@AEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040458 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180040A34 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@QEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x180089E78 (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 */

void __fastcall GameInputProcessor::OnDeviceAttach(GameInputProcessor *this, struct DeviceInfo *a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // eax
  _DWORD *v7; // rdx
  const char *v8; // r9
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = GameInputProcessor::LazyInitialize(this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1AD,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib\\"
                    "gameinputprocessor.cpp",
      (const char *)(unsigned int)v4,
      v9);
  if ( GameInputProcessor::IsLegacyPnpDevice(a2) && ((*((_DWORD *)a2 + 1) - 2) & 0xFFFFFFFD) == 0 )
  {
    v5 = *((_QWORD *)this + 4);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v5 + 24LL))(v5, (char *)a2 + 76, *(unsigned int *)a2);
      if ( *((_DWORD *)a2 + 1) == 4 && !*((_BYTE *)this + 192) )
      {
        v6 = NtMITSetKeyboardInputRoutingPolicy(1LL);
        if ( v6 < 0 )
        {
          wil::details::in1diag3::_FailFast_NtStatus(
            retaddr,
            (void *)0x1BD,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\"
                          "lib\\gameinputprocessor.cpp",
            (const char *)(unsigned int)v6,
            v9);
          JUMPOUT(0x1800373F5LL);
        }
        *((_BYTE *)this + 192) = 1;
      }
    }
    else
    {
      v7 = (_DWORD *)*((_QWORD *)this + 22);
      if ( *((_DWORD **)this + 23) == v7 )
      {
        try
        {
          std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
            (char *)this + 168,
            v7,
            a2);
        }
        catch ( ... )
        {
          wil::details::in1diag3::Log_CaughtException(
            retaddr,
            (void *)0x1C7,
            (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\"
                          "lib\\gameinputprocessor.cpp",
            v8);
        }
      }
      else
      {
        *v7 = *(_DWORD *)a2;
        *((_QWORD *)this + 22) += 4LL;
      }
    }
  }
}
