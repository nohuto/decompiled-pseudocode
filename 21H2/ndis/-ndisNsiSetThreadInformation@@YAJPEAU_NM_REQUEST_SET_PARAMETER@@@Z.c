/*
 * XREFs of ?ndisNsiSetThreadInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C00090F0
 * Callers:
 *     <none>
 * Callees:
 *     NdisSetThreadObjectCompartmentScope @ 0x1C00F89C0 (NdisSetThreadObjectCompartmentScope.c)
 *     NdisSetThreadObjectCompartmentId @ 0x1C00FF460 (NdisSetThreadObjectCompartmentId.c)
 */

__int64 __fastcall ndisNsiSetThreadInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  int v1; // eax

  if ( *((_DWORD *)a1 + 15) )
    return 3221225474LL;
  if ( !*((_DWORD *)a1 + 14) )
  {
    v1 = *((_DWORD *)a1 + 13);
    if ( !v1 )
      return NdisSetThreadObjectCompartmentId(KeGetCurrentThread(), **((unsigned int **)a1 + 5));
    if ( v1 == 4 )
      return NdisSetThreadObjectCompartmentScope(KeGetCurrentThread(), **((unsigned int **)a1 + 5));
  }
  return 3221225485LL;
}
