/*
 * XREFs of ??1CD2DSharedBuffer@@MEAA@XZ @ 0x1800AA170
 * Callers:
 *     ??_ECD2DSharedBuffer@@MEAAPEAXI@Z @ 0x1800AA030 (--_ECD2DSharedBuffer@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 */

void __fastcall CD2DSharedBuffer::~CD2DSharedBuffer(CD2DSharedBuffer *this)
{
  CRenderTargetBitmap *v2; // rcx

  *(_QWORD *)this = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
  v2 = (CRenderTargetBitmap *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    CRenderTargetBitmap::Release(v2);
    *((_QWORD *)this + 5) = 0LL;
  }
  else
  {
    operator delete(*((void **)this + 3));
  }
  *(_QWORD *)this = &CMILCOMBase::`vftable';
}
