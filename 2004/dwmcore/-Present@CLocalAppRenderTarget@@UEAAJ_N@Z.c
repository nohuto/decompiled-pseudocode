/*
 * XREFs of ?Present@CLocalAppRenderTarget@@UEAAJ_N@Z @ 0x18018BFB8
 * Callers:
 *     ?Present@CLocalAppRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800F0000 (-Present@CLocalAppRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLocalAppRenderTarget::Present(CLocalAppRenderTarget *this, char a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  int v4; // eax
  __int64 v5; // rcx

  v2 = 0;
  if ( *((_BYTE *)this - 56) || a2 )
  {
    v3 = *((_QWORD *)this - 8);
    if ( v3 )
    {
      *((_BYTE *)this - 56) = 0;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 64LL))(v3, 1LL);
      v2 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x8Eu, 0LL);
    }
  }
  return v2;
}
