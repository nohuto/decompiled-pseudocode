/*
 * XREFs of RtlSetImageMitigationPolicy @ 0x1800E27F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800752DC (RtlpOpenImageFileOptionsKeyEx.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D390 (NtQueryValueKey.c)
 *     ZwSetValueKey @ 0x18009DCA0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009EB60 (ZwDeleteValueKey.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     RtlpDeleteEmptyImageFileOptionsKey @ 0x1800E39C8 (RtlpDeleteEmptyImageFileOptionsKey.c)
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
  int v20; // edi
  unsigned __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // r9d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // r9d
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  bool v52; // cf
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // r9
  __int64 v56; // r10
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r9
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rcx
  __int64 v65; // r10
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rcx
  __int32 v72; // edi
  __int32 v73; // edi
  __int32 v74; // edi
  __int32 v75; // edi
  int v76; // edi
  int v77; // edi
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // r10
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // rcx
  int v87; // r10d
  __int64 v88; // rcx
  __int64 v89; // rax
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  unsigned __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // rcx
  unsigned __int64 v109; // rcx
  __int64 v110; // rax
  __int64 v111; // r8
  unsigned __int64 v112; // rcx
  __int64 v113; // rax
  __int64 v114; // rax
  unsigned __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // r8
  unsigned __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rcx
  unsigned __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rdx
  unsigned __int64 v124; // rcx
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // r8
  __int64 v128; // r11
  __int64 v129; // rax
  __int64 v130; // rcx
  __int64 v131; // r9
  __int64 v132; // rdx
  __int64 v133; // rdx
  __int64 v134; // r8
  unsigned __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rcx
  __int64 v138; // r11
  __int64 v139; // rax
  HANDLE KeyHandle; // [rsp+40h] [rbp-89h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-81h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-71h] BYREF
  _UNICODE_STRING ValueName; // [rsp+60h] [rbp-69h] BYREF
  _UNICODE_STRING v145; // [rsp+70h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-49h] BYREF
  __int128 Data; // [rsp+B0h] [rbp-19h] BYREF
  unsigned __int64 v148; // [rsp+C0h] [rbp-9h]
  char KeyValueInformation[8]; // [rsp+C8h] [rbp-1h] BYREF
  unsigned int Size; // [rsp+D0h] [rbp+7h]
  size_t Size_4; // [rsp+D4h] [rbp+Bh] BYREF

  KeyHandle = 0LL;
  v148 = 0LL;
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
        goto LABEL_292;
      inited = RtlInitUnicodeStringEx(&v145, ImagePath);
      if ( inited < 0 )
        goto LABEL_295;
      if ( ImagePath )
      {
        v13 = RtlpOpenImageFileOptionsKeyEx(&v145.Length, 131087LL, v5 == 0, &KeyHandle);
      }
      else
      {
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18011DB70;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v13 = NtOpenKey(&KeyHandle, 0x2000Fu, &ObjectAttributes);
      }
      inited = v13;
      if ( v13 < 0 )
        goto LABEL_293;
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
          goto LABEL_293;
        }
        memmove(&Data, &Size_4, Size);
      }
      else if ( v14 != -1073741772 )
      {
        goto LABEL_293;
      }
      if ( Policy <= ImageFontDisablePolicy )
      {
        if ( Policy == ImageFontDisablePolicy )
        {
          if ( v6 )
          {
            v21 = 0xFFF0FFFFFFFFFFFFuLL;
            goto LABEL_32;
          }
          if ( BufferSize != 8 )
            goto LABEL_292;
          v44 = 0xFFF0FFFFFFFFFFFFuLL;
          v70 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v71 = v70 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v71 = v70 != 0 ? 7LL : 3LL;
            }
            else
            {
              v71 = v70 != 0 ? 5LL : 1LL;
            }
            v43 = v71 << 48;
            goto LABEL_85;
          }
          v52 = v70 != 0;
          v53 = 0x4000000000000LL;
          goto LABEL_146;
        }
        if ( Policy == ImageDepPolicy )
        {
          if ( v6 )
          {
            *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFFF0uLL;
            goto LABEL_291;
          }
          if ( BufferSize != 8 )
            goto LABEL_292;
          v69 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v43 = v69 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v43 = v69 != 0 ? 7LL : 3LL;
            }
            else
            {
              v43 = v69 != 0 ? 5LL : 1LL;
            }
          }
          else
          {
            v43 = v69 != 0 ? 4 : 0;
          }
          v48 = Data & 0xFFFFFFFFFFFFFFF0uLL;
          goto LABEL_140;
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
                  v20 = v19 - 1;
                  if ( v20 )
                  {
                    if ( v20 != 1 )
                      goto LABEL_293;
                    if ( v6 )
                    {
                      v21 = 0xFFFF0FFFFFFFFFFFuLL;
LABEL_32:
                      *(_QWORD *)&Data = v21 & Data;
LABEL_291:
                      inited = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, &Data, 0x18u);
                      goto LABEL_293;
                    }
                    if ( BufferSize == 16 )
                    {
                      v22 = *((_QWORD *)Buffer + 1);
                      v23 = v22 & 4;
                      v24 = *(_QWORD *)Buffer & 4LL;
                      if ( (*(_QWORD *)Buffer & 3) != 0 )
                      {
                        if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                        {
                          v26 = v24 != 0 ? 6LL : 2LL;
                        }
                        else if ( (*(_BYTE *)Buffer & 8) != 0 )
                        {
                          v26 = v24 != 0 ? 7LL : 3LL;
                        }
                        else
                        {
                          v26 = v24 != 0 ? 5LL : 1LL;
                        }
                        v25 = v26 << 44;
                      }
                      else
                      {
                        v25 = -(__int64)(v24 != 0) & 0x400000000000LL;
                      }
                      *(_QWORD *)&Data = Data & 0xFFFF0FFFFFFFFFFFuLL | v25;
                      v27 = v22 & 3;
                      if ( v27 )
                      {
                        if ( v27 == 2LL )
                        {
                          v28 = (v23 != 0 ? 6LL : 2LL) << 44;
                          v30 = v23 != 0 ? 96LL : 32LL;
                        }
                        else
                        {
                          v28 = (v23 != 0 ? 5LL : 1LL) << 44;
                          v30 = v23 != 0 ? 80LL : 16LL;
                        }
                        v29 = v30 & 0xFFFF0FFFFFFFFFFFuLL;
                      }
                      else
                      {
                        v28 = v23 != 0 ? 0x40uLL : 0;
                        v29 = -(__int64)(v23 != 0) & 0x400000000000LL;
                      }
                      v31 = v29 | v28;
                      v32 = 0xFFFF0FFFFFFFFF0FuLL;
                      goto LABEL_49;
                    }
                    goto LABEL_292;
                  }
                  if ( v6 )
                  {
                    Data &= __PAIR128__(-3841LL, 0xFFFFF0FFFFFFFFFFuLL);
                    goto LABEL_291;
                  }
                  if ( BufferSize == 16 )
                  {
                    v34 = *((_QWORD *)Buffer + 1);
                    v35 = v34 & 4;
                    v36 = *(_QWORD *)Buffer & 4LL;
                    if ( (*(_QWORD *)Buffer & 3) != 0 )
                    {
                      if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                      {
                        v39 = Data & 0xFFFFF0FFFFFFFFFFuLL | ((v36 != 0 ? 6LL : 2LL) << 40);
                        v38 = *((_QWORD *)&Data + 1);
                        *(_QWORD *)&Data = v39;
                        v31 = v35 != 0 ? 1536LL : 512LL;
                        goto LABEL_66;
                      }
                      if ( (*(_BYTE *)Buffer & 8) != 0 )
                        v40 = v36 != 0 ? 7LL : 3LL;
                      else
                        v40 = v36 != 0 ? 5LL : 1LL;
                      v38 = *((_QWORD *)&Data + 1);
                      *(_QWORD *)&Data = Data & 0xFFFFF0FFFFFFFFFFuLL | (v40 << 40);
                      v41 = v34 & 3;
                      if ( v41 )
                      {
                        if ( v41 != 2LL )
                        {
                          v31 = v35 != 0 ? 1280LL : 256LL;
                          goto LABEL_66;
                        }
                        goto LABEL_56;
                      }
                    }
                    else
                    {
                      v37 = Data & 0xFFFFF0FFFFFFFFFFuLL | -(__int64)(v36 != 0) & 0x40000000000LL;
                      v38 = *((_QWORD *)&Data + 1);
                      *(_QWORD *)&Data = v37;
                      if ( (v34 & 3) == 2 )
                      {
LABEL_56:
                        v31 = v35 != 0 ? 1536LL : 512LL;
LABEL_66:
                        v33 = v38 & 0xFFFFFFFFFFFFF0FFuLL;
                        goto LABEL_50;
                      }
                    }
                    v31 = v35 != 0 ? 0x400 : 0;
                    goto LABEL_66;
                  }
                  goto LABEL_292;
                }
                if ( v6 )
                {
                  v21 = 0xFFFFFFF0FFFFFFFFuLL;
                  goto LABEL_32;
                }
                if ( BufferSize != 8 )
                  goto LABEL_292;
                v42 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  v44 = 0xFFFFFFF0FFFFFFFFuLL;
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                    v45 = v42 != 0 ? 6LL : 2LL;
                  else
                    v45 = v42 != 0 ? 5LL : 1LL;
                  v43 = v45 << 32;
                }
                else
                {
                  v43 = -(__int64)(v42 != 0) & 0x400000000LL;
                  v44 = 0xFFFFFFF0FFFFFFFFuLL;
                }
              }
              else
              {
                if ( v6 )
                {
                  v21 = 0xFFFFFFFF0FFFFFFFuLL;
                  goto LABEL_32;
                }
                if ( BufferSize != 8 )
                  goto LABEL_292;
                v44 = 0xFFFFFFFF0FFFFFFFuLL;
                v46 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                    v47 = v46 != 0 ? 6LL : 2LL;
                  else
                    v47 = v46 != 0 ? 5LL : 1LL;
                  v43 = v47 << 28;
                }
                else
                {
                  v43 = v46 != 0 ? 0x40000000 : 0;
                }
              }
              goto LABEL_85;
            }
            if ( v6 )
            {
              *(_QWORD *)&Data = Data & 0xFFFFFFFFF0FFFFFFuLL;
              goto LABEL_291;
            }
            if ( BufferSize != 8 )
              goto LABEL_292;
            v49 = *(_QWORD *)Buffer & 4LL;
            if ( (*(_QWORD *)Buffer & 3) != 0 )
            {
              if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                v50 = v49 != 0 ? 6LL : 2LL;
              else
                v50 = v49 != 0 ? 5LL : 1LL;
              v43 = v50 << 24;
            }
            else
            {
              v43 = v49 != 0 ? 0x4000000 : 0;
            }
            v48 = Data & 0xFFFFFFFFF0FFFFFFuLL;
LABEL_140:
            *(_QWORD *)&Data = v48 | v43;
            goto LABEL_291;
          }
          if ( v6 )
          {
            v21 = 0xFFFFFF0FFFFFFFFFuLL;
            goto LABEL_32;
          }
          if ( BufferSize != 8 )
            goto LABEL_292;
          v44 = 0xFFFFFF0FFFFFFFFFuLL;
          v51 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v54 = v51 != 0 ? 6LL : 2LL;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v54 = v51 != 0 ? 7LL : 3LL;
            }
            else
            {
              v54 = v51 != 0 ? 5LL : 1LL;
            }
            v43 = v54 << 36;
            goto LABEL_85;
          }
          v52 = v51 != 0;
          v53 = 0x4000000000LL;
LABEL_146:
          v43 = v53 & -(__int64)v52;
LABEL_85:
          v48 = v44 & Data;
          goto LABEL_140;
        }
        if ( v6 )
        {
          *(_QWORD *)&Data = Data & 0xFFFFFFFFFF00F0FFuLL;
          goto LABEL_291;
        }
        if ( BufferSize != 24 )
          goto LABEL_292;
        v55 = *((_QWORD *)Buffer + 1);
        v56 = *((_QWORD *)Buffer + 2);
        v57 = v55 & 4;
        v58 = v56 & 4;
        v59 = *(_QWORD *)Buffer & 4LL;
        if ( (*(_QWORD *)Buffer & 3) != 0 )
        {
          if ( (*(_QWORD *)Buffer & 3LL) == 2 )
          {
            v60 = (((unsigned __int128)-(__int128)(unsigned __int64)v59 >> 64) & 0x400) + 512;
          }
          else if ( (*(_BYTE *)Buffer & 8) != 0 )
          {
            v60 = (((unsigned __int128)-(__int128)(unsigned __int64)v59 >> 64) & 0x400) + 768;
          }
          else
          {
            v60 = (((unsigned __int128)-(__int128)(unsigned __int64)v59 >> 64) & 0x400) + 256;
          }
        }
        else
        {
          v60 = ((unsigned __int128)-(__int128)(unsigned __int64)v59 >> 64) & 0x400;
        }
        v61 = v55 & 3;
        v62 = Data & 0xFFFFFFFFFFF0F0FFuLL | v60 & 0xFFFFFFFFFFF0FFFFuLL;
        if ( v61 )
        {
          if ( v61 == 2 )
            v64 = v57 != 0 ? 6LL : 2LL;
          else
            v64 = v57 != 0 ? 5LL : 1LL;
          v63 = v64 << 16;
        }
        else
        {
          v63 = v57 != 0 ? 0x40000 : 0;
        }
        v65 = v56 & 3;
        v66 = (v62 | v63) & 0xFFFFFFFFFF0FFFFFuLL;
        if ( v65 )
        {
          if ( v65 == 2 )
            v68 = v58 != 0 ? 6LL : 2LL;
          else
            v68 = v58 != 0 ? 5LL : 1LL;
          v67 = v68 << 20;
        }
        else
        {
          v67 = v58 != 0 ? 0x400000 : 0;
        }
LABEL_290:
        *(_QWORD *)&Data = v66 | v67;
        goto LABEL_291;
      }
      v72 = Policy - 10;
      if ( !v72 )
      {
        if ( v6 )
        {
          *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFLL;
          goto LABEL_291;
        }
        if ( BufferSize != 24 )
          goto LABEL_292;
        v127 = *((_QWORD *)Buffer + 1);
        v128 = *((_QWORD *)Buffer + 2);
        v129 = *(_QWORD *)Buffer & 4LL;
        v130 = v127 & 4;
        v131 = v128 & 4;
        if ( (*(_QWORD *)Buffer & 3) != 0 )
        {
          if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            v133 = (((unsigned __int128)-(__int128)(unsigned __int64)v129 >> 64) & 4) + 2;
          else
            v133 = (((unsigned __int128)-(__int128)(unsigned __int64)v129 >> 64) & 4) + 1;
          v132 = v133 << 52;
        }
        else
        {
          v132 = -(__int64)(v129 != 0) & 0x40000000000000LL;
        }
        v134 = v127 & 3;
        v135 = Data & 0xF00FFFFFFFFFFFFFuLL | v132 & 0xF0FFFFFFFFFFFFFFuLL;
        if ( v134 )
        {
          if ( v134 == 2 )
            v137 = v130 != 0 ? 6LL : 2LL;
          else
            v137 = v130 != 0 ? 5LL : 1LL;
          v136 = v137 << 56;
        }
        else
        {
          v136 = -(__int64)(v130 != 0) & 0x400000000000000LL;
        }
        v66 = (v135 | v136) & 0xFFFFFFFFFFFFFFFLL;
        v138 = v128 & 3;
        if ( v138 )
        {
          if ( v138 == 2 )
            v139 = v131 != 0 ? 6LL : 2LL;
          else
            v139 = v131 != 0 ? 5LL : 1LL;
          v67 = v139 << 60;
        }
        else
        {
          v67 = -(__int64)(v131 != 0) & 0x4000000000000000LL;
        }
        goto LABEL_290;
      }
      v73 = v72 - 1;
      if ( !v73 )
      {
        if ( v6 )
        {
          *((_QWORD *)&Data + 1) &= 0xFFFFF0F00000FFFFuLL;
          if ( !v11 )
            ZwDeleteValueKey(KeyHandle, &ValueName);
          goto LABEL_291;
        }
        if ( BufferSize == 1072 )
        {
          if ( v11 || (inited = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)Buffer + 48, 0x400u), inited >= 0) )
          {
            v96 = *((_QWORD *)Buffer + 3) & 4LL;
            if ( (*((_QWORD *)Buffer + 3) & 3) != 0 )
            {
              if ( (*((_QWORD *)Buffer + 3) & 3LL) == 2 )
                v98 = v96 != 0 ? 6LL : 2LL;
              else
                v98 = v96 != 0 ? 5LL : 1LL;
              v97 = v98 << 16;
            }
            else
            {
              v97 = v96 != 0 ? 0x40000 : 0;
            }
            v99 = *((_QWORD *)Buffer + 4) & 4LL;
            v100 = *((_QWORD *)Buffer + 4) & 3LL;
            v101 = *((_QWORD *)&Data + 1) & 0xFFFFFFFFFF00FFFFuLL | v97 & 0xFFFFFFFFFF0FFFFFuLL;
            if ( v100 )
            {
              if ( v100 == 2 )
                v103 = v99 != 0 ? 6LL : 2LL;
              else
                v103 = v99 != 0 ? 5LL : 1LL;
              v102 = v103 << 20;
            }
            else
            {
              v102 = v99 != 0 ? 0x400000 : 0;
            }
            v104 = (v101 | v102) & 0xFFFFFFFFF0FFFFFFuLL;
            v105 = *((_QWORD *)Buffer + 5) & 4LL;
            v106 = *((_QWORD *)Buffer + 5) & 3LL;
            if ( v106 )
            {
              if ( v106 == 2 )
                v108 = v105 != 0 ? 6LL : 2LL;
              else
                v108 = v105 != 0 ? 5LL : 1LL;
              v107 = v108 << 24;
            }
            else
            {
              v107 = v105 != 0 ? 0x4000000 : 0;
            }
            v109 = v104 | v107;
            v110 = *(_QWORD *)Buffer & 4LL;
            v111 = *(_QWORD *)Buffer & 3LL;
            v112 = v109 & 0xFFFFFFFF0FFFFFFFuLL;
            if ( v111 )
            {
              if ( v111 == 2 )
                v114 = v110 != 0 ? 6LL : 2LL;
              else
                v114 = v110 != 0 ? 5LL : 1LL;
              v113 = v114 << 28;
            }
            else
            {
              v113 = v110 != 0 ? 0x40000000 : 0;
            }
            v115 = v112 | v113;
            v116 = *((_QWORD *)Buffer + 1) & 4LL;
            v117 = *((_QWORD *)Buffer + 1) & 3LL;
            v118 = v115 & 0xFFFFFFF0FFFFFFFFuLL;
            if ( v117 )
            {
              if ( v117 == 2 )
                v120 = v116 != 0 ? 6LL : 2LL;
              else
                v120 = v116 != 0 ? 5LL : 1LL;
              v119 = v120 << 32;
            }
            else
            {
              v119 = -(__int64)(v116 != 0) & 0x400000000LL;
            }
            v121 = v118 | v119;
            v122 = *((_QWORD *)Buffer + 2) & 4LL;
            v123 = *((_QWORD *)Buffer + 2) & 3LL;
            v124 = v121 & 0xFFFFF0FFFFFFFFFFuLL;
            if ( v123 )
            {
              if ( v123 == 2 )
                v126 = v122 != 0 ? 6LL : 2LL;
              else
                v126 = v122 != 0 ? 5LL : 1LL;
              v125 = v126 << 40;
            }
            else
            {
              v125 = -(__int64)(v122 != 0) & 0x40000000000LL;
            }
            *((_QWORD *)&Data + 1) = v124 | v125;
            goto LABEL_291;
          }
LABEL_293:
          if ( KeyHandle )
            NtClose(KeyHandle);
          goto LABEL_295;
        }
        goto LABEL_292;
      }
      v74 = v73 - 1;
      if ( v74 )
      {
        v75 = v74 - 1;
        if ( v75 )
        {
          v76 = v75 - 1;
          if ( v76 )
          {
            v77 = v76 - 1;
            if ( v77 )
            {
              if ( v77 != 1 )
                goto LABEL_293;
              if ( v6 )
              {
                v148 &= 0xFFFFFFFFFF0FFFFFuLL;
                goto LABEL_291;
              }
              if ( BufferSize == 8 )
              {
                v78 = *(_QWORD *)Buffer & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                    v80 = v78 != 0 ? 6LL : 2LL;
                  else
                    v80 = v78 != 0 ? 5LL : 1LL;
                  v79 = v80 << 20;
                }
                else
                {
                  v79 = v78 != 0 ? 0x400000 : 0;
                }
                v148 = v148 & 0xFFFFFFFFFF0FFFFFuLL | v79;
                goto LABEL_291;
              }
            }
            else
            {
              if ( v6 )
              {
                *((_QWORD *)&Data + 1) &= 0xFFFFFFFFFFFFFFFuLL;
                v148 &= 0xFFFFFFFFFFFFFF00uLL;
                goto LABEL_291;
              }
              if ( BufferSize == 24 )
              {
                v81 = *((_QWORD *)Buffer + 1);
                v82 = v81 & 4;
                v83 = *(_QWORD *)Buffer & 4LL;
                v84 = *((_QWORD *)Buffer + 2) & 4LL;
                if ( (*(_QWORD *)Buffer & 3) != 0 )
                {
                  if ( (*(_QWORD *)Buffer & 3LL) == 2 )
                  {
                    v86 = v83 != 0 ? 6LL : 2LL;
                  }
                  else if ( (*(_BYTE *)Buffer & 8) != 0 )
                  {
                    v86 = v83 != 0 ? 7LL : 3LL;
                  }
                  else
                  {
                    v86 = v83 != 0 ? 5LL : 1LL;
                  }
                  v85 = v86 << 60;
                }
                else
                {
                  v85 = -(__int64)(v83 != 0) & 0x4000000000000000LL;
                }
                *((_QWORD *)&Data + 1) = *((_QWORD *)&Data + 1) & 0xFFFFFFFFFFFFFFFLL | v85;
                v87 = v81 & 3;
                if ( v87 )
                {
                  if ( v87 == 2LL )
                    v88 = v82 != 0 ? 6LL : 2LL;
                  else
                    v88 = v82 != 0 ? 5LL : 1LL;
                }
                else
                {
                  v88 = v82 != 0 ? 4 : 0;
                }
                v89 = *((_QWORD *)Buffer + 2) & 3LL;
                v90 = v148 & 0xFFFFFFFFFFFFFF00uLL | v88 & 0xFFFFFFFFFFFFFF0FuLL;
                if ( v89 )
                {
                  if ( v89 == 2 )
                  {
                    v91 = v84 != 0 ? 96LL : 32LL;
                  }
                  else if ( (*((_BYTE *)Buffer + 16) & 8) != 0 )
                  {
                    v91 = v84 != 0 ? 112LL : 48LL;
                  }
                  else
                  {
                    v91 = v84 != 0 ? 80LL : 16LL;
                  }
                }
                else
                {
                  v91 = v84 != 0 ? 0x40 : 0;
                }
                v148 = v90 | v91;
                goto LABEL_291;
              }
            }
            goto LABEL_292;
          }
          if ( v6 )
          {
            *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFF0FFFuLL;
            goto LABEL_291;
          }
          if ( BufferSize != 8 )
          {
LABEL_292:
            inited = -1073741811;
            goto LABEL_293;
          }
          v92 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
              v43 = v92 != 0 ? 24576LL : 0x2000LL;
            else
              v43 = v92 != 0 ? 20480LL : 4096LL;
          }
          else
          {
            v43 = v92 != 0 ? 0x4000 : 0;
          }
          v48 = Data & 0xFFFFFFFFFFFF0FFFuLL;
        }
        else
        {
          if ( v6 )
          {
            *(_QWORD *)&Data = Data & 0xFFFFFFFFFFFFFF0FuLL;
            goto LABEL_291;
          }
          if ( BufferSize != 8 )
            goto LABEL_292;
          v93 = *(_QWORD *)Buffer & 4LL;
          if ( (*(_QWORD *)Buffer & 3) != 0 )
          {
            if ( (*(_QWORD *)Buffer & 3LL) == 2 )
            {
              v43 = v93 != 0 ? 96LL : 32LL;
            }
            else if ( (*(_BYTE *)Buffer & 8) != 0 )
            {
              v43 = v93 != 0 ? 112LL : 48LL;
            }
            else
            {
              v43 = v93 != 0 ? 80LL : 16LL;
            }
          }
          else
          {
            v43 = v93 != 0 ? 0x40 : 0;
          }
          v48 = Data & 0xFFFFFFFFFFFFFF0FuLL;
        }
        goto LABEL_140;
      }
      if ( v6 )
      {
        *((_QWORD *)&Data + 1) &= 0xFFFFFF0FFFFFFFFFuLL;
        goto LABEL_291;
      }
      if ( BufferSize != 8 )
        goto LABEL_292;
      v94 = *(_QWORD *)Buffer & 4LL;
      if ( (*(_QWORD *)Buffer & 3) != 0 )
      {
        if ( (*(_QWORD *)Buffer & 3LL) != 2 )
        {
          v32 = 0xFFFFFF0FFFFFFFFFuLL;
          if ( (*(_BYTE *)Buffer & 8) != 0 )
            v95 = v94 != 0 ? 7LL : 3LL;
          else
            v95 = v94 != 0 ? 5LL : 1LL;
          v31 = v95 << 36;
          goto LABEL_49;
        }
        v31 = (v94 != 0 ? 6LL : 2LL) << 36;
      }
      else
      {
        v31 = -(__int64)(v94 != 0) & 0x4000000000LL;
      }
      v32 = 0xFFFFFF0FFFFFFFFFuLL;
LABEL_49:
      v33 = v32 & *((_QWORD *)&Data + 1);
LABEL_50:
      *((_QWORD *)&Data + 1) = v33 | v31;
      goto LABEL_291;
    }
  }
LABEL_295:
  if ( inited == -1073741772 && v5 )
    return 0;
  return inited;
}
