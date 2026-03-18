/*
 * XREFs of KappxParsePackageFullNameFromToken @ 0x1C03865C8
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C004D840 (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     KappxParseString @ 0x1C03866F4 (KappxParseString.c)
 *     KappxSafeSearch @ 0x1C0386790 (KappxSafeSearch.c)
 */

__int64 __fastcall KappxParsePackageFullNameFromToken(const void **a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *Pool2; // rax
  char *v6; // r14
  unsigned __int16 v8; // di
  unsigned __int16 v9; // di
  char *v10; // r15
  int v11; // ebp
  unsigned __int16 v12; // ax
  __int64 v13; // rsi
  int v14; // ebx

  Pool2 = (char *)ExAllocatePool2(256LL, *(unsigned __int16 *)a1, 1483763777LL, a4);
  v6 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v8 = *(_WORD *)a1;
  memmove(Pool2, a1[1], *(unsigned __int16 *)a1);
  v9 = v8 >> 1;
  v10 = v6;
  v11 = 0;
  while ( 1 )
  {
    v12 = KappxSafeSearch(v10, v9, 95LL);
    v13 = v12;
    if ( v12 == v9 && v11 != 4 )
    {
      v14 = -2147483643;
LABEL_14:
      ExFreePoolWithTag(v6, 0x58707041u);
      return (unsigned int)v14;
    }
    if ( !v11 )
      goto LABEL_12;
    if ( v11 != 1 && v11 != 2 )
      break;
    v14 = 0;
LABEL_13:
    v10 += 2 * v13 + 2;
    v9 += -1 - v13;
    if ( (unsigned int)++v11 >= 5 )
      goto LABEL_14;
  }
  if ( (unsigned int)(v11 - 3) <= 1 )
  {
LABEL_12:
    v14 = KappxParseString(v10);
    if ( v14 < 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return 0xFFFFFFFFLL;
}
