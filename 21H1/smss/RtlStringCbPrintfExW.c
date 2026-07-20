/*
 * XREFs of RtlStringCbPrintfExW @ 0x140013A40
 * Callers:
 *     SmpProcessFileRenames @ 0x140009348 (SmpProcessFileRenames.c)
 *     SmpLogPFROError @ 0x1400147F0 (SmpLogPFROError.c)
 * Callees:
 *     memset_0 @ 0x14000EE13 (memset_0.c)
 *     RtlStringExHandleOtherFlagsW @ 0x140013C04 (RtlStringExHandleOtherFlagsW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x140013CC4 (RtlStringVPrintfWorkerW_0.c)
 */

NTSTATUS RtlStringCbPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  size_t v7; // rdi
  NTSTATUS v10; // ebx
  size_t v11; // r8
  NTSTRSAFE_PWSTR v12; // r13
  const wchar_t *v13; // r9
  NTSTATUS v14; // eax
  size_t v15; // rcx
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v7 = cbDest >> 1;
  v10 = 0;
  v11 = 3221225485LL;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *pszDest = 0;
    return v10;
  }
  ppszDestEnda = pszDest;
  v12 = pszDest;
  pcchNewDestLength[0] = cbDest >> 1;
  if ( (dwFlags & 0x100) != 0 )
  {
    v13 = (const wchar_t *)&unk_14001ECF8;
    if ( pszFormat )
      v13 = pszFormat;
  }
  else
  {
    v13 = pszFormat;
  }
  v10 = 0;
  if ( (dwFlags & 0xFFFFE000) == 0 )
  {
    if ( v7 )
    {
      pcchNewDestLength[0] = 0LL;
      v14 = RtlStringVPrintfWorkerW_0(pszDest, v7, pcchNewDestLength, v13, va);
      v15 = pcchNewDestLength[0];
      v10 = v14;
      v7 -= pcchNewDestLength[0];
      pcchNewDestLength[0] = v7;
      v12 = &pszDest[v15];
      ppszDestEnda = v12;
      if ( v14 < 0 )
        goto LABEL_25;
      if ( (dwFlags & 0x200) != 0 )
      {
        v11 = (cbDest & 1) + 2 * v7;
        if ( v11 > 2 )
          memset_0(v12 + 1, (unsigned __int8)dwFlags, v11 - 2);
      }
    }
    else
    {
      if ( !*v13 )
        goto LABEL_30;
      v10 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( v10 < 0 )
      goto LABEL_25;
LABEL_30:
    if ( ppszDestEnd )
      *ppszDestEnd = v12;
    if ( pcbRemaining )
      *pcbRemaining = (cbDest & 1) + 2 * v7;
    return v10;
  }
  v10 = -1073741811;
  if ( v7 )
    *pszDest = 0;
LABEL_25:
  if ( (dwFlags & 0x1C00) != 0 && cbDest )
  {
    RtlStringExHandleOtherFlagsW(pszDest, cbDest, v11, &ppszDestEnda, pcchNewDestLength, dwFlags);
    v12 = ppszDestEnda;
    v7 = pcchNewDestLength[0];
  }
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
    goto LABEL_30;
  return v10;
}
