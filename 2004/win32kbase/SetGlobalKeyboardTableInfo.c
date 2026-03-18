/*
 * XREFs of SetGlobalKeyboardTableInfo @ 0x1C00187A0
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0017D48 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C001B6C0 (xxxChangeForegroundKeyboardTable.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01A7C50 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SetGlobalKeyboardTableInfo(__int64 a1)
{
  __int64 result; // rax

  gpKbdTbl = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  if ( gpKL != a1 )
    gpKL = a1;
  ghKbdTblBase = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 24LL);
  guKbdTblSize = *(_DWORD *)(*(_QWORD *)(a1 + 48) + 40LL);
  result = *(_QWORD *)(a1 + 48);
  gpKbdNlsTbl = *(_QWORD *)(result + 48);
  return result;
}
