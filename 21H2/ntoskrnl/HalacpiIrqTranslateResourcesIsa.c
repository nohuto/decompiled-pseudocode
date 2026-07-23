/*
 * XREFs of HalacpiIrqTranslateResourcesIsa @ 0x1407C0F10
 * Callers:
 *     <none>
 * Callees:
 *     HalpIsInterruptTypeSecondary @ 0x1403C56C0 (HalpIsInterruptTypeSecondary.c)
 *     TranslateGlobalVectorToIsaVector @ 0x1407C1208 (TranslateGlobalVectorToIsaVector.c)
 */

__int64 __fastcall HalacpiIrqTranslateResourcesIsa(
        __int64 a1,
        __int128 *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        _OWORD *a7)
{
  __int128 v7; // xmm0
  _OWORD *v8; // rbx
  char v10; // bp
  unsigned int v13; // edx
  __int64 result; // rax
  unsigned int v15; // ecx
  _DWORD *v16; // rax
  unsigned int v17; // edx
  int v18; // [rsp+48h] [rbp+10h] BYREF

  v7 = *a2;
  v8 = a7;
  v18 = 0;
  v10 = 0;
  *a7 = v7;
  *((_DWORD *)v8 + 4) = *((_DWORD *)a2 + 4);
  v13 = *((_DWORD *)a2 + 2);
  if ( v13 + 0x100000 <= 0xFFFFE || HalpIsInterruptTypeSecondary(0, v13) )
    return 0LL;
  if ( !a3 )
  {
    *((_WORD *)v8 + 2) = *((_WORD *)HalpPicVectorRedirect + 2 * *((unsigned __int16 *)a2 + 2));
    *((_DWORD *)v8 + 2) = *((_DWORD *)HalpPicVectorRedirect + *((unsigned int *)a2 + 2));
    return 0LL;
  }
  if ( a3 != 1 )
    return 0LL;
  result = TranslateGlobalVectorToIsaVector(*((unsigned __int16 *)a2 + 2), &v18);
  if ( (int)result >= 0 )
  {
    *((_WORD *)v8 + 2) = v18;
    result = TranslateGlobalVectorToIsaVector(*((unsigned int *)a2 + 2), &v18);
    if ( (int)result >= 0 )
    {
      *((_DWORD *)v8 + 2) = v18;
      if ( *((_WORD *)v8 + 2) == 9 )
      {
        v15 = 0;
        if ( a4 )
        {
          v16 = (_DWORD *)(a5 + 12);
          while ( 1 )
          {
            v17 = *(v16 - 1);
            if ( v17 >= 9 && *v16 <= 9u )
              break;
            if ( v17 >= 2 && *v16 <= 2u )
              v10 = 1;
            ++v15;
            v16 += 8;
            if ( v15 >= a4 )
              goto LABEL_20;
          }
          v10 = 0;
LABEL_20:
          if ( v10 )
          {
            *((_WORD *)v8 + 2) = 2;
            *((_DWORD *)v8 + 2) = 2;
          }
        }
      }
      return 0LL;
    }
  }
  return result;
}
