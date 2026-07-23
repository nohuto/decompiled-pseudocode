/*
 * XREFs of DrvDbSplitDeviceIdDriverInfMatch @ 0x14073BD54
 * Callers:
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1407350B0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     RtlStringCchCopyNExW @ 0x140253584 (RtlStringCchCopyNExW.c)
 *     wcschr @ 0x1403D4080 (wcschr.c)
 *     wcstol @ 0x1403D4604 (wcstol.c)
 */

__int64 __fastcall DrvDbSplitDeviceIdDriverInfMatch(
        STRSAFE_PCNZWCH pszSrc,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        __int64 a4)
{
  NTSTATUS v5; // r15d
  unsigned int v7; // r14d
  char v9; // r12
  wchar_t *v10; // rax
  wchar_t *v11; // rdi
  __int64 v12; // rsi
  wchar_t *v13; // rax
  wchar_t *v14; // r14
  int v15; // eax
  unsigned int v16; // eax
  unsigned int v18; // eax
  unsigned int v19; // [rsp+80h] [rbp+18h]

  v19 = cchDest;
  v5 = 0;
  v7 = cchDest;
  v9 = -1;
  v10 = wcschr(pszSrc, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10 - pszSrc;
    if ( a4 )
    {
      v13 = wcschr(v10 + 1, 0x5Cu);
      v14 = v13;
      if ( v13 )
      {
        *v13 = 0;
        v18 = wcstol(v13 + 1, 0LL, 16);
        if ( v18 > 0xFF )
          LOBYTE(v18) = -1;
        v9 = v18;
      }
      if ( v11[1] == 42 )
      {
        *(_BYTE *)a4 = 3;
        LOWORD(v16) = 0;
      }
      else
      {
        v15 = wcstol(v11 + 1, 0LL, 16);
        if ( v15 )
        {
          v16 = v15 - 1;
          *(_BYTE *)a4 = 2;
          if ( v16 > 0xFFFF )
            LOWORD(v16) = -1;
        }
        else
        {
          *(_BYTE *)a4 = 1;
          LOWORD(v16) = 0;
        }
      }
      *(_WORD *)(a4 + 2) = v16;
      if ( v14 )
        *v14 = 92;
      v7 = v19;
    }
  }
  else
  {
    v12 = -1LL;
    do
      ++v12;
    while ( pszSrc[v12] );
    if ( a4 )
    {
      *(_BYTE *)a4 = 0;
      *(_WORD *)(a4 + 2) = 0;
    }
  }
  if ( !pszDest || (v5 = RtlStringCchCopyNExW(pszDest, v7, pszSrc, (unsigned int)v12, 0LL, 0LL, 0x900u), v5 >= 0) )
  {
    if ( a4 )
      *(_BYTE *)(a4 + 1) = v9;
  }
  return (unsigned int)v5;
}
