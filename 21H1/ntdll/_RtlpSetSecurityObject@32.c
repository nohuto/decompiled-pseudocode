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

int __fastcall RtlpSetSecurityObject(
        int a1,
        unsigned int a2,
        int a3,
        PVOID *a4,
        char a5,
        int a6,
        GENERIC_MAPPING *a7,
        void *a8)
{
  __int16 v8; // bx
  void *v9; // edx
  PVOID v10; // ecx
  __int16 v11; // ax
  void *ProcessHeap; // edi
  NTSTATUS DefaultTrustSubjectContext; // esi
  int v14; // eax
  int v15; // esi
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  char *v19; // esi
  bool v20; // zf
  char *v21; // ecx
  char v22; // al
  HANDLE v23; // esi
  char *v24; // eax
  char *v25; // edi
  char v26; // cl
  HANDLE v27; // ecx
  HANDLE *v28; // edi
  __int16 v29; // cx
  HANDLE v30; // eax
  _DWORD *AceByType; // eax
  int v32; // ecx
  _DWORD *v33; // esi
  char v34; // cl
  ULONG v35; // eax
  unsigned int v36; // edx
  PVOID v37; // ebx
  PACL v38; // edx
  unsigned int v39; // edx
  PACL v40; // esi
  ULONG v41; // ecx
  unsigned int v42; // edx
  unsigned int v43; // edx
  PACL v44; // esi
  int v45; // ecx
  unsigned int v46; // edx
  __int16 v47; // ax
  __int16 v48; // cx
  __int16 v49; // bx
  PACL v50; // eax
  __int16 v51; // dx
  __int16 v52; // di
  unsigned __int8 *v53; // ecx
  char *v54; // eax
  __int16 v55; // dx
  unsigned __int8 *v56; // esi
  unsigned __int16 *v57; // ebx
  __int16 v58; // cx
  unsigned __int8 **Heap; // edi
  int v60; // eax
  PVOID v61; // ecx
  __int16 v62; // ax
  char *v63; // edx
  unsigned int v64; // esi
  _DWORD *v65; // eax
  _DWORD *v66; // edi
  char *v67; // esi
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
  int v78; // ebx
  char *v79; // eax
  char *v80; // esi
  PVOID *v81; // ebx
  SIZE_T v83; // [esp-4h] [ebp-11Ch]
  HANDLE *v84; // [esp-4h] [ebp-11Ch]
  unsigned __int8 **v85; // [esp-4h] [ebp-11Ch]
  unsigned __int8 **v86; // [esp-4h] [ebp-11Ch]
  size_t v87; // [esp-4h] [ebp-11Ch]
  size_t v88; // [esp-4h] [ebp-11Ch]
  __int16 v89; // [esp+10h] [ebp-108h]
  PACL v90; // [esp+14h] [ebp-104h]
  PVOID v91; // [esp+18h] [ebp-100h] BYREF
  ULONG Index; // [esp+1Ch] [ebp-FCh] BYREF
  unsigned int v93; // [esp+20h] [ebp-F8h]
  PACL Acl; // [esp+24h] [ebp-F4h]
  PVOID HeapHandle; // [esp+28h] [ebp-F0h]
  PVOID v96; // [esp+2Ch] [ebp-ECh] BYREF
  PSID Sid; // [esp+30h] [ebp-E8h]
  void *v98; // [esp+34h] [ebp-E4h]
  PVOID *v99; // [esp+38h] [ebp-E0h]
  int v100; // [esp+3Ch] [ebp-DCh]
  char v101; // [esp+42h] [ebp-D6h]
  char v102; // [esp+43h] [ebp-D5h]
  char v103; // [esp+44h] [ebp-D4h]
  char v104; // [esp+45h] [ebp-D3h]
  char v105; // [esp+46h] [ebp-D2h]
  char v106; // [esp+47h] [ebp-D1h]
  char v107; // [esp+48h] [ebp-D0h]
  char v108; // [esp+49h] [ebp-CFh]
  char v109; // [esp+4Ah] [ebp-CEh]
  char v110; // [esp+4Bh] [ebp-CDh] BYREF
  int v111; // [esp+4Ch] [ebp-CCh] BYREF
  char v112; // [esp+53h] [ebp-C5h]
  HANDLE TokenHandle; // [esp+54h] [ebp-C4h]
  char *v114; // [esp+58h] [ebp-C0h] BYREF
  void *Src; // [esp+5Ch] [ebp-BCh]
  char v116; // [esp+63h] [ebp-B5h]
  HANDLE Handle; // [esp+64h] [ebp-B4h] BYREF
  PVOID v118; // [esp+68h] [ebp-B0h] BYREF
  int Size; // [esp+6Ch] [ebp-ACh]
  unsigned int Size_4; // [esp+70h] [ebp-A8h] BYREF
  PVOID BaseAddress; // [esp+74h] [ebp-A4h] BYREF
  PVOID v122; // [esp+78h] [ebp-A0h] BYREF
  PVOID v123; // [esp+7Ch] [ebp-9Ch] BYREF
  _DWORD v124[3]; // [esp+80h] [ebp-98h] BYREF
  PVOID v125; // [esp+8Ch] [ebp-8Ch] BYREF
  int v126; // [esp+90h] [ebp-88h] BYREF
  ULONG TokenInformationLength; // [esp+94h] [ebp-84h] BYREF
  unsigned int v128; // [esp+98h] [ebp-80h]
  ULONG ReturnLength; // [esp+9Ch] [ebp-7Ch] BYREF
  int v130; // [esp+A0h] [ebp-78h]
  int v131; // [esp+A4h] [ebp-74h]
  _BYTE TokenInformation[24]; // [esp+A8h] [ebp-70h] BYREF
  int v133; // [esp+C0h] [ebp-58h]
  int v134; // [esp+C4h] [ebp-54h]
  _BYTE v135[8]; // [esp+E4h] [ebp-34h] BYREF
  int v136; // [esp+ECh] [ebp-2Ch]

  v8 = 0x8000;
  v99 = a4;
  v93 = a2;
  v103 = 0;
  v9 = (void *)*(unsigned __int16 *)(a3 + 2);
  v102 = 0;
  v110 = 0;
  v104 = 0;
  v109 = 0;
  v105 = 0;
  v112 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v125 = 0;
  Src = 0;
  v118 = 0;
  v114 = 0;
  BaseAddress = 0;
  v91 = 0;
  v122 = 0;
  v123 = 0;
  Size = 0;
  LOBYTE(v124[0]) = 0;
  LOBYTE(v128) = 0;
  v101 = 0;
  v126 = 0;
  TokenHandle = a8;
  v100 = a3;
  v89 = 0x8000;
  Sid = v9;
  v98 = (void *)((unsigned __int8)v9 & 0x10);
  if ( ((unsigned __int8)v9 & 0x10) != 0 )
  {
    if ( (__int16)v9 >= 0 )
      Acl = *(PACL *)(a3 + 12);
    else
      Acl = *(_DWORD *)(a3 + 12) != 0 ? (PACL)(*(_DWORD *)(a3 + 12) + a3) : 0;
  }
  else
  {
    Acl = 0;
  }
  v10 = *v99;
  v11 = *((_WORD *)*v99 + 1);
  if ( (v11 & 0x10) != 0 )
  {
    if ( v11 >= 0 )
      v90 = (PACL)*((_DWORD *)v10 + 3);
    else
      v90 = *((_DWORD *)v10 + 3) != 0 ? (PACL)((unsigned int)v10 + *((_DWORD *)v10 + 3)) : 0;
  }
  else
  {
    v90 = 0;
  }
  Handle = 0;
  Size_4 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  if ( *((__int16 *)v10 + 1) >= 0 )
    return -1073741593;
  v131 = (unsigned __int8)v9 & 0x80;
  LOBYTE(Index) = ((unsigned __int8)v9 & 0x80) != 0;
  v116 = ((unsigned __int8)v9 & 0x40) != 0;
  v14 = v93 & 0x80;
  v15 = v93 & 0x100;
  if ( (v93 & 0x10000) != 0 )
  {
    v93 |= 0x1FFu;
    v20 = v14 == 0;
    v16 = v93;
    if ( v20 )
    {
      v16 = v93 & 0xFFFFFF7F;
      v93 &= ~0x80u;
    }
    if ( !v15 )
    {
      v16 &= ~0x100u;
      v93 = v16;
    }
    if ( !v90 && !Acl )
    {
      v17 = v16 & 0xFFFFFE07;
      v93 = v17;
      if ( (_WORD)v98 )
      {
        v93 = v17 | 8;
      }
      else if ( ((unsigned __int16)v9 & 0x800) != 0 )
      {
        v101 = 1;
      }
    }
  }
  if ( (v93 & 1) == 0 )
  {
    v19 = *((_DWORD *)v10 + 1) != 0 ? (char *)((unsigned int)v10 + *((_DWORD *)v10 + 1)) : 0;
    v20 = v19 == 0;
    v98 = v19;
    goto LABEL_34;
  }
  v18 = v93 >> 2;
  LOBYTE(v18) = (v93 & 4) == 0;
  v128 = v18;
  v19 = *(char **)(v100 + 4);
  if ( (__int16)Sid < 0 )
    v19 = v19 != 0 ? &v19[v100] : 0;
  v98 = v19;
  v102 = 1;
  if ( (a5 & 8) == 0 )
  {
    if ( !TokenHandle )
      return -1073741734;
    DefaultTrustSubjectContext = ZwQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    v96 = (PVOID)DefaultTrustSubjectContext;
    if ( DefaultTrustSubjectContext < 0 )
      return DefaultTrustSubjectContext;
    if ( v133 == 2 && v134 < 1 )
      return -1073741659;
    v19 = (char *)v98;
    v20 = RtlpValidOwnerSubjectContext(TokenHandle, v98, Index, (NTSTATUS *)&v96) == 0;
LABEL_34:
    if ( !v20 )
      goto LABEL_35;
    return -1073741734;
  }
LABEL_35:
  if ( !RtlValidSid(v19) )
    return -1073741734;
  if ( (v93 & 2) != 0 )
  {
    if ( *(__int16 *)(v100 + 2) >= 0 )
      Sid = *(PSID *)(v100 + 8);
    else
      Sid = *(_DWORD *)(v100 + 8) != 0 ? (PSID)(*(_DWORD *)(v100 + 8) + v100) : 0;
    v21 = (char *)Sid;
    v103 = 1;
  }
  else
  {
    v21 = (char *)*((_DWORD *)*v99 + 2);
    if ( *((__int16 *)*v99 + 1) < 0 )
      v21 = v21 != 0 ? (char *)*v99 + (_DWORD)v21 : 0;
    Sid = v21;
  }
  if ( !v21 )
  {
    DefaultTrustSubjectContext = -1073741733;
    v96 = v114;
    goto LABEL_159;
  }
  if ( !RtlValidSid(v21) )
    return -1073741733;
  v22 = v93;
  if ( (v93 & 0x1F8) == 0 )
  {
    v37 = v91;
    Src = v90;
    v96 = v114;
LABEL_136:
    if ( (v22 & 4) == 0 )
    {
      v61 = *v99;
      v62 = *((_WORD *)*v99 + 1);
      if ( (v62 & 4) != 0 )
      {
        v57 = (unsigned __int16 *)*((_DWORD *)v61 + 4);
        if ( v62 < 0 )
          v57 = v57 != 0 ? (unsigned __int16 *)((char *)v57 + (_DWORD)v61) : 0;
      }
      else
      {
        v57 = 0;
      }
      goto LABEL_177;
    }
    v51 = *(_WORD *)(v100 + 2);
    v52 = v51;
    if ( (a5 & 1) == 0 )
    {
      if ( (v51 & 4) != 0 )
      {
        v57 = *(unsigned __int16 **)(v100 + 16);
        if ( v51 < 0 )
          v57 = v57 != 0 ? (unsigned __int16 *)((char *)v57 + v100) : 0;
      }
      else
      {
        v57 = 0;
      }
      v58 = v51 & 0x1000 | 4 | v89;
      v89 = v58;
      if ( (v51 & 0x500) == 0x500 )
        v89 = v58 | 0x400;
      goto LABEL_155;
    }
    if ( (v51 & 4) != 0 )
    {
      v53 = *(unsigned __int8 **)(v100 + 16);
      if ( v51 < 0 )
        v53 = v53 != 0 ? &v53[v100] : 0;
    }
    else
    {
      v53 = 0;
    }
    v54 = (char *)*v99;
    v55 = *((_WORD *)*v99 + 1);
    if ( (v55 & 4) != 0 )
    {
      v56 = (unsigned __int8 *)*((_DWORD *)v54 + 4);
      if ( v55 < 0 )
        v56 = v56 != 0 ? (unsigned __int8 *)&v54[(_DWORD)v56] : 0;
    }
    else
    {
      v56 = 0;
    }
    DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                   v56,
                                   v55 & 0x140C,
                                   v53,
                                   v52 & 0x140C,
                                   (unsigned __int8 *)v98,
                                   (unsigned __int8 *)Sid,
                                   a7,
                                   1,
                                   &v125,
                                   &v111);
    if ( DefaultTrustSubjectContext >= 0 )
    {
      v57 = (unsigned __int16 *)v125;
      v104 = 1;
      v89 |= v111 & 0x1408 | 4;
LABEL_155:
      if ( (_WORD)v131 )
      {
        LODWORD(v83) = 72;
        TokenInformationLength = 72;
        Heap = (unsigned __int8 **)RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v83);
        if ( !Heap )
          goto LABEL_157;
        DefaultTrustSubjectContext = ZwOpenProcessToken((HANDLE)0xFFFFFFFF, 8u, &Handle);
        if ( DefaultTrustSubjectContext < 0
          || (DefaultTrustSubjectContext = ZwQueryInformationToken(
                                             Handle,
                                             4u,
                                             Heap,
                                             TokenInformationLength,
                                             &TokenInformationLength),
              NtClose(Handle),
              DefaultTrustSubjectContext < 0) )
        {
          v85 = Heap;
          ProcessHeap = HeapHandle;
          RtlFreeHeap(HeapHandle, 0, v85);
        }
        else
        {
          v60 = RtlpCreateServerAcl((int)v57, v116, *Heap, (ACL **)&v126, &v110);
          v86 = Heap;
          ProcessHeap = HeapHandle;
          DefaultTrustSubjectContext = v60;
          RtlFreeHeap(HeapHandle, 0, v86);
          if ( DefaultTrustSubjectContext >= 0 )
          {
            v57 = (unsigned __int16 *)v126;
            goto LABEL_177;
          }
        }
LABEL_159:
        v37 = v91;
        if ( v104 )
          RtlFreeHeap(ProcessHeap, 0, v125);
        goto LABEL_161;
      }
      ProcessHeap = HeapHandle;
LABEL_177:
      Size = 4 * *((unsigned __int8 *)v98 + 1) + 8;
      v124[0] = 4 * *((unsigned __int8 *)Sid + 1) + 8;
      if ( Src )
      {
        v63 = (char *)((*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC);
        v118 = v63;
      }
      else
      {
        v63 = 0;
        v118 = 0;
      }
      if ( v57 )
      {
        v64 = (v57[1] + 3) & 0xFFFFFFFC;
        Size_4 = v64;
      }
      else
      {
        v64 = 0;
        Size_4 = 0;
      }
      LODWORD(v83) = &v63[v64 + 20 + v124[0] + Size];
      v65 = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1310720, v83);
      v66 = v65;
      if ( v65 )
      {
        RtlCreateSecurityDescriptorRelative(v65);
        v67 = (char *)(v66 + 5);
        v114 = (char *)(v66 + 5);
        if ( v101 )
          v89 |= 0x800u;
        v68 = v89 | *((_WORD *)v66 + 1);
        *((_WORD *)v66 + 1) = v68;
        if ( (*(_WORD *)(v100 + 2) & 0x4000) != 0 )
        {
          *((_BYTE *)v66 + 1) = *(_BYTE *)(v100 + 1);
          *((_WORD *)v66 + 1) = v68 | 0x4000;
        }
        if ( Src )
        {
          LODWORD(v87) = *((unsigned __int16 *)Src + 1);
          memcpy(v66 + 5, Src, v87);
          RtlpApplyAclToObject((int)(v66 + 5), a7);
          v69 = (unsigned __int16 *)Src;
          v70 = (unsigned int)v118;
          v66[3] = 20;
          v71 = v69[1];
          if ( v70 > v71 )
          {
            LODWORD(v87) = v70 - v71;
            memset(&v67[v71], 0, v87);
            v70 = (unsigned int)v118;
          }
          v67 += v70;
          v114 = v67;
        }
        else
        {
          v66[3] = 0;
        }
        if ( (v89 & 0x10) == 0 )
          *((_WORD *)v66 + 1) |= *((_WORD *)*v99 + 1) & 0x2830;
        if ( v57 )
        {
          LODWORD(v87) = v57[1];
          memcpy(v67, v57, v87);
          RtlpApplyAclToObject((int)v67, a7);
          v66[4] = v67 - (char *)v66;
          v72 = v57[1];
          v73 = Size_4;
          if ( Size_4 > v72 )
          {
            LODWORD(v87) = Size_4 - v72;
            memset(&v67[v72], 0, v87);
          }
          v67 += v73;
          v114 = v67;
        }
        else
        {
          v66[4] = 0;
        }
        if ( (v89 & 4) == 0 )
        {
          *((_WORD *)v66 + 1) |= *((_WORD *)*v99 + 1) & 0x140C;
          if ( (_BYTE)v128 )
          {
            v124[1] = 0;
            LOWORD(v124[2]) = 768;
            DefaultTrustSubjectContext = RtlInitializeSid(v135, (PSID_IDENTIFIER_AUTHORITY)&v124[1], 1u);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_158;
            v136 = 4;
            Index = 0;
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
              AceBySid = RtlFindAceBySid(v75, v135, &Index);
              if ( !AceBySid )
                break;
              v77 = *(_BYTE *)(AceBySid + 1) & 0xF4 | 8;
              ++Index;
              *(_BYTE *)(AceBySid + 1) = v77;
            }
            v67 = v114;
          }
        }
        v78 = Size;
        LODWORD(v87) = Size;
        memcpy(v67, v98, v87);
        v79 = (char *)(v67 - (char *)v66);
        v80 = &v67[v78];
        v20 = v102 == 0;
        v81 = v99;
        v66[1] = v79;
        if ( v20 )
          *((_WORD *)v66 + 1) |= *((_WORD *)*v81 + 1) & 1;
        LODWORD(v88) = v124[0];
        memcpy(v80, Sid, v88);
        v20 = v103 == 0;
        v66[2] = v80 - (char *)v66;
        if ( v20 )
          *((_WORD *)v66 + 1) |= *((_WORD *)*v81 + 1) & 2;
        RtlFreeHeap(HeapHandle, 0, *v81);
        *v81 = v66;
        ProcessHeap = HeapHandle;
        DefaultTrustSubjectContext = 0;
        goto LABEL_159;
      }
