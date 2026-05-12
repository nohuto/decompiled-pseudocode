/*
 * XREFs of RaBuildDsmRequestForLedState @ 0x1C0042280
 * Callers:
 *     RaidEvaluateDsmLedState @ 0x1C004398C (RaidEvaluateDsmLedState.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RaBuildDsmRequestForLedState(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rax
  _DWORD *result; // rax

  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)a1 = 1130980673;
  *(_DWORD *)(a1 + 4) = 1297302623;
  *(_DWORD *)(a1 + 8) = 60;
  *(_DWORD *)(a1 + 12) = 4;
  *(_DWORD *)(a1 + 16) = 1048578;
  *(GUID *)(a1 + 20) = GUID_ACPI_DSM_PCI_SSD_LED_STATE;
  v4 = *(unsigned __int16 *)(a1 + 18);
  if ( (unsigned __int16)v4 < 4u )
    v4 = 4LL;
  result = (_DWORD *)(a1 + v4);
  result[5] = 0x40000;
  result[6] = 1;
  result[7] = 0x40000;
  result[8] = a3;
  if ( a3 != 3 )
    a4 = 0;
  result[9] = 262147;
  result[10] = a4;
  return result;
}
