/*
 * XREFs of ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800A4764
 * Callers:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x180032A3C (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180057CE4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x18008AAC0 (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1800A42F8 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1800A47FC (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x1800A49E4 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800B5D50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CDeviceManager::CreateNewDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  int Adapter; // eax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  CMILCOMBase **v9; // rdx
  CMILCOMBase *v10; // rcx
  CDeviceManager *v12; // [rsp+40h] [rbp+8h] BYREF
  struct IDXGIAdapter *v13; // [rsp+50h] [rbp+18h] BYREF

  v12 = this;
  *a3 = 0LL;
  v13 = 0LL;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, (struct IDXGIAdapter1 **)&v13);
  LODWORD(v12) = Adapter;
  v6 = Adapter;
  if ( Adapter < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802DDBE0, 2u, Adapter, 0x42u, 0LL);
    TranslateDXGIorD3DErrorInContext(v6, 4, &v12);
    v6 = (int)v12;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802ADB18, 2u, v6, 0x134u, 0LL);
  }
  else
  {
    v7 = CD3DDevice::Create(v13, a3);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802ADB18, 2u, v7, 0x136u, 0LL);
    }
    else
    {
      v9 = (CMILCOMBase **)xmmword_18034D610;
      if ( *((_QWORD *)&xmmword_18034D610 + 1) == (_QWORD)xmmword_18034D610 )
      {
        std::vector<CDeviceManager::DeviceInfo>::_Emplace_reallocate<CD3DDevice * &>(
          &qword_18034D608,
          xmmword_18034D610,
          a3);
      }
      else
      {
        v10 = *a3;
        *(_BYTE *)(xmmword_18034D610 + 8) = 0;
        *v9 = v10;
        if ( v10 )
          CMILCOMBase::InternalAddRef(v10);
        *(_QWORD *)&xmmword_18034D610 = xmmword_18034D610 + 16;
      }
      CComposition::ResetTokenThread(v10);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  return (unsigned int)v6;
}
