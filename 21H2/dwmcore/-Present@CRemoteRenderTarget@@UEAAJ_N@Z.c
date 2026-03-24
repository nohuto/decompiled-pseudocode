/*
 * XREFs of ?Present@CRemoteRenderTarget@@UEAAJ_N@Z @ 0x1800E57B4
 * Callers:
 *     ?Present@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800F5290 (-Present@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::Present(CRemoteRenderTarget *this, char a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edi
  int v6; // eax
  __int64 v7; // rcx

  v4 = *((_QWORD *)this - 25);
  v5 = 0;
  if ( v4 && *(int *)(*((_QWORD *)this - 43) + 952LL) <= 3 )
  {
    if ( !*((_DWORD *)this - 44) && !*((_DWORD *)this - 43) && !*((_BYTE *)this - 51) )
      a2 = 1;
    if ( a2 || *((_BYTE *)this - 52) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 96LL))(v4);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x11Bu, 0LL);
      else
        *((_BYTE *)this - 52) = 0;
    }
  }
  return v5;
}
