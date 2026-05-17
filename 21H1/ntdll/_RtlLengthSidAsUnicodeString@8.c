/*
 * XREFs of _RtlLengthSidAsUnicodeString@8 @ 0x4B346760
 * Callers:
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 * Callees:
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 */

int __stdcall RtlLengthSidAsUnicodeString(_BYTE *a1, _DWORD *a2)
{
  int v3; // [esp-4h] [ebp-8h]

  if ( !RtlValidSid(a1) )
    return -1073741704;
  if ( a1[2] || a1[3] )
    v3 = 36;
  else
    v3 = 28;
  *a2 = v3 + 22 * (unsigned __int8)a1[1];
  return 0;
}
