/*
 * XREFs of _RtlUnicodeStringToInteger@12 @ 0x4B2E07A0
 * Callers:
 *     _RtlQueryImageFileKeyOption@24 @ 0x4B2A6C80 (_RtlQueryImageFileKeyOption@24.c)
 *     _RtlpMuiRegAddAlternateCodePage@8 @ 0x4B2ACD4A (_RtlpMuiRegAddAlternateCodePage@8.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _RtlGetIntegerAtom@8 @ 0x4B2E0440 (_RtlGetIntegerAtom@8.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpQueryIllegalCWDDevices@4 @ 0x4B33384B (_LdrpQueryIllegalCWDDevices@4.c)
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlUnicodeStringToLcid@8 @ 0x4B352FCF (_RtlUnicodeStringToLcid@8.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 * Callees:
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

NTSTATUS __cdecl RtlUnicodeStringToInteger(PUNICODE_STRING String, ULONG Base, PULONG Value)
{
  ULONG i; // edi
  unsigned int Length; // eax
  wchar_t *Buffer; // esi
  bool v6; // zf
  int v7; // edx
  unsigned __int16 v8; // cx
  int v9; // ebx
  ULONG v10; // eax
  NTSTATUS result; // eax
  int v12; // eax
  int v13; // [esp-4h] [ebp-40h]
  int v14; // [esp-4h] [ebp-40h]
  wchar_t *v15; // [esp+14h] [ebp-28h]
  int v16; // [esp+1Ch] [ebp-20h]
  __int16 v17; // [esp+20h] [ebp-1Ch]

  i = 0;
  Length = String->Length;
  if ( !(_WORD)Length || (Length & 1) != 0 )
    goto LABEL_52;
  Buffer = String->Buffer;
  v7 = Length >> 1;
  v6 = Length >> 1 == 0;
  LOWORD(Length) = 0;
  v17 = 0;
  if ( v6 )
  {
    v7 = -1;
  }
  else
  {
    while ( 1 )
    {
      --v7;
      Length = *Buffer;
      v17 = *Buffer++;
      if ( Length > 0x20 )
        break;
      if ( !v7 )
      {
        LOWORD(Length) = 0;
        v17 = 0;
        break;
      }
    }
  }
  v8 = Length;
  if ( (_WORD)Length == 45 || (_WORD)Length == 43 )
  {
    if ( v7 )
    {
      --v7;
      v8 = *Buffer++;
    }
    else
    {
      v8 = 0;
    }
  }
  v15 = Buffer;
  v16 = v7;
  switch ( Base )
  {
    case 0u:
      Base = 10;
      v9 = 0;
      if ( v8 != 48 )
        goto LABEL_12;
      if ( !v7 )
      {
LABEL_42:
        v8 = 0;
        goto LABEL_12;
      }
      --v7;
      v12 = *Buffer++;
      if ( v12 == 120 )
      {
        Base = 16;
        v13 = 4;
      }
      else
      {
        if ( v12 != 111 )
        {
          if ( v12 == 98 )
          {
            Base = 2;
            v9 = 1;
          }
          else
          {
            v7 = v16;
            Buffer = v15;
          }
LABEL_40:
          if ( v7 )
          {
            --v7;
            v8 = *Buffer++;
            goto LABEL_12;
          }
          goto LABEL_42;
        }
        Base = 8;
        v13 = 3;
      }
      v9 = v13;
      goto LABEL_40;
    case 2u:
      v9 = 1;
      goto LABEL_12;
    case 8u:
      v14 = 3;
      goto LABEL_46;
  }
  if ( Base != 10 )
  {
    if ( Base == 16 )
    {
      v14 = 4;
LABEL_46:
      v9 = v14;
      goto LABEL_12;
    }
LABEL_52:
    result = -1073741811;
    goto LABEL_22;
  }
  v9 = 0;
LABEL_12:
  for ( i = 0; v8; ++Buffer )
  {
    if ( (unsigned __int16)(v8 - 48) > 9u )
    {
      if ( (unsigned __int16)(v8 - 65) > 5u )
      {
        if ( (unsigned __int16)(v8 - 97) > 5u )
          break;
        v10 = v8 - 87;
      }
      else
      {
        v10 = v8 - 55;
      }
    }
    else
    {
      v10 = v8 - 48;
    }
    if ( v10 >= Base )
      break;
    i = v9 ? v10 | (i << v9) : v10 + Base * i;
    if ( !v7 )
      break;
    --v7;
    v8 = *Buffer;
  }
  result = 0;
  if ( v17 == 45 )
    i = -i;
LABEL_22:
  *Value = i;
  return result;
}
