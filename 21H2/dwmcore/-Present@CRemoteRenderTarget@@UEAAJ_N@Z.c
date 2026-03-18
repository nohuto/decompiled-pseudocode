/*
 * XREFs of ?Present@CRemoteRenderTarget@@UEAAJ_N@Z @ 0x1800FE958
 * Callers:
 *     ?Present@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1801062B0 (-Present@CRemoteRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ @ 0x1800FEA10 (-IsPrimaryMonitor@CRemoteRenderTarget@@UEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::Present(CRemoteRenderTarget *this, char a2)
{
  __int64 v2; // r15
  unsigned int v3; // esi
  int v6; // eax
  __int64 v7; // rcx

  v2 = *((_QWORD *)this - 34);
  v3 = 0;
  if ( v2 )
  {
    if ( CRemoteRenderTarget::IsPrimaryMonitor((CRemoteRenderTarget *)((char *)this - 296)) && !*((_BYTE *)this - 55) )
      a2 = 1;
    if ( a2 || *((_BYTE *)this - 56) )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v2 + 112LL))(
             v2,
             ((unsigned __int64)this - 128) & -(__int64)(*((_BYTE *)this - 56) != 0));
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v6, 0x108u);
      }
      else
      {
        **((_DWORD **)this - 16) = 0;
        *((_BYTE *)this - 56) = 0;
      }
    }
  }
  return v3;
}
