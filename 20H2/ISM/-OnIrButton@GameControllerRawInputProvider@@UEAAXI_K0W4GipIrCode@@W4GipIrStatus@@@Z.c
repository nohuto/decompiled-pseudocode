/*
 * XREFs of ?OnIrButton@GameControllerRawInputProvider@@UEAAXI_K0W4GipIrCode@@W4GipIrStatus@@@Z @ 0x1800888A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D360 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FA98 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x180088FF4 (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800890BC (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall GameControllerRawInputProvider::OnIrButton(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6)
{
  int v10; // ebx
  _DWORD *v11; // rax
  unsigned int v12; // r8d
  const char *v13; // r9
  _DWORD *v14; // rdi
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a6 == 1 )
  {
    if ( a5 > 70 )
    {
      switch ( a5 )
      {
        case 'H':
          v10 = 40;
          break;
        case 'M':
          v10 = 29;
          break;
        case 'p':
          v10 = 25;
          break;
        case 'q':
          v10 = 41;
          break;
        case 'r':
          v10 = 42;
          break;
        case 't':
          v10 = 43;
          break;
        case 'u':
          v10 = 44;
          break;
        default:
          return;
      }
    }
    else if ( a5 == 70 )
    {
      v10 = 39;
    }
    else
    {
      v10 = 23;
      if ( a5 > 23 )
      {
        switch ( a5 )
        {
          case 24:
            v10 = 18;
            break;
          case 25:
            v10 = 24;
            break;
          case 26:
            v10 = 22;
            break;
          default:
            if ( a5 != 27 )
            {
              if ( a5 == 37 )
              {
                v10 = 28;
              }
              else
              {
                if ( a5 != 38 )
                  return;
                v10 = 14;
              }
            }
            break;
        }
      }
      else
      {
        switch ( a5 )
        {
          case 23:
            v10 = 19;
            break;
          case 14:
            v10 = 26;
            break;
          case 15:
            v10 = 27;
            break;
          case 16:
            v10 = 5;
            break;
          case 17:
            v10 = 6;
            break;
          case 20:
            v10 = 20;
            break;
          case 21:
            v10 = 21;
            break;
          case 22:
            v10 = 17;
            break;
          default:
            return;
        }
      }
    }
    v11 = operator new(0x7F0uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v11;
    if ( v11 )
    {
      memset_0(v11, 0, 0x7F0uLL);
      v14[6] = 2032;
    }
    else
    {
      v14 = 0LL;
    }
    if ( v14 )
    {
      *v14 = 128;
      v14[1] = a2;
      *((_QWORD *)v14 + 4) = a3;
      v14[16] = v10;
      *((_BYTE *)v14 + 68) = 1;
      GameControllerRawInputProvider::SetTimestampsFromInput(
        (GameControllerRawInputProvider *)(a1 - 16),
        a4,
        (struct InputInfo *)v14);
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), _DWORD *, __int64))(**(_QWORD **)(a1 + 32)
                                                                                                 + 144LL))(
              *(_QWORD *)(a1 + 32),
              GameControllerRawInputProvider::InputReportCallback,
              v14,
              4LL);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          481LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
          (const char *)(unsigned int)v15);
        operator delete(v14, (const struct std::nothrow_t *)0x7F0);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_NullAlloc(retaddr, (void *)0x1D6, v12, v13);
    }
  }
}
