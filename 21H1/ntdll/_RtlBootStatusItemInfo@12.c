/*
 * XREFs of _RtlBootStatusItemInfo@12 @ 0x4B3507A8
 * Callers:
 *     _RtlCheckBootStatusIntegrity@8 @ 0x4B3507E0 (_RtlCheckBootStatusIntegrity@8.c)
 *     _RtlpGetSetBootStatusData@24 @ 0x4B350EC6 (_RtlpGetSetBootStatusData@24.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlBootStatusItemInfo(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  if ( a1 > 0x11 )
    return -1073741811;
  *a2 = RtlpBootStatusFields[2 * a1];
  *a3 = dword_4B29892C[2 * a1];
  return 0;
}
