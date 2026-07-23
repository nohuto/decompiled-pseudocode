/*
 * XREFs of RtlQueryImageMitigationPolicy @ 0x1800E1AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007630C (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     NtOpenKey @ 0x18009D840 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D8E0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     RtlpQueryEafPlusModuleList @ 0x1800E3A78 (RtlpQueryEafPlusModuleList.c)
 */

NTSTATUS __cdecl RtlQueryImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  unsigned __int64 v5; // rbx
  __int64 v7; // r12
  ULONG v8; // r15d
  int inited; // esi
  const WCHAR *v11; // rdx
  ULONG v12; // eax
  int v13; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  __int32 v19; // r14d
  __int32 v20; // r14d
  __int32 v21; // r14d
  __int32 v22; // r14d
  int v23; // r14d
  int v24; // r14d
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r9
  unsigned __int64 v28; // r15
  bool v29; // zf
  unsigned __int64 v30; // rdx
  __int64 v31; // r10
  __int64 v32; // r9
  unsigned __int64 v33; // rdx
  __int64 v34; // r9
  unsigned __int64 v35; // r13
  __int64 v36; // r11
  __int64 v37; // r9
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // rdx
  bool v40; // zf
  __int32 v41; // r14d
  __int32 v42; // r14d
  __int32 v43; // r14d
  __int32 v44; // r14d
  int v45; // r14d
  int v46; // r14d
  unsigned __int64 v47; // r13
  unsigned __int64 v48; // r15
  __int64 v49; // r9
  __int64 v50; // r8
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r13
  bool v53; // zf
  unsigned __int64 v54; // r15
  __int64 v55; // r8
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // r15
  _OWORD *v58; // rdi
  _OWORD *v59; // rax
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int64 v67; // r9
  unsigned __int64 v68; // r8
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  _UNICODE_STRING ValueName; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v74; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v75; // [rsp+78h] [rbp-90h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v77[1024]; // [rsp+B8h] [rbp-50h] BYREF

  v5 = 0LL;
  KeyHandle = 0LL;
  ResultLength[0] = Flags & 4;
  v7 = 8LL;
  v8 = Flags & 8;
  v75 = 0LL;
  v74 = 0LL;
  inited = RtlInitUnicodeStringEx(&DestinationString, ImagePath);
  if ( inited >= 0 )
  {
    v11 = L"MitigationOptions";
    if ( v8 )
      v11 = L"MitigationAuditOptions";
    inited = RtlInitUnicodeStringEx(&ValueName, v11);
    if ( inited >= 0 )
    {
      v12 = ResultLength[0];
      if ( ResultLength[0] )
      {
        if ( DestinationString.Length )
          return -1073741811;
      }
      else
      {
        if ( DestinationString.Length )
        {
          v13 = RtlpOpenImageFileOptionsKeyEx(&DestinationString.Length, 9LL, 0, &KeyHandle);
        }
        else
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18011DB70;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v13 = NtOpenKey(&KeyHandle, 9u, &ObjectAttributes);
        }
        inited = v13;
        v12 = ResultLength[0];
      }
      if ( inited < 0 )
        return inited;
      if ( v12 )
      {
        if ( v8 )
        {
          v17 = v74 & 0xEEEEEEEEEEEEEEEEuLL;
          v18 = 0x2222222222222222LL;
        }
        else
        {
          v17 = v74 & 0xEEEEECCCCCCCCCCCuLL | 0x12222111211LL;
          v18 = 0x2222200000000000LL;
        }
        v14 = v18 | v17;
        v16 = *((_QWORD *)&v74 + 1) & 0xCCCCFCCCCCCCFCCCuLL | 0x2222022222220222LL;
        v15 = 35782690LL;
      }
      else
      {
        inited = NtQueryValueKey(
                   KeyHandle,
                   &ValueName,
                   KeyValuePartialInformation,
                   &ObjectAttributes,
                   0x28u,
                   ResultLength);
        if ( inited >= 0 && Policy == ImagePayloadRestrictionPolicy )
          inited = RtlpQueryEafPlusModuleList(KeyHandle, v77);
        NtClose(KeyHandle);
        if ( inited < 0 )
          return inited;
        if ( LODWORD(ObjectAttributes.RootDirectory) > 0x18 )
          return -1073741788;
        memmove(&v74, (char *)&ObjectAttributes.RootDirectory + 4, LODWORD(ObjectAttributes.RootDirectory));
        v14 = v74;
        v15 = v75;
        v16 = *((_QWORD *)&v74 + 1);
      }
      if ( Policy <= ImageFontDisablePolicy )
      {
        if ( Policy == ImageFontDisablePolicy )
        {
          if ( BufferSize != 8 )
            return -1073741811;
          LOBYTE(v14) = BYTE6(v14);
          goto LABEL_115;
        }
        if ( Policy == ImageDepPolicy )
        {
          if ( BufferSize != 8 )
            return -1073741811;
          goto LABEL_115;
        }
        v19 = Policy - 1;
        if ( v19 )
        {
          v20 = v19 - 1;
          if ( v20 )
          {
            v21 = v20 - 1;
            if ( v21 )
            {
              v22 = v21 - 1;
              if ( v22 )
              {
                v23 = v22 - 2;
                if ( v23 )
                {
                  v24 = v23 - 1;
                  if ( v24 )
                  {
                    if ( v24 != 1 || BufferSize != 16 )
                      return -1073741811;
                    v25 = v14 >> 44;
                    v26 = 0LL;
                    v27 = 0LL;
                    *(_OWORD *)Buffer = 0LL;
                    if ( (v25 & 3) == 0 )
                      goto LABEL_42;
                    if ( (v25 & 3) != 1 )
                    {
                      if ( (v25 & 3) == 2 )
                      {
                        *(_QWORD *)Buffer = 2LL;
                        v27 = 2LL;
                        goto LABEL_42;
                      }
                      if ( (v25 & 3) != 3 )
                      {
LABEL_42:
                        if ( (v25 & 4) != 0 )
                          *(_QWORD *)Buffer = v27 | 4;
                        v28 = v16 >> 4;
                        goto LABEL_45;
                      }
                      v26 = 8LL;
                    }
                    v27 = v26 | 1;
                    *(_QWORD *)Buffer = v26 | 1;
                    goto LABEL_42;
                  }
                  if ( BufferSize != 16 )
                    return -1073741811;
                  v30 = v14 >> 40;
                  v31 = 0LL;
                  v32 = 0LL;
                  *(_OWORD *)Buffer = 0LL;
                  if ( (v30 & 3) != 0 )
                  {
                    switch ( v30 & 3 )
                    {
                      case 1uLL:
LABEL_59:
                        v32 = v31 | 1;
                        *(_QWORD *)Buffer = v31 | 1;
                        break;
                      case 2uLL:
                        *(_QWORD *)Buffer = 2LL;
                        v32 = 2LL;
                        break;
                      case 3uLL:
                        v31 = 8LL;
                        goto LABEL_59;
                    }
                  }
                  if ( (v30 & 4) != 0 )
                    *(_QWORD *)Buffer = v32 | 4;
                  v28 = v16 >> 8;
LABEL_45:
                  if ( (v28 & 3) != 0 )
                  {
                    if ( (v28 & 3) == 1 )
                    {
                      *((_QWORD *)Buffer + 1) = 1LL;
                      v5 = 1LL;
                      goto LABEL_50;
                    }
                    if ( (v28 & 3) != 2 )
                    {
LABEL_50:
                      v29 = (v28 & 4) == 0;
                      goto LABEL_80;
                    }
                    v5 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
                  }
                  *((_QWORD *)Buffer + 1) = v5;
                  goto LABEL_50;
                }
                if ( BufferSize != 8 )
                  return -1073741811;
                LOBYTE(v14) = BYTE4(v14);
                goto LABEL_85;
              }
              if ( BufferSize != 16 )
                return -1073741811;
              v33 = v14 >> 28;
              v34 = 0LL;
              *(_OWORD *)Buffer = 0LL;
              if ( (v33 & 3) != 0 )
              {
                if ( (v33 & 3) == 1 )
                {
                  *(_QWORD *)Buffer = 1LL;
                  v34 = 1LL;
                }
                else if ( (v33 & 3) == 2 )
                {
                  *(_QWORD *)Buffer = 2LL;
                  v34 = 2LL;
                }
              }
              if ( (v33 & 4) != 0 )
                *(_QWORD *)Buffer = v34 | 4;
              v35 = v15 >> 24;
              if ( (v35 & 3) != 0 )
              {
                if ( (v35 & 3) == 1 )
                {
                  *((_QWORD *)Buffer + 1) = 1LL;
                  v5 = 1LL;
                  goto LABEL_79;
                }
                if ( (v35 & 3) != 2 )
                {
LABEL_79:
                  v29 = (v35 & 4) == 0;
LABEL_80:
                  if ( !v29 )
                    *((_QWORD *)Buffer + 1) = v5 | 4;
                  return inited;
                }
                v5 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
              }
              *((_QWORD *)Buffer + 1) = v5;
              goto LABEL_79;
            }
            if ( BufferSize != 8 )
              return -1073741811;
            v14 >>= 24;
LABEL_85:
            *(_QWORD *)Buffer = 0LL;
            if ( (v14 & 3) == 0 )
              goto LABEL_121;
            if ( (v14 & 3) == 1 )
            {
              *(_QWORD *)Buffer = 1LL;
              v5 = 1LL;
              goto LABEL_121;
            }
            if ( (v14 & 3) != 2 )
            {
LABEL_121:
              v40 = (v14 & 4) == 0;
              goto LABEL_122;
            }
LABEL_88:
            *(_QWORD *)Buffer = 2LL;
            v5 = 2LL;
            goto LABEL_121;
          }
          if ( BufferSize != 8 )
            return -1073741811;
          v14 >>= 36;
LABEL_115:
          *(_QWORD *)Buffer = 0LL;
          if ( (v14 & 3) == 0 )
            goto LABEL_121;
          if ( (v14 & 3) != 1 )
          {
            if ( (v14 & 3) == 2 )
              goto LABEL_88;
            if ( (v14 & 3) != 3 )
              goto LABEL_121;
            v5 = 8LL;
          }
          v5 |= 1uLL;
          *(_QWORD *)Buffer = v5;
          goto LABEL_121;
        }
        if ( BufferSize != 24 )
          return -1073741811;
        v36 = 0LL;
        v37 = 0LL;
        *(_OWORD *)Buffer = 0LL;
        *((_QWORD *)Buffer + 2) = 0LL;
        if ( (v14 & 0x300) != 0 )
        {
          if ( (BYTE1(v14) & 3) == 1 )
          {
LABEL_98:
            v37 = v36 | 1;
            *(_QWORD *)Buffer = v36 | 1;
            goto LABEL_99;
          }
          if ( (BYTE1(v14) & 3) != 2 )
          {
            if ( (BYTE1(v14) & 3) != 3 )
              goto LABEL_99;
            v36 = 8LL;
            goto LABEL_98;
          }
          *(_QWORD *)Buffer = 2LL;
          v37 = 2LL;
        }
LABEL_99:
        if ( (v14 & 0x400) != 0 )
          *(_QWORD *)Buffer = v37 | 4;
        v38 = 0LL;
        if ( (v14 & 0x30000) != 0 )
        {
          if ( (BYTE2(v14) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 1) = 1LL;
            v38 = 1LL;
          }
          else if ( (BYTE2(v14) & 3) == 2 )
          {
            v38 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
            *((_QWORD *)Buffer + 1) = v38;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 1) = 0LL;
        }
        if ( (v14 & 0x40000) != 0 )
          *((_QWORD *)Buffer + 1) = v38 | 4;
        v39 = v14 >> 20;
        if ( (v39 & 3) != 0 )
        {
          if ( (v39 & 3) != 1 )
          {
            if ( (v39 & 3) == 2 )
            {
              *((_QWORD *)Buffer + 2) &= ~1uLL;
              *((_QWORD *)Buffer + 2) |= 2uLL;
            }
            goto LABEL_253;
          }
          goto LABEL_251;
        }
        goto LABEL_252;
      }
      v41 = Policy - 10;
      if ( !v41 )
      {
        if ( BufferSize != 24 )
          return -1073741811;
        v67 = 0LL;
        *(_OWORD *)Buffer = 0LL;
        *((_QWORD *)Buffer + 2) = 0LL;
        if ( ((v14 >> 52) & 3) != 0 )
        {
          if ( ((v14 >> 52) & 3) == 1 )
          {
            *(_QWORD *)Buffer = 1LL;
            v67 = 1LL;
          }
          else if ( ((v14 >> 52) & 3) == 2 )
          {
            *(_QWORD *)Buffer = 2LL;
            v67 = 2LL;
          }
        }
        if ( ((v14 >> 52) & 4) != 0 )
          *(_QWORD *)Buffer = v67 | 4;
        v68 = 0LL;
        if ( (v14 & 0x300000000000000LL) != 0 )
        {
          if ( (HIBYTE(v14) & 3) == 1 )
          {
            *((_QWORD *)Buffer + 1) = 1LL;
            v68 = 1LL;
          }
          else if ( (HIBYTE(v14) & 3) == 2 )
          {
            v68 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
            *((_QWORD *)Buffer + 1) = v68;
          }
        }
        else
        {
          *((_QWORD *)Buffer + 1) = 0LL;
        }
        if ( (v14 & 0x400000000000000LL) != 0 )
          *((_QWORD *)Buffer + 1) = v68 | 4;
        v39 = v14 >> 60;
        if ( (v39 & 3) != 0 )
        {
          if ( (v39 & 3) != 1 )
          {
            if ( (v39 & 3) == 2 )
            {
              *((_QWORD *)Buffer + 2) &= ~1uLL;
              *((_QWORD *)Buffer + 2) |= 2uLL;
            }
            goto LABEL_253;
          }
LABEL_251:
          *((_QWORD *)Buffer + 2) &= ~2uLL;
          *((_QWORD *)Buffer + 2) |= 1uLL;
LABEL_253:
          v53 = (v39 & 4) == 0;
LABEL_254:
          if ( !v53 )
            *((_QWORD *)Buffer + 2) |= 4uLL;
          return inited;
        }
LABEL_252:
        *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
        goto LABEL_253;
      }
      v42 = v41 - 1;
      if ( v42 )
      {
        v43 = v42 - 1;
        if ( v43 )
        {
          v44 = v43 - 1;
          if ( !v44 )
          {
            if ( BufferSize != 8 )
              return -1073741811;
            v14 >>= 4;
            goto LABEL_115;
          }
          v45 = v44 - 1;
          if ( !v45 )
          {
            if ( BufferSize != 8 )
              return -1073741811;
            v14 >>= 12;
            goto LABEL_85;
          }
          v46 = v45 - 1;
          if ( v46 )
          {
            if ( v46 != 1 || BufferSize != 8 )
              return -1073741811;
            v47 = v15 >> 20;
            *(_QWORD *)Buffer = 0LL;
            if ( (v47 & 3) != 0 )
            {
              if ( (v47 & 3) == 1 )
              {
                *(_QWORD *)Buffer = 1LL;
                v5 = 1LL;
              }
              else if ( (v47 & 3) == 2 )
              {
                *(_QWORD *)Buffer = 2LL;
                v5 = 2LL;
              }
            }
            v40 = (v47 & 4) == 0;
            goto LABEL_122;
          }
          if ( BufferSize != 24 )
            return -1073741811;
          v48 = v16 >> 60;
          v49 = 0LL;
          v50 = 0LL;
          *(_OWORD *)Buffer = 0LL;
          *((_QWORD *)Buffer + 2) = 0LL;
          if ( (v48 & 3) != 0 )
          {
            if ( (v48 & 3) == 1 )
            {
LABEL_146:
              v50 = v49 | 1;
              *(_QWORD *)Buffer = v49 | 1;
              goto LABEL_147;
            }
            if ( (v48 & 3) != 2 )
            {
              if ( (v48 & 3) != 3 )
                goto LABEL_147;
              v49 = 8LL;
              goto LABEL_146;
            }
            *(_QWORD *)Buffer = 2LL;
            v50 = 2LL;
          }
LABEL_147:
          if ( (v48 & 4) != 0 )
            *(_QWORD *)Buffer = v50 | 4;
          v51 = 0LL;
          if ( (v15 & 3) != 0 )
          {
            if ( (v15 & 3) == 1 )
            {
              *((_QWORD *)Buffer + 1) = 1LL;
              v51 = 1LL;
            }
            else if ( (v15 & 3) == 2 )
            {
              v51 = *((_QWORD *)Buffer + 1) & 0xFFFFFFFFFFFFFFFCuLL | 2;
              *((_QWORD *)Buffer + 1) = v51;
            }
          }
          else
          {
            *((_QWORD *)Buffer + 1) = 0LL;
          }
          if ( (v15 & 4) != 0 )
            *((_QWORD *)Buffer + 1) = v51 | 4;
          v52 = v15 >> 4;
          if ( (v52 & 3) == 0 )
          {
            *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
            goto LABEL_166;
          }
          if ( (v52 & 3) != 1 )
          {
            if ( (v52 & 3) == 2 )
            {
              *((_QWORD *)Buffer + 2) &= ~1uLL;
              *((_QWORD *)Buffer + 2) |= 2uLL;
              goto LABEL_166;
            }
            if ( (v52 & 3) != 3 )
            {
LABEL_166:
              v53 = (v52 & 4) == 0;
              goto LABEL_254;
            }
            *((_QWORD *)Buffer + 2) |= 8uLL;
          }
          *((_QWORD *)Buffer + 2) &= ~2uLL;
          *((_QWORD *)Buffer + 2) |= 1uLL;
          goto LABEL_166;
        }
        if ( BufferSize != 8 )
          return -1073741811;
        v54 = v16 >> 36;
        *(_QWORD *)Buffer = 0LL;
        if ( (v54 & 3) != 0 )
        {
          switch ( v54 & 3 )
          {
            case 1uLL:
LABEL_177:
              v5 |= 1uLL;
              *(_QWORD *)Buffer = v5;
              break;
            case 2uLL:
              *(_QWORD *)Buffer = 2LL;
              v5 = 2LL;
              break;
            case 3uLL:
              v5 = 8LL;
              goto LABEL_177;
          }
        }
        v40 = (v54 & 4) == 0;
LABEL_122:
        if ( !v40 )
          *(_QWORD *)Buffer = v5 | 4;
        return inited;
      }
      if ( BufferSize != 1072 )
        return -1073741811;
      memset(Buffer, 0, 0x430uLL);
      v55 = 0LL;
      if ( (v16 & 0x30000) != 0 )
      {
        if ( (BYTE2(v16) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 3) = 1LL;
          v55 = 1LL;
        }
        else if ( (BYTE2(v16) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 3) = 2LL;
          v55 = 2LL;
        }
      }
      if ( (v16 & 0x40000) != 0 )
        *((_QWORD *)Buffer + 3) = v55 | 4;
      v56 = 0LL;
      if ( ((v16 >> 20) & 3) != 0 )
      {
        if ( ((v16 >> 20) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 4) = 1LL;
          v56 = 1LL;
        }
        else if ( ((v16 >> 20) & 3) == 2 )
        {
          v56 = *((_QWORD *)Buffer + 4) & 0xFFFFFFFFFFFFFFFCuLL | 2;
          *((_QWORD *)Buffer + 4) = v56;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 4) = 0LL;
      }
      if ( ((v16 >> 20) & 4) != 0 )
        *((_QWORD *)Buffer + 4) = v56 | 4;
      if ( (v16 & 0x3000000) != 0 )
      {
        if ( (BYTE3(v16) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 5) &= ~2uLL;
          *((_QWORD *)Buffer + 5) |= 1uLL;
        }
        else if ( (BYTE3(v16) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 5) &= ~1uLL;
          *((_QWORD *)Buffer + 5) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 5) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v16 & 0x4000000) != 0 )
        *((_QWORD *)Buffer + 5) |= 4uLL;
      if ( ((v16 >> 28) & 3) != 0 )
      {
        if ( ((v16 >> 28) & 3) == 1 )
        {
          *(_QWORD *)Buffer &= ~2uLL;
          *(_QWORD *)Buffer |= 1uLL;
        }
        else if ( ((v16 >> 28) & 3) == 2 )
        {
          *(_QWORD *)Buffer &= ~1uLL;
          *(_QWORD *)Buffer |= 2uLL;
        }
      }
      else
      {
        *(_QWORD *)Buffer &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( ((v16 >> 28) & 4) != 0 )
        *(_QWORD *)Buffer |= 4uLL;
      if ( (v16 & 0x300000000LL) != 0 )
      {
        if ( (BYTE4(v16) & 3) == 1 )
        {
          *((_QWORD *)Buffer + 1) &= ~2uLL;
          *((_QWORD *)Buffer + 1) |= 1uLL;
        }
        else if ( (BYTE4(v16) & 3) == 2 )
        {
          *((_QWORD *)Buffer + 1) &= ~1uLL;
          *((_QWORD *)Buffer + 1) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 1) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v16 & 0x400000000LL) != 0 )
        *((_QWORD *)Buffer + 1) |= 4uLL;
      v57 = v16 >> 40;
      if ( (v57 & 3) != 0 )
      {
        if ( (v57 & 3) == 1 )
        {
          *((_QWORD *)Buffer + 2) &= ~2uLL;
          *((_QWORD *)Buffer + 2) |= 1uLL;
        }
        else if ( (v57 & 3) == 2 )
        {
          *((_QWORD *)Buffer + 2) &= ~1uLL;
          *((_QWORD *)Buffer + 2) |= 2uLL;
        }
      }
      else
      {
        *((_QWORD *)Buffer + 2) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      if ( (v57 & 4) != 0 )
        *((_QWORD *)Buffer + 2) |= 4uLL;
      v58 = (char *)Buffer + 48;
      v59 = v77;
      do
      {
        v60 = v59[1];
        *v58 = *v59;
        v61 = v59[2];
        v58[1] = v60;
        v62 = v59[3];
        v58[2] = v61;
        v63 = v59[4];
        v58[3] = v62;
        v64 = v59[5];
        v58[4] = v63;
        v65 = v59[6];
        v58[5] = v64;
        v66 = v59[7];
        v59 += 8;
        v58[6] = v65;
        v58 += 8;
        *(v58 - 1) = v66;
        --v7;
      }
      while ( v7 );
    }
  }
  return inited;
}
