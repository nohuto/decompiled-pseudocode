/*
 * XREFs of _A_SHAUpdate@12 @ 0x4B2E7BC0
 * Callers:
 *     _RtlCreateServiceSid@12 @ 0x4B2AC190 (_RtlCreateServiceSid@12.c)
 *     _A_SHAFinal@8 @ 0x4B2E7AE0 (_A_SHAFinal@8.c)
 *     _RtlCreateVirtualAccountSid@16 @ 0x4B3461A0 (_RtlCreateVirtualAccountSid@16.c)
 * Callees:
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

char *__userpurge A_SHAUpdate@<eax>(int a1@<esi>, _DWORD *a2, char *Src, unsigned int a4)
{
  unsigned int v4; // ebx
  char *v5; // edi
  unsigned int v6; // eax
  int v7; // ecx
  char *result; // eax
  _DWORD *v9; // edx
  unsigned int v10; // edi
  bool v11; // zf
  size_t v12; // [esp-8h] [ebp-20h]
  size_t v13; // [esp-4h] [ebp-1Ch]
  unsigned int v14; // [esp+Ch] [ebp-Ch]
  unsigned int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  char *v17; // [esp+14h] [ebp-4h]

  v4 = a4;
  v5 = (char *)a2;
  v6 = a4 + a2[22];
  v7 = a2[22] & 0x3F;
  v16 = v7;
  a2[22] = v6;
  if ( v6 < a4 )
    ++a2[21];
  HIDWORD(v12) = a1;
  if ( v7 && (v14 = v7 + a4, v7 + a4 >= 0x40) )
  {
    LODWORD(v12) = 64 - v7;
    memcpy((char *)a2 + v7, Src, v12);
    v4 = v14 - 64;
    v17 = &Src[64 - v16];
    SHATrnsfrm(SHATrnsfrm, a2 + 16, a2);
    v16 = 0;
    result = v17;
  }
  else
  {
    result = Src;
    v17 = Src;
  }
  if ( v4 >= 0x40 )
  {
    v9 = a2 + 16;
    if ( ((unsigned __int8)result & 3) != 0 )
    {
      v15 = v4 >> 6;
      do
      {
        qmemcpy(v5, result, 0x40u);
        v5 = (char *)a2;
        SHATrnsfrm(SHATrnsfrm, v9, a2);
        v9 = a2 + 16;
        result = v17 + 64;
        v4 -= 64;
        v11 = v15-- == 1;
        v17 += 64;
      }
      while ( !v11 );
    }
    else
    {
      v10 = v4 >> 6;
      do
      {
        SHATrnsfrm(SHATrnsfrm, v9, result);
        v4 -= 64;
        v9 = a2 + 16;
        result = v17 + 64;
        v17 += 64;
        --v10;
      }
      while ( v10 );
      v5 = (char *)a2;
    }
  }
  if ( v4 )
  {
    LODWORD(v13) = v4;
    return (char *)memcpy(&v5[v16], result, v13);
  }
  return result;
}
