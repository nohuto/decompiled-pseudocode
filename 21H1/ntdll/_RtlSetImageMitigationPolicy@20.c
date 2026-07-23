/*
 * XREFs of _RtlSetImageMitigationPolicy@20 @ 0x4B3408F0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9 (_RtlpOpenImageFileOptionsKeyEx@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _NtDeleteValueKey@8 @ 0x4B2F36E0 (_NtDeleteValueKey@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _RtlpDeleteEmptyImageFileOptionsKey@4 @ 0x4B342483 (_RtlpDeleteEmptyImageFileOptionsKey@4.c)
 */

NTSTATUS __cdecl RtlSetImageMitigationPolicy(
        PWSTR ImagePath,
        IMAGE_MITIGATION_POLICY Policy,
        ULONG Flags,
        PVOID Buffer,
        ULONG BufferSize)
{
  bool v5; // zf
  NTSTATUS inited; // eax
  int v7; // esi
  int v8; // eax
  NTSTATUS v9; // eax
  int v10; // ecx
  int v11; // esi
  int v12; // edx
  int v13; // ebx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  int v17; // ecx
  int v18; // edx
  int v19; // edx
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  int v24; // edi
  unsigned int v25; // edx
  int v26; // ebx
  int v27; // eax
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  int v31; // edx
  int v32; // edi
  int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  int v37; // ecx
  int v38; // esi
  int v39; // edx
  int v40; // ecx
  unsigned int v41; // ecx
  int v42; // ecx
  int v43; // ecx
  int v44; // edx
  int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // eax
  unsigned int v49; // eax
  int v50; // ecx
  int v51; // ecx
  int v52; // edx
  int v53; // edx
  int v54; // eax
  int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  int v58; // ecx
  int v59; // edx
  int v60; // edi
  int v61; // esi
  int v62; // ebx
  unsigned int v63; // ecx
  int v64; // ecx
  unsigned int v65; // ecx
  int v66; // edi
  unsigned int v67; // ecx
  int v68; // edi
  int v69; // ecx
  int v70; // ecx
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // ecx
  unsigned int v74; // ecx
  unsigned int v75; // ecx
  int v76; // ecx
  int v77; // ecx
  unsigned int v78; // edx
  unsigned int v79; // edx
  int v80; // ebx
  int v81; // ebx
  unsigned int v82; // edx
  unsigned int v83; // edx
  int v84; // ecx
  int v85; // esi
  int v86; // ecx
  int v87; // ecx
  int v88; // edi
  unsigned int v89; // ecx
  int v90; // ecx
  int v91; // edx
  int v92; // edx
  int v93; // ebx
  int v94; // ecx
  unsigned int v95; // ecx
  unsigned int v96; // esi
  unsigned int v97; // ecx
  size_t v99; // [esp-4h] [ebp-D4h]
  int v100; // [esp-4h] [ebp-D4h]
  int v101; // [esp-4h] [ebp-D4h]
  int v102; // [esp-4h] [ebp-D4h]
  int v103; // [esp-4h] [ebp-D4h]
  int v104; // [esp+Ch] [ebp-C4h]
  int v105; // [esp+Ch] [ebp-C4h]
  int v106; // [esp+Ch] [ebp-C4h]
  int v107; // [esp+Ch] [ebp-C4h]
  int v108; // [esp+Ch] [ebp-C4h]
  int v109; // [esp+Ch] [ebp-C4h]
  int v110; // [esp+Ch] [ebp-C4h]
  int v111; // [esp+Ch] [ebp-C4h]
  int v112; // [esp+Ch] [ebp-C4h]
  int v113; // [esp+Ch] [ebp-C4h]
  int v114; // [esp+Ch] [ebp-C4h]
  int v115; // [esp+Ch] [ebp-C4h]
  int v116; // [esp+Ch] [ebp-C4h]
  int v117; // [esp+Ch] [ebp-C4h]
  int v118; // [esp+10h] [ebp-C0h]
  int v119; // [esp+10h] [ebp-C0h]
  int v120; // [esp+10h] [ebp-C0h]
  int v121; // [esp+10h] [ebp-C0h]
  int v122; // [esp+10h] [ebp-C0h]
  int v123; // [esp+10h] [ebp-C0h]
  int v124; // [esp+10h] [ebp-C0h]
  int v125; // [esp+10h] [ebp-C0h]
  int v126; // [esp+10h] [ebp-C0h]
  int v127; // [esp+10h] [ebp-C0h]
  int v128; // [esp+10h] [ebp-C0h]
  int v129; // [esp+10h] [ebp-C0h]
  int v130; // [esp+14h] [ebp-BCh]
  int v131; // [esp+14h] [ebp-BCh]
  int v132; // [esp+14h] [ebp-BCh]
  int v133; // [esp+14h] [ebp-BCh]
  int v134; // [esp+14h] [ebp-BCh]
  int v135; // [esp+14h] [ebp-BCh]
  int v136; // [esp+14h] [ebp-BCh]
  int v137; // [esp+14h] [ebp-BCh]
  int v138; // [esp+14h] [ebp-BCh]
  int v139; // [esp+14h] [ebp-BCh]
  char v140; // [esp+18h] [ebp-B8h]
  char v141; // [esp+18h] [ebp-B8h]
  int v142; // [esp+18h] [ebp-B8h]
  int v143; // [esp+18h] [ebp-B8h]
  char v144; // [esp+18h] [ebp-B8h]
  int v145; // [esp+18h] [ebp-B8h]
  int v146; // [esp+1Ch] [ebp-B4h]
  int v147; // [esp+1Ch] [ebp-B4h]
  int v148; // [esp+1Ch] [ebp-B4h]
  int v149; // [esp+1Ch] [ebp-B4h]
  int v150; // [esp+1Ch] [ebp-B4h]
  int v151; // [esp+1Ch] [ebp-B4h]
  int v152; // [esp+20h] [ebp-B0h]
  int v153; // [esp+20h] [ebp-B0h]
  int v154; // [esp+20h] [ebp-B0h]
  int v155; // [esp+20h] [ebp-B0h]
  int v156; // [esp+24h] [ebp-ACh]
  int v157; // [esp+24h] [ebp-ACh]
  int v158; // [esp+24h] [ebp-ACh]
  int v159; // [esp+24h] [ebp-ACh]
  int v160; // [esp+24h] [ebp-ACh]
  int v161; // [esp+28h] [ebp-A8h]
  int v162; // [esp+28h] [ebp-A8h]
  int v163; // [esp+28h] [ebp-A8h]
  int v164; // [esp+28h] [ebp-A8h]
  int v165; // [esp+28h] [ebp-A8h]
  int v166; // [esp+30h] [ebp-A0h]
  int v167; // [esp+30h] [ebp-A0h]
  int v168; // [esp+30h] [ebp-A0h]
  int v169; // [esp+30h] [ebp-A0h]
  int v170; // [esp+30h] [ebp-A0h]
  int v171; // [esp+34h] [ebp-9Ch]
  int v172; // [esp+34h] [ebp-9Ch]
  int v173; // [esp+34h] [ebp-9Ch]
  int v174; // [esp+34h] [ebp-9Ch]
  int v175; // [esp+34h] [ebp-9Ch]
  int SourceString; // [esp+38h] [ebp-98h]
  int SourceStringa; // [esp+38h] [ebp-98h]
  int SourceStringb; // [esp+38h] [ebp-98h]
  int v179; // [esp+3Ch] [ebp-94h]
  int v180; // [esp+3Ch] [ebp-94h]
  int v181; // [esp+3Ch] [ebp-94h]
  int v182; // [esp+3Ch] [ebp-94h]
  HANDLE KeyHandle; // [esp+40h] [ebp-90h] BYREF
  int v184; // [esp+44h] [ebp-8Ch]
  _UNICODE_STRING v185; // [esp+48h] [ebp-88h] BYREF
  int v186; // [esp+50h] [ebp-80h]
  int v187; // [esp+54h] [ebp-7Ch]
  ULONG v188; // [esp+58h] [ebp-78h]
  _UNICODE_STRING DestinationString; // [esp+5Ch] [ebp-74h] BYREF
  _UNICODE_STRING ValueName; // [esp+64h] [ebp-6Ch] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+6Ch] [ebp-64h] BYREF
  ULONG ResultLength; // [esp+84h] [ebp-4Ch] BYREF
  _DWORD Data[7]; // [esp+88h] [ebp-48h] BYREF
  _BYTE KeyValueInformation[8]; // [esp+A4h] [ebp-2Ch] BYREF
  unsigned int Size; // [esp+ACh] [ebp-24h]
  size_t Size_4; // [esp+B0h] [ebp-20h] BYREF
  ULONG Flagsa; // [esp+E0h] [ebp+10h]

  KeyHandle = 0;
  v188 = Flags & 2;
  v166 = 1;
  v140 = Flags & 1;
  v5 = (Flags & 8) == 0;
  v171 = 6;
  Flagsa = Flags & 8;
  memset(Data, 0, 0x18u);
  if ( v5 )
    inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)L"MitigationOptions");
  else
    inited = RtlInitUnicodeStringEx(&DestinationString, L"MitigationAuditOptions");
  v7 = inited;
  if ( inited < 0 )
    goto LABEL_340;
  v7 = RtlInitUnicodeStringEx(&ValueName, L"EAFModules");
  if ( v7 < 0 )
    goto LABEL_340;
  if ( !v140 && !v188 || !BufferSize && !Buffer )
  {
    v7 = RtlInitUnicodeStringEx(&v185, ImagePath);
    if ( v7 < 0 )
      goto LABEL_340;
    if ( ImagePath )
    {
      v8 = RtlpOpenImageFileOptionsKeyEx(&v185.Length, 0x2000Fu, v188 == 0, &KeyHandle);
    }
    else
    {
      ObjectAttributes.Length = 24;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&dword_4B281748;
      v8 = ZwOpenKey(&KeyHandle, 0x2000Fu, &ObjectAttributes);
    }
    v7 = v8;
    if ( v8 < 0 )
      goto LABEL_338;
    if ( v188 )
    {
      v7 = NtDeleteValueKey(KeyHandle, &DestinationString);
      if ( v7 >= 0 )
      {
        if ( !Flagsa )
          NtDeleteValueKey(KeyHandle, &ValueName);
        RtlpDeleteEmptyImageFileOptionsKey(&v185);
      }
      goto LABEL_338;
    }
    v9 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength);
    v7 = v9;
    if ( v9 >= 0 )
    {
      if ( Size > 0x18 )
      {
        v7 = -1073741788;
        goto LABEL_338;
      }
      LODWORD(v99) = Size;
      memcpy(Data, &Size_4, v99);
    }
    else if ( v9 != -1073741772 )
    {
      goto LABEL_338;
    }
    switch ( Policy )
    {
      case ImageDepPolicy:
        if ( v140 )
        {
          Data[0] &= 0xFFFFFFF0;
          goto LABEL_87;
        }
        if ( BufferSize != 8 )
          break;
        v10 = *(_DWORD *)Buffer;
        v11 = 4;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v12 = 5;
          SourceString = 7;
          v100 = 6;
        }
        else
        {
          v11 = 0;
          SourceString = 3;
          v100 = 2;
          v12 = 1;
        }
        v13 = v100;
        if ( (v10 & 3) == 0 )
        {
          v14 = v11 | Data[0] & 0xFFFFFFF0;
          goto LABEL_86;
        }
        if ( (*(_DWORD *)Buffer & 3) == 2 )
        {
          v15 = Data[0] & 0xFFFFFFF0;
          goto LABEL_37;
        }
        if ( (v10 & 8) != 0 )
          v16 = SourceString | Data[0] & 0xFFFFFFF0;
        else
          v16 = v12 | Data[0] & 0xFFFFFFF0;
        goto LABEL_41;
      case ImageAslrPolicy:
        if ( v140 )
        {
          Data[0] &= 0xFF00F0FF;
          goto LABEL_87;
        }
        if ( BufferSize != 24 )
          break;
        v17 = *(_DWORD *)Buffer;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          SourceStringa = 1024;
          v186 = 1536;
          v187 = 1792;
          v184 = 1280;
        }
        else
        {
          SourceStringa = 0;
          v186 = 512;
          v187 = 768;
          v184 = 256;
        }
        v18 = *((_DWORD *)Buffer + 2);
        v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 3);
        v141 = v18;
        if ( (v18 & 4) != 0 )
        {
          v19 = 0x40000;
          v179 = 393216;
          v152 = 327680;
        }
        else
        {
          v19 = 0;
          v179 = 0x20000;
          v152 = 0x10000;
        }
        v104 = *((_DWORD *)Buffer + 4);
        v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 5);
        if ( (*((_DWORD *)Buffer + 4) & 4) != 0 )
        {
          v20 = 0x400000;
          v156 = 6291456;
          v21 = 5242880;
        }
        else
        {
          v20 = 0;
          v156 = 0x200000;
          v21 = 0x100000;
        }
        v146 = v21;
        if ( (v17 & 3) != 0 )
        {
          if ( (v17 & 3) == 2 )
          {
            v22 = v186 | Data[0] & 0xFFFFF0FF;
          }
          else if ( (v17 & 8) != 0 )
          {
            v22 = v187 | Data[0] & 0xFFFFF0FF;
          }
          else
          {
            v22 = v184 | Data[0] & 0xFFFFF0FF;
          }
        }
        else
        {
          v22 = SourceStringa | Data[0] & 0xFFFFF0FF;
        }
        v23 = v22 & 0xFFF0FFFF;
        v142 = v141 & 3;
        if ( v142 )
        {
          v19 = v179;
          if ( v142 != 2 )
            v19 = v152;
        }
        v24 = Data[1];
        v25 = (v23 | v19) & 0xFF0FFFFF;
        if ( (v104 & 3) == 0 )
        {
          v26 = v25 | v20;
          v27 = Data[1] | v104 & 3;
          goto LABEL_66;
        }
        v28 = v156;
        if ( (v104 & 3) != 2 )
          v28 = v146;
        v29 = 0;
        Data[0] = v25 | v28;
        goto LABEL_70;
      case ImageDynamicCodePolicy:
        if ( v140 )
        {
          Data[1] &= 0xFFFFFF0F;
          goto LABEL_336;
        }
        if ( BufferSize != 8 )
          break;
        v42 = *(_DWORD *)Buffer;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v24 = 64;
          v148 = 96;
          v157 = 112;
          v153 = 80;
        }
        else
        {
          v24 = 0;
          v148 = 32;
          v157 = 48;
          v153 = 16;
        }
        if ( (v42 & 3) == 0 )
        {
          v29 = Data[1] & 0xFFFFFF0F;
          goto LABEL_70;
        }
        if ( (*(_DWORD *)Buffer & 3) == 2 )
        {
          v30 = v148 | Data[1] & 0xFFFFFF0F;
        }
        else if ( (v42 & 8) != 0 )
        {
          v30 = v157 | Data[1] & 0xFFFFFF0F;
        }
        else
        {
          v30 = v153 | Data[1] & 0xFFFFFF0F;
        }
        goto LABEL_71;
      case ImageStrictHandleCheckPolicy:
        if ( v140 )
        {
          Data[0] &= 0xF0FFFFFF;
          goto LABEL_87;
        }
        if ( BufferSize != 8 )
          break;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v31 = 0x4000000;
          v147 = 83886080;
          v32 = 100663296;
        }
        else
        {
          v31 = 0;
          v147 = 0x1000000;
          v32 = 0x2000000;
        }
        v37 = *(_DWORD *)Buffer & 3;
        if ( !v37 )
        {
          v34 = Data[0] & 0xF0FFFFFF;
          goto LABEL_80;
        }
        if ( v37 == 2 )
        {
          v35 = Data[0] & 0xF0FFFFFF;
          goto LABEL_83;
        }
        v36 = Data[0] & 0xF0FFFFFF;
        goto LABEL_85;
      case ImageSystemCallDisablePolicy:
        if ( v140 )
        {
          Data[0] &= 0xFFFFFFFu;
          goto LABEL_87;
        }
        if ( BufferSize != 8 )
          break;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v31 = 0x40000000;
          v147 = 1342177280;
          v32 = 1610612736;
        }
        else
        {
          v31 = 0;
          v147 = 0x10000000;
          v32 = 0x20000000;
        }
        v33 = *(_DWORD *)Buffer & 3;
        if ( !v33 )
        {
          v34 = Data[0] & 0xFFFFFFF;
          goto LABEL_80;
        }
        if ( v33 == 2 )
        {
          v35 = Data[0] & 0xFFFFFFF;
          goto LABEL_83;
        }
        v36 = Data[0] & 0xFFFFFFF;