LABEL_157:
      DefaultTrustSubjectContext = -1073741801;
LABEL_158:
      ProcessHeap = HeapHandle;
      goto LABEL_159;
    }
    ProcessHeap = HeapHandle;
LABEL_161:
    if ( v96 && v105 )
      RtlFreeHeap(ProcessHeap, 0, v96);
    if ( v37 && v112 )
      RtlFreeHeap(ProcessHeap, 0, v37);
    if ( BaseAddress && v106 )
      RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    if ( v122 && v107 )
      RtlFreeHeap(ProcessHeap, 0, v122);
    if ( v123 && v108 )
      RtlFreeHeap(ProcessHeap, 0, v123);
    if ( Src && v109 )
      RtlFreeHeap(ProcessHeap, 0, Src);
    if ( v110 )
      RtlFreeHeap(ProcessHeap, 0, (PVOID)v126);
    return DefaultTrustSubjectContext;
  }
  v130 = v93 & 0x10;
  if ( (v93 & 0x10) == 0 )
  {
    v23 = TokenHandle;
LABEL_66:
    DefaultTrustSubjectContext = RtlpGetDefaultTrustSubjectContext(v23, &Size_4);
    v96 = (PVOID)DefaultTrustSubjectContext;
    if ( DefaultTrustSubjectContext < 0 )
      return DefaultTrustSubjectContext;
    v28 = (HANDLE *)Size_4;
    v29 = v93;
    Size_4 = v93 & 0x80;
    v30 = *v28;
    TokenHandle = *v28;
    if ( (v93 & 0x80) != 0 )
    {
      if ( !v30 )
      {
LABEL_69:
        DefaultTrustSubjectContext = -1073741790;
        goto LABEL_70;
      }
      Index = 0;
      while ( 1 )
      {
        AceByType = RtlFindAceByType(Acl, 0x14u, &Index);
        v33 = AceByType;
        if ( AceByType )
        {
          if ( (AceByType[1] & 0xFF000000) != 0 )
          {
            DefaultTrustSubjectContext = -1073740730;
            goto LABEL_70;
          }
          if ( !(unsigned __int8)RtlpValidTrustSubjectContext(TokenHandle, AceByType + 2, v32, (int)&v96) )
            goto LABEL_69;
        }
        ++Index;
        if ( !v33 )
        {
          v30 = TokenHandle;
          v29 = v93;
          break;
        }
      }
    }
    Size = v29 & 0x100;
    if ( (v29 & 0x100) != 0 )
    {
      DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(Acl, v30);
      if ( DefaultTrustSubjectContext < 0
        || (a5 & 2) == 0
        && (DefaultTrustSubjectContext = RtlpValidFilterAclSubjectContext(v90, TokenHandle),
            DefaultTrustSubjectContext < 0) )
      {
LABEL_70:
        RtlFreeHeap(HeapHandle, 0, v28);
        return DefaultTrustSubjectContext;
      }
    }
    v84 = v28;
    ProcessHeap = HeapHandle;
    RtlFreeHeap(HeapHandle, 0, v84);
    v34 = v93;
    v35 = a5 & 2;
    Index = v35;
    if ( (v93 & 8) == 0 )
    {
      v38 = v90;
      v96 = v90;
      Index = a5 & 2;
      goto LABEL_93;
    }
    v36 = *(unsigned __int16 *)(v100 + 2);
    if ( (a5 & 2) != 0 )
    {
      DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                     &v90->AclRevision,
                                     (*((_WORD *)*v99 + 1) & 0x2800 | (*((unsigned __int16 *)*v99 + 1) >> 1) & 0x18u) >> 1,
                                     &Acl->AclRevision,
                                     (v36 & 0x2800 | (v36 >> 1) & 0x18) >> 1,
                                     (unsigned __int8 *)v98,
                                     (unsigned __int8 *)Sid,
                                     a7,
                                     2,
                                     (PVOID *)&v114,
                                     &v111);
      if ( DefaultTrustSubjectContext < 0 )
      {
        v96 = v114;
        goto LABEL_87;
      }
      v34 = v93;
      v105 = 1;
      v96 = v114;
      v35 = Index;
      v8 = 2 * (v111 & 0x1400 | (2 * (v111 & 8 | 0x2004)));
    }
    else
    {
      v96 = Acl;
      v8 = v36 & 0x2000 | 0x8010;
      v89 = v8;
      if ( (v36 & 0xA00) != 0xA00 )
      {
LABEL_91:
        v38 = v90;
LABEL_93:
        if ( (v34 & 0x20) != 0 )
        {
          v39 = *(unsigned __int16 *)(v100 + 2);
          if ( v35 )
          {
            DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                           &v90->AclRevision,
                                           (*((_WORD *)*v99 + 1) & 0x800 | (*((unsigned __int16 *)*v99 + 1) >> 1) & 0x18u) >> 1,
                                           &Acl->AclRevision,
                                           (v39 & 0x800 | (v39 >> 1) & 0x18) >> 1,
                                           (unsigned __int8 *)v98,
                                           (unsigned __int8 *)Sid,
                                           a7,
                                           2,
                                           &v91,
                                           &v111);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_87;
            v40 = Acl;
            v112 = 1;
            v8 |= 2 * (v111 & 0x1400 | (2 * (v111 & 8 | 4)));
            v34 = v93;
            v89 = v8;
          }
          else
          {
            v40 = Acl;
            v91 = Acl;
            v8 |= v39 & 0x2000 | 0x10;
            v89 = v8;
            if ( (v39 & 0xA00) == 0xA00 )
            {
              v8 |= 0x800u;
              v89 = v8;
            }
          }
          v38 = v90;
        }
        else
        {
          v40 = Acl;
          v91 = v38;
        }
        v20 = (v34 & 0x40) == 0;
        v41 = Index;
        if ( v20 )
        {
          BaseAddress = v38;
        }
        else
        {
          v42 = *(unsigned __int16 *)(v100 + 2);
          if ( Index )
          {
            DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                           &v90->AclRevision,
                                           (*((_WORD *)*v99 + 1) & 0x800 | (*((unsigned __int16 *)*v99 + 1) >> 1) & 0x18u) >> 1,
                                           &v40->AclRevision,
                                           (v42 & 0x800 | (v42 >> 1) & 0x18) >> 1,
                                           (unsigned __int8 *)v98,
                                           (unsigned __int8 *)Sid,
                                           a7,
                                           2,
                                           &BaseAddress,
                                           &v111);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_87;
            v106 = 1;
            v8 |= 2 * (v111 & 0x1400 | (2 * (v111 & 8 | 4)));
            v41 = Index;
            v89 = v8;
          }
          else
          {
            BaseAddress = v40;
            v8 |= v42 & 0x2000 | 0x10;
            v89 = v8;
            if ( (v42 & 0xA00) == 0xA00 )
            {
              v8 |= 0x800u;
              v89 = v8;
            }
          }
          v38 = v90;
        }
        if ( Size_4 )
        {
          v43 = *(unsigned __int16 *)(v100 + 2);
          if ( v41 )
          {
            DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                           &v90->AclRevision,
                                           (*((_WORD *)*v99 + 1) & 0x800 | (*((unsigned __int16 *)*v99 + 1) >> 1) & 0x18u) >> 1,
                                           &Acl->AclRevision,
                                           (v43 & 0x800 | (v43 >> 1) & 0x18) >> 1,
                                           (unsigned __int8 *)v98,
                                           (unsigned __int8 *)Sid,
                                           a7,
                                           2,
                                           &v122,
                                           &v111);
            if ( DefaultTrustSubjectContext < 0 )
              goto LABEL_87;
            v44 = Acl;
            v107 = 1;
            v8 |= 2 * (v111 & 0x1400 | (2 * (v111 & 8 | 4)));
            v89 = v8;
          }
          else
          {
            v44 = Acl;
            v122 = Acl;
            v8 |= v43 & 0x2000 | 0x10;
            v89 = v8;
            if ( (v43 & 0xA00) == 0xA00 )
            {
              v8 |= 0x800u;
              v89 = v8;
            }
          }
          v38 = v90;
        }
        else
        {
          v44 = Acl;
          v122 = v38;
        }
        v45 = v100;
        if ( !Size )
        {
          v123 = v38;
          goto LABEL_113;
        }
        v46 = *(unsigned __int16 *)(v100 + 2);
        if ( !Index )
        {
          v123 = v44;
          v8 |= v46 & 0x2000 | 0x10;
          v89 = v8;
          if ( (v46 & 0xA00) == 0xA00 )
          {
            v8 |= 0x800u;
            v89 = v8;
          }
          goto LABEL_112;
        }
        DefaultTrustSubjectContext = RtlpComputeMergedAcl(
                                       &v90->AclRevision,
                                       (*((_WORD *)*v99 + 1) & 0x800 | (*((unsigned __int16 *)*v99 + 1) >> 1) & 0x18u) >> 1,
                                       &v44->AclRevision,
                                       (v46 & 0x800 | (v46 >> 1) & 0x18) >> 1,
                                       (unsigned __int8 *)v98,
                                       (unsigned __int8 *)Sid,
                                       a7,
                                       2,
                                       &v123,
                                       &v111);
        if ( DefaultTrustSubjectContext >= 0 )
        {
          v108 = 1;
          v8 |= 2 * (v111 & 0x1400 | (2 * (v111 & 8 | 4)));
          v45 = v100;
          v89 = v8;
LABEL_112:
          v38 = v90;
LABEL_113:
          if ( v130 )
          {
            v47 = *(_WORD *)(v45 + 2);
            v48 = v47 & 0xA00;
            v49 = v47 & 0x2000 | 0x10 | v8;
            v50 = Acl;
            v89 = v49;
            if ( v48 == 2560 )
              v89 = v49 | 0x800;
          }
          else
          {
            v50 = v38;
          }
          v37 = v91;
          DefaultTrustSubjectContext = RtlpCombineAcls(
                                         (unsigned __int8 *)v96,
                                         &v50->AclRevision,
                                         (unsigned __int8 *)v91,
                                         (unsigned __int8 *)BaseAddress,
                                         (unsigned __int8 *)v122,
                                         (unsigned __int8 *)v123,
                                         (PACL *)&v118,
                                         0);
          if ( DefaultTrustSubjectContext < 0 )
            goto LABEL_161;
          Src = v118;
          if ( !v96 && v118 && !*((_WORD *)v118 + 2) )
          {
            RtlFreeHeap(ProcessHeap, 0, v118);
            Src = 0;
          }
          v109 = 1;
          v22 = v93;
          goto LABEL_136;
        }
