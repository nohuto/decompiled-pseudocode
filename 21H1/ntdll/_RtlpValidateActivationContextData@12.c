/*
 * XREFs of _RtlpValidateActivationContextData@12 @ 0x4B2E33ED
 * Callers:
 *     _RtlCreateActivationContext@24 @ 0x4B2E3290 (_RtlCreateActivationContext@24.c)
 * Callees:
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpValidateActivationContextData(int a1, _DWORD *a2, int a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // ebx
  unsigned int v5; // esi

  if ( *a2 == 2020893505 && a2[2] == 1 )
  {
    v3 = a2[4];
    if ( !v3 || (v3 & 3) != 0 )
    {
      DbgPrintEx(51, 0, (int)"SXS: Warning: Activation context data at %p missing default TOC\n", (int)a2);
    }
    else
    {
      v4 = a2[6];
      if ( !v4 || (v4 & 3) != 0 )
      {
        DbgPrintEx(51, 0, (int)"SXS: Warning: Activation context data at %p lacks assembly roster\n", (int)a2);
      }
      else
      {
        v5 = a2[3];
        if ( v3 >= v5 || v3 + 16 > v5 )
        {
          DbgPrintEx(51, 0, (int)"SXS: Activation context data at %p has invalid TOC header offset\n", (int)a2);
        }
        else if ( *(_DWORD *)((char *)a2 + v3) < 0x10u )
        {
          DbgPrintEx(51, 0, (int)"SXS: Activation context data at %p has TOC header too small (%lu)\n", (int)a2);
        }
        else if ( *(_DWORD *)((char *)a2 + v3 + 8) >= v5
               || (*((_BYTE *)a2 + v3 + 8) & 3) != 0
               || *(_DWORD *)((char *)a2 + v3 + 8) + 16 * *(_DWORD *)((char *)a2 + v3 + 4) > v5 )
        {
          DbgPrintEx(51, 0, (int)"SXS: Activation context data at %p has invalid TOC entry array offset\n", (int)a2);
        }
        else if ( v4 >= v5 || v4 + 20 > v5 )
        {
          DbgPrintEx(51, 0, (int)"SXS: Activation context data at %p has invalid assembly roster offset\n", (int)a2);
        }
        else
        {
          if ( *(_DWORD *)((char *)a2 + v4) >= 0x14u )
            return 0;
          DbgPrintEx(
            51,
            0,
            (int)"SXS: Activation context data at %p has assembly roster header too small (%lu)\n",
            (int)a2);
        }
      }
    }
  }
  return -1072365565;
}
