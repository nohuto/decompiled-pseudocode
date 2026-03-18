/*
 * XREFs of ?SetFrontBufferRenderingMode@CLegacySwapChain@@IEAAJ_N@Z @ 0x1802487CC
 * Callers:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N@Z @ 0x1800C23B4 (-PostPresent@CLegacySwapChain@@IEAAX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::SetFrontBufferRenderingMode(CLegacySwapChain *this, unsigned __int8 a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  if ( *((_BYTE *)this + 268) != a2 )
  {
    v5 = *((unsigned int *)this + 46);
    if ( !(_DWORD)v5 )
    {
      v3 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003292412, 0x44Cu, 0LL);
      return v3;
    }
    if ( (_DWORD)v5 == 1 )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 9) + 272LL))(*((_QWORD *)this + 9), a2);
      v3 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x450u, 0LL);
        return v3;
      }
      *((_BYTE *)g_pComposition + 1130) = 1;
    }
    *((_BYTE *)this + 268) = a2;
  }
  return v3;
}
