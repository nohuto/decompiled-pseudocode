/*
 * XREFs of CheckAccess @ 0x1C0056DD0
 * Callers:
 *     NtUserSystemParametersInfo @ 0x1C01377E0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

bool __fastcall CheckAccess(unsigned int *a1, unsigned int *a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  unsigned int v5; // eax
  bool result; // al

  result = 1;
  if ( UIPrivelegeIsolation::fEnforce )
  {
    v3 = *a1;
    if ( v3 <= *a2 )
    {
      if ( v3 != *a2 )
        return 0;
      v4 = a1[1];
      v5 = a2[1];
      if ( v4 != v5 && v5 != -1 && v4 != -1 )
        return 0;
    }
  }
  return result;
}
