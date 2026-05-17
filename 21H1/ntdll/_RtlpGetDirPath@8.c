/*
 * XREFs of _RtlpGetDirPath@8 @ 0x4B2B340C
 * Callers:
 *     _RtlpComputePath@16 @ 0x4B2B2EA8 (_RtlpComputePath@16.c)
 * Callees:
 *     _wcschr @ 0x4B2FA680 (_wcschr.c)
 *     _wcsrchr @ 0x4B2FA900 (_wcsrchr.c)
 */

const wchar_t *__fastcall RtlpGetDirPath(wchar_t *Str, _DWORD *a2)
{
  const wchar_t *v2; // esi
  wchar_t *v4; // eax
  wchar_t *v5; // edi
  wchar_t *v6; // eax
  _DWORD *SubSystemTib; // eax
  int v9; // esi

  v2 = Str;
  if ( !Str )
  {
    SubSystemTib = NtCurrentTeb()->NtTib.SubSystemTib;
    if ( SubSystemTib && (v9 = SubSystemTib[1]) != 0 )
      v2 = *(const wchar_t **)(v9 + 4);
    else
      v2 = *(const wchar_t **)(LdrpImageEntry + 40);
  }
  v4 = wcschr(v2, 0x5Cu);
  v5 = v4;
  if ( v4 )
  {
    v6 = wcsrchr(v4, 0x5Cu);
    if ( v6 == v5 )
      ++v6;
  }
  else
  {
    v6 = 0;
  }
  if ( v6 )
  {
    *a2 = (char *)v6 - (char *)v2;
    return v2;
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}
