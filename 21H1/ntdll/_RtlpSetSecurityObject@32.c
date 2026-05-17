/*
 * XREFs of _RtlpSetSecurityObject@32 @ 0x4B3491B6
 * Callers:
 *     _RtlSetSecurityObject@20 @ 0x4B3366E0 (_RtlSetSecurityObject@20.c)
 *     _RtlSetSecurityObjectEx@24 @ 0x4B336710 (_RtlSetSecurityObjectEx@24.c)
 * Callees:
 *     _RtlpApplyAclToObject@8 @ 0x4B2A8EDE (_RtlpApplyAclToObject@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlValidSid@4 @ 0x4B2D3CF0 (_RtlValidSid@4.c)
 *     _RtlFindAceByType@12 @ 0x4B2D7FA0 (_RtlFindAceByType@12.c)
 *     _RtlInitializeSid@12 @ 0x4B2D82C0 (_RtlInitializeSid@12.c)
 *     _RtlpValidFilterAclSubjectContext@8 @ 0x4B2D8C55 (_RtlpValidFilterAclSubjectContext@8.c)
 *     _RtlpCombineAcls@32 @ 0x4B2D8CAF (_RtlpCombineAcls@32.c)
 *     _RtlpGetDefaultTrustSubjectContext@8 @ 0x4B2D9164 (_RtlpGetDefaultTrustSubjectContext@8.c)
 *     _RtlCreateSecurityDescriptorRelative@8 @ 0x4B2D92C5 (_RtlCreateSecurityDescriptorRelative@8.c)
 *     _RtlpValidOwnerSubjectContext@16 @ 0x4B2D94CA (_RtlpValidOwnerSubjectContext@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwOpenProcessToken@12 @ 0x4B2F3C00 (_ZwOpenProcessToken@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlpComputeMergedAcl@40 @ 0x4B347AD5 (_RtlpComputeMergedAcl@40.c)
 *     _RtlpCreateServerAcl@20 @ 0x4B348798 (_RtlpCreateServerAcl@20.c)
 *     _RtlpValidLabelSubjectContext@16 @ 0x4B34A22A (_RtlpValidLabelSubjectContext@16.c)
 *     _RtlpValidTrustSubjectContext@16 @ 0x4B34A352 (_RtlpValidTrustSubjectContext@16.c)
 *     _RtlFindAceBySid@12 @ 0x4B34B72A (_RtlFindAceBySid@12.c)
 */

