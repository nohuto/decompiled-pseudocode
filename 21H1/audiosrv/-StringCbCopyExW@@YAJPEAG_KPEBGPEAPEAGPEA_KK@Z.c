/*
 * XREFs of ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x1800BD508
 * Callers:
 *     s_sndevtResolveSoundAlias @ 0x1800BD760 (s_sndevtResolveSoundAlias.c)
 *     ?GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z @ 0x18013390C (-GetSoundRegistryPath@@YAHPEAG_KPEBG22@Z.c)
 * Callees:
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     StringExHandleOtherFlagsW @ 0x1800BB12C (StringExHandleOtherFlagsW.c)
 *     StringCopyWorkerW @ 0x1800BD6D8 (StringCopyWorkerW.c)
 */

__int64 __fastcall StringCbCopyExW(
        STRSAFE_LPWSTR pszDest,
        size_t cbDest,
        STRSAFE_PCNZWCH pszSrc,
        unsigned __int16 **a4,
        unsigned __int64 *a5,
        DWORD a6)
{
  DWORD dwFlags; // r15d
  size_t v8; // rdi
  HRESULT v11; // ebx
  wchar_t *v12; // rbp
  const wchar_t *v13; // rax
  size_t *pcchRemaining; // [rsp+20h] [rbp-48h]
  size_t v16[2]; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchNewDestLength; // [rsp+78h] [rbp+10h] BYREF

  dwFlags = a6;
  v8 = cbDest >> 1;
  v11 = 0;
  if ( (a6 & 0x100) != 0 )
  {
    if ( !pszDest && v8 || v8 > 0x7FFFFFFF )
      v11 = -2147024809;
  }
  else if ( v8 - 1 > 0x7FFFFFFE )
  {
    v11 = -2147024809;
  }
  if ( v11 < 0 )
  {
    if ( v8 )
      *pszDest = 0;
    return (unsigned int)v11;
  }
  pcchNewDestLength = (size_t)pszDest;
  v12 = pszDest;
  v16[0] = cbDest >> 1;
  if ( (a6 & 0x100) != 0 )
  {
    v13 = (const wchar_t *)&unk_18015D744;
    if ( pszSrc )
      v13 = pszSrc;
    pszSrc = v13;
  }
  v11 = 0;
  if ( (a6 & 0xFFFFE000) == 0 )
  {
    if ( v8 )
    {
      pcchNewDestLength = 0LL;
      v11 = StringCopyWorkerW(pszDest, v8, &pcchNewDestLength, pszSrc, (size_t)pcchRemaining);
      v8 -= pcchNewDestLength;
      v16[0] = v8;
      v12 = &pszDest[pcchNewDestLength];
      pcchNewDestLength = (size_t)v12;
      if ( v11 < 0 )
        goto LABEL_24;
      if ( (dwFlags & 0x200) != 0 )
      {
        pszSrc = (STRSAFE_PCNZWCH)((cbDest & 1) + 2 * v8);
        if ( (unsigned __int64)pszSrc > 2 )
          memset_0(v12 + 1, (unsigned __int8)dwFlags, (size_t)(pszSrc - 1));
      }
    }
    else
    {
      if ( !*pszSrc )
        goto LABEL_29;
      v11 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( v11 < 0 )
      goto LABEL_24;
LABEL_29:
    if ( a4 )
      *a4 = v12;
    if ( a5 )
      *a5 = (cbDest & 1) + 2 * v8;
    return (unsigned int)v11;
  }
  v11 = -2147024809;
  if ( v8 )
    *pszDest = 0;
LABEL_24:
  if ( (dwFlags & 0x1C00) != 0 && cbDest )
  {
    StringExHandleOtherFlagsW(pszDest, cbDest, (size_t)pszSrc, (STRSAFE_LPWSTR *)&pcchNewDestLength, v16, dwFlags);
    v12 = (wchar_t *)pcchNewDestLength;
    v8 = v16[0];
  }
  if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147024774 )
    goto LABEL_29;
  return (unsigned int)v11;
}
