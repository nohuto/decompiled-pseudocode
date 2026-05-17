/*
 * XREFs of sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x4B2EBA54
 * Callers:
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlAssert@16 @ 0x4B34FBC0 (_RtlAssert@16.c)
 */

int __thiscall sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(_BYTE *this)
{
  _DWORD *v2; // ecx
  int v3; // edx
  _DWORD *v4; // ecx
  int v5; // edi
  int v7; // eax
  wchar_t **v8; // edi
  wchar_t *v9; // ecx
  _WORD *v10; // eax
  UNICODE_STRING UnicodeString; // [esp+8h] [ebp-8h] BYREF

  if ( !this )
  {
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", 524, "This != NULL");
    return -1073741595;
  }
  if ( !this[40] )
    goto LABEL_8;
  v2 = (_DWORD *)*((_DWORD *)this + 8);
  if ( v2 && v2[1] )
  {
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      532,
      "(This->PrivateDynamicallyAllocatedString == NULL) || (This->PrivateDynamicallyAllocatedString->Buffer == NULL)");
    goto LABEL_20;
  }
  v3 = *((_DWORD *)this + 7);
  if ( v3 && *(_DWORD *)(v3 + 4) == *((_DWORD *)this + 1) )
  {
    if ( *(_WORD *)this <= *(_WORD *)(v3 + 2) )
    {
      *(_WORD *)v3 = *(_WORD *)this;
      v4 = (_DWORD *)*((_DWORD *)this + 9);
      if ( v4 )
      {
        v7 = *((_DWORD *)this + 7);
LABEL_15:
        *v4 = v7;
        goto LABEL_8;
      }
      goto LABEL_8;
    }
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      537,
      "rUS.Length <= This->PrivatePreallocatedString->MaximumLength");
LABEL_20:
    v5 = -1073741595;
    goto LABEL_9;
  }
  if ( !v2 )
  {
    v8 = (wchar_t **)(this + 8);
    if ( this != (_BYTE *)-8 && *v8 )
    {
      v9 = (wchar_t *)*((_DWORD *)this + 3);
      if ( *v8 != v9 )
      {
        UnicodeString.Buffer = *v8;
        RtlFreeAnsiString(&UnicodeString);
        v9 = (wchar_t *)*((_DWORD *)this + 3);
      }
      *v8 = v9;
    }
    v10 = (_WORD *)*((_DWORD *)this + 3);
    if ( v10 )
      *v10 = 0;
    goto LABEL_8;
  }
  *v2 = *(_DWORD *)this;
  v2[1] = *((_DWORD *)this + 1);
  v4 = (_DWORD *)*((_DWORD *)this + 9);
  if ( v4 )
  {
    v7 = *((_DWORD *)this + 8);
    goto LABEL_15;
  }
LABEL_8:
  v5 = 0;
LABEL_9:
  memset(this, 0, 0x2Cu);
  return v5;
}