LABEL_85:
        v14 = v147 | v36;
        goto LABEL_86;
      case ImageExtensionPointDisablePolicy:
        if ( v140 )
        {
          Data[1] &= 0xFFFFFFF0;
          goto LABEL_336;
        }
        if ( BufferSize != 8 )
          break;
        v38 = 4;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v39 = 5;
          v101 = 6;
        }
        else
        {
          v38 = 0;
          v101 = 2;
          v39 = 1;
        }
        v40 = *(_DWORD *)Buffer & 3;
        if ( !v40 )
        {
          v30 = v38 | Data[1] & 0xFFFFFFF0;
          goto LABEL_71;
        }
        if ( v40 == 2 )
        {
          v30 = v101 | Data[1] & 0xFFFFFFF0;
          goto LABEL_71;
        }
        v41 = Data[1] & 0xFFFFFFF0;
        goto LABEL_111;
      case ImageControlFlowGuardPolicy:
        if ( v140 )
        {
          Data[1] &= 0xFFFFF0FF;
          Data[2] &= 0xFFFFF0FF;
          v48 = Data[3];
          goto LABEL_147;
        }
        if ( BufferSize != 16 )
          break;
        v58 = *(_DWORD *)Buffer;
        v181 = 1280;
        v59 = 1024;
        v174 = 512;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v121 = 1024;
          v133 = 1536;
          v169 = 1792;
          v150 = 1280;
        }
        else
        {
          v133 = 512;
          v121 = 0;
          v169 = 768;
          v150 = 256;
        }
        v60 = *((_DWORD *)Buffer + 2);
        v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 3);
        v61 = 0;
        if ( (v60 & 4) != 0 )
        {
          v62 = 1536;
          v61 = 1024;
          v174 = 1536;
          v154 = 1536;
        }
        else
        {
          v181 = 256;
          v62 = 512;
          v154 = 512;
          v59 = 0;
        }
        if ( (v58 & 3) != 0 )
        {
          if ( (v58 & 3) == 2 )
          {
            Data[1] = v133 | Data[1] & 0xFFFFF0FF;
            v48 = Data[3];
            v47 = v174 | Data[2] & 0xFFFFF0FF;
            goto LABEL_146;
          }
          if ( (v58 & 8) != 0 )
            v65 = v169 | Data[1] & 0xFFFFF0FF;
          else
            v65 = v150 | Data[1] & 0xFFFFF0FF;
          v66 = v60 & 3;
          Data[1] = v65;
          v48 = Data[3];
          if ( !v66 )
          {
            v47 = v59 | Data[2] & 0xFFFFF0FF;
            goto LABEL_146;
          }
          v67 = Data[2] & 0xFFFFF0FF;
          if ( v66 == 2 )
            v64 = v154 | v67;
          else
            v64 = v181 | v67;
        }
        else
        {
          Data[1] = v121 | Data[1] & 0xFFFFF0FF;
          v63 = Data[2] & 0xFFFFF0FF;
          if ( (v60 & 3) == 2 )
            v64 = v62 | v63;
          else
            v64 = v61 | v63;
        }
        Data[2] = v64;
        goto LABEL_336;
      case ImageSignaturePolicy:
        if ( v140 )
        {
          Data[1] &= 0xFFFF0FFF;
          goto LABEL_336;
        }
        v118 = 16;
        if ( BufferSize != 16 )
          break;
        v43 = *(_DWORD *)Buffer;
        v105 = 20480;
        v130 = 24576;
        v167 = 0x4000;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v158 = 0x4000;
          v180 = 24576;
          v187 = 28672;
          SourceStringb = 20480;
        }
        else
        {
          v180 = 0x2000;
          v158 = 0;
          v187 = 12288;
          SourceStringb = 4096;
        }
        v44 = *((_DWORD *)Buffer + 2);
        v186 = 0;
        v184 = 0;
        v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 3);
        if ( (v44 & 4) != 0 )
        {
          v143 = 64;
          v172 = 96;
          v118 = 80;
        }
        else
        {
          v143 = 0;
          v167 = 0;
          v172 = 32;
          v130 = 0x2000;
          v105 = 4096;
        }
        if ( (v43 & 3) != 0 )
        {
          if ( (v43 & 3) == 2 )
          {
            v45 = Data[0];
            v46 = v180 | Data[1] & 0xFFFF0FFF;
          }
          else if ( (v43 & 8) != 0 )
          {
            v45 = v184 | Data[0];
            v46 = v187 | Data[1] & 0xFFFF0FFF;
          }
          else
          {
            v45 = v186 | Data[0];
            v46 = SourceStringb | Data[1] & 0xFFFF0FFF;
          }
        }
        else
        {
          v45 = Data[0];
          v46 = v158 | Data[1] & 0xFFFF0FFF;
        }
        Data[1] = v46;
        Data[0] = v45;
        if ( (v44 & 3) != 0 )
        {
          v49 = Data[3] & 0xFFFF0FFF;
          if ( (v44 & 3) == 2 )
          {
            v47 = v172 | Data[2] & 0xFFFFFF0F;
            v48 = v130 | v49;
          }
          else
          {
            v47 = v118 | Data[2] & 0xFFFFFF0F;
            v48 = v105 | v49;
          }
        }
        else
        {
          v47 = v143 | Data[2] & 0xFFFFFF0F;
          v48 = v167 | Data[3] & 0xFFFF0FFF;
        }
