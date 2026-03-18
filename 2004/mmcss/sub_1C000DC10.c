/*
 * XREFs of sub_1C000DC10 @ 0x1C000DC10
 * Callers:
 *     sub_1C000D7E0 @ 0x1C000D7E0 (sub_1C000D7E0.c)
 * Callees:
 *     sub_1C000DD00 @ 0x1C000DD00 (sub_1C000DD00.c)
 */

__int64 __fastcall sub_1C000DC10(HANDLE KeyHandle, char *a2, __int64 a3)
{
  __int64 v3; // rbx
  char v5; // dl
  __int64 result; // rax
  char v9; // cl
  char v10; // cl

  *(_BYTE *)(a3 + 3) &= 0x8Fu;
  LODWORD(v3) = 0;
  v5 = *(_BYTE *)(a3 + 3);
  if ( off_1C0010000 )
  {
    while ( 1 )
    {
      result = sub_1C000DD00(KeyHandle);
      if ( (int)result < 0 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( !*(&off_1C0010000 + v3) )
      {
        v5 = *(_BYTE *)(a3 + 3);
        goto LABEL_5;
      }
    }
  }
  else
  {
LABEL_5:
    v9 = *a2;
    *(_QWORD *)(a3 + 32) = *((unsigned int *)a2 + 4);
    *(_DWORD *)(a3 + 4) = *((_DWORD *)a2 + 6);
    *(_BYTE *)(a3 + 1) = a2[8];
    *(_BYTE *)(a3 + 2) = a2[40];
    v10 = 2 * (a2[48] & 1 | (2 * (a2[32] & 1 | (4 * (v9 & 7)))));
    *(_BYTE *)(a3 + 40) = a2[56];
    *(_BYTE *)(a3 + 3) = v5 & 0x89 | v10;
    return 0LL;
  }
  return result;
}
