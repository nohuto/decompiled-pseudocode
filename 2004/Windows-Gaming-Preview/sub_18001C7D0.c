/*
 * XREFs of sub_18001C7D0 @ 0x18001C7D0
 * Callers:
 *     ?dtor$1@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180046956 (-dtor$1@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 * Callees:
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 */

HRESULT __fastcall sub_18001C7D0(__int64 a1)
{
  HRESULT result; // eax
  __int64 v3; // rcx

  result = WindowsDeleteString(*(HSTRING *)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return sub_1800266E0(v3);
  }
  return result;
}
