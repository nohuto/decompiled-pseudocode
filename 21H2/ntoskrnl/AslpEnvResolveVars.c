/*
 * XREFs of AslpEnvResolveVars @ 0x140753F84
 * Callers:
 *     AslEnvExpandStrings2 @ 0x140753DF0 (AslEnvExpandStrings2.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     RtlStringCchCatW @ 0x1403714B0 (RtlStringCchCatW.c)
 *     _wcsnicmp @ 0x1403D2380 (_wcsnicmp.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpEnvResolveVars(
        NTSTRSAFE_PCWSTR pszSrc,
        unsigned int a2,
        wchar_t *a3,
        unsigned int a4,
        __int16 a5,
        __int16 a6,
        unsigned int *a7)
{
  size_t v7; // rdi
  int v9; // ebx
  int v10; // esi
  unsigned int v11; // ebp
  __int64 v12; // r12
  unsigned int v14; // eax
  __int16 v15; // cx
  unsigned __int64 i; // rdi
  NTSTATUS v17; // ebx
  __int64 v18; // rdx
  wchar_t *v19; // rcx
  wchar_t v20; // ax
  wchar_t *v21; // rax
  const char *v23; // r9
  int v24; // r8d
  const wchar_t *v25; // [rsp+70h] [rbp+8h]

  v25 = pszSrc;
  v7 = a4;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0LL;
  while ( 1 )
  {
    if ( v9 )
      goto LABEL_33;
    v14 = dword_140C02D20[6 * v12];
    if ( a2 <= v14 )
      goto LABEL_13;
    if ( !wcsnicmp(pszSrc, off_140C02D10[3 * v12], v14) )
      break;
LABEL_12:
    pszSrc = v25;
LABEL_13:
    if ( (unsigned __int64)++v12 >= 4 )
    {
      if ( !v9 )
      {
        v11 = a2;
        if ( a2 > (unsigned int)v7 )
        {
          v17 = -1073741789;
          *a7 = a2;
          return (unsigned int)v17;
        }
        v17 = RtlStringCchCopyW(a3, (unsigned int)v7, pszSrc);
        if ( v17 < 0 )
        {
          v24 = 1018;
          goto LABEL_44;
        }
      }
LABEL_33:
      v17 = 0;
LABEL_31:
      *a7 = v11;
      return (unsigned int)v17;
    }
  }
  v11 = a2 + dword_140C02D24[6 * v12] - dword_140C02D20[6 * v12];
  if ( v11 > (unsigned int)v7 )
  {
    v17 = -1073741789;
    goto LABEL_31;
  }
  if ( !v12 )
  {
    v15 = a5;
    for ( i = 0LL; i < 14; i += 2LL )
    {
      if ( *(_WORD *)((char *)&unk_140C04970 + i * 8) == v15 && *(_WORD *)((char *)&unk_140C04972 + i * 8) == a6 )
      {
        v17 = 0;
        if ( (unsigned __int64)a4 - 1 > 0x7FFFFFFE )
          v17 = -1073741811;
        if ( v17 < 0 )
        {
          if ( a4 )
            *a3 = 0;
        }
        else
        {
          v18 = a4;
          v19 = a3;
          if ( a4 )
          {
            do
            {
              if ( !(2147483646LL - a4 + v18) )
                break;
              v20 = *(wchar_t *)((char *)v19 + (char *)L"%systemroot%" - (char *)a3);
              if ( !v20 )
                break;
              *v19++ = v20;
              --v18;
            }
            while ( v18 );
          }
          v21 = v19 - 1;
          if ( v18 )
            v21 = v19;
          v17 = v18 != 0 ? 0 : 0x80000005;
          *v21 = 0;
        }
        if ( v17 < 0 )
        {
          v24 = 940;
          goto LABEL_44;
        }
        v17 = RtlStringCchCatW(a3, a4, (&off_140C04978)[i]);
        if ( v17 < 0 )
        {
          v23 = "RtlStringCchCatW failed [%x]";
          v24 = 946;
          goto LABEL_45;
        }
        v17 = RtlStringCchCatW(a3, a4, &v25[dword_140C02D20[0]]);
        if ( v17 < 0 )
        {
          v23 = "RtlStringCchCatW failed [%x]";
          v24 = 952;
          goto LABEL_45;
        }
        v15 = a5;
        v10 = 1;
      }
    }
    if ( v10 )
      goto LABEL_11;
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpEnvResolveVars",
      963,
      (unsigned int)"Invalid combination of Host/Current processor architectures passed to AslpEnvResolveVars Host: %x4 Current: %x4");
    v7 = a4;
  }
  if ( v10 )
  {
LABEL_11:
    v7 = a4;
    v9 = 1;
    goto LABEL_12;
  }
  v17 = RtlStringCchCopyW(a3, v7, (&off_140C02D18)[3 * v12]);
  if ( v17 >= 0 )
  {
    v17 = RtlStringCchCatW(a3, v7, &v25[dword_140C02D20[6 * v12]]);
    if ( v17 < 0 )
    {
      v23 = "RtlStringCchCatW failed [%x]";
      v24 = 986;
      goto LABEL_45;
    }
    goto LABEL_11;
  }
  v24 = 980;
LABEL_44:
  v23 = "RtlStringCchCopyW failed [%x]";
LABEL_45:
  AslLogCallPrintf(1, (unsigned int)"AslpEnvResolveVars", v24, (_DWORD)v23);
  return (unsigned int)v17;
}
