/*
 * XREFs of _RtlFindCharInUnicodeString@16 @ 0x4B2CAA20
 * Callers:
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 *     _RtlpQueryPseudoEnvironmentVariable@16 @ 0x4B32E262 (_RtlpQueryPseudoEnvironmentVariable@16.c)
 * Callees:
 *     _NLS_DOWNCASE@4 @ 0x4B2AABCB (_NLS_DOWNCASE@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

NTSTATUS __cdecl RtlFindCharInUnicodeString(
        ULONG Flags,
        PUNICODE_STRING StringToSearch,
        PUNICODE_STRING CharSet,
        PUSHORT NonInclusivePrefixLength)
{
  PUSHORT v4; // ebx
  char v5; // dl
  NTSTATUS v6; // edi
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  unsigned __int16 v9; // ax
  NTSTATUS result; // eax
  unsigned __int16 *Buffer; // esi
  int v12; // edi
  ULONG v13; // ecx
  unsigned __int16 v14; // ax
  wchar_t v15; // ax
  USHORT v16; // di
  USHORT v17; // ax
  unsigned __int16 *v18; // esi
  int v19; // edi
  unsigned __int16 v20; // ax
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // ax
  unsigned __int16 v23; // si
  bool v24; // zf
  unsigned __int16 *v25; // esi
  ULONG v26; // edx
  unsigned __int16 v27; // bx
  unsigned __int16 v28; // bx
  unsigned __int16 v29; // [esp+4h] [ebp-68h]
  ULONG v30; // [esp+8h] [ebp-64h]
  int v31; // [esp+Ch] [ebp-60h]
  wchar_t *v32; // [esp+10h] [ebp-5Ch]
  int v33; // [esp+14h] [ebp-58h]
  unsigned __int16 v34; // [esp+18h] [ebp-54h]
  unsigned __int16 v35; // [esp+20h] [ebp-4Ch]
  unsigned __int16 *v36; // [esp+24h] [ebp-48h]
  unsigned __int16 v37; // [esp+24h] [ebp-48h]
  _WORD v38[32]; // [esp+28h] [ebp-44h] BYREF
  ULONG Flagsa; // [esp+74h] [ebp+8h]
  ULONG Flagsb; // [esp+74h] [ebp+8h]
  ULONG Flagsc; // [esp+74h] [ebp+8h]

  v4 = NonInclusivePrefixLength;
  if ( NonInclusivePrefixLength )
    *NonInclusivePrefixLength = 0;
  v5 = Flags;
  if ( (Flags & 0xFFFFFFF8) != 0 || !NonInclusivePrefixLength )
    return -1073741811;
  v6 = 0;
  if ( StringToSearch )
  {
    Length = StringToSearch->Length;
    if ( (StringToSearch->Length & 1) != 0
      || (MaximumLength = StringToSearch->MaximumLength, (MaximumLength & 1) != 0)
      || Length > MaximumLength
      || MaximumLength == 0xFFFF
      || !StringToSearch->Buffer && (Length || MaximumLength) )
    {
      v6 = -1073741811;
    }
  }
  if ( v6 < 0 )
    return v6;
  if ( CharSet
    && ((CharSet->Length & 1) != 0
     || (v9 = CharSet->MaximumLength, (v9 & 1) != 0)
     || CharSet->Length > v9
     || v9 == 0xFFFF
     || !CharSet->Buffer && (CharSet->Length || v9)) )
  {
    result = -1073741811;
  }
  else
  {
    result = 0;
  }
  if ( result >= 0 )
  {
    Buffer = StringToSearch->Buffer;
    v29 = StringToSearch->Length;
    v12 = StringToSearch->Length >> 1;
    v32 = CharSet->Buffer;
    v13 = Flags & 1;
    v14 = CharSet->Length >> 1;
    v33 = v12;
    v35 = v14;
    v30 = v13;
    v36 = Buffer;
    if ( (Flags & 1) != 0 )
    {
      v31 = -2;
      v14 = CharSet->Length >> 1;
      Buffer = &Buffer[(unsigned __int16)v12 - 1];
      v36 = Buffer;
    }
    else
    {
      v31 = 2;
    }
    if ( (Flags & 4) != 0 )
    {
      if ( v14 > 0x20u )
      {
        if ( (_WORD)v12 )
        {
          Flagsb = Flags & 2;
          do
          {
            v22 = NLS_DOWNCASE(*Buffer);
            v23 = 0;
            v34 = v22;
            if ( Flagsb )
            {
              do
              {
                if ( v34 == NLS_DOWNCASE(v32[v23]) )
                  break;
                ++v23;
              }
              while ( v23 < v35 );
              v12 = v33;
              v24 = v23 == v35;
              v25 = v36;
              v4 = NonInclusivePrefixLength;
              if ( v24 )
                goto LABEL_56;
            }
            else
            {
              do
              {
                if ( v34 == NLS_DOWNCASE(v32[v23]) )
                  break;
                ++v23;
              }
              while ( v23 < v35 );
              v12 = v33;
              v24 = v23 == v35;
              v25 = v36;
              v4 = NonInclusivePrefixLength;
              if ( !v24 )
              {
LABEL_56:
                v13 = v30;
                goto LABEL_29;
              }
            }
            Buffer = &v25[v31 / 2u];
            v33 = v12 + 0xFFFF;
            v36 = Buffer;
          }
          while ( (_WORD)v12 != 1 );
        }
      }
      else
      {
        if ( v14 )
        {
          v18 = v38;
          v19 = v14;
          do
          {
            *v18 = NLS_DOWNCASE(*(unsigned __int16 *)((char *)v18 + (char *)v32 - (char *)v38));
            ++v18;
            --v19;
          }
          while ( v19 );
          Buffer = v36;
          LOWORD(v12) = v33;
          v4 = NonInclusivePrefixLength;
          v5 = Flags;
        }
        if ( (_WORD)v12 )
        {
          Flagsa = v5 & 2;
          do
          {
            v20 = NLS_DOWNCASE(*Buffer);
            v21 = 0;
            if ( Flagsa )
            {
              if ( v35 )
              {
                do
                {
                  if ( v20 == v38[v21] )
                    break;
                  ++v21;
                }
                while ( v21 < v35 );
                v4 = NonInclusivePrefixLength;
              }
              if ( v21 == v35 )
                goto LABEL_56;
            }
            else
            {
              if ( v35 )
              {
                do
                {
                  if ( v20 == v38[v21] )
                    break;
                  ++v21;
                }
                while ( v21 < v35 );
                v4 = NonInclusivePrefixLength;
              }
              if ( v21 != v35 )
                goto LABEL_56;
            }
            Buffer = (unsigned __int16 *)((char *)Buffer + v31);
            LOWORD(v12) = v12 - 1;
          }
          while ( (_WORD)v12 );
        }
      }
    }
    else if ( v14 == 1 )
    {
      v15 = *v32;
      if ( StringToSearch->Length >> 1 )
      {
        if ( (Flags & 2) != 0 )
        {
          while ( *Buffer == v15 )
          {
            LOWORD(v12) = v12 - 1;
            Buffer = (unsigned __int16 *)((char *)Buffer + v31);
            if ( !(_WORD)v12 )
              return -1073741275;
          }
        }
        else
        {
          while ( *Buffer != v15 )
          {
            Buffer = (unsigned __int16 *)((char *)Buffer + v31);
            LOWORD(v12) = v12 - 1;
            if ( !(_WORD)v12 )
              return -1073741275;
          }
        }
LABEL_29:
        if ( (_WORD)v12 )
        {
          v16 = 2 * v12 - 2;
          if ( v13 )
            v17 = v16;
          else
            v17 = v29 - v16;
          *v4 = v17;
          return 0;
        }
      }
    }
    else if ( (_WORD)v12 )
    {
      v26 = Flags & 2;
      Flagsc = v26;
      do
      {
        v4 = NonInclusivePrefixLength;
        v37 = 0;
        if ( v26 )
        {
          if ( v14 )
          {
            v27 = 0;
            do
            {
              if ( *Buffer == v32[v27] )
                break;
              ++v27;
            }
            while ( v27 < v35 );
            v12 = v33;
            v26 = Flagsc;
            v13 = v30;
            v14 = CharSet->Length >> 1;
            v37 = v27;
            v4 = NonInclusivePrefixLength;
          }
          if ( v37 == v14 )
            goto LABEL_29;
        }
        else
        {
          if ( v14 )
          {
            v28 = 0;
            do
            {
              if ( *Buffer == v32[v28] )
                break;
              ++v28;
            }
            while ( v28 < v35 );
            v12 = v33;
            v26 = Flagsc;
            v13 = v30;
            v14 = CharSet->Length >> 1;
            v37 = v28;
            v4 = NonInclusivePrefixLength;
          }
          if ( v37 != v14 )
            goto LABEL_29;
        }
        Buffer = (unsigned __int16 *)((char *)Buffer + v31);
        v12 += 0xFFFF;
        v33 = v12;
      }
      while ( (_WORD)v12 );
    }
    return -1073741275;
  }
  return result;
}
