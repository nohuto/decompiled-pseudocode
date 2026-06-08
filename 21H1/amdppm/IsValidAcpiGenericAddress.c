/*
 * XREFs of IsValidAcpiGenericAddress @ 0x1C00294D0
 * Callers:
 *     ValidateAcpiCStates @ 0x1C002996C (ValidateAcpiCStates.c)
 *     ValidateLpiState @ 0x1C002A738 (ValidateLpiState.c)
 *     InitAcpi1ThrottleStates @ 0x1C00305B4 (InitAcpi1ThrottleStates.c)
 *     InitAcpi1CStates @ 0x1C0030E20 (InitAcpi1CStates.c)
 * Callees:
 *     <none>
 */

char __fastcall IsValidAcpiGenericAddress(unsigned __int8 *a1)
{
  unsigned __int8 v1; // al
  char v2; // r8
  int v3; // eax
  int v4; // eax

  v1 = *a1;
  v2 = 1;
  if ( !*a1 )
    goto LABEL_11;
  if ( v1 == 1 )
  {
    if ( *((_DWORD *)a1 + 2) )
      return 0;
    v3 = *((_DWORD *)a1 + 1);
    if ( (v3 & 0xFFFF0000) != 0 || !v3 )
      return 0;
LABEL_11:
    v4 = a1[1];
    if ( !(_BYTE)v4 || v4 + (unsigned int)a1[2] > a1[3] )
      return 0;
    return v2;
  }
  if ( v1 <= 1u || v1 > 4u && v1 != 10 && v1 != 127 )
    return 0;
  return v2;
}