LABEL_146:
        Data[2] = v47;
LABEL_147:
        Data[3] = v48;
        goto LABEL_336;
      case ImageFontDisablePolicy:
        if ( v140 )
        {
          Data[1] &= 0xFFF0FFFF;
          goto LABEL_336;
        }
        if ( BufferSize != 8 )
          break;
        v50 = *(_DWORD *)Buffer;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v24 = 0x40000;
          v106 = 393216;
          v119 = 458752;
          v131 = 327680;
        }
        else
        {
          v24 = 0;
          v106 = 0x20000;
          v119 = 196608;
          v131 = 0x10000;
        }
        if ( (v50 & 3) != 0 )
        {
          if ( (*(_DWORD *)Buffer & 3) == 2 )
          {
            v30 = v106 | Data[1] & 0xFFF0FFFF;
          }
          else if ( (v50 & 8) != 0 )
          {
            v30 = v119 | Data[1] & 0xFFF0FFFF;
          }
          else
          {
            v30 = v131 | Data[1] & 0xFFF0FFFF;
          }
        }
        else
        {
          v29 = Data[1] & 0xFFF0FFFF;
LABEL_70:
          v30 = v24 | v29;
        }
        goto LABEL_71;
      case ImageImageLoadPolicy:
        if ( v140 )
        {
          Data[1] &= 0xFFFFFu;
          goto LABEL_336;
        }
        if ( BufferSize != 24 )
          break;
        v51 = *(_DWORD *)Buffer;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v107 = 0x400000;
          v120 = 6291456;
          v132 = 5242880;
        }
        else
        {
          v107 = 0;
          v120 = 0x200000;
          v132 = 0x100000;
        }
        v52 = *((_DWORD *)Buffer + 2);
        v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 3);
        v144 = v52;
        if ( (v52 & 4) != 0 )
        {
          v53 = 0x4000000;
          v173 = 100663296;
          v168 = 83886080;
        }
        else
        {
          v173 = 0x2000000;
          v53 = 0;
          v168 = 0x1000000;
        }
        v161 = *((_DWORD *)Buffer + 4);
        v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 5);
        if ( (*((_DWORD *)Buffer + 4) & 4) != 0 )
        {
          v149 = 0x40000000;
          v159 = 1610612736;
          v54 = 1342177280;
        }
        else
        {
          v149 = 0;
          v159 = 0x20000000;
          v54 = 0x10000000;
        }
        v55 = v51 & 3;
        if ( v55 )
        {
          if ( v55 == 2 )
            v56 = v120 | Data[1] & 0xFF0FFFFF;
          else
            v56 = v132 | Data[1] & 0xFF0FFFFF;
        }
        else
        {
          v56 = v107 | Data[1] & 0xFF0FFFFF;
        }
        v57 = v56 & 0xF0FFFFFF;
        v145 = v144 & 3;
        if ( v145 )
        {
          v53 = v173;
          if ( v145 != 2 )
            v53 = v168;
        }
        v39 = (v57 | v53) & 0xFFFFFFF;
        if ( (v161 & 3) == 0 )
        {
          v26 = Data[0];
          v27 = v39 | v149;
LABEL_66:
          Data[0] = v26;
          goto LABEL_88;
        }
        if ( (v161 & 3) == 2 )
          v41 = v159;
        else
          v41 = v54;
