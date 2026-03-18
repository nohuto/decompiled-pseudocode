/*
 * XREFs of ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800B0394
 * Callers:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003F0EC (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x180031EF0 (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180065D28 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x1800B0224 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1800B042C (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1800B09AC (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BCAF0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CDeviceManager::CreateNewDevice(
        struct _RTL_CRITICAL_SECTION *this,
        struct _LUID a2,
        struct CD3DDevice **a3)
{
  int Adapter; // eax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  CMILCOMBase **v9; // rdx
  CMILCOMBase *v10; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIAdapter *v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = this;
  *a3 = 0LL;
  v13 = 0LL;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, (struct IDXGIAdapter1 **)&v13);
  LODWORD(v12) = Adapter;
  v6 = Adapter;
  if ( Adapter < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802DAC50, 2u, Adapter, 0x42u, 0LL);
    TranslateDXGIorD3DErrorInContext(v6, 4, &v12);
    v6 = (int)v12;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802AB078, 2u, v6, 0x134u, 0LL);
  }
  else
  {
    v7 = CD3DDevice::Create(v13, a3);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802AB078, 2u, v7, 0x136u, 0LL);
    }
    else
    {
      v9 = (CMILCOMBase **)xmmword_1803495B0;
      if ( *((_QWORD *)&xmmword_1803495B0 + 1) == (_QWORD)xmmword_1803495B0 )
      {
        std::vector<CDeviceManager::DeviceInfo>::_Emplace_reallocate<CD3DDevice * &>(
          &qword_1803495A8,
          xmmword_1803495B0,
          a3);
      }
      else
      {
        v10 = *a3;
        *(_BYTE *)(xmmword_1803495B0 + 8) = 0;
        *v9 = v10;
        if ( v10 )
          CMILCOMBase::InternalAddRef(v10);
        *(_QWORD *)&xmmword_1803495B0 = xmmword_1803495B0 + 16;
      }
      CComposition::ResetTokenThread(v10);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return (unsigned int)v6;
}
