/*
 * XREFs of _LdrpParseForwarderDescription@16 @ 0x4B2E5D96
 * Callers:
 *     _LdrpResolveForwarder@16 @ 0x4B2ED6C1 (_LdrpResolveForwarder@16.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 * Callees:
 *     _RtlCharToInteger@12 @ 0x4B2A8E10 (_RtlCharToInteger@12.c)
 *     _strrchr @ 0x4B2FA0E0 (_strrchr.c)
 */

int __fastcall LdrpParseForwarderDescription(char *Str, int a2, char **a3, PULONG Value)
{
  char *v6; // eax
  char *v7; // esi
  unsigned int v8; // eax
  char *v9; // edi

  v6 = strrchr(Str, 46);
  v7 = v6;
  if ( v6 )
  {
    v8 = v6 - Str;
    if ( v8 <= 0xFFFF )
    {
      *(_DWORD *)(a2 + 4) = Str;
      *(_WORD *)a2 = v8;
      *(_WORD *)(a2 + 2) = v8;
      if ( v7[1] != 35 )
      {
        v9 = v7 + 1;
LABEL_5:
        *a3 = v9;
        return 0;
      }
      v9 = 0;
      if ( RtlCharToInteger(v7 + 2, 0, Value) >= 0 )
        goto LABEL_5;
    }
  }
  return -1073741701;
}
