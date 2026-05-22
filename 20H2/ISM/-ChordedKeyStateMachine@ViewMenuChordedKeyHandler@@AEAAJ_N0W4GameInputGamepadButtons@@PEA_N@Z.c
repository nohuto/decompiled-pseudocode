/*
 * XREFs of ?ChordedKeyStateMachine@ViewMenuChordedKeyHandler@@AEAAJ_N0W4GameInputGamepadButtons@@PEA_N@Z @ 0x180124260
 * Callers:
 *     ?HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z @ 0x180120910 (-HandleTaskSwitcherChordedKey@ControllerProcessor@@AEAAJPEA_N@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@QEAAPEAW4GameInputGamepadButtons@@QEAW42@AEBW42@@Z @ 0x180089A18 (--$_Emplace_reallocate@AEBW4GameInputGamepadButtons@@@-$vector@W4GameInputGamepadButtons@@V-$all.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800B6FE0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z @ 0x1801248B8 (-LogGamepadTaskSwitcherUnexpectedState@ControllerProcessorTelemetry@@SAXI@Z.c)
 *     ?get@?$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelemetry@@P6AXXZ@Z @ 0x180124B40 (-get@-$static_lazy@VControllerProcessorTelemetry@@@details@wil@@QEAAPEAVControllerProcessorTelem.c)
 */

__int64 __fastcall ViewMenuChordedKeyHandler::ChordedKeyStateMachine(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        int a4,
        char *a5)
{
  char *v6; // rdi
  int v7; // ecx
  int v8; // esi
  int v9; // ebp
  unsigned __int64 v10; // rcx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rcx
  int v15; // eax
  char v16; // al
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  _BYTE *v25; // rdx
  __int64 v26; // rcx
  int v27; // eax
  _BYTE *v28; // rdx
  int v29; // ebx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  int v34[6]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v36; // [rsp+60h] [rbp+8h] BYREF

  *(_WORD *)(a1 + 72) = 0;
  v6 = a5;
  v7 = *(_DWORD *)(a1 + 16);
  v8 = a3;
  v9 = a2;
  *a5 = 0;
  v10 = (unsigned int)(v7 - 1);
  if ( (_DWORD)v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v10 = (unsigned int)(v11 - 1);
      if ( (_DWORD)v10 )
      {
        v12 = v10 - 1;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            v10 = (unsigned int)(v13 - 1);
            if ( !(_DWORD)v10 )
            {
              *v6 = 1;
              if ( a2 )
              {
                if ( a3 )
                  goto LABEL_54;
              }
              else if ( !a3 )
              {
                goto LABEL_35;
              }
              *(_DWORD *)(a1 + 16) = 7;
              goto LABEL_54;
            }
            if ( (_DWORD)v10 != 1 )
            {
              v14 = *(_QWORD *)(a1 + 24);
              *(_DWORD *)(a1 + 16) = 1;
              v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 96LL))(v14);
              if ( v15 < 0 )
              {
                wil::details::in1diag3::FailFast_Hr(
                  retaddr,
                  400LL,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenu"
                           "chordedkeyhandler.cpp",
                  (const char *)(unsigned int)v15);
                __debugbreak();
              }
              goto LABEL_54;
            }
            *v6 = 1;
            if ( a2 || a3 )
              goto LABEL_54;
LABEL_35:
            *(_DWORD *)(a1 + 16) = 1;
            goto LABEL_54;
          }
          if ( a3 && a2 )
          {
            ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(5u);
            v16 = 0;
          }
          else
          {
            v16 = 1;
          }
          *v6 = v16;
          v17 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 16) = 1;
          *(_WORD *)(a1 + 72) = 1;
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 96LL))(v17);
          if ( v18 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              376LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchor"
                       "dedkeyhandler.cpp",
              (const char *)(unsigned int)v18);
            __debugbreak();
          }
        }
        else
        {
          if ( a3 )
          {
            if ( a2 )
            {
              ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(4u);
              *v6 = 0;
            }
          }
          else
          {
            *v6 = 1;
          }
          v19 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 16) = 1;
          v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 96LL))(v19);
          if ( v20 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              356LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchor"
                       "dedkeyhandler.cpp",
              (const char *)(unsigned int)v20);
            __debugbreak();
          }
        }
      }
      else
      {
        if ( !a2 )
          goto LABEL_35;
        if ( !a3 )
        {
          ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(3u);
          *v6 = 0;
          goto LABEL_35;
        }
        v21 = *(_QWORD *)(a1 + 24);
        *(_DWORD *)(a1 + 16) = 4;
        *v6 = 1;
        v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v21 + 80LL))(v21, 5000000LL, 0LL);
        if ( v22 < 0 )
        {
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            304LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
            (const char *)(unsigned int)v22);
          __debugbreak();
        }
      }
    }
    else if ( a2 )
    {
      v23 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 5;
      *v6 = 1;
      v24 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 80LL))(v23, 5000000LL, 0LL);
      if ( v24 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          320LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v24);
        __debugbreak();
      }
    }
    else if ( a3 )
    {
      ControllerProcessorTelemetry::LogGamepadTaskSwitcherUnexpectedState(2u);
      *v6 = 0;
      *(_DWORD *)(a1 + 16) = 1;
      *(_WORD *)(a1 + 72) = 1;
    }
    else
    {
      v10 = a1 + 48;
      *v6 = 1;
      v25 = *(_BYTE **)(a1 + 56);
      LODWORD(a5) = a4;
      if ( *(_BYTE **)(a1 + 64) == v25 )
      {
        std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
          (const void **)v10,
          v25,
          &a5);
      }
      else
      {
        *(_DWORD *)v25 = a4;
        *(_QWORD *)(a1 + 56) += 4LL;
      }
      *(_DWORD *)(a1 + 16) = 1;
      *(_WORD *)(a1 + 72) = 257;
    }
  }
  else if ( a2 )
  {
    if ( a3 )
    {
      v26 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = 4;
      *v6 = 1;
      v27 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v26 + 80LL))(v26, 5000000LL, 0LL);
      if ( v27 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          279LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\viewmenuchordedkeyhandler.cpp",
          (const char *)(unsigned int)v27);
        __debugbreak();
      }
    }
    else
    {
      *(_DWORD *)(a1 + 16) = 3;
    }
  }
  else if ( a3 )
  {
    v10 = a1 + 48;
    *(_DWORD *)(a1 + 16) = 2;
    v28 = *(_BYTE **)(a1 + 56);
    *v6 = 1;
    LODWORD(a5) = a4;
    if ( *(_BYTE **)(a1 + 64) == v28 )
    {
      std::vector<enum GameInputGamepadButtons>::_Emplace_reallocate<enum GameInputGamepadButtons const &>(
        (const void **)v10,
        v28,
        &a5);
    }
    else
    {
      *(_DWORD *)v28 = a4;
      *(_QWORD *)(a1 + 56) += 4LL;
    }
  }
LABEL_54:
  v29 = *(_DWORD *)(a1 + 16);
  v30 = wil::details::static_lazy<ControllerProcessorTelemetry>::get(
          v10,
          _lambda_eeadc07ead9c453f2bc1ae732b24d90f_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v30 + 8) > 5u && tlgKeywordOn(*(_QWORD *)(v30 + 8), 0x400000000000LL) )
  {
    LODWORD(a5) = v8;
    v36 = v9;
    v34[0] = v29;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v31,
      byte_1801CE169,
      v31,
      v32,
      (__int64)v34,
      (__int64)&v36,
      (__int64)&a5);
  }
  return 0LL;
}