int __fastcall RtlpSetSecurityObject(int a1, unsigned int a2, int a3, int *a4, char a5, int a6, int a7, void *a8)
{
  __int16 v8; // bx
  void *v9; // edx
  int v10; // ecx
  __int16 v11; // ax
  void *ProcessHeap; // edi
  int InformationToken; // esi
  int v14; // eax
  int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  char *v19; // esi
  bool v20; // zf
  char *v21; // ecx
  char v22; // al
  int v23; // esi
  unsigned __int8 *v24; // eax
  unsigned __int8 *v25; // edi
  unsigned __int8 v26; // cl
  HANDLE v27; // ecx
  void **v28; // edi
  __int16 v29; // cx
  void *v30; // eax
  unsigned __int8 *AceByType; // eax
  int v32; // ecx
  unsigned __int8 *v33; // esi
  char v34; // cl
  int v35; // eax
  unsigned int v36; // edx
  unsigned __int8 *v37; // ebx
  unsigned __int8 *v38; // edx
  unsigned int v39; // edx
  unsigned __int8 *v40; // esi
  unsigned int v41; // ecx
  unsigned int v42; // edx
  unsigned int v43; // edx
  unsigned __int8 *v44; // esi
  int v45; // ecx
  unsigned int v46; // edx
  __int16 v47; // ax
  __int16 v48; // cx
  __int16 v49; // bx
  unsigned __int8 *v50; // eax
  __int16 v51; // dx
  __int16 v52; // di
  unsigned __int8 *v53; // ecx
  int v54; // eax
  __int16 v55; // dx
  unsigned __int8 *v56; // esi
  unsigned __int16 *v57; // ebx
  __int16 v58; // cx
  unsigned __int8 **Heap; // edi
  int v60; // eax
  int v61; // ecx
  __int16 v62; // ax
  _WORD *v63; // edx
  unsigned int v64; // esi
  _DWORD *v65; // eax
  _DWORD *v66; // edi
  unsigned __int8 *v67; // esi
  __int16 v68; // ax
  unsigned __int16 *v69; // ecx
  unsigned int v70; // eax
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // ebx
  __int16 v74; // ax
  int v75; // ecx
  int AceBySid; // eax
  char v77; // cl
  size_t v78; // ebx
  char *v79; // eax
  unsigned __int8 *v80; // esi
  int *v81; // ebx
  int v83; // [esp-4h] [ebp-11Ch]
  int v84; // [esp-4h] [ebp-11Ch]
  int v85; // [esp-4h] [ebp-11Ch]
  __int16 v86; // [esp+10h] [ebp-108h]
  void *v87; // [esp+14h] [ebp-104h]
  unsigned __int8 *v88; // [esp+18h] [ebp-100h] BYREF
  int v89; // [esp+1Ch] [ebp-FCh] BYREF
  unsigned int v90; // [esp+20h] [ebp-F8h]
  void *v91; // [esp+24h] [ebp-F4h]
  void *v92; // [esp+28h] [ebp-F0h]
  unsigned __int8 *v93; // [esp+2Ch] [ebp-ECh] BYREF
  void *v94; // [esp+30h] [ebp-E8h]
  void *v95; // [esp+34h] [ebp-E4h]
  int *v96; // [esp+38h] [ebp-E0h]
  int v97; // [esp+3Ch] [ebp-DCh]
  char v98; // [esp+42h] [ebp-D6h]
  char v99; // [esp+43h] [ebp-D5h]
  char v100; // [esp+44h] [ebp-D4h]
  char v101; // [esp+45h] [ebp-D3h]
  char v102; // [esp+46h] [ebp-D2h]
  char v103; // [esp+47h] [ebp-D1h]
  char v104; // [esp+48h] [ebp-D0h]
  char v105; // [esp+49h] [ebp-CFh]
  char v106; // [esp+4Ah] [ebp-CEh]
  char v107; // [esp+4Bh] [ebp-CDh] BYREF
  int v108; // [esp+4Ch] [ebp-CCh] BYREF
  char v109; // [esp+53h] [ebp-C5h]
  void *v110; // [esp+54h] [ebp-C4h]
  unsigned __int8 *v111; // [esp+58h] [ebp-C0h] BYREF
  void *Src; // [esp+5Ch] [ebp-BCh]
  char v113; // [esp+63h] [ebp-B5h]
  HANDLE Handle; // [esp+64h] [ebp-B4h] BYREF
  _WORD *v115; // [esp+68h] [ebp-B0h] BYREF
  size_t Size; // [esp+6Ch] [ebp-ACh]
  unsigned int v117; // [esp+70h] [ebp-A8h] BYREF
  unsigned __int8 *v118; // [esp+74h] [ebp-A4h] BYREF
  unsigned __int8 *v119; // [esp+78h] [ebp-A0h] BYREF
  unsigned __int8 *v120; // [esp+7Ch] [ebp-9Ch] BYREF
  size_t v121; // [esp+80h] [ebp-98h]
  int v122; // [esp+84h] [ebp-94h] BYREF
  __int16 v123; // [esp+88h] [ebp-90h]
  unsigned __int16 *v124; // [esp+8Ch] [ebp-8Ch] BYREF
  int v125; // [esp+90h] [ebp-88h] BYREF
  int v126; // [esp+94h] [ebp-84h] BYREF
  unsigned int v127; // [esp+98h] [ebp-80h]
  char v128[4]; // [esp+9Ch] [ebp-7Ch] BYREF
  int v129; // [esp+A0h] [ebp-78h]
  int v130; // [esp+A4h] [ebp-74h]
  _BYTE v131[24]; // [esp+A8h] [ebp-70h] BYREF
  int v132; // [esp+C0h] [ebp-58h]
  int v133; // [esp+C4h] [ebp-54h]
  _BYTE v134[8]; // [esp+E4h] [ebp-34h] BYREF
  int v135; // [esp+ECh] [ebp-2Ch]

  v8 = 0x8000;
  v96 = a4;
  v90 = a2;
  v100 = 0;
  v9 = (void *)*(unsigned __int16 *)(a3 + 2);
  v99 = 0;
  v107 = 0;
  v101 = 0;
  v106 = 0;
  v102 = 0;
  v109 = 0;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v124 = 0;
  Src = 0;
  v115 = 0;
  v111 = 0;
  v118 = 0;
  v88 = 0;
  v119 = 0;
  v120 = 0;
  Size = 0;
  LOBYTE(v121) = 0;
  LOBYTE(v127) = 0;
  v98 = 0;
  v125 = 0;
  v110 = a8;
  v97 = a3;
  v86 = 0x8000;
  v94 = v9;
  v95 = (void *)((unsigned __int8)v9 & 0x10);
  if ( ((unsigned __int8)v9 & 0x10) != 0 )
  {
    if ( (__int16)v9 >= 0 )
      v91 = *(void **)(a3 + 12);
    else
      v91 = *(_DWORD *)(a3 + 12) != 0 ? (void *)(*(_DWORD *)(a3 + 12) + a3) : 0;
  }
  else
  {
    v91 = 0;
  }
  v10 = *v96;
  v11 = *(_WORD *)(*v96 + 2);
  if ( (v11 & 0x10) != 0 )
  {
    if ( v11 >= 0 )
      v87 = *(void **)(v10 + 12);
    else
      v87 = *(_DWORD *)(v10 + 12) != 0 ? (void *)(*(_DWORD *)(v10 + 12) + v10) : 0;
  }
  else
  {
    v87 = 0;
  }
  Handle = 0;
  v117 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v92 = ProcessHeap;
  if ( *(__int16 *)(v10 + 2) >= 0 )
    return -1073741593;
  v130 = (unsigned __int8)v9 & 0x80;
  LOBYTE(v89) = ((unsigned __int8)v9 & 0x80) != 0;
  v113 = ((unsigned __int8)v9 & 0x40) != 0;
  v14 = v90 & 0x80;
  v15 = v90 & 0x100;
  if ( (v90 & 0x10000) != 0 )
  {
    v90 |= 0x1FFu;
    v20 = v14 == 0;
    v16 = v90;
    if ( v20 )
    {
      v16 = v90 & 0xFFFFFF7F;
      v90 &= ~0x80u;
    }
    if ( !v15 )
    {
      v16 &= ~0x100u;
      v90 = v16;
    }
    if ( !v87 && !v91 )
    {
      v17 = v16 & 0xFFFFFE07;
      v90 = v17;
      if ( (_WORD)v95 )
      {
        v90 = v17 | 8;
      }
      else if ( ((unsigned __int16)v9 & 0x800) != 0 )
      {
        v98 = 1;
      }
    }
  }
  if ( (v90 & 1) == 0 )
  {
    v19 = *(_DWORD *)(v10 + 4) != 0 ? (char *)(*(_DWORD *)(v10 + 4) + v10) : 0;
    v20 = v19 == 0;
    v95 = v19;
    goto LABEL_34;
  }
  v18 = v90 >> 2;
  LOBYTE(v18) = (v90 & 4) == 0;
  v127 = v18;
  v19 = *(char **)(v97 + 4);
  if ( (__int16)v94 < 0 )
    v19 = v19 != 0 ? &v19[v97] : 0;
  v95 = v19;
  v99 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !v110 )
      return -1073741734;
    InformationToken = ZwQueryInformationToken((int)v110, 10, (int)v131, 56, (int)v128);
    v93 = (unsigned __int8 *)InformationToken;
    if ( InformationToken < 0 )
      return InformationToken;
    if ( v132 == 2 && v133 < 1 )
      return -1073741659;
    v19 = (char *)v95;
    v20 = RtlpValidOwnerSubjectContext(v110, (unsigned __int8 *)v95, v89, (int *)&v93) == 0;
