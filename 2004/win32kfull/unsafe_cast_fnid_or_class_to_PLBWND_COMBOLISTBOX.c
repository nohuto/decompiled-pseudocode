/*
 * XREFs of unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX @ 0x1C0145FE8
 * Callers:
 *     xxxGetComboBoxInfo @ 0x1C0145ED4 (xxxGetComboBoxInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall unsafe_cast_fnid_or_class_to_PLBWND_COMBOLISTBOX(_QWORD *a1)
{
  __int64 v1; // r8

  if ( !a1 )
    return 0LL;
  v1 = a1[5];
  if ( (*(_WORD *)(v1 + 42) & 0x3FFF) != 0x2A3 && **(_WORD **)(a1[17] + 8LL) != *(_WORD *)(gpsi + 882LL) )
    return 0LL;
  if ( !*(_DWORD *)(v1 + 252) )
    JUMPOUT(0x1C0169BF5LL);
  return a1[35];
}