LABEL_111:
        v30 = v39 | v41;
LABEL_71:
        Data[1] = v30;
        goto LABEL_336;
      case ImagePayloadRestrictionPolicy:
        if ( v140 )
        {
          Data[3] &= 0xFFFFF0F0;
          Data[2] = LOWORD(Data[2]);
          if ( !Flagsa )
            NtDeleteValueKey(KeyHandle, &ValueName);
          goto LABEL_336;
        }
        if ( BufferSize != 1072 )
          break;
        v68 = 1024;
        if ( Flagsa || (v7 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, (char *)Buffer + 48, 0x400u), v7 >= 0) )
        {
          v69 = *((_DWORD *)Buffer + 6);
          v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 7);
          if ( (v69 & 4) != 0 )
          {
            v108 = 0x40000;
            v122 = 393216;
            v134 = 327680;
          }
          else
          {
            v108 = 0;
            v122 = 0x20000;
            v134 = 0x10000;
          }
          v70 = v69 & 3;
          if ( v70 )
          {
            if ( v70 == 2 )
              v71 = v122 | Data[2] & 0xFFF0FFFF;
            else
              v71 = v134 | Data[2] & 0xFFF0FFFF;
          }
          else
          {
            v71 = v108 | Data[2] & 0xFFF0FFFF;
          }
          v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 9);
          if ( (*((_DWORD *)Buffer + 8) & 4) != 0 )
          {
            v109 = 0x400000;
            v123 = 6291456;
            v135 = 5242880;
          }
          else
          {
            v123 = 0x200000;
            v109 = 0;
            v135 = 0x100000;
          }
          v162 = *((_DWORD *)Buffer + 8) & 3;
          if ( v162 )
          {
            v73 = v71 & 0xFF0FFFFF;
            if ( v162 == 2 )
              v72 = v123 | v73;
            else
              v72 = v135 | v73;
          }
          else
          {
            v72 = v109 | v71 & 0xFF0FFFFF;
          }
          v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 11);
          if ( (*((_DWORD *)Buffer + 10) & 4) != 0 )
          {
            v110 = 0x4000000;
            v124 = 100663296;
            v136 = 83886080;
          }
          else
          {
            v124 = 0x2000000;
            v110 = 0;
            v136 = 0x1000000;
          }
          v163 = *((_DWORD *)Buffer + 10) & 3;
          if ( v163 )
          {
            v75 = v72 & 0xF0FFFFFF;
            if ( v163 == 2 )
              v74 = v124 | v75;
            else
              v74 = v136 | v75;
          }
          else
          {
            v74 = v110 | v72 & 0xF0FFFFFF;
          }
          if ( (*(_DWORD *)Buffer & 4) != 0 )
          {
            v111 = 0x40000000;
            v125 = 1610612736;
            v137 = 1342177280;
          }
          else
          {
            v125 = 0x20000000;
            v111 = 0;
            v137 = 0x10000000;
          }
          v164 = *(_DWORD *)Buffer & 3;
          if ( v164 )
          {
            v77 = v74 & 0xFFFFFFF;
            if ( v164 == 2 )
              v76 = v125 | v77;
            else
              v76 = v137 | v77;
          }
          else
          {
            v76 = v111 | v74 & 0xFFFFFFF;
          }
          v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 3);
          if ( (*((_DWORD *)Buffer + 2) & 4) != 0 )
          {
            v112 = 4;
            v166 = 5;
          }
          else
          {
            v171 = 2;
            v112 = 0;
          }
          v165 = *((_DWORD *)Buffer + 2) & 3;
          if ( v165 )
          {
            v79 = Data[3] & 0xFFFFFFF0;
            if ( v165 == 2 )
              v78 = v171 | v79;
            else
              v78 = v166 | v79;
          }
          else
          {
            v78 = v112 | Data[3] & 0xFFFFFFF0;
          }
          v80 = *((_DWORD *)Buffer + 4);
          v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 5);
          if ( (v80 & 4) != 0 )
          {
            v113 = 1536;
            v126 = 1280;
          }
          else
          {
            v113 = 512;
            v68 = 0;
            v126 = 256;
          }
          v81 = v80 & 3;
          if ( v81 )
          {
            v83 = v78 & 0xFFFFF0FF;
            Data[2] = v76;
            if ( v81 == 2 )
              v82 = v113 | v83;
            else
              v82 = v126 | v83;
          }
          else
          {
            v82 = v68 | v78 & 0xFFFFF0FF;
            Data[2] = v76;
          }
          Data[3] = v82;
          goto LABEL_336;
        }
        goto LABEL_338;
      case ImageChildProcessPolicy:
        if ( v140 )
        {
          Data[3] &= 0xFFFFFF0F;
          goto LABEL_336;
        }
        if ( BufferSize != 8 )
          break;
        v87 = *(_DWORD *)Buffer;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v88 = 64;
          v116 = 96;
          v128 = 112;
          v138 = 80;
        }
        else
        {
          v88 = 0;
          v116 = 32;
          v128 = 48;
          v138 = 16;
        }
        if ( (v87 & 3) != 0 )
        {
          if ( (*(_DWORD *)Buffer & 3) == 2 )
          {
            v89 = v116 | Data[3] & 0xFFFFFF0F;
          }
          else if ( (v87 & 8) != 0 )
          {
            v89 = v128 | Data[3] & 0xFFFFFF0F;
          }
          else
          {
            v89 = v138 | Data[3] & 0xFFFFFF0F;
          }
        }
        else
        {
          v89 = v88 | Data[3] & 0xFFFFFF0F;
        }
        Data[3] = v89;
        goto LABEL_336;
      case ImageSehopPolicy:
        if ( v140 )
        {
          Data[0] &= 0xFFFFFF0F;
          goto LABEL_87;
        }
        if ( BufferSize != 8 )
          break;
        v84 = *(_DWORD *)Buffer;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v85 = 64;
          v102 = 96;
          v114 = 112;
          v127 = 80;
        }
        else
        {
          v85 = 0;
          v114 = 48;
          v102 = 32;
          v127 = 16;
        }
        v13 = v102;
        if ( (v84 & 3) == 0 )
        {
          v16 = v85 | Data[0] & 0xFFFFFF0F;
          goto LABEL_41;
        }
        if ( (*(_DWORD *)Buffer & 3) != 2 )
        {
          if ( (v84 & 8) != 0 )
            v16 = v114 | Data[0] & 0xFFFFFF0F;
          else
            v16 = v127 | Data[0] & 0xFFFFFF0F;
          goto LABEL_41;
        }
        v15 = Data[0] & 0xFFFFFF0F;
