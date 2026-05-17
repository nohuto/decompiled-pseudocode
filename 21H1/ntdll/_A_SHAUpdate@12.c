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

char *__stdcall A_SHAUpdate(_DWORD *a1, char *Src, unsigned int a3)
{
  size_t v3; // ebx
  char *v4; // edi
  unsigned int v5; // eax
  int v6; // ecx
  char *result; // eax
  _DWORD *v8; // edx
  size_t v9; // edi
  bool v10; // zf
  unsigned int v11; // [esp+Ch] [ebp-Ch]
  size_t v12; // [esp+Ch] [ebp-Ch]
  int v13; // [esp+10h] [ebp-8h]
  char *v14; // [esp+14h] [ebp-4h]

  v3 = a3;
  v4 = (char *)a1;
  v5 = a3 + a1[22];
  v6 = a1[22] & 0x3F;
  v13 = v6;
  a1[22] = v5;
  if ( v5 < a3 )
    ++a1[21];
  if ( v6 && (v11 = v6 + a3, v6 + a3 >= 0x40) )
  {
    memcpy((char *)a1 + v6, Src, 64 - v6);
    v3 = v11 - 64;
    v14 = &Src[64 - v13];
    SHATrnsfrm(SHATrnsfrm, a1 + 16, a1);
    v13 = 0;
    result = v14;
  }
  else
  {
    result = Src;
    v14 = Src;
  }
  if ( v3 >= 0x40 )
  {
    v8 = a1 + 16;
    if ( ((unsigned __int8)result & 3) != 0 )
    {
      v12 = v3 >> 6;
      do
      {
        qmemcpy(v4, result, 0x40u);
        v4 = (char *)a1;
        SHATrnsfrm(SHATrnsfrm, v8, a1);
        v8 = a1 + 16;
        result = v14 + 64;
        v3 -= 64;
        v10 = v12-- == 1;
        v14 += 64;
      }
      while ( !v10 );
    }
    else
    {
      v9 = v3 >> 6;
      do
      {
        SHATrnsfrm(SHATrnsfrm, v8, result);
        v3 -= 64;
        v8 = a1 + 16;
        result = v14 + 64;
        v14 += 64;
        --v9;
      }
      while ( v9 );
      v4 = (char *)a1;
    }
  }
  if ( v3 )
    return (char *)memcpy(&v4[v13], result, v3);
  return result;
}
