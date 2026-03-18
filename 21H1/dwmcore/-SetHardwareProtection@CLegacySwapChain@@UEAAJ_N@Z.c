/*
 * XREFs of ?SetHardwareProtection@CLegacySwapChain@@UEAAJ_N@Z @ 0x18024B30C
 * Callers:
 *     ?SetHardwareProtection@CLegacySwapChain@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800EED00 (-SetHardwareProtection@CLegacySwapChain@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 *     ?SetHardwareProtection@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJ_N@Z @ 0x1800EF190 (-SetHardwareProtection@CLegacySwapChain@@$4PPPPPPPM@BI@EAAJ_N@Z.c)
 *     ?SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z @ 0x180250E2C (-SetHardwareProtection@CConversionSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::SetHardwareProtection(CLegacySwapChain *this, unsigned __int8 a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  int v8; // r9d
  unsigned int v10; // [rsp+20h] [rbp-18h]

  v4 = *((_QWORD *)this - 35);
  v5 = 0;
  if ( !v4 )
  {
    v5 = -2003304307;
    v8 = -2003304307;
    v10 = 300;
    goto LABEL_9;
  }
  if ( *((_BYTE *)this - 188) != a2 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 208LL))(v4, a2);
    v5 = v6;
    if ( v6 < 0 )
    {
      v10 = 285;
      goto LABEL_6;
    }
    *((_DWORD *)this - 22) = *((_DWORD *)this - 44);
    v7 = *((_QWORD *)this - 44);
    *((_BYTE *)this - 188) = a2;
    v6 = (*(__int64 (**)(void))(v7 + 56))();
    v5 = v6;
    if ( v6 < 0 )
    {
      v10 = 295;
LABEL_6:
      v8 = v6;
LABEL_9:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v8, v10, 0LL);
    }
  }
  return v5;
}
