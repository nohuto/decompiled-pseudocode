/*
 * XREFs of _RtlpGetActivationContextData@16 @ 0x4B2B4F76
 * Callers:
 *     _RtlQueryActivationContextApplicationSettings@28 @ 0x4B2B4270 (_RtlQueryActivationContextApplicationSettings@28.c)
 *     _RtlpFindActivationContextSection_FillOutReturnedData@32 @ 0x4B2B43E8 (_RtlpFindActivationContextSection_FillOutReturnedData@32.c)
 *     _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0 (_RtlQueryInformationActivationContext@28.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpGetActivationContextData(int a1, int a2, int a3, const char **a4)
{
  char v5; // bl
  int v6; // ecx
  int v7; // edx
  const char *v8; // eax
  unsigned int v10; // eax

  v5 = a1;
  if ( !a4 )
    return -1073741582;
  if ( (a1 & 0xFFFFFFFE) != 0 )
    return -1073741585;
  v6 = 0;
  *a4 = 0;
  v7 = 0;
  if ( a2 )
  {
    if ( a2 == -4 )
    {
LABEL_22:
      v7 = 512;
      goto LABEL_6;
    }
    if ( a2 == -3 )
    {
      *a4 = "Actx ";
      v8 = "Actx ";
      goto LABEL_7;
    }
    v8 = *(const char **)(a2 + 16);
    *a4 = v8;
LABEL_14:
    if ( !v7 )
      goto LABEL_7;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v7 = 504;
LABEL_6:
    v8 = *(const char **)(&NtCurrentPeb()->InheritedAddressSpace + v7);
    *a4 = v8;
    goto LABEL_7;
  }
  v10 = *(_DWORD *)(a3 + 20) & 7;
  if ( v10 <= 1 )
  {
    v7 = 504;
    v8 = 0;
    goto LABEL_14;
  }
  if ( v10 == 2 )
    goto LABEL_22;
  if ( v10 != 4 )
    return -1073741584;
  v8 = 0;
LABEL_7:
  if ( !v8 && (v5 & 1) != 0 )
    *a4 = "Actx ";
  return v6;
}
