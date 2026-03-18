/*
 * XREFs of ExpWnfReleaseCapturedScopeInstanceId @ 0x1407946F8
 * Callers:
 *     NtQueryWnfStateNameInformation @ 0x140791110 (NtQueryWnfStateNameInformation.c)
 *     ExpNtUpdateWnfStateData @ 0x140793B84 (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140794AD0 (NtQueryWnfStateData.c)
 *     ExpNtDeleteWnfStateData @ 0x14085EB0C (ExpNtDeleteWnfStateData.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     SeReleaseSid @ 0x140668444 (SeReleaseSid.c)
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
    ObfDereferenceObject(*a2);
  }
}
