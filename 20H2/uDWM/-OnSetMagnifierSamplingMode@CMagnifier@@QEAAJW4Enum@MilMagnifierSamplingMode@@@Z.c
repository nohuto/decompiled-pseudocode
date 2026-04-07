/*
 * XREFs of ?OnSetMagnifierSamplingMode@CMagnifier@@QEAAJW4Enum@MilMagnifierSamplingMode@@@Z @ 0x18008B41C
 * Callers:
 *     ?OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z @ 0x18008BCEC (-OnMagnifierApiMessage@CMagnifierControl@@QEAAJW4DWMCMD@@PEBX_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMagnifier::OnSetMagnifierSamplingMode(__int64 a1, int a2)
{
  bool v2; // zf
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  unsigned int v8; // ebx

  v2 = a2 == 1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  v4 = *(_QWORD *)(v3 + 16);
  v5 = *(unsigned int *)(v3 + 24);
  v6 = 2LL;
  if ( !v2 )
    v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v4 + 1056LL))(v4, v5, v6);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1ACu);
  return v8;
}
