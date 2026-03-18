/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x140654688
 * Callers:
 *     ExpNtUpdateWnfStateData @ 0x14065397C (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140654220 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1406C9820 (NtQueryWnfStateNameInformation.c)
 *     ExpNtDeleteWnfStateData @ 0x1407C954C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     SeReleaseSid @ 0x1405E553C (SeReleaseSid.c)
 */

void __fastcall ExpWnfReleaseCapturedScopeInstanceId(int a1, PVOID *a2, char a3)
{
  int v3; // ecx
  int v4; // ecx

  v3 = a1 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( *a2 )
          ObfDereferenceObjectWithTag(*a2, 0x20666E57u);
      }
    }
    else if ( *a2 )
    {
      SeReleaseSid(*a2, a3, 0);
    }
  }
  else if ( *a2 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)*a2);
  }
}
