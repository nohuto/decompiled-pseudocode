/*
 * XREFs of SepIsImageInMinTcbList @ 0x1406F8548
 * Callers:
 *     SepIsMinTCB @ 0x1406174A4 (SepIsMinTCB.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1406F66D8 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileKeyOption @ 0x1406FD590 (RtlQueryImageFileKeyOption.c)
 */

__int64 __fastcall SepIsImageInMinTcbList(
        __int64 a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        char a4,
        unsigned __int8 a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        unsigned __int8 *a9)
{
  unsigned int v9; // ebx
  unsigned int v14; // edi
  _DWORD *i; // r14
  __int64 v16; // r15
  __int64 *v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // di
  _BYTE *v22; // r14
  char v23; // al
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF

  v9 = 0;
  v14 = 0;
  if ( a2 )
  {
    for ( i = (_DWORD *)(a1 + 20); ; i += 6 )
    {
      v16 = v14;
      if ( RtlEqualUnicodeString(a3, (PCUNICODE_STRING)(a1 + 24LL * v14), 1u) )
      {
        if ( !*i || *i == dword_140C19590 )
          break;
      }
      if ( ++v14 >= a2 )
        return (unsigned int)-1073741275;
    }
    v20 = 3LL * v14;
    v21 = *(_BYTE *)(a1 + 24LL * v14 + 18);
    if ( v21 )
      goto LABEL_9;
    if ( a5 )
      v21 = a5;
    if ( v21 )
    {
LABEL_9:
      v22 = a7;
      v17 = &SeProtectedMapping;
      v20 = (unsigned __int64)v21 >> 4;
      *a7 = *((_BYTE *)&SeProtectedMapping + 2 * v20);
      v23 = *((_BYTE *)&SeProtectedMapping + 2 * v20 + 1);
    }
    else
    {
      v22 = a7;
      *a7 = *(_BYTE *)(a1 + 24 * v16 + 16);
      v23 = *(_BYTE *)(a1 + 24 * v16 + 17);
    }
    *a8 = v23;
    if ( !qword_140C1D8E0 || (LOBYTE(v20) = *v22, LOBYTE(v17) = a6, !(unsigned int)qword_140C1D8E0(v20, v17, v18)) )
      *v22 = a6;
    if ( !qword_140C1D8E0 || (LOBYTE(v20) = *a8, LOBYTE(v17) = a6, !(unsigned int)qword_140C1D8E0(v20, v17, v18)) )
      *a8 = a6;
    if ( (v21 & 7) != 1 && ((a4 & 1) != 0 || (v21 & 7) == 2) )
    {
      if ( (*a8 & 0xFu) < 4 )
        *a8 = *v22;
      v21 = *a9 & 8 | v21 & 0xF2 | 2;
    }
    *a9 = v21;
    Handle = 0LL;
    if ( !*a9 && !*a8 && (int)RtlpOpenImageFileOptionsKeyEx(&a3->Length, (__int64)v17, v18, &Handle) >= 0 )
    {
      RtlQueryImageFileKeyOption(Handle, 4, 0LL);
      ZwClose(Handle);
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v9;
}
