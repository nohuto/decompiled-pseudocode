/*
 * XREFs of _RtlQueryImageMitigationPolicy@20 @ 0x4B33FE30
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpQueryEafPlusModuleList@8 @ 0x4B342700 (_RtlpQueryEafPlusModuleList@8.c)
 */

NTSTATUS __cdecl RtlQueryImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  int v5; // ebx
  NTSTATUS result; // eax
  ULONG v7; // ecx
  unsigned int v8; // edx
  ULONG v9; // ecx
  unsigned int v10; // eax
  int v11; // edx
  int v12; // edi
  bool v13; // zf
  unsigned int v14; // edi
  ULONG v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // eax
  int v20; // edi
  ULONG v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // ecx
  unsigned int v25; // ecx
  bool v26; // zf
  int v27; // eax
  int v28; // edi
  ULONG v29; // ecx
  int v30; // eax
  int v31; // ecx
  unsigned int v32; // eax
  ULONG v33; // ecx
  int v34; // eax
  ULONG v35; // ecx
  int v36; // edi
  ULONG v37; // eax
  ULONG v38; // eax
  unsigned int v39; // eax
  int v40; // edi
  ULONG v41; // ecx
  unsigned int v42; // ecx
  int v43; // edi
  int v44; // ecx
  unsigned int v45; // eax
  int v46; // edi
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  int v49; // eax
  int v50; // eax
  unsigned int v51; // ecx
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  unsigned int v57; // edx
  int v58; // edi
  int v59; // ecx
  unsigned int v60; // edx
  int v61; // ecx
  int v62; // eax
  unsigned int v63; // ecx
  int v64; // edi
  HANDLE v65; // eax
  int v66; // eax
  unsigned int v67; // ecx
  size_t v68; // [esp-4h] [ebp-484h]
  int EafPlusModuleList; // [esp+10h] [ebp-470h]
  unsigned int v70; // [esp+14h] [ebp-46Ch]
  int v71; // [esp+14h] [ebp-46Ch]
  HANDLE KeyHandle[2]; // [esp+18h] [ebp-468h] BYREF
  _UNICODE_STRING ValueName; // [esp+20h] [ebp-460h] BYREF
  ULONG ResultLength; // [esp+28h] [ebp-458h] BYREF
  int v75; // [esp+2Ch] [ebp-454h]
  _UNICODE_STRING DestinationString; // [esp+30h] [ebp-450h] BYREF
  _DWORD v77[6]; // [esp+38h] [ebp-448h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+50h] [ebp-430h] BYREF
  ULONG Value[257]; // [esp+78h] [ebp-408h] BYREF
  ULONG Flagsa; // [esp+490h] [ebp+10h]

  ResultLength = Flags & 4;
  Flagsa = Flags & 8;
  v5 = 0;
  KeyHandle[0] = 0;
  memset(v77, 0, sizeof(v77));
  result = RtlInitUnicodeStringEx(&DestinationString, ImagePath);
  if ( result >= 0 )
  {
    result = Flagsa
           ? RtlInitUnicodeStringEx(&ValueName, L"MitigationAuditOptions")
           : RtlInitUnicodeStringEx(&ValueName, (PCWSTR)L"MitigationOptions");
    EafPlusModuleList = result;
    if ( result >= 0 )
    {
      v7 = ResultLength;
      if ( ResultLength )
      {
        if ( DestinationString.Length )
          return -1073741811;
      }
      else
      {
        if ( DestinationString.Length )
        {
          result = RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9u, 0, KeyHandle);
        }
        else
        {
          ObjectAttributes.Length = 24;
          ObjectAttributes.RootDirectory = 0;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&dword_4B281748;
          ObjectAttributes.SecurityDescriptor = 0;
          ObjectAttributes.SecurityQualityOfService = 0;
          result = ZwOpenKey(KeyHandle, 9u, &ObjectAttributes);
        }
        v7 = ResultLength;
        EafPlusModuleList = result;
      }
      if ( result >= 0 )
      {
        if ( v7 )
        {
          if ( Flagsa )
          {
            v10 = v77[0] & 0xCCCCCCCC | 0x22222222;
            v9 = v77[1] & 0xCCCCCCCC | 0x22222222;
          }
          else
          {
            v10 = v77[0] & 0xCCCCCCCC | 0x22111211;
            v9 = v77[1] & 0xCCCCCCCC | 0x22222122;
          }
          v70 = v77[2] & 0xCCCCFCCC | 0x22220222;
          v8 = v77[3] & 0xCCCCFCCC | 0x22220222;
          KeyHandle[0] = (HANDLE)(v77[4] & 0xFFFCFFCC | 0x20022);
LABEL_26:
          *(_DWORD *)&DestinationString.Length = v10;
          ResultLength = v9;
          *(_DWORD *)&ValueName.Length = v8;
          switch ( Policy )
          {
            case ImageDepPolicy:
              if ( BufferSize != 8 )
                return -1073741811;
              goto LABEL_28;
            case ImageAslrPolicy:
              if ( BufferSize != 24 )
                return -1073741811;
              *(_DWORD *)&ValueName.Length = 0;
              KeyHandle[0] = 0;
              memset(Buffer, 0, 0x18u);
              v14 = *(_DWORD *)&DestinationString.Length;
              v15 = ResultLength;
              v71 = __PAIR64__(ResultLength, *(unsigned int *)&DestinationString.Length) >> 8;
              if ( (DestinationString.Length & 0x300) != 0 )
              {
                switch ( HIBYTE(DestinationString.Length) & 3 )
                {
                  case 1:
                    v16 = 0;
                    goto LABEL_48;
                  case 2:
                    v15 = ResultLength;
                    v17 = 2;
                    *(_DWORD *)Buffer = 2;
                    *((_DWORD *)Buffer + 1) = 0;
                    KeyHandle[0] = 0;
                    goto LABEL_51;
                  case 3:
                    v16 = 8;
                    *(_DWORD *)&ValueName.Length = 0;
LABEL_48:
                    v17 = v16 | 1;
                    KeyHandle[0] = *(HANDLE *)&ValueName.Length;
                    *((_DWORD *)Buffer + 1) = *(_DWORD *)&ValueName.Length;
                    v14 = *(_DWORD *)&DestinationString.Length;
                    *(_DWORD *)Buffer = v17;
                    goto LABEL_51;
                }
              }
              else
              {
                KeyHandle[0] = 0;
              }
              v17 = 0;
LABEL_51:
              if ( (v71 & 4) != 0 )
              {
                *(_DWORD *)Buffer = v17 | 4;
                *((HANDLE *)Buffer + 1) = KeyHandle[0];
              }
              v18 = __PAIR64__(v15, v14) >> 16;
              v19 = 0;
              if ( (v18 & 3) != 0 )
              {
                if ( (v18 & 3) != 1 )
                {
                  if ( (v18 & 3) == 2 )
                  {
                    v20 = *((_DWORD *)Buffer + 3);
                    v19 = *((_DWORD *)Buffer + 2) & 0xFFFFFFFC | 2;
                    *((_DWORD *)Buffer + 3) = v20;
                    *((_DWORD *)Buffer + 2) = v19;
                    goto LABEL_61;
                  }
LABEL_60:
                  v20 = 0;
LABEL_61:
                  v13 = (v18 & 4) == 0;
                  v21 = ResultLength;
                  if ( !v13 )
                  {
                    *((_DWORD *)Buffer + 3) = v20;
                    *((_DWORD *)Buffer + 2) = v19 | 4;
                  }
                  v22 = __PAIR64__(v21, *(unsigned int *)&DestinationString.Length) >> 20;
                  v23 = (__PAIR64__(v21, *(unsigned int *)&DestinationString.Length) >> 20) & 3;
                  *(_DWORD *)&DestinationString.Length = v22;
                  if ( v23 )
                  {
                    v24 = v23 - 1;
                    if ( v24 )
                    {
                      if ( v24 != 1 )
                      {
LABEL_71:
                        v26 = (v22 & 4) == 0;
                        goto LABEL_72;
                      }
                      v25 = *((_DWORD *)Buffer + 4) & 0xFFFFFFFC | 2;
                    }
                    else
                    {
                      v25 = *((_DWORD *)Buffer + 4) & 0xFFFFFFFC | 1;
                    }
                    *((_DWORD *)Buffer + 4) = v25;
                  }
                  else
                  {
                    *((_DWORD *)Buffer + 4) &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)Buffer + 5) = *((_DWORD *)Buffer + 5);
                  LOBYTE(v22) = DestinationString.Length;
                  goto LABEL_71;
                }
                *((_DWORD *)Buffer + 2) = 1;
                v19 = 1;
              }
              else
              {
                *((_DWORD *)Buffer + 2) = 0;
              }
              *((_DWORD *)Buffer + 3) = 0;
              goto LABEL_60;
            case ImageDynamicCodePolicy:
              if ( BufferSize != 8 )
                return -1073741811;
              v9 >>= 4;
              goto LABEL_96;
            case ImageStrictHandleCheckPolicy:
              if ( BufferSize != 8 )
                return -1073741811;
              v10 = __PAIR64__(v9, v10) >> 24;
              goto LABEL_78;
            case ImageSystemCallDisablePolicy:
              if ( BufferSize != 8 )
                return -1073741811;
              v10 = __PAIR64__(v9, v10) >> 28;
              goto LABEL_78;
            case ImageExtensionPointDisablePolicy:
              if ( BufferSize != 8 )
                return -1073741811;
              v11 = 0;
              *(_DWORD *)Buffer = 0;
              *((_DWORD *)Buffer + 1) = 0;
              switch ( v9 & 3 )
              {
                case 0u:
                  goto LABEL_93;
                case 1u:
                  v11 = 1;
LABEL_91:
                  *(_DWORD *)Buffer = v11;
                  break;
                case 2u:
LABEL_89:
                  *(_DWORD *)Buffer = 2;
                  v11 = 2;
                  break;
                default:
                  goto LABEL_93;
              }
              *((_DWORD *)Buffer + 1) = 0;
LABEL_93:
              v13 = (v9 & 4) == 0;
              goto LABEL_37;
            case ImageControlFlowGuardPolicy:
              if ( BufferSize != 16 )
                return -1073741811;
              v33 = v9 >> 8;
              *(_DWORD *)Buffer = 0;
              *((_DWORD *)Buffer + 1) = 0;
              *((_DWORD *)Buffer + 2) = 0;
              *((_DWORD *)Buffer + 3) = 0;
              v34 = 0;
              switch ( v33 & 3 )
              {
                case 0u:
                  break;
                case 1u:
                  goto LABEL_132;
                case 2u:
                  v34 = 2;
                  *(_DWORD *)Buffer = 2;
                  *((_DWORD *)Buffer + 1) = 0;
                  break;
                case 3u:
                  v34 = 8;
LABEL_132:
                  v34 |= 1u;
                  *((_DWORD *)Buffer + 1) = 0;
                  *(_DWORD *)Buffer = v34;
                  break;
              }
              if ( (v33 & 4) != 0 )
              {
                *((_DWORD *)Buffer + 1) = 0;
                *(_DWORD *)Buffer = v34 | 4;
              }
              v31 = __PAIR64__(*(unsigned int *)&ValueName.Length, v70) >> 8;
              goto LABEL_112;
            case ImageSignaturePolicy:
              if ( BufferSize != 16 )
                return -1073741811;
              v29 = v9 >> 12;
              *(_DWORD *)Buffer = 0;
              *((_DWORD *)Buffer + 1) = 0;
              *((_DWORD *)Buffer + 2) = 0;
              *((_DWORD *)Buffer + 3) = 0;
              v30 = 0;
              switch ( v29 & 3 )
              {
                case 0u:
                  break;
                case 1u:
                  goto LABEL_116;
                case 2u:
                  v30 = 2;
                  *(_DWORD *)Buffer = 2;
                  *((_DWORD *)Buffer + 1) = 0;
                  break;
                case 3u:
                  v30 = 8;
LABEL_116:
                  v30 |= 1u;
                  *((_DWORD *)Buffer + 1) = 0;
                  *(_DWORD *)Buffer = v30;
                  break;
              }
              if ( (v29 & 4) != 0 )
              {
                *((_DWORD *)Buffer + 1) = 0;
                *(_DWORD *)Buffer = v30 | 4;
              }
              v31 = __PAIR64__(*(unsigned int *)&ValueName.Length, v70) >> 4;
LABEL_112:
              v32 = 0;
              if ( (v31 & 3) != 0 )
              {
                if ( (v31 & 3) == 1 )
                {
                  *((_DWORD *)Buffer + 2) = 1;
                  v32 = 1;
                }
                else
                {
                  if ( (v31 & 3) != 2 )
                    goto LABEL_120;
                  v5 = *((_DWORD *)Buffer + 3);
                  v32 = *((_DWORD *)Buffer + 2) & 0xFFFFFFFC | 2;
                  *((_DWORD *)Buffer + 2) = v32;
                }
              }
              else
              {
                *((_DWORD *)Buffer + 2) = 0;
              }
              *((_DWORD *)Buffer + 3) = v5;
LABEL_120:
              if ( (v31 & 4) != 0 )
              {
                *((_DWORD *)Buffer + 3) = v5;
                *((_DWORD *)Buffer + 2) = v32 | 4;
              }
              return EafPlusModuleList;
            case ImageFontDisablePolicy:
              if ( BufferSize != 8 )
                return -1073741811;
              v9 >>= 16;
LABEL_96:
              v28 = 0;
              *(_DWORD *)Buffer = 0;
              *((_DWORD *)Buffer + 1) = 0;
              v11 = 0;
              switch ( v9 & 3 )
              {
                case 0u:
                  goto LABEL_93;
                case 1u:
                  goto LABEL_101;
                case 2u:
                  goto LABEL_89;
              }
              if ( (v9 & 3) != 3 )
                goto LABEL_93;
              v28 = 8;
LABEL_101:
              v11 = v28 | 1;
              goto LABEL_91;
            case ImageImageLoadPolicy:
              if ( BufferSize != 24 )
                return -1073741811;
              memset(Buffer, 0, 0x18u);
              v35 = ResultLength;
              v36 = 0;
              v37 = (ResultLength >> 20) & 3;
              KeyHandle[0] = (HANDLE)(ResultLength >> 20);
              if ( !v37 )
                goto LABEL_142;
              v38 = v37 - 1;
              if ( v38 )
              {
                if ( v38 != 1 )
                  goto LABEL_142;
                *(_DWORD *)Buffer = 2;
                v36 = 2;
              }
              else
              {
                *(_DWORD *)Buffer = 1;
                v36 = 1;
              }
              *((_DWORD *)Buffer + 1) = 0;
LABEL_142:
              if ( ((int)KeyHandle[0] & 4) != 0 )
              {
                *((_DWORD *)Buffer + 1) = 0;
                *(_DWORD *)Buffer = v36 | 4;
              }
              v75 = 0;
              KeyHandle[0] = (HANDLE)HIBYTE(v35);
              v39 = 0;
              if ( (v35 & 0x3000000) != 0 )
              {
                if ( (HIBYTE(v35) & 3) != 1 )
                {
                  if ( (HIBYTE(v35) & 3) == 2 )
                  {
                    v40 = *((_DWORD *)Buffer + 3);
                    v39 = *((_DWORD *)Buffer + 2) & 0xFFFFFFFC | 2;
                    *((_DWORD *)Buffer + 3) = v40;
                    *((_DWORD *)Buffer + 2) = v39;
                    goto LABEL_152;
                  }
LABEL_151:
                  v40 = 0;
LABEL_152:
                  if ( ((int)KeyHandle[0] & 4) != 0 )
                  {
                    *((_DWORD *)Buffer + 3) = v40;
                    *((_DWORD *)Buffer + 2) = v39 | 4;
                  }
                  v41 = v35 >> 28;
                  ResultLength = v41;
                  KeyHandle[1] = 0;
                  if ( (v41 & 3) != 0 )
                  {
                    if ( (v41 & 3) == 1 )
                    {
                      v41 = *((_DWORD *)Buffer + 4) & 0xFFFFFFFC | 1;
                    }
                    else
                    {
                      if ( (v41 & 3) != 2 )
                      {
LABEL_162:
                        v26 = (v41 & 4) == 0;
                        goto LABEL_72;
                      }
                      v41 = *((_DWORD *)Buffer + 4) & 0xFFFFFFFC | 2;
                    }
                    *((_DWORD *)Buffer + 4) = v41;
                    LOBYTE(v41) = ResultLength;
                  }
                  else
                  {
                    *((_DWORD *)Buffer + 4) &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)Buffer + 5) = *((_DWORD *)Buffer + 5);
                  goto LABEL_162;
                }
                *((_DWORD *)Buffer + 2) = 1;
                v39 = 1;
              }
              else
              {
                *((_DWORD *)Buffer + 2) = 0;
              }
              *((_DWORD *)Buffer + 3) = 0;
              goto LABEL_151;
            case ImagePayloadRestrictionPolicy:
              if ( BufferSize != 1072 )
                return -1073741811;
              LODWORD(v68) = 1072;
              memset(Buffer, 0, v68);
              v42 = *(_DWORD *)&ValueName.Length;
              v43 = 0;
              KeyHandle[0] = (HANDLE)(__PAIR64__(*(unsigned int *)&ValueName.Length, v70) >> 16);
              switch ( BYTE2(v70) & 3 )
              {
                case 0:
                  goto LABEL_170;
                case 1:
                  *((_DWORD *)Buffer + 6) = 1;
                  v43 = 1;
                  break;
                case 2:
                  *((_DWORD *)Buffer + 6) = 2;
                  v43 = 2;
                  break;
                default:
                  goto LABEL_170;
              }
              *((_DWORD *)Buffer + 7) = 0;
LABEL_170:
              if ( ((int)KeyHandle[0] & 4) != 0 )
              {
                *((_DWORD *)Buffer + 7) = 0;
                *((_DWORD *)Buffer + 6) = v43 | 4;
              }
              v44 = __PAIR64__(v42, v70) >> 20;
              v45 = 0;
              if ( (v44 & 3) != 0 )
              {
                if ( (v44 & 3) != 1 )
                {
                  if ( (v44 & 3) == 2 )
                  {
                    v46 = *((_DWORD *)Buffer + 9);
                    v45 = *((_DWORD *)Buffer + 8) & 0xFFFFFFFC | 2;
                    *((_DWORD *)Buffer + 9) = v46;
                    *((_DWORD *)Buffer + 8) = v45;
                    goto LABEL_180;
                  }
LABEL_179:
                  v46 = 0;
LABEL_180:
                  v13 = (v44 & 4) == 0;
                  v47 = *(_DWORD *)&ValueName.Length;
                  if ( !v13 )
                  {
                    *((_DWORD *)Buffer + 9) = v46;
                    *((_DWORD *)Buffer + 8) = v45 | 4;
                  }
                  KeyHandle[0] = (HANDLE)(__PAIR64__(v47, v70) >> 24);
                  if ( (v70 & 0x3000000) != 0 )
                  {
                    if ( (HIBYTE(v70) & 3) == 1 )
                    {
                      v48 = *((_DWORD *)Buffer + 10) & 0xFFFFFFFC | 1;
                    }
                    else
                    {
                      if ( (HIBYTE(v70) & 3) != 2 )
                        goto LABEL_190;
                      v48 = *((_DWORD *)Buffer + 10) & 0xFFFFFFFC | 2;
                    }
                    *((_DWORD *)Buffer + 10) = v48;
                    v47 = *(_DWORD *)&ValueName.Length;
                  }
                  else
                  {
                    *((_DWORD *)Buffer + 10) &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)Buffer + 11) = *((_DWORD *)Buffer + 11);
LABEL_190:
                  if ( ((int)KeyHandle[0] & 4) != 0 )
                  {
                    v49 = *((_DWORD *)Buffer + 11);
                    *((_DWORD *)Buffer + 10) |= 4u;
                    *((_DWORD *)Buffer + 11) = v49;
                  }
                  v50 = __PAIR64__(v47, v70) >> 28;
                  if ( (v50 & 3) != 0 )
                  {
                    if ( (v50 & 3) == 1 )
                    {
                      v51 = *(_DWORD *)Buffer & 0xFFFFFFFC | 1;
                    }
                    else
                    {
                      if ( (v50 & 3) != 2 )
                        goto LABEL_200;
                      v51 = *(_DWORD *)Buffer & 0xFFFFFFFC | 2;
                    }
                    *(_DWORD *)Buffer = v51;
                    v47 = *(_DWORD *)&ValueName.Length;
                  }
                  else
                  {
                    *(_DWORD *)Buffer &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)Buffer + 1) = *((_DWORD *)Buffer + 1);
LABEL_200:
                  if ( (v50 & 4) != 0 )
                  {
                    v52 = *((_DWORD *)Buffer + 1);
                    *(_DWORD *)Buffer |= 4u;
                    *((_DWORD *)Buffer + 1) = v52;
                  }
                  if ( (v47 & 3) != 0 )
                  {
                    if ( (v47 & 3) == 1 )
                    {
                      v53 = *((_DWORD *)Buffer + 2) & 0xFFFFFFFC | 1;
                    }
                    else
                    {
                      if ( (v47 & 3) != 2 )
                        goto LABEL_210;
                      v53 = *((_DWORD *)Buffer + 2) & 0xFFFFFFFC | 2;
                    }
                    *((_DWORD *)Buffer + 2) = v53;
                    v47 = *(_DWORD *)&ValueName.Length;
                  }
                  else
                  {
                    *((_DWORD *)Buffer + 2) &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)Buffer + 3) = *((_DWORD *)Buffer + 3);
LABEL_210:
                  if ( (v47 & 4) != 0 )
                  {
                    v54 = *((_DWORD *)Buffer + 3);
                    *((_DWORD *)Buffer + 2) |= 4u;
                    *((_DWORD *)Buffer + 3) = v54;
                  }
                  v55 = v47 >> 8;
                  *(_DWORD *)&ValueName.Length = v55;
                  if ( (v55 & 3) != 0 )
                  {
                    if ( (v55 & 3) == 1 )
                    {
                      v55 = *((_DWORD *)Buffer + 4) & 0xFFFFFFFC | 1;
                    }
                    else
                    {
                      if ( (v55 & 3) != 2 )
                      {
LABEL_220:
                        if ( (v55 & 4) != 0 )
                        {
                          v56 = *((_DWORD *)Buffer + 5);
                          *((_DWORD *)Buffer + 4) |= 4u;
                          *((_DWORD *)Buffer + 5) = v56;
                        }
                        qmemcpy((char *)Buffer + 48, Value, 0x400u);
                        return EafPlusModuleList;
                      }
                      v55 = *((_DWORD *)Buffer + 4) & 0xFFFFFFFC | 2;
                    }
                    *((_DWORD *)Buffer + 4) = v55;
                    LOBYTE(v55) = ValueName.Length;
                  }
                  else
                  {
                    *((_DWORD *)Buffer + 4) &= 0xFFFFFFFC;
                  }
                  *((_DWORD *)Buffer + 5) = *((_DWORD *)Buffer + 5);
                  goto LABEL_220;
                }
                *((_DWORD *)Buffer + 8) = 1;
                v45 = 1;
              }
              else
              {
                *((_DWORD *)Buffer + 8) = 0;
              }
              *((_DWORD *)Buffer + 9) = 0;
              goto LABEL_179;
            case ImageChildProcessPolicy:
              if ( BufferSize != 8 )
                return -1073741811;
              v57 = v8 >> 4;
              v58 = 0;
              v59 = 0;
              *(_DWORD *)Buffer = 0;
              *((_DWORD *)Buffer + 1) = 0;
              switch ( v57 & 3 )
              {
                case 0u:
                  goto LABEL_235;
                case 1u:
                  goto LABEL_233;
                case 2u:
                  *(_DWORD *)Buffer = 2;
                  v59 = 2;
                  break;
                case 3u:
                  v58 = 8;
LABEL_233:
                  v59 = v58 | 1;
                  *(_DWORD *)Buffer = v58 | 1;
                  break;
                default:
                  goto LABEL_235;
              }
              *((_DWORD *)Buffer + 1) = 0;
