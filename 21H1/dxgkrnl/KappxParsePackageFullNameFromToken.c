/*
 * XREFs of KappxParsePackageFullNameFromToken @ 0x1C02C0FE8
 * Callers:
 *     ?RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z @ 0x1C0047E30 (-RegQueryControllerInstallKey@DisjointExperienceConfig@DefaultMultiScreenConfig@@YAJPEAGKPEAK@Z.c)
 * Callees:
 *     memmove @ 0x1C0026580 (memmove.c)
 *     KappxParseString @ 0x1C02C1114 (KappxParseString.c)
 *     KappxSafeSearch @ 0x1C02C11A0 (KappxSafeSearch.c)
 */

__int64 __fastcall KappxParsePackageFullNameFromToken(unsigned __int16 *a1)
{
  char *PoolWithTag; // rax
  char *v3; // r14
  char *v5; // r15
  unsigned __int16 v6; // si
  int v7; // ebp
  unsigned __int16 v8; // ax
  __int64 v9; // rdi
  int v10; // ebx

  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, *a1, 0x58707041u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  memmove(PoolWithTag, *((const void **)a1 + 1), *a1);
  v5 = v3;
  v6 = *a1 >> 1;
  v7 = 0;
  while ( 1 )
  {
    v8 = KappxSafeSearch(v5, v6, 95LL);
    v9 = v8;
    if ( v8 == v6 && v7 != 4 )
    {
      v10 = -2147483643;
LABEL_14:
      ExFreePoolWithTag(v3, 0x58707041u);
      return (unsigned int)v10;
    }
    if ( !v7 )
      goto LABEL_12;
    if ( v7 != 1 && v7 != 2 )
      break;
    v10 = 0;
LABEL_13:
    v5 += 2 * v9 + 2;
    v6 += -1 - v9;
    if ( (unsigned int)++v7 >= 5 )
      goto LABEL_14;
  }
  if ( (unsigned int)(v7 - 3) <= 1 )
  {
LABEL_12:
    v10 = KappxParseString(v5);
    if ( v10 < 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return 0xFFFFFFFFLL;
}