LABEL_87:
        v37 = v91;
        goto LABEL_161;
      }
      v8 = v36 & 0x2000 | 0x8810;
    }
    v89 = v8;
    goto LABEL_91;
  }
  Index = 0;
  v23 = TokenHandle;
  while ( 1 )
  {
    v24 = (char *)RtlFindAceByType(Acl, 0x11u, &Index);
    v25 = v24;
    if ( v24 )
    {
      v20 = (*((_DWORD *)v24 + 1) & 0xFFFFFFF8) == 0;
      v26 = v24[1];
      Size = (int)(v24 + 8);
      LOBYTE(v124[0]) = v26;
      if ( !v20 )
        return -1073740730;
    }
    if ( v23 )
    {
      DefaultTrustSubjectContext = ZwQueryInformationToken(v23, 0xAu, TokenInformation, 0x38u, &ReturnLength);
      v96 = (PVOID)DefaultTrustSubjectContext;
      if ( DefaultTrustSubjectContext < 0 )
        return DefaultTrustSubjectContext;
      if ( v133 == 2 && v134 < 1 )
        return -1073741659;
    }
    else
    {
      DefaultTrustSubjectContext = ZwOpenProcessToken((HANDLE)0xFFFFFFFF, 8u, &Handle);
      v96 = (PVOID)DefaultTrustSubjectContext;
      if ( DefaultTrustSubjectContext < 0 )
        return DefaultTrustSubjectContext;
    }
    v23 = TokenHandle;
    v27 = TokenHandle;
    if ( !TokenHandle )
      v27 = Handle;
    if ( !(unsigned __int8)RtlpValidLabelSubjectContext(v27, (PSID)Size, v124[0], (int)&v96) )
    {
      NtClose(Handle);
      return -1073740730;
    }
    NtClose(Handle);
    ++Index;
    if ( !v25 )
      goto LABEL_66;
  }
}
