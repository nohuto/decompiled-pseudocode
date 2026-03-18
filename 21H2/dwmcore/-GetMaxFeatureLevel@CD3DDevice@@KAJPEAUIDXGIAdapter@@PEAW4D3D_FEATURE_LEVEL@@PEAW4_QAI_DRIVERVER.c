/*
 * XREFs of ?GetMaxFeatureLevel@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@@Z @ 0x18002387C
 * Callers:
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1800230F4 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERS.c)
 * Callees:
 *     ??1CKMAdapterHandle@@QEAA@XZ @ 0x1800239FC (--1CKMAdapterHandle@@QEAA@XZ.c)
 *     ?Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z @ 0x180023A28 (-Initialize@CKMAdapterHandle@@QEAAJU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDevice::GetMaxFeatureLevel(
        struct IDXGIAdapter *a1,
        enum D3D_FEATURE_LEVEL *a2,
        enum _QAI_DRIVERVERSION *a3,
        union _LARGE_INTEGER *a4)
{
  struct IDXGIAdapterVtbl *lpVtbl; // rax
  enum D3D_FEATURE_LEVEL v9; // ebx
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-E0h]
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v20; // [rsp+34h] [rbp-CCh] BYREF
  LONGLONG v21; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  _BYTE v24[256]; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+160h] [rbp+60h]
  struct _LUID v26; // [rsp+188h] [rbp+88h]

  v19 = 1000;
  v20 = 0;
  v23 = 0LL;
  lpVtbl = a1->lpVtbl;
  v9 = D3D_FEATURE_LEVEL_9_1;
  v22 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct IDXGIAdapter *, _BYTE *))lpVtbl->GetDesc)(a1, v24);
  v12 = v10;
  if ( v10 < 0 )
  {
    v18 = 89;
    goto LABEL_24;
  }
  v10 = CKMAdapterHandle::Initialize((CKMAdapterHandle *)&v20, v26);
  v12 = v10;
  if ( v10 < 0 )
  {
    v18 = 92;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, v18, 0LL);
    goto LABEL_9;
  }
  *(_QWORD *)&v22 = v20 | 0xD00000000LL;
  *((_QWORD *)&v22 + 1) = &v19;
  LODWORD(v23) = 4;
  v13 = D3DKMTQueryAdapterInfo(&v22);
  if ( v13 < 0 )
  {
    v12 = v13 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13 | 0x10000000, 0x63u, 0LL);
    goto LABEL_9;
  }
  if ( ((int (__fastcall *)(struct IDXGIAdapter *, GUID *, LONGLONG *))a1->lpVtbl->CheckInterfaceSupport)(
         a1,
         &GUID_9b7e4c8f_342c_4106_a19f_4f2704f689f0,
         &v21) < 0 )
  {
    if ( ((int (__fastcall *)(struct IDXGIAdapter *, GUID *, LONGLONG *))a1->lpVtbl->CheckInterfaceSupport)(
           a1,
           &GUID_9b7e4c0f_342c_4106_a19f_4f2704f689f0,
           &v21) < 0 )
    {
      v21 = 0LL;
      goto LABEL_10;
    }
    v9 = D3D_FEATURE_LEVEL_10_0;
    if ( v25 == 4318 && v21 <= 0x7000F000B18E1LL )
      goto LABEL_10;
  }
  else
  {
    v9 = D3D_FEATURE_LEVEL_12_1;
  }
  if ( !CCommonRegistryData::m_fForce10Level9 )
  {
    if ( v19 < 1105 )
    {
      v17 = v9;
      if ( !CCommonRegistryData::m_fForce10OnWDDM1_0 )
        v17 = 37632;
      v9 = v17;
    }
    goto LABEL_8;
  }
LABEL_10:
  v9 = D3D_FEATURE_LEVEL_9_3;
LABEL_8:
  if ( CCommonRegistryData::MaxD3DFeatureLevel >= 37120 && CCommonRegistryData::MaxD3DFeatureLevel < v9 )
    v9 = CCommonRegistryData::MaxD3DFeatureLevel;
LABEL_9:
  v15 = v19;
  *a2 = v9;
  *(_DWORD *)a3 = v15;
  a4->QuadPart = v21;
  CKMAdapterHandle::~CKMAdapterHandle((CKMAdapterHandle *)&v20);
  return v12;
}
