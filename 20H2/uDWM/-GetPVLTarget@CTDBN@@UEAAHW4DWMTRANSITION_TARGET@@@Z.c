/*
 * XREFs of ?GetPVLTarget@CTDBN@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800AEBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTDBN::GetPVLTarget(__int64 a1, __int16 a2)
{
  unsigned int v2; // r9d
  int v3; // ecx
  int v4; // edx
  _DWORD *i; // r8

  v2 = -1;
  v3 = 0;
  v4 = a2 & 0xFFF;
  for ( i = &`CTDBN::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable; (*i & 0xFFF) != v4; i += 2 )
  {
    if ( ++v3 )
      return v2;
  }
  return *((unsigned int *)&`CTDBN::GetSpecialTargetInfo'::`2'::s_rgSpecialTargetLookupTable + 2 * v3 + 1);
}
