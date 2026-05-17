/*
 * XREFs of _RtlpStdListRemove@8 @ 0x4B3694A1
 * Callers:
 *     _RtlStdReleaseStackTrace@8 @ 0x4B369090 (_RtlStdReleaseStackTrace@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RtlpStdListRemove(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v2; // esi
  _DWORD *result; // eax

  v2 = *a1;
  if ( *a1 )
  {
    while ( v2 != a2 )
    {
      result = (_DWORD *)*v2;
      a1 = (_DWORD **)v2;
      v2 = result;
      if ( !result )
        goto LABEL_4;
    }
    result = (_DWORD *)*a2;
    *a1 = (_DWORD *)*a2;
  }
  else
  {
LABEL_4:
    __debugbreak();
  }
  return result;
}
