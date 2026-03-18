/*
 * XREFs of ?PostPresent@CDDisplaySwapChain@@IEAAJ_N0@Z @ 0x18027BE60
 * Callers:
 *     ?Present@CDDisplaySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18027BFC0 (-Present@CDDisplaySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18027C130 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z @ 0x18001C09C (-AdvanceUnpin@CD3DDevice@@QEAAXU_LUID@@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180083EF4 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 *     ?UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ @ 0x18027C3D0 (-UpdateBackBufferTextureTarget@CDDisplaySwapChain@@IEAAJXZ.c)
 */

__int64 __fastcall CDDisplaySwapChain::PostPresent(CDDisplaySwapChain *this, char a2, unsigned __int8 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r8d
  __int64 v6; // rdi
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int updated; // eax
  __int64 v11; // rcx
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0;
  if ( !a2 )
  {
    CD3DDevice::AdvanceUnpin(
      *((CD3DDevice **)this + 16),
      *(struct _LUID *)((char *)this + 324),
      *((unsigned int *)this + 66),
      a3);
    v5 = ((__int64)(*((_QWORD *)this + 55) - *((_QWORD *)this + 54)) >> 3) - 1;
    if ( (unsigned int)((__int64)(*((_QWORD *)this + 55) - *((_QWORD *)this + 54)) >> 3) != 1 )
    {
      do
      {
        v6 = v5 - 1;
        v7 = FastRegion::CRegion::Copy(
               *(int ***)(*((_QWORD *)this + 54) + 8LL * v5),
               *(int ***)(*((_QWORD *)this + 54) + 8 * v6));
        if ( v7 < 0 )
          ModuleFailFastForHRESULT(v7, retaddr);
        v5 = v6;
      }
      while ( (_DWORD)v6 );
    }
    v8 = FastRegion::CRegion::Copy(**((int ****)this + 54), (int **)this + 45);
    if ( v8 < 0 )
      ModuleFailFastForHRESULT(v8, retaddr);
    **((_DWORD **)this + 45) = 0;
    v9 = *((_DWORD *)this + 76);
    *((_DWORD *)this + 77) = v9;
    *((_DWORD *)this + 76) = (unsigned int)(v9 + 1)
                           % (unsigned __int64)((__int64)(*((_QWORD *)this + 35) - *((_QWORD *)this + 34)) >> 5);
    updated = CDDisplaySwapChain::UpdateBackBufferTextureTarget(this);
    v3 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, updated, 0xF3u);
  }
  return v3;
}
