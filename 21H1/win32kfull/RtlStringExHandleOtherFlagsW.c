/*
 * XREFs of RtlStringExHandleOtherFlagsW @ 0x1CCE57
 * Callers:
 *     ?RtlStringCchPrintfExW@@YAJPAGIPAPAGPAIKPBGZZ @ 0xE25C0 (-RtlStringCchPrintfExW@@YAJPAGIPAPAGPAIKPBGZZ.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

NTSTATUS __stdcall RtlStringExHandleOtherFlagsW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        size_t cchOriginalDestLength,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  size_t v6; // edx
  _WORD *v7; // ecx
  __int16 v8; // ax
  _WORD *v9; // ebx
  size_t v10; // edi
  _DWORD *v11; // edx
  _DWORD *v12; // ecx
  _WORD *v13; // eax

  v8 = (__int16)ppszDestEnd;
  v9 = v7;
  v10 = v6 >> 1;
  if ( v6 >> 1 && ((unsigned __int16)ppszDestEnd & 0x1000) != 0 )
  {
    *(_DWORD *)cbDest = v7;
    *(_DWORD *)cchOriginalDestLength = v10;
    *v7 = 0;
  }
  if ( ((unsigned __int16)ppszDestEnd & 0x400) != 0 )
  {
    memset(v7, (unsigned __int8)ppszDestEnd, v6);
    if ( (_BYTE)ppszDestEnd )
    {
      if ( !v10 )
        return 0;
      v11 = (_DWORD *)cbDest;
      v12 = (_DWORD *)cchOriginalDestLength;
      v13 = &v9[v10 - 1];
      *v13 = 0;
      *(_DWORD *)cbDest = v13;
      *(_DWORD *)cchOriginalDestLength = 1;
    }
    else
    {
      v11 = (_DWORD *)cbDest;
      v12 = (_DWORD *)cchOriginalDestLength;
      *(_DWORD *)cbDest = v9;
      *(_DWORD *)cchOriginalDestLength = v10;
    }
    v8 = (__int16)ppszDestEnd;
  }
  else
  {
    v12 = (_DWORD *)cchOriginalDestLength;
    v11 = (_DWORD *)cbDest;
  }
  if ( v10 && (v8 & 0x800) != 0 )
  {
    *v11 = v9;
    *v12 = v10;
    *v9 = 0;
  }
  return 0;
}
