/*
 * XREFs of ?IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C01A8508
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C00109BC (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(DMMVIDPNPRESENTPATH *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rbx

  v1 = *((_QWORD *)this + 11);
  v2 = *(_QWORD *)(v1 + 40);
  if ( !v2 )
  {
    WdLogSingleEntry0(1LL);
    v2 = *(_QWORD *)(v1 + 40);
  }
  v3 = *(_QWORD *)(v2 + 72);
  if ( !v3 )
  {
    WdLogSingleEntry0(1LL);
    v3 = *(_QWORD *)(v2 + 72);
  }
  v4 = *(_QWORD *)(v3 + 48);
  v5 = *(_QWORD *)(v4 + 8);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    v5 = *(_QWORD *)(v4 + 8);
    if ( !v5 )
      WdLogSingleEntry0(1LL);
  }
  return *(_DWORD *)(*(_QWORD *)(v5 + 16) + 2692LL) >= 1105;
}