LABEL_235:
              result = EafPlusModuleList;
              if ( (v57 & 4) == 0 )
                return result;
              *(_DWORD *)Buffer = v59 | 4;
              goto LABEL_39;
            case ImageSehopPolicy:
              if ( BufferSize != 8 )
                return -1073741811;
              v10 = __PAIR64__(v9, v10) >> 4;
LABEL_28:
              v11 = 0;
              *(_DWORD *)Buffer = 0;
              *((_DWORD *)Buffer + 1) = 0;
              v12 = 0;
              switch ( v10 & 3 )
              {
                case 0u:
                  goto LABEL_36;
                case 1u:
                  goto LABEL_33;
                case 2u:
                  goto LABEL_81;
              }
              if ( (v10 & 3) != 3 )
                goto LABEL_36;
              v12 = 8;
LABEL_33:
              v11 = v12 | 1;
              goto LABEL_34;
            case ImageHeapPolicy:
              if ( BufferSize != 8 )
                return -1073741811;
              v10 = __PAIR64__(v9, v10) >> 12;
LABEL_78:
              v11 = 0;
              *(_DWORD *)Buffer = 0;
              *((_DWORD *)Buffer + 1) = 0;
              switch ( v10 & 3 )
              {
                case 0u:
                  break;
                case 1u:
                  v11 = 1;
LABEL_34:
                  *(_DWORD *)Buffer = v11;
                  goto LABEL_35;
                case 2u:
LABEL_81:
                  *(_DWORD *)Buffer = 2;
                  v11 = 2;
LABEL_35:
                  *((_DWORD *)Buffer + 1) = 0;
                  break;
              }
