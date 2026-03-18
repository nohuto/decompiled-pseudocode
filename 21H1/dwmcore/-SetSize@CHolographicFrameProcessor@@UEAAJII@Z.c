/*
 * XREFs of ?SetSize@CHolographicFrameProcessor@@UEAAJII@Z @ 0x18025DC40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ResizeWin32kInteropTexture@CHolographicManager@@QEAAXPEAUIHolographicWin32kInteropTexture@@@Z @ 0x180255364 (-ResizeWin32kInteropTexture@CHolographicManager@@QEAAXPEAUIHolographicWin32kInteropTexture@@@Z.c)
 */

__int64 __fastcall CHolographicFrameProcessor::SetSize(CHolographicFrameProcessor *this, int a2, int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( *((_QWORD *)this + 6) )
  {
    *((_DWORD *)this + 17) = a2;
    *((_DWORD *)this + 18) = a3;
    CHolographicManager::ResizeWin32kInteropTexture(*((RTL_SRWLOCK **)this + 6), (struct IUnknown *)this + 5);
  }
  else
  {
    v3 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147418113, 0xF8u, 0LL);
  }
  return v3;
}
