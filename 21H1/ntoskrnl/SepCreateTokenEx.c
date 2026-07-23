/*
 * XREFs of SepCreateTokenEx @ 0x1402D874C
 * Callers:
 *     NtCreateTokenEx @ 0x140672E90 (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x1407A6EB8 (SepCreateToken.c)
 * Callees:
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     RtlSidHashInitialize @ 0x140256B40 (RtlSidHashInitialize.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     ExInitializeResourceLite @ 0x14026C4C0 (ExInitializeResourceLite.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x1402C118C (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     RtlWalkFrameChain @ 0x14032C980 (RtlWalkFrameChain.c)
 *     DbgPrint @ 0x14033C6D0 (DbgPrint.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SepSetTokenTrust @ 0x1405E1440 (SepSetTokenTrust.c)
 *     SeDeleteAccessState @ 0x140602120 (SeDeleteAccessState.c)
 *     RtlCopySidAndAttributesArray @ 0x140608EE0 (RtlCopySidAndAttributesArray.c)
 *     SeCreateAccessState @ 0x140613740 (SeCreateAccessState.c)
 *     ObInsertObject @ 0x140642820 (ObInsertObject.c)
 *     ObCreateObject @ 0x140643F10 (ObCreateObject.c)
 *     RtlCopySid @ 0x14066B1C0 (RtlCopySid.c)
 *     RtlIdentifierAuthoritySid @ 0x140673F64 (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x140673F70 (RtlLengthRequiredSid.c)
 *     SepSetTokenClaims @ 0x140673F8C (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x1406740A8 (SepReferenceLogonSession.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1406ECE78 (SepAppendAdminAceToTokenAcl.c)
 *     SepSetTokenUserAndGroups @ 0x14091E91C (SepSetTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x14091EE30 (SepAddTokenLogonSession.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCreateTokenEx(
        HANDLE *a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        _SID_AND_ATTRIBUTES *a9,
        ULONG Count,
        _SID_AND_ATTRIBUTES *a11,
        unsigned int a12,
        unsigned int a13,
        char **a14,
        void *a15,
        void *a16,
        void *a17,
        _OWORD *a18,
        __int64 a19,
        __int64 a20,
        int a21,
        __int64 a22,
        _DWORD *a23,
        char a24)
{
  PSID v26; // rdi
  ULONG v27; // r13d
  int v28; // r12d
  __int64 result; // rax
  PSID Sid; // rsi
  ULONG v31; // ebx
  ULONG v32; // r14d
  __int64 v33; // rax
  PSID_AND_ATTRIBUTES v34; // r15
  BOOLEAN v35; // al
  __int64 v36; // r10
  bool v37; // bl
  int v38; // r11d
  bool v39; // r14
  ULONG Attributes; // eax
  int v41; // r15d
  ULONG *p_Attributes; // rsi
  ULONG v43; // edx
  unsigned __int8 *v44; // rdi
  PSID_IDENTIFIER_AUTHORITY v45; // rax
  char v46; // dl
  __int64 v47; // r8
  int v48; // ecx
  __int64 v49; // r11
  __int64 v50; // rsi
  __int64 v51; // rdi
  _DWORD *PoolWithTag; // rax
  _DWORD *v53; // rsi
  _QWORD *v54; // rax
  PVOID v55; // rbx
  struct _ERESOURCE *v56; // r15
  int v57; // ebx
  unsigned __int8 *v58; // rax
  ULONG v59; // r14d
  ULONG v60; // r12d
  ULONG v61; // ecx
  int v62; // eax
  NTSTATUS inserted; // ebx
  _QWORD *v64; // rbx
  char *v65; // rdi
  _QWORD *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  PVOID v69; // rax
  char *v70; // r15
  __int64 v71; // rcx
  int v72; // esi
  _SID_AND_ATTRIBUTES *v73; // rdx
  ULONG v74; // r14d
  __int64 v75; // rcx
  char *v76; // rsi
  unsigned __int8 *v77; // r14
  ULONG v78; // ebx
  unsigned __int16 *v79; // rcx
  char *v80; // rsi
  void *v81; // rcx
  int v82; // r8d
  int v83; // r9d
  unsigned int v84; // edx
  BOOLEAN v85; // al
  BOOLEAN v86; // al
  void *v87; // rdx
  int *v88; // rcx
  int v89; // r9d
  unsigned __int64 v90; // r8
  BOOLEAN v91; // al
  PVOID v92; // rdi
  void *v93; // rcx
  __int64 v94; // rdx
  _KPROCESS *Process; // rcx
  ULONG v96; // eax
  int v97; // edx
  ULONG RemainingSidAreaSize; // [rsp+30h] [rbp-D0h]
  char v99; // [rsp+50h] [rbp-B0h]
  char v100; // [rsp+51h] [rbp-AFh] BYREF
  char v101; // [rsp+52h] [rbp-AEh]
  char v102; // [rsp+53h] [rbp-ADh]
  int v103; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  char **v105; // [rsp+60h] [rbp-A0h]
  int v106; // [rsp+68h] [rbp-98h]
  int v107; // [rsp+6Ch] [rbp-94h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v109; // [rsp+78h] [rbp-88h]
  PSID_AND_ATTRIBUTES Src; // [rsp+80h] [rbp-80h]
  PSID v111; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  PSID SidArea; // [rsp+98h] [rbp-68h] BYREF
  PSID Sid1; // [rsp+A0h] [rbp-60h]
  int v115; // [rsp+A8h] [rbp-58h]
  unsigned int v116; // [rsp+ACh] [rbp-54h]
  __int64 v117; // [rsp+B0h] [rbp-50h]
  PSID_AND_ATTRIBUTES v118; // [rsp+B8h] [rbp-48h]
  PHANDLE Handle; // [rsp+C0h] [rbp-40h]
  _QWORD *v120; // [rsp+C8h] [rbp-38h]
  __int64 v121; // [rsp+D0h] [rbp-30h]
  __int64 v122; // [rsp+D8h] [rbp-28h]
  __int64 v123; // [rsp+E0h] [rbp-20h]
  __int64 v124; // [rsp+E8h] [rbp-18h]
  void *v125; // [rsp+F0h] [rbp-10h]
  __int64 v126; // [rsp+F8h] [rbp-8h]
  __int64 v127; // [rsp+100h] [rbp+0h]
  __int64 v128; // [rsp+108h] [rbp+8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v130[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  v26 = a15;
  v27 = Count;
  v107 = -1;
  v124 = a7;
  v105 = a14;
  Sid1 = a16;
  v125 = a17;
  v128 = a19;
  v127 = a20;
  v126 = a22;
  v116 = a3;
  v28 = 0;
  v102 = a2;
  Handle = a1;
  Object = 0LL;
  SidArea = 0LL;
  v103 = 0;
  v120 = (_QWORD *)a4;
  Src = a9;
  v118 = a11;
  v111 = a15;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v130, 0, sizeof(v130));
  v117 = 0LL;
  v99 = 0;
  v101 = 0;
  v100 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v100);
  if ( (int)result >= 0 )
  {
    Sid = a9->Sid;
    v31 = 0;
    if ( Count )
    {
      do
      {
        v32 = v31;
        while ( v32 < v27 )
        {
          if ( !RtlEqualSid(Sid, a11[v32].Sid) || (a11[v32].Attributes & 0x20) != 0 )
            ++v32;
          else
            a11[v32] = a11[--v27];
        }
        v33 = v31++;
        Sid = a11[v33].Sid;
      }
      while ( v31 < v27 );
      v34 = Src;
      v26 = v111;
      Sid = Src->Sid;
    }
    else
    {
      v34 = Src;
    }
    v35 = RtlEqualSid(Sid1, Sid);
    v36 = 0LL;
    v37 = v35 != 0;
    if ( v26 )
    {
      v91 = RtlEqualSid(v26, Sid);
      v36 = 0LL;
      LOBYTE(v38) = 1;
      v39 = v91 != 0;
    }
    else
    {
      LOBYTE(v38) = 1;
      v39 = 1;
    }
    Attributes = v34->Attributes;
    if ( (Attributes & 0x10) != 0 )
    {
      if ( (Attributes & 6) != 0 )
        return 3221225485LL;
      v28 = 2048;
      v103 = 2048;
    }
    v106 = 0;
    if ( v27 )
    {
      v41 = 1;
      p_Attributes = &v118->Attributes;
      v106 = 0;
      while ( 1 )
      {
        v43 = *p_Attributes;
        if ( ((unsigned __int8)*p_Attributes & (unsigned __int8)v38) != 0 )
        {
          v43 |= 6u;
          *p_Attributes = v43;
        }
        if ( (v43 & 0x10) != 0 )
        {
          if ( (v43 & 6) != 0 )
            return 3221225485LL;
          v28 |= 0x800u;
          v103 = v28;
        }
        v44 = (unsigned __int8 *)*((_QWORD *)p_Attributes - 1);
        RtlIdentifierAuthoritySid(v44);
        v45 = RtlIdentifierAuthoritySid(SeUntrustedMandatorySid);
        v48 = *(_DWORD *)v45->Value - *(_DWORD *)v47;
        if ( *(_DWORD *)v45->Value == *(_DWORD *)v47 )
          v48 = *(unsigned __int16 *)&v45->Value[4] - *(unsigned __int16 *)(v47 + 4);
        if ( !v48 )
        {
          v82 = v44[1];
          if ( (_BYTE)v82 )
          {
            v83 = v44[1];
            if ( *(_DWORD *)&v44[4 * (v82 - 1) + 8] > 0x4000u )
              return 3221226566LL;
          }
          else
          {
            v83 = v36;
          }
          if ( (v46 & 0x40) != 0 )
            break;
        }
LABEL_20:
        if ( !v37 )
        {
          v85 = RtlEqualSid(Sid1, v44);
          v36 = 0LL;
          v38 = 1;
          v37 = v85 != 0;
        }
        if ( !v39 )
        {
          v86 = RtlEqualSid(v111, v44);
          v36 = 0LL;
          if ( v86 )
          {
            if ( (*p_Attributes & 8) == 0 )
              return 3221225562LL;
            v38 = 1;
            v106 = v41;
            v39 = 1;
          }
          else
          {
            v38 = 1;
          }
        }
        v41 += v38;
        p_Attributes += 4;
        if ( v41 - 1 >= v27 )
          goto LABEL_24;
      }
      if ( v107 != -1 )
        return 3221225485LL;
      v107 = v41;
      if ( (_BYTE)v82 )
      {
        v84 = *(_DWORD *)&v44[4 * (v83 - 1) + 8];
        if ( v84 >= 0x3000 )
        {
          v99 = v38;
          v28 |= 0x2000u;
LABEL_74:
          v103 = v28;
          goto LABEL_20;
        }
        if ( v84 >= 0x2000 )
        {
LABEL_72:
          v99 = v36;
          if ( v84 >= 0x2000 )
            v28 |= 0x2000u;
          goto LABEL_74;
        }
      }
      else
      {
        v84 = v36;
      }
      v101 = v38;
      goto LABEL_72;
    }
LABEL_24:
    if ( !v37 )
      return 3221225563LL;
    if ( !v39 )
      return 3221225562LL;
    v49 = v36;
    v121 = v36;
    v50 = v36;
    v122 = v36;
    v51 = v36;
    v123 = v36;
    if ( a13 )
    {
      v88 = (int *)(v105 + 1);
      do
      {
        v89 = *v88;
        if ( (*v88 & 0x7FFFFFF8) != 0 )
          return 3221225485LL;
        v90 = (unsigned int)*(v88 - 2);
        *v88 &= 3u;
        if ( (unsigned int)v90 > 0x24 )
          return 3221225568LL;
        if ( _bittest64(&v49, v90) )
          return 3221225894LL;
        v49 |= 1LL << v90;
        v121 = v49;
        if ( (v89 & 2) != 0 )
        {
          _bittestandset64(&v50, (unsigned int)v90);
          v122 = v50;
        }
        if ( (v89 & 1) != 0 )
        {
          _bittestandset64(&v51, (unsigned int)v90);
          v123 = v51;
        }
        LODWORD(v36) = v36 + 1;
        v88 += 3;
      }
      while ( (unsigned int)v36 < a13 );
    }
    if ( a23 && (*a23 & 0xFFFFFFFC) != 0 )
      return 3221225485LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
    v53 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0;
    v54 = PoolWithTag + 2;
    v53[6] = 0;
    v54[1] = v54;
    *v54 = v54;
    *((_QWORD *)v53 + 5) = v53 + 8;
    *((_QWORD *)v53 + 4) = v53 + 8;
    if ( SeTokenLeakTracking )
    {
      P = ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
      v55 = P;
      if ( !P )
      {
        v93 = v53;
        goto LABEL_119;
      }
    }
    else
    {
      v55 = 0LL;
    }
    v117 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v56 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
    if ( v56 )
    {
      v57 = 16 * v27;
      LODWORD(v111) = 16 * v27;
      if ( SepTokenSidSharingEnabled )
      {
        v59 = (v57 + 23) & 0xFFFFFFF8;
        v109 = a12;
      }
      else
      {
        v58 = (unsigned __int8 *)Src->Sid;
        v109 = (a12 + 7) & 0xFFFFFFF8;
        v59 = v57 + ((RtlLengthRequiredSid(v58[1]) + 3) & 0xFFFFFFFC) + v109 + 16;
      }
      SidAreaSize = v59;
      v60 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
      if ( v125 )
        v60 += (*((unsigned __int16 *)v125 + 1) + 3) & 0xFFFFFFFC;
      v61 = v59 + 1168;
      v62 = 4096;
      if ( v60 >= 0x1000 )
        v62 = v60;
      v115 = v62;
      RemainingSidAreaSize = v61 + v62;
      LOBYTE(v61) = v102;
      inserted = ObCreateObject(
                   v61,
                   (_DWORD)SeTokenObjectType,
                   (_DWORD)v120,
                   1,
                   0,
                   v59 + 1168,
                   RemainingSidAreaSize,
                   0,
                   (__int64)&Object);
      if ( inserted < 0 )
      {
        ExFreePoolWithTag(v53, 0);
        if ( SeTokenLeakTracking )
          ExFreePoolWithTag(P, 0);
        ExFreePoolWithTag(v56, 0);
        return (unsigned int)inserted;
      }
      v64 = Object;
      *((_QWORD *)Object + 6) = v56;
      ExInitializeResourceLite(v56);
      v65 = (char *)Object;
      v64[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
      *((_QWORD *)v65 + 4) = 0LL;
      v66 = (_QWORD *)v124;
      *((_QWORD *)v65 + 28) = 0LL;
      v105 = 0LL;
      *((_QWORD *)v65 + 3) = *v66;
      v67 = v117;
      v65[204] = 0;
      *((_QWORD *)v65 + 7) = v67;
      *((_QWORD *)v65 + 5) = *a8;
      *((_DWORD *)v65 + 48) = a5;
      *((_DWORD *)v65 + 49) = a6;
      LODWORD(v67) = v103;
      *(_OWORD *)v65 = *a18;
      *((_DWORD *)v65 + 50) = v67;
      LODWORD(v67) = v115;
      *((_DWORD *)v65 + 30) = 0;
      *((_QWORD *)v65 + 145) = 0LL;
      *((_DWORD *)v65 + 34) = v67;
      LODWORD(v67) = v106;
      *((_DWORD *)v65 + 35) = 0;
      *((_DWORD *)v65 + 36) = v67;
      *((_QWORD *)v65 + 23) = 0LL;
      *((_QWORD *)v65 + 140) = 0LL;
      *((_QWORD *)v65 + 141) = 0LL;
      *((_DWORD *)v65 + 33) = v59;
      v105 = (char **)(v65 + 184);
      *((_DWORD *)v65 + 52) = v107;
      v68 = v121;
      *((_DWORD *)v65 + 53) = 0;
      *((_QWORD *)v65 + 8) = v68;
      *((_QWORD *)v65 + 9) = v122;
      *((_QWORD *)v65 + 10) = v123;
      *((_DWORD *)v65 + 200) = 0;
      *((_QWORD *)v65 + 99) = 0LL;
      *((_QWORD *)v65 + 98) = 0LL;
      *((_QWORD *)v65 + 135) = 0LL;
      *((_QWORD *)v65 + 136) = 0LL;
      *((_QWORD *)v65 + 144) = 0LL;
      memset(v65 + 808, 0, 0x110uLL);
      v69 = P;
      v70 = v65 + 1144;
      *((_QWORD *)v65 + 138) = 0LL;
      *((_QWORD *)v65 + 139) = 0LL;
      *((_QWORD *)v65 + 142) = 0LL;
      *((_QWORD *)v65 + 143) = v69;
      if ( a23 )
        *((_DWORD *)v65 + 53) = *a23;
      if ( !v99 )
      {
        *((_QWORD *)v65 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
        *((_QWORD *)v65 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
      }
      if ( v101 == 1 )
      {
        *((_QWORD *)v65 + 9) &= 0x202800000uLL;
        *((_QWORD *)v65 + 10) &= 0x202800000uLL;
      }
      v71 = v124;
      *(_OWORD *)(v65 + 88) = 0LL;
      *((_QWORD *)v65 + 13) = 0LL;
      *((_DWORD *)v65 + 28) = 0;
      *((_WORD *)v65 + 58) = 0;
      v65[118] = 0;
      *((_QWORD *)v65 + 97) = v53;
      *((_QWORD *)v65 + 137) = 0LL;
      *((_QWORD *)v65 + 22) = 0LL;
      v120 = v65 + 176;
      v72 = SepReferenceLogonSession(v71, v65 + 216);
      if ( v72 < 0 )
      {
        *((_DWORD *)v65 + 50) |= 0x20u;
        *((_QWORD *)v65 + 27) = 0LL;
        ObfDereferenceObjectWithTag(v65, 0x746C6644u);
        return (unsigned int)v72;
      }
      if ( SeTokenLeakTracking )
      {
        **(_QWORD **)v70 = KeGetCurrentThread()[1].CycleTime;
        *(_QWORD *)(*(_QWORD *)v70 + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
        *(_DWORD *)(*(_QWORD *)v70 + 32LL) = 12;
        *(_DWORD *)(*(_QWORD *)v70 + 280LL) = 0;
        *(_DWORD *)(*(_QWORD *)v70 + 284LL) = 0;
        v94 = *(_QWORD *)v70;
        Process = KeGetCurrentThread()->ApcState.Process;
        *(_QWORD *)(v94 + 16) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
        *(_DWORD *)(v94 + 24) = Process[1].ActiveProcessors.Bitmap[0];
        *(_WORD *)(v94 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[0]);
        *(_BYTE *)(v94 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[0]);
        v96 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v70 + 40LL), 0x1Eu, 0);
        if ( KeGetCurrentIrql() < 2u )
          RtlWalkFrameChain((PVOID *)(*(_QWORD *)v70 + 40LL + 8LL * v96), 30 - v96, 1u);
        v65 = (char *)Object;
        SepAddTokenLogonSession(Object);
      }
      v73 = Src;
      if ( SepTokenSidSharingEnabled )
      {
        inserted = SepSetTokenUserAndGroups((_DWORD)v65, (_DWORD)Src, v27, (_DWORD)v118, v109);
        if ( inserted < 0 )
          goto LABEL_60;
      }
      else
      {
        v74 = v59 - (_DWORD)v111;
        *((_QWORD *)v65 + 19) = v65 + 1168;
        v75 = v27 + 1;
        *((_DWORD *)v65 + 31) = v75;
        SidArea = &v65[16 * v75 + 1168];
        SidAreaSize = v74 - 16;
        RtlCopySidAndAttributesArray(1u, v73, v74 - 16, (PSID_AND_ATTRIBUTES)v65 + 73, SidArea, &SidArea, &SidAreaSize);
        RtlCopySidAndAttributesArray(
          v27,
          v118,
          SidAreaSize,
          (PSID_AND_ATTRIBUTES)v65 + 74,
          SidArea,
          &SidArea,
          &SidAreaSize);
      }
      RtlSidHashInitialize(
        *((PSID_AND_ATTRIBUTES *)v65 + 19),
        *((_DWORD *)v65 + 31),
        (PSID_AND_ATTRIBUTES_HASH)(v65 + 232));
      *((_QWORD *)v65 + 20) = 0LL;
      *((_DWORD *)v65 + 32) = 0;
      v76 = (char *)ExAllocatePoolWithTag(PagedPool, v60, 0x64546553u);
      *v120 = v76;
      if ( v76 )
      {
        v77 = (unsigned __int8 *)Sid1;
        *((_QWORD *)v65 + 21) = v76;
        v78 = RtlLengthRequiredSid(v77[1]);
        RtlCopySid(v78, v76, v77);
        v79 = (unsigned __int16 *)v125;
        v80 = &v76[(v78 + 3) & 0xFFFFFFFC];
        if ( v125 )
        {
          v87 = v125;
          *v105 = v80;
          memmove(v80, v87, v79[1]);
        }
        inserted = SepSetTokenClaims((_DWORD)v65, v128, v127, a21, v126);
        if ( inserted >= 0 )
        {
          if ( !a24 || (inserted = SepSetTokenTrust(v65, SeProcTrustWinTcbSid), inserted >= 0) )
          {
            if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 12 )
            {
              if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
              {
                *(_DWORD *)(*(_QWORD *)v70 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
                v97 = *(_DWORD *)(*(_QWORD *)v70 + 280LL);
                if ( v97 >= SepTokenLeakBreakCount )
                {
                  DbgPrint("\nToken number 0x%x = 0x%p\n", v97, Object);
                  __debugbreak();
                }
              }
              v65 = (char *)Object;
            }
            if ( a24 )
            {
              v92 = Object;
              if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] )
                inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
              if ( inserted < 0 )
              {
                *Handle = 0LL;
              }
              else
              {
                if ( !v100 )
                  SepAppendAdminAceToTokenAcl(v92);
                *Handle = v92;
              }
              return (unsigned int)inserted;
            }
            inserted = SeCreateAccessState(&PassedAccessState, v130, v116, (char *)SeTokenObjectType + 76);
            v81 = v65;
            if ( inserted < 0 )
              goto LABEL_61;
            inserted = ObInsertObject(v65, &PassedAccessState, 0, 1u, 0LL, Handle);
            SeDeleteAccessState(&PassedAccessState);
            if ( inserted < 0 )
              return (unsigned int)inserted;
            if ( !v100 )
              SepAppendAdminAceToTokenAcl(v65);
          }
        }
      }
      else
      {
        inserted = -1073741801;
      }
LABEL_60:
      v81 = v65;
LABEL_61:
      ObfDereferenceObjectWithTag(v81, 0x746C6644u);
      return (unsigned int)inserted;
    }
    ExFreePoolWithTag(v53, 0);
    if ( !SeTokenLeakTracking )
      return 3221225626LL;
    v93 = v55;
LABEL_119:
    ExFreePoolWithTag(v93, 0);
    return 3221225626LL;
  }
  return result;
}
