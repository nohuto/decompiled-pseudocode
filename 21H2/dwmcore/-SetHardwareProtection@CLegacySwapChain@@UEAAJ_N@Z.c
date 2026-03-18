/*
 * XREFs of ?SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z @ 0x18028BAFC
 * Callers:
 *     ?SetHardwareProtection@CLegacySwapChain@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1801091F0 (-SetHardwareProtection@CLegacySwapChain@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 *     ?SetHardwareProtection@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJ_N@Z @ 0x18010A210 (-SetHardwareProtection@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJ_N@Z.c)
 *     ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x180293500 (-SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::SetHardwareProtection(CLegacySwapChain *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  int v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = *((_QWORD *)this - 41);
  v5 = 0;
  if ( !v4 )
  {
    v5 = -2003304307;
    v8 = -2003304307;
    v10 = 342;
    goto LABEL_9;
  }
  if ( *((_BYTE *)this - 236) != a2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 208LL))(v4, a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      v10 = 327;
      goto LABEL_6;
    }
    *((_DWORD *)this - 22) = *((_DWORD *)this - 49);
    v7 = *((_QWORD *)this - 50);
    *((_BYTE *)this - 236) = a2;
    v6 = (*(__int64 (**)(void))(v7 + 56))();
    v5 = v6;
    if ( v6 < 0 )
    {
      v10 = 337;
LABEL_6:
      v8 = v6;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v8, v10);
    }
  }
  return v5;
}