LABEL_37:
        v14 = v13 | v15;
        goto LABEL_86;
      case ImageHeapPolicy:
        if ( v140 )
        {
          Data[0] &= 0xFFFF0FFF;
LABEL_87:
          v27 = Data[1];
LABEL_88:
          Data[1] = v27;
          goto LABEL_336;
        }
        if ( BufferSize == 8 )
        {
          if ( (*(_DWORD *)Buffer & 4) != 0 )
          {
            v31 = 0x4000;
            v115 = 20480;
            v32 = 24576;
          }
          else
          {
            v31 = 0;
            v115 = 4096;
            v32 = 0x2000;
          }
          v86 = *(_DWORD *)Buffer & 3;
          if ( v86 )
          {
            if ( v86 != 2 )
            {
              v14 = v115 | Data[0] & 0xFFFF0FFF;
LABEL_86:
              Data[0] = v14;
              goto LABEL_87;
            }
            v35 = Data[0] & 0xFFFF0FFF;
LABEL_83:
            v16 = v32 | v35;
          }
          else
          {
            v34 = Data[0] & 0xFFFF0FFF;
LABEL_80:
            v16 = v31 | v34;
          }
LABEL_41:
          Data[0] = v16;
          goto LABEL_336;
        }
        break;
      case ImageUserShadowStackPolicy:
        if ( v140 )
        {
          Data[3] &= 0xFFFFFFFu;
          Data[4] &= 0xFFFFFF00;
          goto LABEL_336;
        }
        if ( BufferSize != 24 )
          break;
        v90 = *(_DWORD *)Buffer;
        if ( (*(_DWORD *)Buffer & 4) != 0 )
        {
          v117 = 0x40000000;
          v129 = 1610612736;
          v139 = 1879048192;
          v175 = 1342177280;
        }
        else
        {
          v117 = 0;
          v129 = 0x20000000;
          v139 = 805306368;
          v175 = 0x10000000;
        }
        v91 = *((_DWORD *)Buffer + 2);
        v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 3);
        v184 = v91;
        if ( (v91 & 4) != 0 )
        {
          v92 = 5;
          v170 = 4;
          v103 = 6;
        }
        else
        {
          v170 = 0;
          v103 = 2;
          v92 = 1;
        }
        v93 = *((_DWORD *)Buffer + 4);
        v185.Buffer = (wchar_t *)*((_DWORD *)Buffer + 5);
        if ( (v93 & 4) != 0 )
        {
          v151 = 64;
          v160 = 96;
          v155 = 112;
          v182 = 80;
        }
        else
        {
          v151 = 0;
          v160 = 32;
          v155 = 48;
          v182 = 16;
        }
        if ( (v90 & 3) != 0 )
        {
          if ( (v90 & 3) == 2 )
          {
            v94 = v129 | Data[3] & 0xFFFFFFF;
          }
          else if ( (v90 & 8) != 0 )
          {
            v94 = v139 | Data[3] & 0xFFFFFFF;
          }
          else
          {
            v94 = v175 | Data[3] & 0xFFFFFFF;
          }
        }
        else
        {
          v94 = v117 | Data[3] & 0xFFFFFFF;
        }
        Data[3] = v94;
        if ( (v184 & 3) != 0 )
        {
          if ( (v184 & 3) == 2 )
            v95 = v103 | Data[4] & 0xFFFFFFF0;
          else
            v95 = v92 | Data[4] & 0xFFFFFFF0;
        }
        else
        {
          v95 = v170 | Data[4] & 0xFFFFFFF0;
        }
        if ( (v93 & 3) != 0 )
        {
          if ( (v93 & 3) != 2 )
          {
            if ( (v93 & 8) != 0 )
              v97 = v155 | v95 & 0xFFFFFF0F;
            else
              v97 = v182 | v95 & 0xFFFFFF0F;
            Data[4] = v97;
LABEL_336:
            v7 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, 0x18u);
            goto LABEL_338;
          }
          v96 = v160 | v95 & 0xFFFFFF0F;
        }
        else
        {
          v96 = v151 | v95 & 0xFFFFFF0F;
        }
        Data[4] = v96;
        goto LABEL_336;
      default:
        goto LABEL_338;
    }
  }
  v7 = -1073741811;
LABEL_338:
  if ( KeyHandle )
    NtClose(KeyHandle);
LABEL_340:
  if ( v7 == -1073741772 )
    return v188 == 0 ? 0xC0000034 : 0;
  return v7;
}
