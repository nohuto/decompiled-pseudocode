/*
 * XREFs of RtlFindCharInUnicodeString @ 0x18001D390
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x18001A9E0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18001C2B4 (sxsisol_SearchActCtxForDllName.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18008914C (RtlpQueryPseudoEnvironmentVariable.c)
 * Callees:
 *     NLS_DOWNCASE @ 0x18007BE10 (NLS_DOWNCASE.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  unsigned __int16 v4; // bx
  PUSHORT v5; // rbp
  char v7; // si
  NTSTATUS result; // eax
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 v10; // dx
  unsigned __int16 Length; // r13
  wchar_t *Buffer; // r14
  wchar_t *v13; // r11
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // r10
  ULONG v16; // ecx
  _BOOL8 v17; // r12
  wchar_t v18; // ax
  int v19; // esi
  USHORT v20; // r9
  int v21; // esi
  wchar_t v22; // dx
  unsigned __int16 v23; // cx
  __int64 v24; // rdi
  signed __int64 v25; // r14
  _WORD *v26; // rbx
  int v27; // esi
  __int16 v28; // r8
  unsigned __int16 v29; // r10
  __int64 v30; // r11
  unsigned __int16 i; // dx
  unsigned __int16 j; // cx
  int v33; // esi
  __int16 v34; // bp
  unsigned __int16 v35; // r10
  __int64 v36; // r11
  unsigned __int16 v37; // r10
  int v38; // [rsp+20h] [rbp-98h]
  unsigned __int16 v39; // [rsp+24h] [rbp-94h]
  _WORD v41[32]; // [rsp+30h] [rbp-88h] BYREF

  v4 = 0;
  v5 = NonInclusivePrefixLength;
  v7 = Flags;
  if ( NonInclusivePrefixLength )
    *NonInclusivePrefixLength = 0;
  if ( (Flags & 0xFFFFFFF8) != 0 || !NonInclusivePrefixLength )
    return -1073741811;
  result = 0;
  if ( StringToSearch )
  {
    if ( (StringToSearch->Length & 1) != 0
      || (MaximumLength = StringToSearch->MaximumLength, (MaximumLength & 1) != 0)
      || StringToSearch->Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !StringToSearch->Buffer && (StringToSearch->Length || MaximumLength) )
    {
      result = -1073741811;
    }
  }
  if ( result >= 0 )
  {
    result = 0;
    if ( CharSet )
    {
      if ( (CharSet->Length & 1) != 0
        || (v10 = CharSet->MaximumLength, (v10 & 1) != 0)
        || CharSet->Length > v10
        || v10 == 0xFFFF
        || !CharSet->Buffer && (CharSet->Length || v10) )
      {
        result = -1073741811;
      }
    }
    if ( result >= 0 )
    {
      Length = StringToSearch->Length;
      Buffer = CharSet->Buffer;
      v13 = StringToSearch->Buffer;
      v14 = Length >> 1;
      v15 = CharSet->Length >> 1;
      v16 = Flags & 1;
      v39 = Length;
      v38 = v7 & 1;
      if ( (v7 & 1) != 0 )
        v13 = &v13[v14 - 1];
      v17 = !(v7 & 1);
      if ( (v7 & 4) == 0 )
      {
        if ( v15 == 1 )
        {
          v18 = *Buffer;
          v19 = v7 & 2;
          if ( v14 )
          {
            if ( v19 )
            {
              do
              {
                if ( *v13 != v18 )
                  break;
                v13 = &v13[2 * v17 - 1];
                --v14;
              }
              while ( v14 );
            }
            else
            {
              do
              {
                if ( *v13 == v18 )
                  break;
                v13 = &v13[2 * v17 - 1];
                --v14;
              }
              while ( v14 );
            }
            goto LABEL_27;
          }
        }
        else if ( v14 )
        {
          v21 = v7 & 2;
          while ( 1 )
          {
            v22 = *v13;
            v23 = 0;
            if ( v21 )
            {
              if ( v15 )
              {
                do
                {
                  if ( v22 == Buffer[v23] )
                    break;
                  ++v23;
                }
                while ( v23 < v15 );
              }
              if ( v23 == v15 )
                goto LABEL_41;
            }
            else
            {
              if ( v15 )
              {
                do
                {
                  if ( v22 == Buffer[v23] )
                    break;
                  ++v23;
                }
                while ( v23 < v15 );
              }
              if ( v23 != v15 )
                goto LABEL_41;
            }
            v13 = &v13[2 * v17 - 1];
            if ( !--v14 )
              goto LABEL_41;
          }
        }
        return -1073741275;
      }
      if ( v15 <= 0x20u )
      {
        if ( v15 )
        {
          v24 = v15;
          v25 = (char *)Buffer - (char *)v41;
          v26 = v41;
          do
          {
            *v26 = NLS_DOWNCASE(*(unsigned __int16 *)((char *)v26 + v25));
            ++v26;
            --v24;
          }
          while ( v24 );
        }
        if ( v14 )
        {
          v27 = v7 & 2;
          while ( 1 )
          {
            v28 = NLS_DOWNCASE(*v13);
            if ( v27 )
            {
              for ( i = 0; i < v29; ++i )
              {
                if ( v28 == v41[i] )
                  break;
              }
              if ( i == v29 )
                goto LABEL_41;
            }
            else
            {
              for ( j = 0; j < v29; ++j )
              {
                if ( v28 == v41[j] )
                  break;
              }
              if ( j != v29 )
                goto LABEL_41;
            }
            v13 = (wchar_t *)(v30 + 4 * v17 - 2);
            if ( !--v14 )
              goto LABEL_41;
          }
        }
        return -1073741275;
      }
      if ( v14 )
      {
        v33 = v7 & 2;
        while ( 1 )
        {
          v34 = NLS_DOWNCASE(*v13);
          if ( v33 )
          {
            do
            {
              if ( v34 == (unsigned __int16)NLS_DOWNCASE(Buffer[v4]) )
                break;
              ++v4;
            }
            while ( v4 < v35 );
            Length = v39;
            if ( v4 == v35 )
              goto LABEL_72;
          }
          else
          {
            do
            {
              if ( v34 == (unsigned __int16)NLS_DOWNCASE(Buffer[v4]) )
                break;
              ++v4;
            }
            while ( v4 < v37 );
            Length = v39;
            if ( v4 != v37 )
            {
LABEL_72:
              v5 = NonInclusivePrefixLength;
LABEL_41:
              v16 = v38;
LABEL_27:
              if ( v14 )
              {
                v20 = 2 * v14 - 2;
                if ( !v16 )
                  v20 = Length - v20;
                *v5 = v20;
                return 0;
              }
              return -1073741275;
            }
          }
          v4 = 0;
          v13 = (wchar_t *)(v36 + 4 * v17 - 2);
          if ( !--v14 )
            goto LABEL_72;
        }
      }
      return -1073741275;
    }
  }
  return result;
}
