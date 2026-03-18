/*
 * XREFs of ?PairBind@CCompositionSurface@@IEAAJPEAVCFlipExBuffer@@@Z @ 0x1C00781E8
 * Callers:
 *     ?Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z @ 0x1C0004950 (-Bind@CCompositionSurface@@QEAAJAEBUCSM_BUFFER_INFO@@_N11PEA_K@Z.c)
 *     ?InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@CTokenBase@@@Z @ 0x1C0015C60 (-InitializeCompleted@CFlipToken@@IEAAJAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NW4TokenState@.c)
 *     ?Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z @ 0x1C00780BC (-Pair@CCompositionSurface@@QEAAJPEAUIPairedSurfaceObject@@@Z.c)
 * Callees:
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C0004434 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z @ 0x1C0078BA8 (-EnableCascadedSignaling@CFlipExBuffer@@QEAAJPEAUCSM_BUFFER_INFO@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::PairBind(CCompositionSurface *this, struct CFlipExBuffer *a2)
{
  int v4; // edi
  __int64 v5; // r8
  __int64 v7; // [rsp+30h] [rbp-548h] BYREF
  _BYTE v8[1312]; // [rsp+40h] [rbp-538h] BYREF

  v7 = 0LL;
  memset(v8, 0, sizeof(v8));
  v4 = CFlipExBuffer::EnableCascadedSignaling(a2, (struct CSM_BUFFER_INFO *)v8);
  if ( v4 < 0
    || (LOBYTE(v5) = 1,
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64, __int64 *))(**((_QWORD **)this + 13) + 24LL))(
               *((_QWORD *)this + 13),
               v8,
               v5,
               &v7),
        v4 < 0) )
  {
    CFlipExBuffer::DisableCascadedSignaling(a2);
  }
  else
  {
    *((_QWORD *)a2 + 87) = v7;
  }
  return (unsigned int)v4;
}