LABEL_34:
    if ( !v20 )
      goto LABEL_35;
    return -1073741734;
  }
LABEL_35:
  if ( !RtlValidSid(v19) )
    return -1073741734;
  if ( (v90 & 2) != 0 )
  {
    if ( *(__int16 *)(v97 + 2) >= 0 )
      v94 = *(void **)(v97 + 8);
    else
      v94 = *(_DWORD *)(v97 + 8) != 0 ? (void *)(*(_DWORD *)(v97 + 8) + v97) : 0;
    v21 = (char *)v94;
    v100 = 1;
  }
  else
  {
    v21 = *(char **)(*v96 + 8);
    if ( *(__int16 *)(*v96 + 2) < 0 )
      v21 = v21 != 0 ? &v21[*v96] : 0;
    v94 = v21;
  }
  if ( !v21 )
  {
    InformationToken = -1073741733;
    v93 = v111;
    goto LABEL_159;
  }
  if ( !RtlValidSid(v21) )
    return -1073741733;
  v22 = v90;
  if ( (v90 & 0x1F8) == 0 )
  {
    v37 = v88;
    Src = v87;
    v93 = v111;
LABEL_136:
    if ( (v22 & 4) == 0 )
    {
      v61 = *v96;
      v62 = *(_WORD *)(*v96 + 2);
      if ( (v62 & 4) != 0 )
      {
        v57 = *(unsigned __int16 **)(v61 + 16);
        if ( v62 < 0 )
          v57 = v57 != 0 ? (unsigned __int16 *)((char *)v57 + v61) : 0;
      }
      else
      {
        v57 = 0;
      }
      goto LABEL_177;
    }
    v51 = *(_WORD *)(v97 + 2);
    v52 = v51;
    if ( (a5 & 1) == 0 )
    {
      if ( (v51 & 4) != 0 )
      {
        v57 = *(unsigned __int16 **)(v97 + 16);
        if ( v51 < 0 )
          v57 = v57 != 0 ? (unsigned __int16 *)((char *)v57 + v97) : 0;
      }
      else
      {
        v57 = 0;
      }
      v58 = v51 & 0x1000 | 4 | v86;
      v86 = v58;
      if ( (v51 & 0x500) == 0x500 )
        v86 = v58 | 0x400;
      goto LABEL_155;
    }
    if ( (v51 & 4) != 0 )
    {
      v53 = *(unsigned __int8 **)(v97 + 16);
      if ( v51 < 0 )
        v53 = v53 != 0 ? &v53[v97] : 0;
    }
    else
    {
      v53 = 0;
    }
    v54 = *v96;
    v55 = *(_WORD *)(*v96 + 2);
    if ( (v55 & 4) != 0 )
    {
      v56 = *(unsigned __int8 **)(v54 + 16);
      if ( v55 < 0 )
        v56 = v56 != 0 ? &v56[v54] : 0;
    }
    else
    {
      v56 = 0;
    }
    InformationToken = RtlpComputeMergedAcl(
                         v56,
                         v55 & 0x140C,
                         v53,
                         v52 & 0x140C,
                         (unsigned __int8 *)v95,
                         (unsigned __int8 *)v94,
                         a7,
                         1,
                         (int *)&v124,
                         &v108);
    if ( InformationToken >= 0 )
    {
      v57 = v124;
      v101 = 1;
      v86 |= v108 & 0x1408 | 4;
LABEL_155:
      if ( (_WORD)v130 )
      {
        v126 = 72;
        Heap = (unsigned __int8 **)RtlAllocateHeap((int)v92, NtdllBaseTag + 1310720, 72);
        if ( !Heap )
          goto LABEL_157;
        InformationToken = ZwOpenProcessToken(-1, 8, (int)&Handle);
        if ( InformationToken < 0
          || (InformationToken = ZwQueryInformationToken((int)Handle, 4, (int)Heap, v126, (int)&v126),
              NtClose(Handle),
              InformationToken < 0) )
        {
          v84 = (int)Heap;
          ProcessHeap = v92;
          RtlFreeHeap((int)v92, 0, v84);
        }
        else
        {
          v60 = RtlpCreateServerAcl((int)v57, v113, *Heap, &v125, &v107);
          v85 = (int)Heap;
          ProcessHeap = v92;
          InformationToken = v60;
          RtlFreeHeap((int)v92, 0, v85);
          if ( InformationToken >= 0 )
          {
            v57 = (unsigned __int16 *)v125;
            goto LABEL_177;
          }
        }
LABEL_159:
        v37 = v88;
        if ( v101 )
          RtlFreeHeap((int)ProcessHeap, 0, (int)v124);
        goto LABEL_161;
      }
      ProcessHeap = v92;
LABEL_177:
      Size = 4 * *((unsigned __int8 *)v95 + 1) + 8;
      v121 = 4 * *((unsigned __int8 *)v94 + 1) + 8;
      if ( Src )
      {
        v63 = (_WORD *)((*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC);
        v115 = v63;
      }
      else
      {
        v63 = 0;
        v115 = 0;
      }
      if ( v57 )
      {
        v64 = (v57[1] + 3) & 0xFFFFFFFC;
        v117 = v64;
      }
      else
      {
        v64 = 0;
        v117 = 0;
      }
      v65 = (_DWORD *)RtlAllocateHeap((int)ProcessHeap, NtdllBaseTag + 1310720, (int)v63 + v64 + v121 + Size + 20);
      v66 = v65;
      if ( v65 )
      {
        RtlCreateSecurityDescriptorRelative(v65);
        v67 = (unsigned __int8 *)(v66 + 5);
        v111 = (unsigned __int8 *)(v66 + 5);
        if ( v98 )
          v86 |= 0x800u;
        v68 = v86 | *((_WORD *)v66 + 1);
        *((_WORD *)v66 + 1) = v68;
        if ( (*(_WORD *)(v97 + 2) & 0x4000) != 0 )
        {
          *((_BYTE *)v66 + 1) = *(_BYTE *)(v97 + 1);
          *((_WORD *)v66 + 1) = v68 | 0x4000;
        }
        if ( Src )
        {
          memcpy(v66 + 5, Src, *((unsigned __int16 *)Src + 1));
          RtlpApplyAclToObject((int)(v66 + 5), a7);
          v69 = (unsigned __int16 *)Src;
          v70 = (unsigned int)v115;
          v66[3] = 20;
          v71 = v69[1];
          if ( v70 > v71 )
          {
            memset(&v67[v71], 0, v70 - v71);
            v70 = (unsigned int)v115;
          }
          v67 += v70;
          v111 = v67;
        }
        else
        {
          v66[3] = 0;
        }
        if ( (v86 & 0x10) == 0 )
          *((_WORD *)v66 + 1) |= *(_WORD *)(*v96 + 2) & 0x2830;
        if ( v57 )
        {
          memcpy(v67, v57, v57[1]);
          RtlpApplyAclToObject((int)v67, a7);
          v66[4] = v67 - (unsigned __int8 *)v66;
          v72 = v57[1];
          v73 = v117;
          if ( v117 > v72 )
            memset(&v67[v72], 0, v117 - v72);
          v67 += v73;
          v111 = v67;
        }
        else
        {
          v66[4] = 0;
        }
        if ( (v86 & 4) == 0 )
        {
          *((_WORD *)v66 + 1) |= *(_WORD *)(*v96 + 2) & 0x140C;
          if ( (_BYTE)v127 )
          {
            v122 = 0;
            v123 = 768;
            InformationToken = RtlInitializeSid((int)v134, (int)&v122, 1u);
            if ( InformationToken < 0 )
              goto LABEL_158;
            v135 = 4;
            v89 = 0;
            while ( 1 )
            {
              v74 = *((_WORD *)v66 + 1);
              if ( (v74 & 4) != 0 )
              {
                v75 = v66[4];
                if ( v74 < 0 )
                  v75 = v75 != 0 ? (unsigned int)v66 + v75 : 0;
              }
              else
              {
                v75 = 0;
              }
              AceBySid = RtlFindAceBySid(v75, v134, &v89);
              if ( !AceBySid )
                break;
              v77 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
              ++v89;
              *(_BYTE *)(AceBySid + 1) = v77;
            }
            v67 = v111;
          }
        }
        v78 = Size;
        memcpy(v67, v95, Size);
        v79 = (char *)(v67 - (unsigned __int8 *)v66);
        v80 = &v67[v78];
        v20 = v99 == 0;
        v81 = v96;
        v66[1] = v79;
        if ( v20 )
          *((_WORD *)v66 + 1) |= *(_WORD *)(*v81 + 2) & 1;
        memcpy(v80, v94, v121);
        v20 = v100 == 0;
        v66[2] = v80 - (unsigned __int8 *)v66;
        if ( v20 )
          *((_WORD *)v66 + 1) |= *(_WORD *)(*v81 + 2) & 2;
        RtlFreeHeap((int)v92, 0, *v81);
        *v81 = (int)v66;
        ProcessHeap = v92;
        InformationToken = 0;
        goto LABEL_159;
      }
LABEL_157:
      InformationToken = -1073741801;
LABEL_158:
      ProcessHeap = v92;
      goto LABEL_159;
    }
    ProcessHeap = v92;
LABEL_161:
    if ( v93 && v102 )
      RtlFreeHeap((int)ProcessHeap, 0, (int)v93);
    if ( v37 && v109 )
      RtlFreeHeap((int)ProcessHeap, 0, (int)v37);
    if ( v118 && v103 )
      RtlFreeHeap((int)ProcessHeap, 0, (int)v118);
    if ( v119 && v104 )
      RtlFreeHeap((int)ProcessHeap, 0, (int)v119);
    if ( v120 && v105 )
      RtlFreeHeap((int)ProcessHeap, 0, (int)v120);
    if ( Src && v106 )
      RtlFreeHeap((int)ProcessHeap, 0, (int)Src);
    if ( v107 )
      RtlFreeHeap((int)ProcessHeap, 0, v125);
    return InformationToken;
  }
  v129 = v90 & 0x10;
  if ( (v90 & 0x10) == 0 )
  {
    v23 = (int)v110;
LABEL_66:
    InformationToken = RtlpGetDefaultTrustSubjectContext(v23, (int *)&v117);
    v93 = (unsigned __int8 *)InformationToken;
    if ( InformationToken < 0 )
      return InformationToken;
    v28 = (void **)v117;
    v29 = v90;
    v117 = v90 & 0x80;
    v30 = *v28;
    v110 = *v28;
    if ( (v90 & 0x80) != 0 )
    {
      if ( !v30 )
      {
LABEL_69:
        InformationToken = -1073741790;
        goto LABEL_70;
      }
      v89 = 0;
      while ( 1 )
      {
        AceByType = RtlFindAceByType((int)v91, 20, (unsigned int *)&v89);
        v33 = AceByType;
        if ( AceByType )
        {
          if ( (*((_DWORD *)AceByType + 1) & 0xFF000000) != 0 )
          {
            InformationToken = -1073740730;
            goto LABEL_70;
          }
          if ( !(unsigned __int8)RtlpValidTrustSubjectContext(v32, &v93) )
            goto LABEL_69;
        }
        ++v89;
        if ( !v33 )
        {
          v29 = v90;
          break;
        }
      }
    }
    Size = v29 & 0x100;
    if ( (v29 & 0x100) != 0 )
    {
      InformationToken = RtlpValidFilterAclSubjectContext(v91);
      if ( InformationToken < 0
        || (a5 & 2) == 0 && (InformationToken = RtlpValidFilterAclSubjectContext(v87), InformationToken < 0) )
      {
LABEL_70:
        RtlFreeHeap((int)v92, 0, (int)v28);
        return InformationToken;
      }
    }
    v83 = (int)v28;
    ProcessHeap = v92;
    RtlFreeHeap((int)v92, 0, v83);
    v34 = v90;
    v35 = a5 & 2;
    v89 = v35;
    if ( (v90 & 8) == 0 )
    {
      v38 = (unsigned __int8 *)v87;
      v93 = (unsigned __int8 *)v87;
      v89 = a5 & 2;
      goto LABEL_93;
    }
    v36 = *(unsigned __int16 *)(v97 + 2);
    if ( (a5 & 2) != 0 )
    {
      InformationToken = RtlpComputeMergedAcl(
                           (unsigned __int8 *)v87,
                           (*(_WORD *)(*v96 + 2) & 0x2800 | (*(unsigned __int16 *)(*v96 + 2) >> 1) & 0x18u) >> 1,
                           (unsigned __int8 *)v91,
                           (v36 & 0x2800 | (v36 >> 1) & 0x18) >> 1,
                           (unsigned __int8 *)v95,
                           (unsigned __int8 *)v94,
                           a7,
                           2,
                           (int *)&v111,
                           &v108);
      if ( InformationToken < 0 )
      {
        v93 = v111;
        goto LABEL_87;
      }
      v34 = v90;
      v102 = 1;
      v93 = v111;
      v35 = v89;
      v8 = 2 * (v108 & 0x1400 | (2 * (v108 & 8 | 0x2004)));
    }
    else
    {
      v93 = (unsigned __int8 *)v91;
      v8 = v36 & 0x2000 | 0x8010;
      v86 = v8;
      if ( (v36 & 0xA00) != 0xA00 )
      {
LABEL_91:
        v38 = (unsigned __int8 *)v87;
LABEL_93:
        if ( (v34 & 0x20) != 0 )
        {
          v39 = *(unsigned __int16 *)(v97 + 2);
          if ( v35 )
          {
            InformationToken = RtlpComputeMergedAcl(
                                 (unsigned __int8 *)v87,
                                 (*(_WORD *)(*v96 + 2) & 0x800 | (*(unsigned __int16 *)(*v96 + 2) >> 1) & 0x18u) >> 1,
                                 (unsigned __int8 *)v91,
                                 (v39 & 0x800 | (v39 >> 1) & 0x18) >> 1,
                                 (unsigned __int8 *)v95,
                                 (unsigned __int8 *)v94,
                                 a7,
                                 2,
                                 (int *)&v88,
                                 &v108);
            if ( InformationToken < 0 )
              goto LABEL_87;
            v40 = (unsigned __int8 *)v91;
            v109 = 1;
            v8 |= 2 * (v108 & 0x1400 | (2 * (v108 & 8 | 4)));
            v34 = v90;
            v86 = v8;
          }
          else
          {
            v40 = (unsigned __int8 *)v91;
            v88 = (unsigned __int8 *)v91;
            v8 |= v39 & 0x2000 | 0x10;
            v86 = v8;
            if ( (v39 & 0xA00) == 0xA00 )
            {
              v8 |= 0x800u;
              v86 = v8;
            }
          }
          v38 = (unsigned __int8 *)v87;
        }
        else
        {
          v40 = (unsigned __int8 *)v91;
          v88 = v38;
        }
        v20 = (v34 & 0x40) == 0;
        v41 = v89;
        if ( v20 )
        {
          v118 = v38;
        }
        else
        {
          v42 = *(unsigned __int16 *)(v97 + 2);
          if ( v89 )
          {
            InformationToken = RtlpComputeMergedAcl(
                                 (unsigned __int8 *)v87,
                                 (*(_WORD *)(*v96 + 2) & 0x800 | (*(unsigned __int16 *)(*v96 + 2) >> 1) & 0x18u) >> 1,
                                 v40,
                                 (v42 & 0x800 | (v42 >> 1) & 0x18) >> 1,
                                 (unsigned __int8 *)v95,
                                 (unsigned __int8 *)v94,
                                 a7,
                                 2,
                                 (int *)&v118,
                                 &v108);
            if ( InformationToken < 0 )
              goto LABEL_87;
            v103 = 1;
            v8 |= 2 * (v108 & 0x1400 | (2 * (v108 & 8 | 4)));
            v41 = v89;
            v86 = v8;
          }
          else
          {
            v118 = v40;
            v8 |= v42 & 0x2000 | 0x10;
            v86 = v8;
            if ( (v42 & 0xA00) == 0xA00 )
            {
              v8 |= 0x800u;
              v86 = v8;
            }
          }
          v38 = (unsigned __int8 *)v87;
        }
        if ( v117 )
        {
          v43 = *(unsigned __int16 *)(v97 + 2);
          if ( v41 )
          {
            InformationToken = RtlpComputeMergedAcl(
                                 (unsigned __int8 *)v87,
                                 (*(_WORD *)(*v96 + 2) & 0x800 | (*(unsigned __int16 *)(*v96 + 2) >> 1) & 0x18u) >> 1,
                                 (unsigned __int8 *)v91,
                                 (v43 & 0x800 | (v43 >> 1) & 0x18) >> 1,
                                 (unsigned __int8 *)v95,
                                 (unsigned __int8 *)v94,
                                 a7,
                                 2,
                                 (int *)&v119,
                                 &v108);
            if ( InformationToken < 0 )
              goto LABEL_87;
            v44 = (unsigned __int8 *)v91;
            v104 = 1;
            v8 |= 2 * (v108 & 0x1400 | (2 * (v108 & 8 | 4)));
            v86 = v8;
          }
          else
          {
            v44 = (unsigned __int8 *)v91;
            v119 = (unsigned __int8 *)v91;
            v8 |= v43 & 0x2000 | 0x10;
            v86 = v8;
            if ( (v43 & 0xA00) == 0xA00 )
            {
              v8 |= 0x800u;
              v86 = v8;
            }
          }
          v38 = (unsigned __int8 *)v87;
        }
        else
        {
          v44 = (unsigned __int8 *)v91;
          v119 = v38;
        }
        v45 = v97;
        if ( !Size )
        {
          v120 = v38;
          goto LABEL_113;
        }
        v46 = *(unsigned __int16 *)(v97 + 2);
        if ( !v89 )
        {
          v120 = v44;
          v8 |= v46 & 0x2000 | 0x10;
          v86 = v8;
          if ( (v46 & 0xA00) == 0xA00 )
          {
            v8 |= 0x800u;
            v86 = v8;
          }
          goto LABEL_112;
        }
        InformationToken = RtlpComputeMergedAcl(
                             (unsigned __int8 *)v87,
                             (*(_WORD *)(*v96 + 2) & 0x800 | (*(unsigned __int16 *)(*v96 + 2) >> 1) & 0x18u) >> 1,
                             v44,
                             (v46 & 0x800 | (v46 >> 1) & 0x18) >> 1,
                             (unsigned __int8 *)v95,
                             (unsigned __int8 *)v94,
                             a7,
                             2,
                             (int *)&v120,
                             &v108);
        if ( InformationToken >= 0 )
        {
          v105 = 1;
          v8 |= 2 * (v108 & 0x1400 | (2 * (v108 & 8 | 4)));
          v45 = v97;
          v86 = v8;
LABEL_112:
          v38 = (unsigned __int8 *)v87;
LABEL_113:
          if ( v129 )
          {
            v47 = *(_WORD *)(v45 + 2);
            v48 = v47 & 0xA00;
            v49 = v47 & 0x2000 | 0x10 | v8;
            v50 = (unsigned __int8 *)v91;
            v86 = v49;
            if ( v48 == 2560 )
              v86 = v49 | 0x800;
          }
          else
          {
            v50 = v38;
          }
          v37 = v88;
          InformationToken = RtlpCombineAcls(v93, v50, v88, v118, v119, v120, &v115, 0);
          if ( InformationToken < 0 )
            goto LABEL_161;
          Src = v115;
          if ( !v93 && v115 && !v115[2] )
          {
            RtlFreeHeap((int)ProcessHeap, 0, (int)v115);
            Src = 0;
          }
          v106 = 1;
          v22 = v90;
          goto LABEL_136;
        }
LABEL_87:
        v37 = v88;
        goto LABEL_161;
      }
      v8 = v36 & 0x2000 | 0x8810;
    }
    v86 = v8;
    goto LABEL_91;
  }
  v89 = 0;
  v23 = (int)v110;
  while ( 1 )
  {
    v24 = RtlFindAceByType((int)v91, 17, (unsigned int *)&v89);
    v25 = v24;
    if ( v24 )
    {
      v20 = (*((_DWORD *)v24 + 1) & 0xFFFFFFF8) == 0;
      v26 = v24[1];
      Size = (size_t)(v24 + 8);
      LOBYTE(v121) = v26;
      if ( !v20 )
        return -1073740730;
    }
    if ( v23 )
    {
      InformationToken = ZwQueryInformationToken(v23, 10, (int)v131, 56, (int)v128);
      v93 = (unsigned __int8 *)InformationToken;
      if ( InformationToken < 0 )
        return InformationToken;
      if ( v132 == 2 && v133 < 1 )
        return -1073741659;
    }
    else
    {
      InformationToken = ZwOpenProcessToken(-1, 8, (int)&Handle);
      v93 = (unsigned __int8 *)InformationToken;
      if ( InformationToken < 0 )
        return InformationToken;
    }
    v23 = (int)v110;
    v27 = v110;
    if ( !v110 )
      v27 = Handle;
    if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v27, Size, v121, &v93) )
    {
      NtClose(Handle);
      return -1073740730;
    }
    NtClose(Handle);
    ++v89;
    if ( !v25 )
      goto LABEL_66;
  }
}
