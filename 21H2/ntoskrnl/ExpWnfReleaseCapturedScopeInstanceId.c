/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x14069ED98
 * Callers:
 *     NtQueryWnfStateNameInformation @ 0x140604510 (NtQueryWnfStateNameInformation.c)
 *     ExpNtUpdateWnfStateData @ 0x14069E08C (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x14069E930 (NtQueryWnfStateData.c)
 *     ExpNtDeleteWnfStateData @ 0x1407CD97C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     SeReleaseSid @ 0x1406CDCD0 (SeReleaseSid.c)
 */

void __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3, __int64 a4)
{
  int v4; // ecx
  int v5; // ecx
  PVOID v6; // rcx

  LOBYTE(a4) = a3;
  v4 = a1 - 1;
  if ( v4 )
  {
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        if ( *a2 )
          ObfDereferenceObjectWithTag(*a2, 0x20666E57u);
      }
    }
    else
    {
      v6 = *a2;
      if ( *a2 )
      {
        LOBYTE(a2) = a3;
        SeReleaseSid(v6, a2, 0LL, a4);
      }
    }
  }
  else if ( *a2 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)*a2);
  }
}
