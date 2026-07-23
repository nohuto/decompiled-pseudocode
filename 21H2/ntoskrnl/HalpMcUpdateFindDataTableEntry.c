/*
 * XREFs of HalpMcUpdateFindDataTableEntry @ 0x1403A8F1C
 * Callers:
 *     HalpMcUpdateInitialize @ 0x1407923D0 (HalpMcUpdateInitialize.c)
 * Callees:
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 */

_QWORD *__fastcall HalpMcUpdateFindDataTableEntry(_QWORD *a1)
{
  _QWORD *v1; // rbx

  v1 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 == a1 )
    return 0LL;
  while ( *((_WORD *)v1 + 44) != 24 || wcsicmp((const wchar_t *)v1[12], L"mcupdate.dll") )
  {
    v1 = (_QWORD *)*v1;
    if ( v1 == a1 )
      return 0LL;
  }
  return v1;
}
