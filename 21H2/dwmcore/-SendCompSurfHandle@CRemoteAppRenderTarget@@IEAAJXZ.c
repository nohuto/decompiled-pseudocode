/*
 * XREFs of ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801C3700
 * Callers:
 *     ?CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJXZ @ 0x1801C2160 (-CheckOcclusionState@CRemoteAppRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801C37A0 (-SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::SendCompSurfHandle(CRemoteAppRenderTarget *this)
{
  __int64 v1; // rsi
  unsigned int v2; // ebx
  CRemoteAppRenderTarget *v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v9[9]; // [rsp+38h] [rbp-50h] BYREF

  v1 = *((_QWORD *)this + 22);
  v2 = 0;
  if ( v1 )
  {
    v8 = 6;
    memset_0(v9, 0, 0x40uLL);
    v9[0] = *((_QWORD *)this + 32);
    v9[1] = v1;
    v5 = CRemoteAppRenderTarget::SendMetaData(v4, (const struct _DWMIndirectMetaData *)&v8);
    v2 = v5;
    if ( v5 >= 0 )
      *((_BYTE *)this + 293) = 0;
    else
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x1D5u);
  }
  return v2;
}
