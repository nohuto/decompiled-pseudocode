/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x1800E2410
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800751DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 *     ZwSetValueKey @ 0x18009DA00 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009E8C0 (ZwDeleteValueKey.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E3578 (RtlpDeleteEmptyImageFileOptionsKey.c)
 */

NTSTATUS __cdecl RtlSetImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  ULONG v5; // r14d
  char v6; // si
  const WCHAR *v10; // rdx
  ULONG v11; // r12d
  int inited; // ebx
  int v13; // eax
  NTSTATUS v14; // eax
  __int32 v15; // edi
  __int32 v16; // edi
  __int32 v17; // edi
  __int32 v18; // edi
  int v19; // edi
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // r9d
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r9
  unsigned __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r10
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v62; // r9d
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  __int64 v65; // rax
  unsigned __int64 v66; // rdx
  __int32 v67; // edi
  __int32 v68; // edi
  __int32 v69; // edi
  __int32 v70; // edi
  int v71; // edi
  int v72; // edi
  __int64 v73; // r10
  __int64 v74; // r9
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rcx
  int v79; // r10d
  __int64 v80; // rcx
  __int64 v81; // rax
  unsigned __int64 v82; // rcx
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rax
  __int64 v89; // rcx
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rdx
  unsigned __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rax
  unsigned __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rcx
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // r8
  unsigned __int64 v104; // rcx
  __int64 v105; // rax
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // r8
  unsigned __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rcx
  unsigned __int64 v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rdx
  unsigned __int64 v116; // rcx
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // r8
  __int64 v120; // r11
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // r9
  __int64 v124; // rdx
  __int64 v125; // rdx
  __int64 v126; // r8
  unsigned __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rcx
  __int64 v130; // r11
  __int64 v131; // rax
  __int64 v132; // rax
  __int64 v133; // rcx
  HANDLE KeyHandle; // [rsp+40h] [rbp-89h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-71h] BYREF
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-69h] BYREF
  _UNICODE_STRING v139; // [rsp+70h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-49h] BYREF
  __int128 Data; // [rsp+B0h] [rbp-19h] BYREF
  unsigned __int64 v142; // [rsp+C0h] [rbp-9h]
  char KeyValueInformation[8]; // [rsp+C8h] [rbp-1h] BYREF
  unsigned int Size; // [rsp+D0h] [rbp+7h]
  size_t Size_4; // [rsp+D4h] [rbp+Bh] BYREF

  KeyHandle = 0LL;
  v142 = 0LL;
  v5 = Flags & 2;
  v6 = Flags & 1;
  v10 = L"MitigationOptions";
  Data = 0LL;
  v11 = Flags & 8;
  if ( (Flags & 8) != 0 )
    v10 = L"MitigationAuditOptions";
  inited = RtlInitUnicodeStringEx(&DestinationString, v10);
  if ( inited >= 0 )
  {
    inited = RtlInitUnicodeStringEx(&ValueName, L"EAFModules");
    if ( inited >= 0 )
    {
      if ( (v6 || v5) && (BufferSize || Buffer) )
        goto LABEL_282;
      inited = RtlInitUnicodeStringEx(&v139, ImagePath);
      if ( inited < 0 )
        goto LABEL_285;
      if ( ImagePath )
      {
        v13 = RtlpOpenImageFileOptionsKeyEx(&v139.Length, 131087LL, v5 == 0, &KeyHandle);
      }
      else
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18011CB30;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v13 = NtOpenKey(&KeyHandle, 0x2000Fu, &ObjectAttributes);
      }
      inited = v13;
      if ( v13 < 0 )
        goto LABEL_283;
      v14 = NtQueryValueKey(
              KeyHandle,
              &DestinationString,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x28u,
              &ResultLength);
      inited = v14;
      if ( v14 >= 0 )
      {
        if ( Size > 0x18 )
        {
          inited = -1073741788;
          goto LABEL_283;
        }
        memmove(&Data, &Size_4, Size);
      }
      else if ( v14 != -1073741772 )
      {
        goto LABEL_283;
      }
      if ( Policy > ImageSignaturePolicy )
      {
        v67 = Policy - 9;
        if ( !v67 )
        {
          if ( v6 )
          {
            v30 = 0xFFF0FFFFFFFFFFFFuLL;
            goto LABEL_268;
          }
          if ( BufferSize == 8 )
          {
            v132 = *(_QWORD *)Buffer & 4LL;
            if ( (*(_QWORD *)Buffer & 3) != 0 )
            {
              if ( (*(_QWORD *)Buffer & 3LL) == 2 )
              {
                v133 = v132 != 0 ? 6LL : 2LL;
              }
              else if ( (*(_BYTE *)Buffer & 8) != 0 )
              {
                v133 = v132 != 0 ? 7LL : 3LL;
              }
              else
              {
                v133 = v132 != 0 ? 5LL : 1LL;
              }
              v32 = v133 << 48;
            }
            else
            {
              v32 = -(__int64)(v132 != 0) & 0x4000000000000LL;
            }
            v33 = 0xFFF0FFFFFFFFFFFFuLL;
            goto LABEL_279;
          }
          goto LABEL_282;
        }
        v68 = v67 - 1;
        if ( !v68 )
        {
          if ( v6 )
          {
            *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFLL;
            goto LABEL_281;
          }
          if ( BufferSize != 24 )
            goto LABEL_282;
          v119 = *((_QWORD *)Buffer + 1);
          v120 = *((_QWORD *)Buffer + 2);
          v121 = *(_QWORD *)Buffer & 4LL;
          v122 = v119 & 4;
          v123 = v120 & 4;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
              v125 = (((unsigned __int128)-(__int128)(unsigned __int64)v121 >> 64) & 4) + 2;
            else
              v125 = (((unsigned __int128)-(__int128)(unsigned __int64)v121 >> 64) & 4) + 1;
            v124 = v125 << 52;
          }
          else
          {
            v124 = -(__int64)(v121 != 0) & 0x40000000000000LL;
          }
          v126 = v119 & 3;
          v127 = Data & 0xF00FFFFFFFFFFFFFuLL | v124 & 0xF0FFFFFFFFFFFFFFuLL;
          if ( v126 )
          {
            if ( v126 == 2 )
              v129 = v122 != 0 ? 6LL : 2LL;
            else
              v129 = v122 != 0 ? 5LL : 1LL;
            v128 = v129 << 56;
          }
          else
          {
            v128 = -(__int64)(v122 != 0) & 0x400000000000000LL;
          }
          v53 = (v127 | v128) & 0xFFFFFFFFFFFFFFFLL;
          v130 = v120 & 3;
          if ( v130 )
          {
            if ( v130 == 2 )
              v131 = v123 != 0 ? 6LL : 2LL;
            else
              v131 = v123 != 0 ? 5LL : 1LL;
            v54 = v131 << 60;
          }
          else
          {
            v54 = -(__int64)(v123 != 0) & 0x4000000000000000LL;
          }
          goto LABEL_107;
        }
        v69 = v68 - 1;
        if ( !v69 )
        {
          if ( v6 )
          {
            *((_QWORD *)&Data + 1) &= 0xFFFFF0F00000FFFFuLL;
            if ( !v11 )
              ZwDeleteValueKey(KeyHandle, &ValueName);
            goto LABEL_281;
          }
          if ( BufferSize == 1072 )
          {
            if ( v11 || (inited = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)Buffer + 48, 0x400u), inited >= 0) )
            {
              v88 = *((_QWORD *)Buffer + 3) & 4LL;
              if ( (*((_QWORD *)Buffer + 3) & 3) != 0 )
              {
                if ( (*((_QWORD *)Buffer + 3) & 3LL) == 2 )
                  v90 = v88 != 0 ? 6LL : 2LL;
                else
                  v90 = v88 != 0 ? 5LL : 1LL;
                v89 = v90 << 16;
              }
              else
              {
                v89 = v88 != 0 ? 0x40000 : 0;
              }
              v91 = *((_QWORD *)Buffer + 4) & 4LL;
              v92 = *((_QWORD *)Buffer + 4) & 3LL;
              v93 = *((_QWORD *)&Data + 1) & 0xFFFFFFFFFF00FFFFuLL | v89 & 0xFFFFFFFFFF0FFFFFuLL;
              if ( v92 )
              {
                if ( v92 == 2 )
                  v95 = v91 != 0 ? 6LL : 2LL;
                else
                  v95 = v91 != 0 ? 5LL : 1LL;
                v94 = v95 << 20;
              }
              else
              {
                v94 = v91 != 0 ? 0x400000 : 0;
              }
              v96 = (v93 | v94) & 0xFFFFFFFFF0FFFFFFuLL;
              v97 = *((_QWORD *)Buffer + 5) & 4LL;
              v98 = *((_QWORD *)Buffer + 5) & 3LL;
              if ( v98 )
              {
                if ( v98 == 2 )
                  v100 = v97 != 0 ? 6LL : 2LL;
                else
                  v100 = v97 != 0 ? 5LL : 1LL;
                v99 = v100 << 24;
              }
              else
              {
                v99 = v97 != 0 ? 0x4000000 : 0;
              }
              v101 = v96 | v99;
              v102 = *(_QWORD *)Buffer & 4LL;
              v103 = *(_QWORD *)Buffer & 3LL;
              v104 = v101 & 0xFFFFFFFF0FFFFFFFuLL;
              if ( v103 )
              {
                if ( v103 == 2 )
                  v106 = v102 != 0 ? 6LL : 2LL;
                else
                  v106 = v102 != 0 ? 5LL : 1LL;
                v105 = v106 << 28;
              }
              else
              {
                v105 = v102 != 0 ? 0x40000000 : 0;
              }
              v107 = v104 | v105;
              v108 = *((_QWORD *)Buffer + 1) & 4LL;
              v109 = *((_QWORD *)Buffer + 1) & 3LL;
              v110 = v107 & 0xFFFFFFF0FFFFFFFFuLL;
              if ( v109 )
              {
                if ( v109 == 2 )
                  v112 = v108 != 0 ? 6LL : 2LL;
                else
                  v112 = v108 != 0 ? 5LL : 1LL;
                v111 = v112 << 32;
              }
              else
              {
                v111 = -(__int64)(v108 != 0) & 0x400000000LL;
              }
              v113 = v110 | v111;
              v114 = *((_QWORD *)Buffer + 2) & 4LL;
              v115 = *((_QWORD *)Buffer + 2) & 3LL;
              v116 = v113 & 0xFFFFF0FFFFFFFFFFuLL;
              if ( v115 )
              {
                if ( v115 == 2 )
                  v118 = v114 != 0 ? 6LL : 2LL;
                else
                  v118 = v114 != 0 ? 5LL : 1LL;
                v117 = v118 << 40;
              }
              else
              {
                v117 = -(__int64)(v114 != 0) & 0x40000000000LL;
              }
              *((_QWORD *)&Data + 1) = v116 | v117;
              goto LABEL_281;
            }
LABEL_283:
            if ( KeyHandle )
              NtClose(KeyHandle);
            goto LABEL_285;
          }
          goto LABEL_282;
        }
        v70 = v69 - 1;
        if ( v70 )
        {
          v71 = v70 - 1;
          if ( v71 )
          {
            v72 = v71 - 1;
            if ( v72 )
            {
              if ( v72 != 1 )
                goto LABEL_283;
              if ( v6 )
              {
                *((_QWORD *)&Data + 1) &= 0xFFFFFFFFFFFFFFFuLL;
                v142 &= 0xFFFFFFFFFFFFFF00uLL;
                goto LABEL_281;
              }
              if ( BufferSize == 24 )
              {
                v73 = *((_QWORD *)Buffer + 1);
                v74 = v73 & 4;
                v75 = *(_QWORD *)Buffer & 4LL;
                v76 = *((_QWORD *)Buffer + 2) & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                  {
                    v78 = v75 != 0 ? 6LL : 2LL;
                  }
                  else if ( (*(_BYTE *)Buffer & 8) != 0 )
                  {
                    v78 = v75 != 0 ? 7LL : 3LL;
                  }
                  else
                  {
                    v78 = v75 != 0 ? 5LL : 1LL;
                  }
                  v77 = v78 << 60;
                }
                else
                {
                  v77 = -(__int64)(v75 != 0) & 0x4000000000000000LL;
                }
                *((_QWORD *)&Data + 1) = *((_QWORD *)&Data + 1) & 0xFFFFFFFFFFFFFFFLL | v77;
                v79 = v73 & 3;
                if ( v79 )
                {
                  if ( v79 == 2LL )
                    v80 = v74 != 0 ? 6LL : 2LL;
                  else
                    v80 = v74 != 0 ? 5LL : 1LL;
                }
                else
                {
                  v80 = v74 != 0 ? 4 : 0;
                }
                v81 = *((_QWORD *)Buffer + 2) & 3LL;
                v82 = v142 & 0xFFFFFFFFFFFFFF00uLL | v80 & 0xFFFFFFFFFFFFFF0FuLL;
                if ( v81 )
                {
                  if ( v81 == 2 )
                  {
                    v83 = v76 != 0 ? 96LL : 32LL;
                  }
                  else if ( (*((_BYTE *)Buffer + 16) & 8) != 0 )
                  {
                    v83 = v76 != 0 ? 112LL : 48LL;
                  }
                  else
                  {
                    v83 = v76 != 0 ? 80LL : 16LL;
                  }
                }
                else
                {
                  v83 = v76 != 0 ? 0x40 : 0;
                }
                v142 = v82 | v83;
                goto LABEL_281;
              }
            }
            else
            {
              if ( v6 )
              {
                *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFF0FFFuLL;
                goto LABEL_281;
              }
              if ( BufferSize == 8 )
              {
                v84 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                    v32 = v84 != 0 ? 24576LL : 0x2000LL;
                  else
                    v32 = v84 != 0 ? 20480LL : 4096LL;
                }
                else
                {
                  v32 = v84 != 0 ? 0x4000 : 0;
                }
                v38 = Data & 0xFFFFFFFFFFFF0FFFuLL;
                goto LABEL_280;
              }
            }
          }
          else
          {
            if ( v6 )
            {
              *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFF0FuLL;
              goto LABEL_281;
            }
            if ( BufferSize == 8 )
            {
              v85 = *(_QWORD *)Buffer & 4LL;
              if ( (*(_QWORD *)Buffer & 3) != 0 )
              {
                if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                {
                  v32 = v85 != 0 ? 96LL : 32LL;
                }
                else if ( (*(_BYTE *)Buffer & 8) != 0 )
                {
                  v32 = v85 != 0 ? 112LL : 48LL;
                }
                else
                {
                  v32 = v85 != 0 ? 80LL : 16LL;
                }
              }
              else
              {
                v32 = v85 != 0 ? 0x40 : 0;
              }
              v38 = Data & 0xFFFFFFFFFFFFFF0FuLL;
              goto LABEL_280;
            }
          }
          goto LABEL_282;
        }
        if ( v6 )
        {
          *((_QWORD *)&Data + 1) &= 0xFFFFFF0FFFFFFFFFuLL;
          goto LABEL_281;
        }
        if ( BufferSize != 8 )
          goto LABEL_282;
        v86 = *(_QWORD *)Buffer & 4LL;
        if ( (*(_QWORD *)Buffer & 3) != 0 )
        {
          if ( (*(_QWORD *)Buffer & 3LL) != 2 )
          {
            v66 = 0xFFFFFF0FFFFFFFFFuLL;
            if ( (*(_BYTE *)Buffer & 8) != 0 )
              v87 = v86 != 0 ? 7LL : 3LL;
            else
              v87 = v86 != 0 ? 5LL : 1LL;
            v25 = v87 << 36;
            goto LABEL_137;
          }
          v25 = (v86 != 0 ? 6LL : 2LL) << 36;
        }
        else
        {
          v25 = -(__int64)(v86 != 0) & 0x4000000000LL;
        }
        v66 = 0xFFFFFF0FFFFFFFFFuLL;
      }
      else
      {
        if ( Policy != ImageSignaturePolicy )
        {
          if ( Policy == ImageDepPolicy )
          {
            if ( v6 )
            {
              *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFFF0uLL;
              goto LABEL_281;
            }
            if ( BufferSize == 8 )
            {
              v56 = *(_QWORD *)Buffer & 4LL;
              if ( (*(_QWORD *)Buffer & 3) != 0 )
              {
                if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                {
                  v32 = v56 != 0 ? 6LL : 2LL;
                }
                else if ( (*(_BYTE *)Buffer & 8) != 0 )
                {
                  v32 = v56 != 0 ? 7LL : 3LL;
                }
                else
                {
                  v32 = v56 != 0 ? 5LL : 1LL;
                }
              }
              else
              {
                v32 = v56 != 0 ? 4 : 0;
              }
              v38 = Data & 0xFFFFFFFFFFFFFFF0uLL;
              goto LABEL_280;
            }
            goto LABEL_282;
          }
          v15 = Policy - 1;
          if ( v15 )
          {
            v16 = v15 - 1;
            if ( v16 )
            {
              v17 = v16 - 1;
              if ( v17 )
              {
                v18 = v17 - 1;
                if ( v18 )
                {
                  v19 = v18 - 2;
                  if ( v19 )
                  {
                    if ( v19 != 1 )
                      goto LABEL_283;
                    if ( v6 )
                    {
                      Data &= __PAIR128__(-3841LL, 0xFFFFF0FFFFFFFFFFuLL);
LABEL_281:
                      inited = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, &Data, 0x18u);
                      goto LABEL_283;
                    }
                    if ( BufferSize == 16 )
                    {
                      v20 = *((_QWORD *)Buffer + 1);
                      v21 = v20 & 4;
                      v22 = *(_QWORD *)Buffer & 4LL;
                      if ( (*(_QWORD *)Buffer & 3) != 0 )
                      {
                        if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                        {
                          v26 = Data & 0xFFFFF0FFFFFFFFFFuLL | ((v22 != 0 ? 6LL : 2LL) << 40);
                          v24 = *((_QWORD *)&Data + 1);
                          *(_QWORD *)&Data = v26;
                          v25 = v21 != 0 ? 1536LL : 512LL;
                          goto LABEL_44;
                        }
                        if ( (*(_BYTE *)Buffer & 8) != 0 )
                          v27 = v22 != 0 ? 7LL : 3LL;
                        else
                          v27 = v22 != 0 ? 5LL : 1LL;
                        v24 = *((_QWORD *)&Data + 1);
                        *(_QWORD *)&Data = Data & 0xFFFFF0FFFFFFFFFFuLL | (v27 << 40);
                        v28 = v20 & 3;
                        if ( v28 )
                        {
                          if ( v28 != 2LL )
                          {
                            v25 = v21 != 0 ? 1280LL : 256LL;
                            goto LABEL_44;
                          }
                          goto LABEL_34;
                        }
                      }
                      else
                      {
                        v23 = Data & 0xFFFFF0FFFFFFFFFFuLL | -(__int64)(v22 != 0) & 0x40000000000LL;
                        v24 = *((_QWORD *)&Data + 1);
                        *(_QWORD *)&Data = v23;
                        if ( (v20 & 3) == 2 )
                        {
LABEL_34:
                          v25 = v21 != 0 ? 1536LL : 512LL;
LABEL_44:
                          v29 = v24 & 0xFFFFFFFFFFFFF0FFuLL;
LABEL_138:
                          *((_QWORD *)&Data + 1) = v29 | v25;
                          goto LABEL_281;
                        }
                      }
                      v25 = v21 != 0 ? 0x400 : 0;
                      goto LABEL_44;
                    }
                    goto LABEL_282;
                  }
                  if ( v6 )
                  {
                    v30 = 0xFFFFFFF0FFFFFFFFuLL;
LABEL_268:
                    *(_QWORD *)&Data = v30 & Data;
                    goto LABEL_281;
                  }
                  if ( BufferSize == 8 )
                  {
                    v31 = *(_QWORD *)Buffer & 4LL;
                    if ( (*(_QWORD *)Buffer & 3) != 0 )
                    {
                      v33 = 0xFFFFFFF0FFFFFFFFuLL;
                      if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                        v34 = v31 != 0 ? 6LL : 2LL;
                      else
                        v34 = v31 != 0 ? 5LL : 1LL;
                      v32 = v34 << 32;
                    }
                    else
                    {
                      v32 = -(__int64)(v31 != 0) & 0x400000000LL;
                      v33 = 0xFFFFFFF0FFFFFFFFuLL;
                    }
                    goto LABEL_279;
                  }
                }
                else
                {
                  if ( v6 )
                  {
                    v30 = 0xFFFFFFFF0FFFFFFFuLL;
                    goto LABEL_268;
                  }
                  if ( BufferSize == 8 )
                  {
                    v33 = 0xFFFFFFFF0FFFFFFFuLL;
                    v35 = *(_QWORD *)Buffer & 4LL;
                    if ( (*(_QWORD *)Buffer & 3) != 0 )
                    {
                      if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                        v36 = v35 != 0 ? 6LL : 2LL;
                      else
                        v36 = v35 != 0 ? 5LL : 1LL;
                      v32 = v36 << 28;
                    }
                    else
                    {
                      v32 = v35 != 0 ? 0x40000000 : 0;
                    }
                    goto LABEL_279;
                  }
                }
              }
              else
              {
                if ( v6 )
                {
                  *(_QWORD *)&Data = Data & 0xFFFFFFFFF0FFFFFFuLL;
                  goto LABEL_281;
                }
                if ( BufferSize == 8 )
                {
                  v37 = *(_QWORD *)Buffer & 4LL;
                  if ( (*(_QWORD *)Buffer & 3) != 0 )
                  {
                    if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                      v39 = v37 != 0 ? 6LL : 2LL;
                    else
                      v39 = v37 != 0 ? 5LL : 1LL;
                    v32 = v39 << 24;
                  }
                  else
                  {
                    v32 = v37 != 0 ? 0x4000000 : 0;
                  }
                  v38 = Data & 0xFFFFFFFFF0FFFFFFuLL;
                  goto LABEL_280;
                }
              }
            }
            else
            {
              if ( v6 )
              {
                v30 = 0xFFFFFF0FFFFFFFFFuLL;
                goto LABEL_268;
              }
              if ( BufferSize == 8 )
              {
                v40 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) != 2 )
                  {
                    v33 = 0xFFFFFF0FFFFFFFFFuLL;
                    if ( (*(_BYTE *)Buffer & 8) != 0 )
                      v41 = v40 != 0 ? 7LL : 3LL;
                    else
                      v41 = v40 != 0 ? 5LL : 1LL;
                    v32 = v41 << 36;
                    goto LABEL_279;
                  }
                  v32 = (v40 != 0 ? 6LL : 2LL) << 36;
                }
                else
                {
                  v32 = -(__int64)(v40 != 0) & 0x4000000000LL;
                }
                v33 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_279:
                v38 = v33 & Data;
LABEL_280:
                *(_QWORD *)&Data = v38 | v32;
                goto LABEL_281;
              }
            }
