/*
 * XREFs of ?DestroyResources@CAtlasTexture@@AEAAXXZ @ 0x1800FEB2C
 * Callers:
 *     ??1CAtlasTexture@@QEAA@XZ @ 0x1800FEAD4 (--1CAtlasTexture@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z @ 0x1800FEB20 (-NotifyInvalidResource@CAtlasTexture@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F65A4 (-InternalRelease@-$ComPtr@VIRenderTargetBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyOwner@CAtlasEntry@@AEBAXXZ @ 0x18028CBA8 (-NotifyOwner@CAtlasEntry@@AEBAXXZ.c)
 */

void __fastcall CAtlasTexture::DestroyResources(CAtlasTexture *this)
{
  __int64 *v1; // r14
  int v2; // edx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  void *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  CAtlasEntry *v10; // rcx

  v1 = (__int64 *)((char *)this + 8);
  v2 = *((_DWORD *)this + 7) + *((_DWORD *)this + 8);
  v4 = *((unsigned int *)this + 6);
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = 0;
  v5 = *((_QWORD *)this + 1);
  if ( v5 )
  {
    if ( v2 != (_DWORD)v4 && (_DWORD)v4 )
    {
      v8 = 0LL;
      v9 = v4;
      do
      {
        v10 = *(CAtlasEntry **)(v8 + *((_QWORD *)this + 2));
        if ( (unsigned __int64)v10 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          *(_QWORD *)v10 = 0LL;
          *((_DWORD *)v10 + 4) = -1;
          CAtlasEntry::NotifyOwner(v10);
        }
        v8 += 8LL;
        --v9;
      }
      while ( v9 );
      v5 = *v1;
    }
    v6 = *(int *)(*(_QWORD *)(v5 + 8) + 8LL) + 8LL + v5;
    (*(void (__fastcall **)(__int64, CAtlasTexture *))(*(_QWORD *)v6 + 48LL))(v6, this);
    Microsoft::WRL::ComPtr<IRenderTargetBitmap>::InternalRelease(v1);
  }
  v7 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v7 )
    DefaultHeap::Free(v7);
}
