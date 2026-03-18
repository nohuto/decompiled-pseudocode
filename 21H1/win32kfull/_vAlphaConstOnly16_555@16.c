/*
 * XREFs of _vAlphaConstOnly16_555@16 @ 0xF9438
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall vAlphaConstOnly16_555(__int16 *a1, unsigned __int16 *a2, int a3, int a4)
{
  int result; // eax
  __int16 *i; // edi
  int v7; // ebx
  int v8; // edx
  unsigned int v9; // [esp+0h] [ebp-28h]
  __int16 v10; // [esp+4h] [ebp-24h]

  result = BYTE2(a4);
  for ( i = a1;
        i != &a1[a3];
        *(i - 1) = (((unsigned int)&loc_F83E0 & ((((unsigned int)&loc_F83E0 & v7) >> 5) + v7)) >> 5) | (v8 + ((unsigned __int16)(v8 & 0x3E0) >> 5)) & 0x3E0 )
  {
    v10 = *i;
    v9 = *a2;
    v7 = 31 * (v10 & 0x7C1F) + BYTE2(a4) * ((v9 & 0x7C1F) - (v10 & 0x7C1F)) + 16400;
    v8 = BYTE2(a4) * (((v9 >> 5) & 0x1F) - ((unsigned __int16)(v10 & 0x3E0) >> 5))
       + 16400
       + 31 * ((unsigned __int16)(v10 & 0x3E0) >> 5);
    ++a2;
    ++i;
  }
  return result;
}
