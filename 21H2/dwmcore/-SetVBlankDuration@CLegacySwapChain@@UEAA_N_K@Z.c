/*
 * XREFs of ?SetVBlankDuration@CLegacySwapChain@@UEAA_N_K@Z @ 0x18028BC68
 * Callers:
 *     ?SetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@A@EAA_N_K@Z @ 0x180109250 (-SetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@A@EAA_N_K@Z.c)
 *     ?SetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BKI@EAA_N_K@Z @ 0x18010A890 (-SetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BKI@EAA_N_K@Z.c)
 * Callees:
 *     ?GetCompositorClockBoost@CComposition@@QEBA_NXZ @ 0x18001F470 (-GetCompositorClockBoost@CComposition@@QEBA_NXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CLegacySwapChain::SetVBlankDuration(CLegacySwapChain *this, __int64 a2)
{
  unsigned __int64 v3; // rbx
  char *v4; // rcx
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  volatile signed __int32 *v7; // rcx
  char CompositorClockBoost; // al
  char *v10; // rcx
  __int64 v11; // rdx

  if ( a2 )
  {
    v3 = (unsigned __int64)(10000000 * a2) / g_qpcFrequency.QuadPart;
    v4 = (char *)this + *(int *)(*((_QWORD *)this - 47) + 16LL) - 376;
    v5 = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 152LL))(
           v4,
           (unsigned int)v3,
           0LL,
           0LL);
    if ( (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(int)v5 - (float)(int)v3) & _xmm) / (float)(int)v3) >= 0.1
      || (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this - 41) + 200LL))(
           *((_QWORD *)this - 41),
           v5,
           1LL) < 0 )
    {
      return 0;
    }
    v6 = g_qpcFrequency.QuadPart * v5;
    *((_BYTE *)this - 84) = 1;
    *((_DWORD *)this - 42) = 1;
    *((_QWORD *)this - 22) = v6 / 0x989680;
    v7 = (volatile signed __int32 *)*((_QWORD *)this - 10);
    *((_QWORD *)this - 10) = 0LL;
    if ( v7 )
      CMILRefCountBaseT<IUnknown>::InternalRelease(v7);
  }
  else
  {
    *((_BYTE *)this - 84) = 0;
    CompositorClockBoost = CComposition::GetCompositorClockBoost(g_pComposition);
    v10 = (char *)this + *(int *)(*((_QWORD *)this - 47) + 16LL) - 376;
    v11 = *(_QWORD *)v10;
    LOBYTE(v11) = CompositorClockBoost;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v10 + 88LL))(v10, v11);
  }
  return 1;
}
