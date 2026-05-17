/*
 * XREFs of StringCbLengthW @ 0x18006C118
 * Callers:
 *     WerEscalationReadImageVersionInfoForModuleBase @ 0x18006BE30 (WerEscalationReadImageVersionInfoForModuleBase.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCbLengthW(STRSAFE_PCNZWCH psz, size_t cbMax, size_t *pcbLength)
{
  __int64 v3; // rdx
  __int64 v4; // r9
  HRESULT v5; // ecx

  v3 = 0LL;
  if ( psz )
  {
    v4 = 16LL;
    do
    {
      if ( !*psz )
        break;
      ++psz;
      --v4;
    }
    while ( v4 );
    v5 = v4 == 0 ? 0x80070057 : 0;
    if ( v4 )
      v3 = 16 - v4;
    else
      v3 = 0LL;
  }
  else
  {
    v5 = -2147024809;
  }
  if ( pcbLength )
  {
    if ( v5 < 0 )
      *pcbLength = 0LL;
    else
      *pcbLength = 2 * v3;
  }
  return v5;
}
