/*
 * XREFs of ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x180037894
 * Callers:
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003B31C (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x180037968 (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 *     ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x18003A260 (--4-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z.c)
 *     ??0CD3DDevice@@AEAA@W4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z @ 0x18003A2A0 (--0CD3DDevice@@AEAA@W4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z.c)
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x18003A5F8 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERS.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x1800AA098 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CD3DDevice::Create(struct IDXGIAdapter *a1, struct CD3DDevice **a2)
{
  CD3DDevice *v2; // rbx
  int v5; // eax
  unsigned int v6; // ecx
  int v7; // edi
  void *v8; // rax
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ecx
  struct CD3DDevice *v12; // rax
  CD3DDevice *v14; // [rsp+30h] [rbp-10h] BYREF
  union _LARGE_INTEGER v15; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+78h] [rbp+38h] BYREF
  enum D3D_FEATURE_LEVEL v17; // [rsp+80h] [rbp+40h] BYREF
  struct ID3D11Device1 *v18; // [rsp+88h] [rbp+48h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  v5 = CD3DDevice::CreateD3D11Device(a1, &v17, (enum _QAI_DRIVERVERSION *)&v16, &v15, &v18);
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802AA538, 2u, v5, 0x188u, 0LL);
    goto LABEL_7;
  }
  v8 = DefaultHeap::AllocClear(0x8C0uLL);
  if ( v8 )
    v8 = (void *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CD3DDevice::CD3DDevice)(
                   v8,
                   (unsigned int)v17,
                   v16,
                   (union _LARGE_INTEGER)v15.QuadPart);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=(&v14, v8);
  v2 = v14;
  if ( v14 )
  {
    v10 = CD3DDevice::Init(v14, a1, v18);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_1802AA538, 2u, v10, 0x18Fu, 0LL);
    }
    else
    {
      v12 = v2;
      v2 = 0LL;
      *a2 = v12;
    }
LABEL_7:
    if ( v7 >= 0 )
      goto LABEL_8;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802AA538, 2u, -2147024882, 0x18Du, 0LL);
LABEL_11:
  v7 = -2003304307;
LABEL_8:
  if ( v2 )
    CD3DDevice::Release(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v18);
  return (unsigned int)v7;
}
