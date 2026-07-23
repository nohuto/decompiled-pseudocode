/*
 * XREFs of _strncmp @ 0x4B2F9EA0
 * Callers:
 *     _LdrpCheckNxIncompatibleDllSection@4 @ 0x4B2E7618 (_LdrpCheckNxIncompatibleDllSection@4.c)
 *     _LdrpCheckSafeDiscDll@4 @ 0x4B2E7708 (_LdrpCheckSafeDiscDll@4.c)
 *     _LdrpCheckForSafeDiscImage@4 @ 0x4B33155E (_LdrpCheckForSafeDiscImage@4.c)
 *     _RtlValidateCorrelationVector@4 @ 0x4B3623E0 (_RtlValidateCorrelationVector@4.c)
 * Callees:
 *     <none>
 */

int __cdecl strncmp(const char *Str1, const char *Str2, size_t MaxCount)
{
  unsigned int v3; // edx
  const char *v4; // ecx
  const char *v5; // eax
  unsigned __int8 v6; // bl
  int v7; // ecx
  int v9; // eax

  v3 = 0;
  if ( (_DWORD)MaxCount )
  {
    if ( (unsigned int)MaxCount > 4 )
    {
      v4 = Str2;
      v5 = Str1;
      while ( 1 )
      {
        v6 = *v5;
        v5 += 4;
        v4 += 4;
        if ( !v6 || v6 != *(v4 - 4) )
          break;
        v6 = *(v5 - 3);
        if ( !v6 || v6 != *(v4 - 3) )
        {
          v7 = *((unsigned __int8 *)v4 - 3);
          return v6 - v7;
        }
        v6 = *(v5 - 2);
        if ( !v6 || v6 != *(v4 - 2) )
        {
          v7 = *((unsigned __int8 *)v4 - 2);
          return v6 - v7;
        }
        v6 = *(v5 - 1);
        if ( !v6 || v6 != *(v4 - 1) )
        {
          v7 = *((unsigned __int8 *)v4 - 1);
          return v6 - v7;
        }
        v3 += 4;
        if ( v3 >= (int)MaxCount - 4 )
          goto LABEL_20;
      }
      v7 = *((unsigned __int8 *)v4 - 4);
      return v6 - v7;
    }
    v4 = Str2;
    v5 = Str1;
LABEL_20:
    if ( v3 < (unsigned int)MaxCount )
    {
      v9 = v5 - v4;
      while ( 1 )
      {
        v6 = v4[v9];
        if ( !v6 || v6 != *v4 )
          break;
        ++v3;
        ++v4;
        if ( v3 >= (unsigned int)MaxCount )
          return 0;
      }
      v7 = *(unsigned __int8 *)v4;
      return v6 - v7;
    }
  }
  return 0;
}
