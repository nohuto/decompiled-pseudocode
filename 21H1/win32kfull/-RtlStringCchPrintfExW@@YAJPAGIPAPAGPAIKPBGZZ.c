/*
 * XREFs of ?RtlStringCchPrintfExW@@YAJPAGIPAPAGPAIKPBGZZ @ 0xE25C0
 * Callers:
 *     ?GrepDwmCreateComposedEvent@@YGJPAUDwmState@@@Z @ 0xE243C (-GrepDwmCreateComposedEvent@@YGJPAUDwmState@@@Z.c)
 * Callees:
 *     RtlStringVPrintfWorkerW_0 @ 0xE268C (RtlStringVPrintfWorkerW_0.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1CCE57 (RtlStringExHandleOtherFlagsW.c)
 */

int RtlStringCchPrintfExW(
        unsigned __int16 *a1,
        unsigned int a2,
        unsigned __int16 **a3,
        unsigned int *a4,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        unsigned __int16 *cchDest,
        ...)
{
  NTSTRSAFE_PWSTR *v6; // edx
  int v7; // esi
  unsigned int v8; // eax
  size_t v9; // ecx
  NTSTATUS v10; // eax
  unsigned __int16 *v11; // edx
  wchar_t *v13; // [esp+0h] [ebp-18h]
  va_list v14; // [esp+4h] [ebp-14h]
  unsigned int v15; // [esp+Ch] [ebp-Ch]
  wchar_t pszDest[2]; // [esp+10h] [ebp-8h] BYREF
  size_t cbDest; // [esp+14h] [ebp-4h] BYREF
  va_list pcchNewDestLength; // [esp+38h] [ebp+20h] BYREF

  va_start(pcchNewDestLength, cchDest);
  v6 = ppszDestEnd;
  v7 = 0;
  if ( ((unsigned __int16)ppszDestEnd & 0x100) != 0 )
  {
    if ( a1 || !a2 )
    {
LABEL_3:
      if ( a2 <= 0x7FFFFFFF )
        goto LABEL_4;
    }
  }
  else if ( a2 )
  {
    goto LABEL_3;
  }
  v7 = -1073741811;
LABEL_4:
  if ( v7 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v8 = a2;
    cbDest = (size_t)a1;
    *(_DWORD *)pszDest = a2;
    v9 = (size_t)cchDest;
    if ( ((unsigned __int16)ppszDestEnd & 0x100) != 0 && !cchDest )
      v9 = (size_t)byte_FC318;
    v7 = 0;
    if ( ((unsigned int)ppszDestEnd & 0xFFFFE000) != 0 )
    {
      v7 = -1073741811;
      if ( a2 )
      {
        v9 = 0;
        *a1 = 0;
      }
    }
    else if ( a2 )
    {
      *(_DWORD *)pszDest = 0;
      v10 = RtlStringVPrintfWorkerW_0(pszDest, v9, (size_t *)pcchNewDestLength, v13, v14);
      v9 = *(_DWORD *)pszDest;
      v7 = v10;
      v8 = a2 - *(_DWORD *)pszDest;
      v15 = a2 - *(_DWORD *)pszDest;
      *(_DWORD *)pszDest = a2 - *(_DWORD *)pszDest;
      v11 = &a1[v9];
      cbDest = (size_t)v11;
      if ( v7 >= 0 )
      {
        if ( ((unsigned __int16)ppszDestEnd & 0x200) == 0 || v8 <= 1 || 2 * v8 <= 2 )
          goto LABEL_10;
        memset(v11 + 1, (unsigned __int8)ppszDestEnd, 2 * v8 - 2);
        v8 = v15;
LABEL_28:
        v11 = (unsigned __int16 *)cbDest;
LABEL_10:
        if ( a3 )
          *a3 = v11;
        if ( a4 )
          *a4 = v8;
        return v7;
      }
      v6 = ppszDestEnd;
    }
    else
    {
      v6 = ppszDestEnd;
      if ( !*(_WORD *)v9 )
        goto LABEL_28;
      v7 = a1 != 0 ? -2147483643 : -1073741811;
    }
    if ( ((unsigned __int16)v6 & 0x1C00) != 0 && a2 )
    {
      RtlStringExHandleOtherFlagsW((NTSTRSAFE_PWSTR)v9, (size_t)&cbDest, (size_t)pszDest, v6, (size_t *)v13, (ULONG)v14);
      v8 = *(_DWORD *)pszDest;
    }
    if ( v7 >= 0 || v7 == -2147483643 )
      goto LABEL_28;
  }
  return v7;
}
