/*
 * XREFs of ?SetMultisamplingMethodSet@DMMVIDPNSOURCE@@QEAAJ_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C03A864C
 * Callers:
 *     ?AssignMultisamplingMethodSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@I_KPEBU_D3DDDI_MULTISAMPLINGMETHOD@@@Z @ 0x1C03A6BB0 (-AssignMultisamplingMethodSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@I_KPEBU_D3D.c)
 * Callees:
 *     ?Initialize@?$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z @ 0x1C006AB34 (-Initialize@-$AutoBuffer@U_D3DDDI_MULTISAMPLINGMETHOD@@@DMM@@QEAAJ_KQEBXW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::SetMultisamplingMethodSet(
        DMMVIDPNSOURCE *this,
        __int64 a2,
        const struct _D3DDDI_MULTISAMPLINGMETHOD *a3,
        __int64 a4)
{
  int v7; // eax
  unsigned int v8; // ebx

  if ( !a3 )
    WdLogSingleEntry0(1LL);
  v7 = DMM::AutoBuffer<_D3DDDI_MULTISAMPLINGMETHOD>::Initialize((_QWORD *)this + 16, 8 * a2, a3, a4);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL, v7);
  return v8;
}
