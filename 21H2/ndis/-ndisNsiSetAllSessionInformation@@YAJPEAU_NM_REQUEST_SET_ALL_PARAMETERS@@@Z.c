/*
 * XREFs of ?ndisNsiSetAllSessionInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B0FB0
 * Callers:
 *     <none>
 * Callees:
 *     NdisSetSessionCompartmentId @ 0x1C00B1000 (NdisSetSessionCompartmentId.c)
 */

__int64 __fastcall ndisNsiSetAllSessionInformation(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  unsigned int v1; // eax
  unsigned int *v3; // rdx

  v1 = 0;
  if ( *((_DWORD *)a1 + 13) )
    return 3221225474LL;
  if ( *((_DWORD *)a1 + 12) )
    return 3221225485LL;
  v3 = (unsigned int *)*((_QWORD *)a1 + 4);
  if ( v3 )
    v1 = *v3;
  return NdisSetSessionCompartmentId(**((unsigned int **)a1 + 2), v1);
}
