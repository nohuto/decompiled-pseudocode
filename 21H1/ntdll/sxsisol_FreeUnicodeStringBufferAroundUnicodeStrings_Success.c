/*
 * XREFs of sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x4B2EBA54
 * Callers:
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlAssert@16 @ 0x4B34FBC0 (_RtlAssert@16.c)
 */

int __thiscall sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(_DWORD *this)
{
  _DWORD *v2; // ecx
  int v3; // edx
  _DWORD *v4; // ecx
  int v6; // eax
  wchar_t **v7; // edi
  wchar_t *v8; // ecx
  _WORD *v9; // eax
  size_t v10; // [esp-4h] [ebp-14h]
  _UNICODE_STRING UnicodeString; // [esp+8h] [ebp-8h] BYREF

  if ( !this )
    RtlAssert("Internal error check failed", "minkernel\\ntdll\\sxsisol.cpp", 0x20Cu, (PSTR)"This != NULL");
  if ( *((_BYTE *)this + 40) )
  {
    v2 = (_DWORD *)this[8];
    if ( v2 && v2[1] )
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        0x214u,
        "(This->PrivateDynamicallyAllocatedString == NULL) || (This->PrivateDynamicallyAllocatedString->Buffer == NULL)");
    v3 = this[7];
    if ( v3 && *(_DWORD *)(v3 + 4) == this[1] )
    {
      if ( *(_WORD *)this > *(_WORD *)(v3 + 2) )
        RtlAssert(
          "Internal error check failed",
          "minkernel\\ntdll\\sxsisol.cpp",
          0x219u,
          (PSTR)"rUS.Length <= This->PrivatePreallocatedString->MaximumLength");
      *(_WORD *)v3 = *(_WORD *)this;
      v4 = (_DWORD *)this[9];
      if ( v4 )
      {
        v6 = this[7];
LABEL_13:
        *v4 = v6;
      }
    }
    else if ( v2 )
    {
      *v2 = *this;
      v2[1] = this[1];
      v4 = (_DWORD *)this[9];
      if ( v4 )
      {
        v6 = this[8];
        goto LABEL_13;
      }
    }
    else
    {
      v7 = (wchar_t **)(this + 2);
      if ( this != (_DWORD *)-8 && *v7 )
      {
        v8 = (wchar_t *)this[3];
        if ( *v7 != v8 )
        {
          UnicodeString.Buffer = *v7;
          RtlFreeAnsiString(&UnicodeString);
          v8 = (wchar_t *)this[3];
        }
        *v7 = v8;
      }
      v9 = (_WORD *)this[3];
      if ( v9 )
        *v9 = 0;
    }
  }
  LODWORD(v10) = 44;
  memset(this, 0, v10);
  return 0;
}
