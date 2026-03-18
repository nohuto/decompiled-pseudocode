/*
 * XREFs of ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800219D0
 * Callers:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x180021A88 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x180023A90 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x180023C1C (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x18003DE1C (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800A7C48 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800B2E40 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 */

__int64 __fastcall CDeviceManager::CreateNewDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  int Adapter; // eax
  unsigned int v5; // ecx
  int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx
  struct CD3DDevice **v9; // rdx
  struct CD3DDevice *v10; // rcx
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
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_180347468, 2u, Adapter, 0x51u, 0LL);
    TranslateDXGIorD3DErrorInContext((unsigned int)v6, 4LL, &v12);
    v6 = (int)v12;
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, &dword_1802E18D0, 2u, v6, 0x14Bu, 0LL);
  }
  else
  {
    v7 = CD3DDevice::Create(v13, a3);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802E18D0, 2u, v7, 0x14Du, 0LL);
    }
    else
    {
      v9 = (struct CD3DDevice **)*((_QWORD *)&xmmword_1803D75D0 + 1);
      if ( *((_QWORD *)&xmmword_1803D75D0 + 1) == qword_1803D75E0 )
      {
        std::vector<CDeviceManager::DeviceInfo>::_Emplace_reallocate<CD3DDevice * &>(
          &xmmword_1803D75D0,
          *((_QWORD *)&xmmword_1803D75D0 + 1),
          a3);
      }
      else
      {
        v10 = *a3;
        *(_BYTE *)(*((_QWORD *)&xmmword_1803D75D0 + 1) + 8LL) = 0;
        *v9 = v10;
        if ( v10 )
          CMILRefCountImpl::AddReference((struct CD3DDevice *)((char *)v10 + 8));
        *((_QWORD *)&xmmword_1803D75D0 + 1) += 16LL;
      }
      CComposition::ResetTokenThread(v10);
    }
  }
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)&v13);
  return (unsigned int)v6;
}
