/*
 * XREFs of LookupSidInTable @ 0x1405E4BB8
 * Callers:
 *     SeConvertStringSidToSid @ 0x1403BC720 (SeConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x14068FE40 (LocalConvertAclToString.c)
 *     LocalGetSidForString @ 0x140773650 (LocalGetSidForString.c)
 *     LocalGetStringForSid @ 0x140921838 (LocalGetStringForSid.c)
 * Callees:
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     RtlSubAuthorityCountSid @ 0x14035C470 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x14035C480 (RtlSubAuthoritySid.c)
 *     _wcsnicmp @ 0x1403CDDD0 (_wcsnicmp.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     SddlpAlloc @ 0x140690940 (SddlpAlloc.c)
 */

__int64 __fastcall LookupSidInTable(
        wchar_t *Str1,
        PSID Sid1,
        __int64 a3,
        __int64 a4,
        wchar_t *Str2,
        char a6,
        _QWORD *a7)
{
  __int64 v7; // rbx
  BOOL v10; // esi
  unsigned int v11; // r13d
  int v12; // ecx
  ULONG v13; // ecx
  unsigned int v14; // ebp
  PSID *v15; // r14
  __int64 v16; // rax
  __int64 v18; // rbp
  void *v19; // rcx
  ULONG v20; // r14d
  void *v21; // rsi
  PUCHAR v22; // rax
  int v23; // [rsp+60h] [rbp+8h]
  char v25; // [rsp+78h] [rbp+20h]
  wchar_t *Str2a; // [rsp+80h] [rbp+28h]

  v7 = 0LL;
  v25 = 0;
  v23 = 0;
  if ( __PAIR128__((unsigned __int64)Str1, (unsigned __int64)Sid1) == 0 )
    return 0LL;
  v10 = 0;
  v11 = 63;
  *a7 = 0LL;
  if ( !Str1 )
  {
    v25 = 1;
    v12 = *RtlSubAuthorityCountSid(Sid1);
    if ( !(_BYTE)v12 )
      goto LABEL_7;
    v13 = *RtlSubAuthoritySid(Sid1, v12 - 1);
    if ( v13 != 498 && v13 - 518 > 1 )
      goto LABEL_7;
    v10 = 1;
    if ( v13 != 518 )
      goto LABEL_7;
    goto LABEL_27;
  }
  if ( wcsnicmp(Str1, L"EA", 2uLL) )
  {
    if ( !wcsnicmp(Str1, L"SA", 2uLL) )
    {
      v10 = 1;
LABEL_27:
      v23 = 1;
      goto LABEL_7;
    }
    v10 = wcsnicmp(Str1, L"RO", 2uLL) == 0;
  }
  else
  {
    v10 = 1;
  }
LABEL_7:
  v14 = 0;
  v15 = (PSID *)&unk_140C0F400;
  do
  {
    if ( v25 )
    {
      if ( RtlEqualSid(Sid1, *v15) )
        break;
      goto LABEL_10;
    }
    Str2a = (wchar_t *)((char *)&unk_140C0F3F0 + 104 * v14 + 2);
    if ( !wcsnicmp(Str1, Str2a, *((unsigned int *)v15 - 1)) )
      break;
    if ( v10 && a6 && !a3 && *((_BYTE *)v15 - 16) && *v15 && !wcsnicmp(L"DA", Str2a, *((unsigned int *)v15 - 1)) )
      v11 = v14;
LABEL_10:
    ++v14;
    v15 += 13;
  }
  while ( v14 < 0x3F );
  if ( v14 < 0x3F )
  {
    v16 = v14;
    return (__int64)&unk_140C0F3F0 + 104 * v16;
  }
  if ( v10 && a6 && !a3 && v11 < 0x3F )
  {
    if ( v23 )
    {
      if ( v25 )
      {
        *a7 = Sid1;
      }
      else
      {
        v18 = 104LL * v11;
        v19 = *(void **)((char *)&unk_140C0F3F0 + v18 + 16);
        if ( v19 )
        {
          v20 = RtlLengthSid(v19);
          v21 = (void *)SddlpAlloc(v20 + 1);
          *a7 = v21;
          if ( v21 )
          {
            _mm_lfence();
            memmove(v21, *(const void **)((char *)&unk_140C0F3F0 + v18 + 16), v20);
            v22 = RtlSubAuthorityCountSid(*(PSID *)((char *)&unk_140C0F3F0 + v18 + 16));
            *RtlSubAuthoritySid(v21, (unsigned int)*v22 - 1) = 518;
          }
        }
      }
    }
    else
    {
      v16 = v11;
      return (__int64)&unk_140C0F3F0 + 104 * v16;
    }
  }
  return v7;
}
