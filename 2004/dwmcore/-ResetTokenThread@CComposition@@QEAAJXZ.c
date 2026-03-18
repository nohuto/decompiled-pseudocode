/*
 * XREFs of ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x180031EF0
 * Callers:
 *     ?UpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x180031F30 (-UpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800B0394 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::ResetTokenThread(CComposition *this)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ecx

  v1 = 0;
  v2 = *((_QWORD *)g_pComposition + 12);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x264u, 0LL);
  }
  return v1;
}
