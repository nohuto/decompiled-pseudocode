/*
 * XREFs of ?PanCloseProcess@@YGXQAXPAU_EPROCESS@@@Z @ 0x1F5987
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall PanCloseProcess(_DWORD *a1, struct _EPROCESS *a2)
{
  void (__stdcall *v2)(_DWORD, struct _EPROCESS *); // ecx

  v2 = (void (__stdcall *)(_DWORD, struct _EPROCESS *))a1[209];
  if ( v2 )
    v2(a1[8], a2);
}