LABEL_36:
              v13 = (v10 & 4) == 0;
LABEL_37:
              result = EafPlusModuleList;
              if ( !v13 )
              {
                *(_DWORD *)Buffer = v11 | 4;
LABEL_39:
                *((_DWORD *)Buffer + 1) = 0;
              }
              return result;
            case ImageUserShadowStackPolicy:
              if ( BufferSize != 24 )
                return -1073741811;
              v60 = v8 >> 28;
              *(_DWORD *)&ValueName.Length = v60;
              memset(Buffer, 0, 0x18u);
              v75 = 0;
              v61 = 0;
              switch ( v60 & 3 )
              {
                case 0u:
                  goto LABEL_247;
                case 1u:
                  v62 = 0;
                  break;
                case 2u:
                  *(_DWORD *)Buffer = 2;
                  v61 = 2;
                  *((_DWORD *)Buffer + 1) = 0;
                  goto LABEL_247;
                case 3u:
                  v62 = 8;
                  break;
                default:
                  goto LABEL_247;
              }
              *((_DWORD *)Buffer + 1) = 0;
              v61 = v62 | 1;
              *(_DWORD *)Buffer = v62 | 1;
LABEL_247:
              if ( (ValueName.Length & 4) != 0 )
              {
                *((_DWORD *)Buffer + 1) = 0;
                *(_DWORD *)Buffer = v61 | 4;
              }
              v63 = 0;
              v64 = 0;
              if ( ((int)KeyHandle[0] & 3) != 0 )
              {
                if ( ((int)KeyHandle[0] & 3) != 1 )
                {
                  if ( ((int)KeyHandle[0] & 3) == 2 )
                  {
                    v64 = *((_DWORD *)Buffer + 3);
                    v63 = *((_DWORD *)Buffer + 2) & 0xFFFFFFFC | 2;
                    *((_DWORD *)Buffer + 3) = v64;
                    *((_DWORD *)Buffer + 2) = v63;
                  }
LABEL_256:
                  v65 = KeyHandle[0];
                  if ( ((int)KeyHandle[0] & 4) != 0 )
                  {
                    *((_DWORD *)Buffer + 3) = v64;
                    *((_DWORD *)Buffer + 2) = v63 | 4;
                  }
                  KeyHandle[0] = (HANDLE)(__PAIR64__(v77[5], (unsigned int)v65) >> 4);
                  if ( ((int)KeyHandle[0] & 3) == 0 )
                  {
                    *((_DWORD *)Buffer + 4) &= 0xFFFFFFFC;
                    goto LABEL_267;
                  }
                  if ( ((int)KeyHandle[0] & 3) != 1 )
                  {
                    if ( ((int)KeyHandle[0] & 3) == 2 )
                    {
                      v67 = *((_DWORD *)Buffer + 4) & 0xFFFFFFFC | 2;
                      goto LABEL_265;
                    }
                    if ( ((int)KeyHandle[0] & 3) != 3 )
                    {
LABEL_268:
                      v26 = ((int)KeyHandle[0] & 4) == 0;
LABEL_72:
                      if ( !v26 )
                      {
                        v27 = *((_DWORD *)Buffer + 5);
                        *((_DWORD *)Buffer + 4) |= 4u;
                        *((_DWORD *)Buffer + 5) = v27;
                      }
                      return EafPlusModuleList;
                    }
                    v66 = *((_DWORD *)Buffer + 5);
                    *((_DWORD *)Buffer + 4) |= 8u;
                    *((_DWORD *)Buffer + 5) = v66;
                  }
                  v67 = *((_DWORD *)Buffer + 4) & 0xFFFFFFFC | 1;
LABEL_265:
                  *((_DWORD *)Buffer + 4) = v67;
LABEL_267:
                  *((_DWORD *)Buffer + 5) = *((_DWORD *)Buffer + 5);
                  goto LABEL_268;
                }
                *((_DWORD *)Buffer + 2) = 1;
                v63 = 1;
              }
              else
              {
                *((_DWORD *)Buffer + 2) = 0;
              }
              *((_DWORD *)Buffer + 3) = 0;
              goto LABEL_256;
            default:
              return -1073741811;
          }
        }
        EafPlusModuleList = ZwQueryValueKey(
                              KeyHandle[0],
                              &ValueName,
                              KeyValuePartialInformation,
                              &ObjectAttributes,
                              0x28u,
                              &ResultLength);
        if ( EafPlusModuleList >= 0 && Policy == ImagePayloadRestrictionPolicy )
          EafPlusModuleList = RtlpQueryEafPlusModuleList(KeyHandle[0], Value);
        NtClose(KeyHandle[0]);
        result = EafPlusModuleList;
        if ( EafPlusModuleList >= 0 )
        {
          if ( ObjectAttributes.ObjectName > (PUNICODE_STRING)0x18 )
            return -1073741788;
          LODWORD(v68) = ObjectAttributes.ObjectName;
          memcpy(v77, &ObjectAttributes.Attributes, v68);
          v8 = v77[3];
          v9 = v77[1];
          KeyHandle[0] = (HANDLE)v77[4];
          v70 = v77[2];
          v10 = v77[0];
          goto LABEL_26;
        }
      }
    }
  }
  return result;
}
