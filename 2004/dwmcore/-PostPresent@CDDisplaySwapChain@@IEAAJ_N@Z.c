/*
 * XREFs of ?PostPresent@CDDisplaySwapChain@@IEAAJ_N@Z @ 0x180238ABC
 * Callers:
 *     ?Present@CDDisplaySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800EB160 (-Present@CDDisplaySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180238C00 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180041C50 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 *     ?UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ @ 0x180239140 (-UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CDDisplaySwapChain::PostPresent(CDDisplaySwapChain *this, char a2)
{
  unsigned int v2; // edi
  unsigned int v4; // r8d
  __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int updated; // eax
  __int64 v10; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = 0;
  if ( !a2 )
  {
    v4 = ((__int64)(*((_QWORD *)this + 47) - *((_QWORD *)this + 46)) >> 3) - 1;
    if ( (unsigned int)((__int64)(*((_QWORD *)this + 47) - *((_QWORD *)this + 46)) >> 3) != 1 )
    {
      do
      {
        v5 = v4 - 1;
        v6 = FastRegion::CRegion::Copy(
               *(const struct FastRegion::Internal::CRgnData ***)(*((_QWORD *)this + 46) + 8LL * v4),
               *(const struct FastRegion::Internal::CRgnData ***)(*((_QWORD *)this + 46) + 8 * v5));
        if ( v6 < 0 )
          ModuleFailFastForHRESULT(v6, retaddr);
        v4 = v5;
      }
      while ( (_DWORD)v5 );
    }
    v7 = FastRegion::CRegion::Copy(
           **((const struct FastRegion::Internal::CRgnData ****)this + 46),
           (const struct FastRegion::Internal::CRgnData **)this + 37);
    if ( v7 < 0 )
      ModuleFailFastForHRESULT(v7, retaddr);
    **((_DWORD **)this + 37) = 0;
    v8 = *((_DWORD *)this + 58);
    *((_DWORD *)this + 59) = v8;
    *((_DWORD *)this + 58) = (unsigned int)(v8 + 1)
                           % (unsigned __int64)((__int64)(*((_QWORD *)this + 26) - *((_QWORD *)this + 25)) >> 5);
    updated = CDDisplaySwapChain::UpdateBackBufferTextureTarget(this);
    v2 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, updated, 0xCCu, 0LL);
  }
  return v2;
}
