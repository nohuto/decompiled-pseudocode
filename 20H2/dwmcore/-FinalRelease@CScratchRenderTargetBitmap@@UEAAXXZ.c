/*
 * XREFs of ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x18006BB40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x18006BB94 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ @ 0x18006BC44 (-GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ.c)
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18006C270 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 */

void __fastcall CScratchRenderTargetBitmap::FinalRelease(CScratchRenderTargetBitmap *this)
{
  CRenderTargetBitmap *v2; // rdi
  struct CD3DDevice *Device; // rax

  if ( *((_BYTE *)this + 176) )
  {
    v2 = (CScratchRenderTargetBitmap *)((char *)this + 192);
    if ( (int)CRenderTargetBitmap::IsValid((CScratchRenderTargetBitmap *)((char *)this + 192)) >= 0 )
    {
      Device = CRenderTargetBitmap::GetDevice(v2);
      CRenderTargetBitmapCache::ReturnRenderTargetBitmap((struct CD3DDevice *)((char *)Device + 512), this);
    }
  }
}
