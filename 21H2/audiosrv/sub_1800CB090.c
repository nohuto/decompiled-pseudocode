/*
 * XREFs of sub_1800CB090 @ 0x1800CB090
 * Callers:
 *     sub_1800C6894 @ 0x1800C6894 (sub_1800C6894.c)
 *     sub_1800C8E8C @ 0x1800C8E8C (sub_1800C8E8C.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_1800CB090(HMODULE hModule, HRSRC hResInfo, char a3)
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
