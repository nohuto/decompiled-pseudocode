/*
 * XREFs of RtlpGetActivationContextData @ 0x180013374
 * Callers:
 *     RtlQueryInformationActivationContext @ 0x180012DE0 (RtlQueryInformationActivationContext.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x18007AE00 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x1800812FC (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpGetActivationContextData(int a1, __int64 a2, __int64 a3, const char **a4)
{
  unsigned int v4; // r10d
  char v6; // r11
  __int64 v7; // rcx
  const char *v8; // r8
  const char *v9; // rax
  unsigned int v11; // eax

  v4 = 0;
  v6 = a1;
  if ( !a4 )
    return (unsigned int)-1073741582;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return (unsigned int)-1073741585;
  *a4 = 0LL;
  v7 = 0LL;
  v8 = "Actx ";
  if ( a2 )
  {
    if ( a2 == -4 )
      goto LABEL_22;
    if ( a2 == -3 )
    {
      *a4 = "Actx ";
      v9 = "Actx ";
      goto LABEL_7;
    }
    v9 = *(const char **)(a2 + 24);
    *a4 = v9;
  }
  else
  {
    if ( !a3 )
    {
      v7 = 760LL;
LABEL_6:
      v9 = *(const char **)(&NtCurrentPeb()->InheritedAddressSpace + v7);
      *a4 = v9;
      goto LABEL_7;
    }
    v11 = *(_DWORD *)(a3 + 24) & 7;
    if ( v11 > 1 )
    {
      if ( v11 != 2 )
      {
        if ( v11 != 4 )
          return (unsigned int)-1073741584;
        v9 = 0LL;
        goto LABEL_7;
      }
LABEL_22:
      v7 = 776LL;
      goto LABEL_6;
    }
    v7 = 760LL;
    v9 = 0LL;
  }
  if ( v7 )
    goto LABEL_6;
LABEL_7:
  if ( !v9 )
  {
    if ( (v6 & 1) == 0 )
      v8 = *a4;
    *a4 = v8;
  }
  return v4;
}
