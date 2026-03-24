/*
 * XREFs of DpiGdoHandleVideoParameters @ 0x1C02DA0C0
 * Callers:
 *     DpiGdoDispatchIoctl @ 0x1C02DA060 (DpiGdoDispatchIoctl.c)
 * Callees:
 *     DxgkHandleVideoParameters @ 0x1C0294C68 (DxgkHandleVideoParameters.c)
 */

__int64 __fastcall DpiGdoHandleVideoParameters(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0LL;
  if ( *(_DWORD *)(v2 + 16) < 0x164u || *(_DWORD *)(v2 + 8) < 0x164u )
  {
    v5 = -1073741306;
    v6 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v6 + 24) = -1073741306LL;
    WdLogEvent5_WdError(v6);
  }
  else
  {
    v5 = DxgkHandleVideoParameters(
           *(DXGADAPTER ****)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 32LL) + 64LL) + 3896LL),
           *(unsigned int *)(*(_QWORD *)(a1 + 64) + 156LL),
           *(char **)(a2 + 24));
    v3 = 356LL;
  }
  *(_DWORD *)(a2 + 48) = v5;
  result = v5;
  *(_QWORD *)(a2 + 56) = v3;
  return result;
}
