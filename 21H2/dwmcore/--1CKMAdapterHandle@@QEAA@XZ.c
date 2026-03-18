/*
 * XREFs of ??1CKMAdapterHandle@@QEAA@XZ @ 0x1800239FC
 * Callers:
 *     ?GetMaxFeatureLevel@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@@Z @ 0x18002387C (-GetMaxFeatureLevel@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVER.c)
 *     ?DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ @ 0x180277428 (-DriverUpdateInProgress@CDisplayManager@@IEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CKMAdapterHandle::~CKMAdapterHandle(CKMAdapterHandle *this)
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)this )
  {
    v1 = *(_DWORD *)this;
    D3DKMTCloseAdapter(&v1);
  }
}