LABEL_282:
            inited = -1073741811;
            goto LABEL_283;
          }
          if ( v6 )
          {
            *(_QWORD *)&Data = Data & 0xFFFFFFFFFF00F0FFuLL;
            goto LABEL_281;
          }
          if ( BufferSize != 24 )
            goto LABEL_282;
          v42 = *((_QWORD *)Buffer + 1);
          v43 = *((_QWORD *)Buffer + 2);
          v44 = v42 & 4;
          v45 = v43 & 4;
          v46 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v47 = (((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400) + 512;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v47 = (((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400) + 768;
            }
            else
            {
              v47 = (((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400) + 256;
            }
          }
          else
          {
            v47 = ((unsigned __int128)-(__int128)(unsigned __int64)v46 >> 64) & 0x400;
          }
          v48 = v42 & 3;
          v49 = Data & 0xFFFFFFFFFFF0F0FFuLL | v47 & 0xFFFFFFFFFFF0FFFFuLL;
          if ( v48 )
          {
            if ( v48 == 2 )
              v51 = v44 != 0 ? 6LL : 2LL;
            else
              v51 = v44 != 0 ? 5LL : 1LL;
            v50 = v51 << 16;
          }
          else
          {
            v50 = v44 != 0 ? 0x40000 : 0;
          }
          v52 = v43 & 3;
          v53 = (v49 | v50) & 0xFFFFFFFFFF0FFFFFuLL;
          if ( v52 )
          {
            if ( v52 == 2 )
              v55 = v45 != 0 ? 6LL : 2LL;
            else
              v55 = v45 != 0 ? 5LL : 1LL;
            v54 = v55 << 20;
          }
          else
          {
            v54 = v45 != 0 ? 0x400000 : 0;
          }
LABEL_107:
          *(_QWORD *)&Data = v53 | v54;
          goto LABEL_281;
        }
        if ( v6 )
        {
          v30 = 0xFFFF0FFFFFFFFFFFuLL;
          goto LABEL_268;
        }
        if ( BufferSize != 16 )
          goto LABEL_282;
        v57 = *((_QWORD *)Buffer + 1);
        v58 = v57 & 4;
        v59 = *(_QWORD *)Buffer & 4LL;
        if ( (*(_QWORD *)Buffer & 3) != 0 )
        {
          if ( (*(_QWORD *)Buffer & 3LL) == 2 )
          {
            v61 = v59 != 0 ? 6LL : 2LL;
          }
          else if ( (*(_BYTE *)Buffer & 8) != 0 )
          {
            v61 = v59 != 0 ? 7LL : 3LL;
          }
          else
          {
            v61 = v59 != 0 ? 5LL : 1LL;
          }
          v60 = v61 << 44;
        }
        else
        {
          v60 = -(__int64)(v59 != 0) & 0x400000000000LL;
        }
        *(_QWORD *)&Data = Data & 0xFFFF0FFFFFFFFFFFuLL | v60;
        v62 = v57 & 3;
        if ( v62 )
        {
          if ( v62 == 2LL )
          {
            v63 = (v58 != 0 ? 6LL : 2LL) << 44;
            v65 = v58 != 0 ? 96LL : 32LL;
          }
          else
          {
            v63 = (v58 != 0 ? 5LL : 1LL) << 44;
            v65 = v58 != 0 ? 80LL : 16LL;
          }
          v64 = v65 & 0xFFFF0FFFFFFFFFFFuLL;
        }
        else
        {
          v63 = v58 != 0 ? 0x40uLL : 0;
          v64 = -(__int64)(v58 != 0) & 0x400000000000LL;
        }
        v25 = v64 | v63;
        v66 = 0xFFFF0FFFFFFFFF0FuLL;
      }
LABEL_137:
      v29 = v66 & *((_QWORD *)&Data + 1);
      goto LABEL_138;
    }
  }
LABEL_285:
  if ( inited == -1073741772 && v5 )
    return 0;
  return inited;
}
