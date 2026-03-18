/*
 * XREFs of ?EnsureD2DFactory@CD2DFactory@@QEAAJXZ @ 0x1800DD768
 * Callers:
 *     ?Startup@@YAJXZ @ 0x1800DD2CC (-Startup@@YAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1800DD838 (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DFactory::EnsureD2DFactory(CD2DFactory *this)
{
  unsigned int v1; // ebx
  HRESULT Factory; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct CD2DFactory *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx
  unsigned int v9; // [rsp+20h] [rbp-18h]
  CD2DFactory *pFactoryOptions; // [rsp+40h] [rbp+8h] BYREF

  pFactoryOptions = this;
  v1 = 0;
  if ( g_DeviceManager )
    return v1;
  LODWORD(pFactoryOptions) = 0;
  g_DeviceManager = 0LL;
  Factory = D2D1CreateFactory(
              D2D1_FACTORY_TYPE_MULTI_THREADED,
              &GUID_bb12d362_daee_4b9a_aa1d_14ba401cfa1f,
              (const D2D1_FACTORY_OPTIONS *)&pFactoryOptions,
              &g_DeviceManager);
  v1 = Factory;
  if ( Factory < 0 )
  {
    v9 = 31;
    goto LABEL_13;
  }
  v4 = (__int64)*(&g_DeviceManager + 1);
  *(&g_DeviceManager + 1) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  Factory = (**(__int64 (__fastcall ***)(void *, GUID *, void **))g_DeviceManager)(
              g_DeviceManager,
              &GUID_6f72c0a2_6db7_46e9_9b62_b58a23f4928b,
              &g_DeviceManager + 1);
  v1 = Factory;
  if ( Factory < 0 )
  {
    v9 = 33;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, Factory, v9, 0LL);
    return v1;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*(&g_DeviceManager + 1) + 48LL))(*(&g_DeviceManager + 1), 0LL);
  v6 = CMesh2DEffect::Register(v5);
  v1 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xB8u, 0LL);
  if ( (v1 & 0x80000000) != 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v1, 0x2Cu, 0LL);
  return v1;
}
