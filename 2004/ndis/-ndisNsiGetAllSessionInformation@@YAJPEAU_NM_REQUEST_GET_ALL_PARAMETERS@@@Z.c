/*
 * XREFs of ?ndisNsiGetAllSessionInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0013660
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetSessionCompartmentId @ 0x1C0013CB0 (NdisGetSessionCompartmentId.c)
 */

__int64 __fastcall ndisNsiGetAllSessionInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  unsigned int *v1; // rax
  int v3; // ecx
  int SessionCompartmentId; // eax
  _DWORD *v5; // rcx
  __int64 result; // rax

  v1 = (unsigned int *)*((_QWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 8);
  if ( v3 )
  {
    result = 3221225485LL;
    if ( (unsigned int)(v3 - 1) <= 1 )
      return 3221225474LL;
  }
  else
  {
    SessionCompartmentId = NdisGetSessionCompartmentId(*v1);
    v5 = (_DWORD *)*((_QWORD *)a1 + 5);
    if ( v5 )
      *v5 = SessionCompartmentId;
    return 0LL;
  }
  return result;
}
