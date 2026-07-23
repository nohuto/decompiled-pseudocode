/*
 * XREFs of ExpInitExpCheckTestSigningInfo @ 0x1405B6F90
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySystemInformation @ 0x1403FAC40 (ZwQuerySystemInformation.c)
 */

__int64 __fastcall ExpInitExpCheckTestSigningInfo(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  ULONG v6; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v5 = 8LL;
  v6 = 0;
  if ( ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v5, 8u, &v6) >= 0 )
  {
    v3 = 1;
    if ( (v5 & 0x200000000LL) != 0 )
      ExpTestSigningEnabled = 1;
  }
  return v3;
}
