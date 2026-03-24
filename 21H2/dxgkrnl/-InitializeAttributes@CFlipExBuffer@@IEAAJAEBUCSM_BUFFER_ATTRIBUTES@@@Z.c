/*
 * XREFs of ?InitializeAttributes@CFlipExBuffer@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C00118B8
 * Callers:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z @ 0x1C00113E4 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@_N@Z.c)
 *     ?Initialize@CCompositionSwapchainBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C0067430 (-Initialize@CCompositionSwapchainBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_COMPOSITION_SWA.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::InitializeAttributes(CFlipExBuffer *this, const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  struct DXGGLOBAL *Global; // rax
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  struct DXGGLOBAL *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *v13; // rax

  Global = DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2);
  v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)Global + 38048) + 16LL))((char *)this + 248);
  if ( v5 >= 0 )
  {
    *((_DWORD *)this + 144) = (unsigned int)PsGetCurrentProcessId();
    *((_OWORD *)this + 3) = *(_OWORD *)a2;
    *((_OWORD *)this + 4) = *((_OWORD *)a2 + 1);
    *((_OWORD *)this + 5) = *((_OWORD *)a2 + 2);
    *((_OWORD *)this + 6) = *((_OWORD *)a2 + 3);
    *((_OWORD *)this + 7) = *((_OWORD *)a2 + 4);
    *((_OWORD *)this + 8) = *((_OWORD *)a2 + 5);
    *((_OWORD *)this + 9) = *((_OWORD *)a2 + 6);
    *((_QWORD *)this + 20) = *((_QWORD *)a2 + 14);
    v8 = *((_DWORD *)a2 + 29);
    if ( (v8 & 0x40) != 0
      && (v8 & 0x10) != 0
      && ((v10 = DXGGLOBAL::GetGlobal(v7, v6), (*(unsigned int (**)(void))(*((_QWORD *)v10 + 38048) + 128LL))())
       || (v13 = DXGGLOBAL::GetGlobal(v12, v11), (*(unsigned int (**)(void))(*((_QWORD *)v13 + 38048) + 216LL))())
       || (*((_DWORD *)a2 + 29) & 0x80u) != 0) )
    {
      *((_DWORD *)this + 41) |= 0x40u;
    }
    else
    {
      *((_DWORD *)this + 41) &= ~0x40u;
    }
  }
  return (unsigned int)v5;
}
