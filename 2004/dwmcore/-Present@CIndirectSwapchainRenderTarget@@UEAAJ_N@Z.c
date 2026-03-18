/*
 * XREFs of ?Present@CIndirectSwapchainRenderTarget@@UEAAJ_N@Z @ 0x18018B058
 * Callers:
 *     ?Present@CIndirectSwapchainRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800EF7A0 (-Present@CIndirectSwapchainRenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018B504 (-ReleaseCurrentBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x18018B658 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Present(CIndirectSwapchainRenderTarget *this)
{
  CIndirectSwapchainRenderTarget *v1; // rsi
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int Buffer; // eax
  __int64 v7; // rcx

  v1 = (CIndirectSwapchainRenderTarget *)((char *)this - 2032);
  v3 = CIndirectSwapchainRenderTarget::ReleaseCurrentBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 2032));
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0xFFu, 0LL);
  }
  else if ( (*((_BYTE *)this - 88) || *((_BYTE *)this - 87)) && !*((_QWORD *)this - 9) )
  {
    Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer(v1);
    v5 = Buffer;
    if ( Buffer < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Buffer, 0x107u, 0LL);
  }
  return v5;
}
