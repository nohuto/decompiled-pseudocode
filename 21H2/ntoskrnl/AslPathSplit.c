/*
 * XREFs of AslPathSplit @ 0x14077F888
 * Callers:
 *     SdbpCreateSearchDBContext @ 0x14075B000 (SdbpCreateSearchDBContext.c)
 * Callees:
 *     RtlStringCchCopyNW @ 0x1403710C0 (RtlStringCchCopyNW.c)
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     wcsrchr @ 0x1403D4270 (wcsrchr.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathSplit(
        STRSAFE_PCNZWCH pszSrc,
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR a4,
        int a5,
        NTSTRSAFE_PWSTR a6)
{
  unsigned int v8; // ebp
  wchar_t *v10; // rax
  STRSAFE_PCNZWCH v11; // rdi
  NTSTATUS v12; // ebx
  const wchar_t *v13; // r8
  wchar_t *v14; // rax
  const wchar_t *v15; // rbp
  size_t v16; // rdi
  wchar_t pszDesta[264]; // [rsp+30h] [rbp-258h] BYREF

  *pszDest = 0;
  v8 = cchDest;
  pszDesta[0] = 0;
  *a6 = 0;
  *a4 = 0;
  v10 = wcsrchr(pszSrc, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    v12 = RtlStringCchCopyNW(pszDest, v8, pszSrc, v10 - pszSrc + 1);
    if ( v12 < 0 )
      goto LABEL_12;
  }
  else
  {
    v11 = pszSrc;
  }
  v13 = v11 + 1;
  if ( *v11 != 92 )
    v13 = v11;
  v12 = RtlStringCchCopyW(pszDesta, 0x105uLL, v13);
  if ( v12 < 0 )
    goto LABEL_12;
  v14 = wcsrchr(pszDesta, 0x2Eu);
  v15 = v14;
  if ( v14 )
  {
    v16 = v14 - pszDesta;
    v12 = RtlStringCchCopyNW(a4, 0x104uLL, pszDesta, v16);
    if ( v12 >= 0 )
    {
      a4[v16] = 0;
      v12 = RtlStringCchCopyW(a6, 0x104uLL, v15);
      if ( v12 >= 0 )
        return 0;
    }
LABEL_12:
    AslLogCallPrintf(1LL);
    return (unsigned int)v12;
  }
  v12 = RtlStringCchCopyW(a4, 0x104uLL, pszDesta);
  if ( v12 < 0 )
    goto LABEL_12;
  return 0;
}
