/*
 * XREFs of _ExpYDIB_ExpCX @ 0x1C70F2
 * Callers:
 *     _ExpandDIB_CY_ExpCX @ 0x1C7F6C (_ExpandDIB_CY_ExpCX.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ExpYDIB_ExpCX(unsigned int *a1, unsigned __int8 *a2, _BYTE *a3, _BYTE *a4)
{
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // esi
  int v8; // edi
  int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int result; // eax
  bool v13; // zf
  unsigned int *v14; // [esp+Ch] [ebp-10h]
  unsigned int v15; // [esp+14h] [ebp-8h]
  unsigned int v16; // [esp+18h] [ebp-4h]

  do
  {
    v5 = a1[1];
    v16 = *a1;
    v15 = (unsigned __int16)*a1;
    v14 = a1 + 2;
    a2 += 3 * (v15 >> 15);
    v6 = HIWORD(v5) * a2[2];
    v7 = HIWORD(v5) * a2[1];
    v8 = HIWORD(v5) * *a2;
    if ( (_WORD)v5 )
    {
      v6 += (unsigned __int16)v5 * *(a2 - 1);
      v7 += (unsigned __int16)v5 * *(a2 - 2);
      v9 = (unsigned __int16)v5 * *(a2 - 3);
      v10 = HIWORD(v16);
      v8 += v9;
      if ( HIWORD(v16) )
      {
        v6 += v10 * *(a2 - 4);
        v7 += v10 * *(a2 - 5);
        v8 += v10 * *(a2 - 6);
        v11 = v15 & 0xFFFF3FFF;
        if ( (v15 & 0xFFFF3FFF) != 0 )
        {
          v6 += v11 * *(a2 - 7);
          v7 += v11 * *(a2 - 8);
          v8 += v11 * *(a2 - 9);
        }
      }
    }
    a3[2] = (unsigned int)(v6 + 4096) >> 13;
    a3[1] = (unsigned int)(v7 + 4096) >> 13;
    result = (unsigned int)(v8 + 4096) >> 13;
    *a3 = result;
    v13 = a3 + 3 == a4;
    a3 += 3;
    a1 = v14;
  }
  while ( !v13 );
  return result;
}
