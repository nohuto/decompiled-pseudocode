/*
 * XREFs of sub_180019FC0 @ 0x180019FC0
 * Callers:
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 *     sub_180017D14 @ 0x180017D14 (sub_180017D14.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_180019FC0(HMODULE hModule, HRSRC hResInfo, char a3)
{
  HGLOBAL Resource; // rax
  char *v7; // rbx
  char *v8; // rcx
  int v9; // edi

  Resource = LoadResource(hModule, hResInfo);
  if ( Resource )
  {
    v7 = (char *)LockResource(Resource);
    if ( v7 )
    {
      v8 = &v7[SizeofResource(hModule, hResInfo)];
      v9 = a3 & 0xF;
      if ( v9 )
      {
        while ( v7 < v8 )
        {
          v7 += 2 * *(unsigned __int16 *)v7 + 2;
          if ( !--v9 )
            goto LABEL_6;
        }
      }
      else
      {
LABEL_6:
        if ( v7 < v8 && *(_WORD *)v7 )
          return v7;
      }
    }
  }
  return 0LL;
}
