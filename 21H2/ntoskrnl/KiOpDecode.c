/*
 * XREFs of KiOpDecode @ 0x140261E80
 * Callers:
 *     KiPreprocessFault @ 0x1402618D0 (KiPreprocessFault.c)
 * Callees:
 *     KiOpFetchNextByte @ 0x140262008 (KiOpFetchNextByte.c)
 *     KiOpIsPrefix @ 0x140262030 (KiOpIsPrefix.c)
 *     KiOpLocateDecodeEntry @ 0x1402620D4 (KiOpLocateDecodeEntry.c)
 *     KiOpDecodeModRM @ 0x1403CF6CC (KiOpDecodeModRM.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiOpFetchBytes @ 0x14052492C (KiOpFetchBytes.c)
 */

__int64 __fastcall KiOpDecode(__int64 a1, __int64 a2, char a3, int a4, _DWORD *a5)
{
  _DWORD *v9; // rbx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int16 v16[2]; // [rsp+20h] [rbp-38h] BYREF
  int v17[13]; // [rsp+24h] [rbp-34h] BYREF
  char v18; // [rsp+68h] [rbp+10h] BYREF
  char v19; // [rsp+70h] [rbp+18h] BYREF
  char v20; // [rsp+78h] [rbp+20h] BYREF

  v18 = 0;
  v20 = 0;
  v17[0] = 0;
  v19 = 0;
  v16[0] = 0;
  v9 = a5;
  memset(a5, 0, 0x68uLL);
  v9[15] = a4;
  v10 = *(_QWORD *)(a2 + 248);
  *(_QWORD *)v9 = v10;
  *((_QWORD *)v9 + 2) = v10;
  *((_QWORD *)v9 + 1) = v10 + 16;
  *((_QWORD *)v9 + 4) = a1;
  *((_QWORD *)v9 + 3) = a2;
  *((_BYTE *)v9 + 81) = a3;
  *((_BYTE *)v9 + 97) = 0;
  if ( *(_WORD *)(a2 + 56) == 35 )
    *((_BYTE *)v9 + 58) = 1;
  do
  {
    result = KiOpFetchNextByte(v9, &v19);
    if ( (int)result >= 0 )
    {
      LOBYTE(v12) = v19;
      result = KiOpIsPrefix(v9, v12, &v20);
      v13 = (unsigned int)result;
      if ( (int)result >= 0 )
        continue;
    }
    return result;
  }
  while ( v20 );
  if ( v19 != 15
    || (*((_BYTE *)v9 + 57) = 1, result = KiOpFetchNextByte(v9, &v19), v13 = (unsigned int)result, (int)result >= 0) )
  {
    *((_QWORD *)v9 + 5) = *((_QWORD *)v9 + 2) - 1LL;
    *((_BYTE *)v9 + 56) = v19;
    if ( (a4 & 0x8000000) != 0 )
    {
      *((_QWORD *)v9 + 11) = 0LL;
    }
    else
    {
      result = KiOpLocateDecodeEntry(v9, v13);
      v13 = (unsigned int)result;
      if ( (int)result < 0 )
        return result;
    }
    v14 = *((_QWORD *)v9 + 11);
    if ( !v14 )
      return 0LL;
    if ( (*(_DWORD *)(v14 + 12) & 4) == 0
      || (result = KiOpDecodeModRM(v9, v13), LODWORD(v13) = result, (int)result >= 0) )
    {
      if ( (*(_DWORD *)(v14 + 12) & 1) != 0 )
      {
        result = KiOpFetchBytes(v9, 1LL, &v18);
        LODWORD(v13) = result;
        if ( (int)result >= 0 )
        {
          v15 = v18;
LABEL_27:
          *((_QWORD *)v9 + 9) = v15;
          return (unsigned int)v13;
        }
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)v9 + 11) + 12LL) & 2) == 0 )
          return (unsigned int)v13;
        if ( (v9[12] & 0x40) != 0 )
        {
          result = KiOpFetchBytes(v9, 2LL, v16);
          LODWORD(v13) = result;
          if ( (int)result >= 0 )
          {
            v15 = v16[0];
            goto LABEL_27;
          }
        }
        else
        {
          result = KiOpFetchBytes(v9, 4LL, v17);
          LODWORD(v13) = result;
          if ( (int)result >= 0 )
          {
            v15 = v17[0];
            goto LABEL_27;
          }
        }
      }
    }
  }
  return result;
}
