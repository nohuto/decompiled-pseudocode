/*
 * XREFs of ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x1800DE330
 * Callers:
 *     ?CheckOcclusionState@CRemoteRenderTarget@@UEAAJXZ @ 0x1800DE2D0 (-CheckOcclusionState@CRemoteRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180032370 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800323A0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180032A3C (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180057CE4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x1800D5170 (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x1800DE524 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEBGAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRen.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRemoteRenderTarget::EnsureSwapChain(CRemoteRenderTarget *this)
{
  struct ILegacyRemotingSwapChain **v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  int (__fastcall ***v5)(_QWORD); // rcx
  struct ILegacyRemotingSwapChain *v7; // rdx
  HMONITOR v8; // r8
  int DXGIOutput; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  CDeviceManager *v14; // rcx
  int Device; // eax
  __int64 v16; // rcx
  struct ILegacyRemotingSwapChain *v17; // rdx
  CD3DDevice *v18; // rbx
  int LegacyRemotingSwapChain; // eax
  __int64 v20; // rcx
  CD3DDevice *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct ILegacyRemotingSwapChain **v24; // [rsp+28h] [rbp-D8h]
  unsigned int v25; // [rsp+30h] [rbp-D0h] BYREF
  CD3DDevice *v26; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+40h] [rbp-C0h] BYREF
  char v28; // [rsp+50h] [rbp-B0h]
  char v29[40]; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+88h] [rbp-78h]
  int v31; // [rsp+8Ch] [rbp-74h]
  unsigned __int16 v32[42]; // [rsp+BCh] [rbp-44h] BYREF

  v1 = (struct ILegacyRemotingSwapChain **)((char *)this + 160);
  v3 = 0;
  v4 = *((_QWORD *)this + 20);
  if ( !v4 || (v5 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v4 + 8) + 12LL) + v4 + 8), (**v5)(v5) < 0) )
  {
    v7 = *v1;
    *v1 = 0LL;
    if ( v7 )
    {
      v22 = (__int64)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    if ( *((_DWORD *)this + 20) && *((_DWORD *)this + 21) )
    {
      v8 = (HMONITOR)*((_QWORD *)this + 25);
      v27 = (unsigned __int64)this + 152;
      v26 = 0LL;
      v28 = 1;
      DXGIOutput = CDisplayManager::InternalGetDXGIOutput(
                     (struct _RTL_CRITICAL_SECTION *)v4,
                     0,
                     v8,
                     (struct IDXGIOutputDWM **)&v27 + 1);
      v25 = DXGIOutput;
      v3 = DXGIOutput;
      if ( DXGIOutput < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, &dword_1802DDBE0, 2u, DXGIOutput, 0xBEu, 0LL);
        TranslateDXGIorD3DErrorInContext(v3, 4, &v25);
        v3 = v25;
      }
      if ( v28 )
      {
        v10 = *(_QWORD *)v27;
        *(_QWORD *)v27 = *((_QWORD *)&v27 + 1);
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( (v3 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0x1A0u, 0LL);
        return v3;
      }
      v11 = *((_QWORD *)this + 19);
      LODWORD(v27) = 87;
      *(_QWORD *)((char *)&v27 + 4) = 3LL;
      v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 32LL))(v11, v29);
      v3 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1A7u, 0LL);
        return v3;
      }
      *((_DWORD *)this + 75) = v30;
      *((_DWORD *)this + 76) = v31;
      *((_DWORD *)this + 54) = *((_DWORD *)this + 50);
      *(_QWORD *)((char *)this + 220) = 0LL;
      *((_BYTE *)this + 228) = 0;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v26);
      Device = CDeviceManager::GetDevice(v14, *(struct _LUID *)((char *)this + 208), &v26);
      v3 = Device;
      if ( Device < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, Device, 0x1B2u, 0LL);
        v21 = v26;
        if ( !v26 )
          return v3;
        goto LABEL_22;
      }
      v17 = *v1;
      *v1 = 0LL;
      if ( v17 )
      {
        v23 = (__int64)v17 + *(int *)(*((_QWORD *)v17 + 1) + 4LL) + 8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v24 = v1;
      v18 = v26;
      LegacyRemotingSwapChain = CD3DDevice::CreateLegacyRemotingSwapChain(
                                  v26,
                                  v32,
                                  (const struct D2D_SIZE_U *)this + 10,
                                  (const struct PixelFormatInfo *)&v27,
                                  (CRemoteRenderTarget *)((char *)this + 208),
                                  v24);
      v3 = LegacyRemotingSwapChain;
      if ( LegacyRemotingSwapChain < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, LegacyRemotingSwapChain, 0x1B8u, 0LL);
      else
        *((_BYTE *)this + 129) = 1;
      if ( v18 )
      {
        v21 = v18;
LABEL_22:
        CD3DDevice::Release(v21);
      }
    }
  }
  return v3;
}
