/*
 * XREFs of _lambda_82370b63b2fce59ec7b670b57ccd0f0f_::operator() @ 0x1803C9B40
 * Callers:
 *     ?GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z @ 0x18007F250 (-GetAndDeleteFirstHint@ActivationHints@@UEAAJUAppIdInfo@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_82370b63b2fce59ec7b670b57ccd0f0f_::operator()(LPCWCH **a1, __int64 a2)
{
  int v4; // r9d
  LPCWCH *v5; // rax
  const WCHAR *v6; // rcx
  char v7; // di
  const WCHAR *v8; // rcx

  v4 = *(_DWORD *)a1[1];
  v5 = *a1;
  v6 = (const WCHAR *)a2;
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v6 = *(const WCHAR **)a2;
  v7 = 1;
  if ( CompareStringOrdinal(v6, *(_DWORD *)(a2 + 16), *v5, v4, 1) != 2 )
  {
    v8 = (const WCHAR *)(a2 + 32);
    if ( *(_QWORD *)(a2 + 56) >= 8uLL )
      v8 = *(const WCHAR **)v8;
    if ( CompareStringOrdinal(v8, *(_DWORD *)(a2 + 48), (*a1)[1], *(_DWORD *)a1[2], 1) != 2 )
      return 0;
  }
  return v7;
}
