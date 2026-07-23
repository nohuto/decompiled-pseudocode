/*
 * XREFs of SepCreateTokenEx @ 0x1402FB674
 * Callers:
 *     NtCreateTokenEx @ 0x1406A8DE0 (NtCreateTokenEx.c)
 *     SepCreateToken @ 0x1407A9218 (SepCreateToken.c)
 * Callees:
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x140205DFC (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     RtlSidHashInitialize @ 0x14020DF80 (RtlSidHashInitialize.c)
 *     RtlEqualSid @ 0x140210C40 (RtlEqualSid.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     RtlWalkFrameChain @ 0x140228EA0 (RtlWalkFrameChain.c)
 *     ExInitializeResourceLite @ 0x14027F200 (ExInitializeResourceLite.c)
 *     DbgPrint @ 0x1403647B0 (DbgPrint.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled @ 0x1403F6F10 (Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     SepFinalizeTokenAcls @ 0x1405CDDB0 (SepFinalizeTokenAcls.c)
 *     SeCreateAccessState @ 0x1405FDD40 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x140601D90 (SeDeleteAccessState.c)
 *     RtlCopySidAndAttributesArray @ 0x14061F860 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x140656BB0 (RtlCopySid.c)
 *     SepSetTokenTrust @ 0x14067EF50 (SepSetTokenTrust.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1406A83BC (SepAppendAdminAceToTokenAcl.c)
 *     RtlIdentifierAuthoritySid @ 0x1406A9EB4 (RtlIdentifierAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x1406A9EC0 (RtlLengthRequiredSid.c)
 *     SepSetTokenClaims @ 0x1406A9EDC (SepSetTokenClaims.c)
 *     SepReferenceLogonSession @ 0x1406A9FF8 (SepReferenceLogonSession.c)
 *     ObInsertObject @ 0x1407096B0 (ObInsertObject.c)
 *     ObCreateObject @ 0x14070ACF0 (ObCreateObject.c)
 *     SepSetTokenUserAndGroups @ 0x1409259EC (SepSetTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x140925F00 (SepAddTokenLogonSession.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  BOOLEAN v40; // al
  ULONG Attributes; // eax
  int v42; // r15d
  ULONG *p_Attributes; // rsi
  ULONG v44; // edx
  unsigned __int8 *v45; // rdi
  char v46; // dl
  PSID_IDENTIFIER_AUTHORITY v47; // rcx
  __int64 v48; // r8
  int v49; // r8d
  int v50; // r9d
  unsigned int v51; // edx
  BOOLEAN v52; // al
  BOOLEAN v53; // al
  __int64 v54; // r11
  __int64 v55; // rsi
  __int64 v56; // rdi
  int *v57; // rcx
  int v58; // r9d
  unsigned __int64 v59; // r8
  _DWORD *PoolWithTag; // rax
  _DWORD *v61; // rsi
  _QWORD *v62; // rax
  PVOID v63; // rbx
  void *v64; // rcx
  struct _ERESOURCE *v65; // r15
  int v66; // ebx
  ULONG v67; // r14d
  unsigned __int8 *v68; // rax
  ULONG v69; // r12d
  ULONG v70; // ecx
  int v71; // eax
  NTSTATUS inserted; // ebx
  _QWORD *v73; // rbx
  char *v74; // rdi
  _QWORD *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  PVOID v78; // rax
  char *v79; // r15
  __int64 v80; // rcx
  int v81; // esi
  __int64 v82; // rdx
  _KPROCESS *Process; // rcx
  ULONG v84; // eax
  _SID_AND_ATTRIBUTES *v85; // rdx
  ULONG v86; // r14d
  __int64 v87; // rcx
  char *v88; // rsi
  unsigned __int8 *v89; // r14
  ULONG v90; // ebx
  unsigned __int16 *v91; // rcx
  char *v92; // rsi
  void *v93; // rdx
  void *v94; // rcx
  int v95; // edx
  PVOID v96; // rdi
  ULONG RemainingSidAreaSize; // [rsp+30h] [rbp-D0h]
  char v98; // [rsp+50h] [rbp-B0h]
  char v99; // [rsp+51h] [rbp-AFh] BYREF
  char v100; // [rsp+52h] [rbp-AEh]
  char v101; // [rsp+53h] [rbp-ADh]
  int v102; // [rsp+54h] [rbp-ACh]
  ULONG SidAreaSize; // [rsp+58h] [rbp-A8h] BYREF
  char **v104; // [rsp+60h] [rbp-A0h]
  int v105; // [rsp+68h] [rbp-98h]
  int v106; // [rsp+6Ch] [rbp-94h]
  PVOID Object; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v108; // [rsp+78h] [rbp-88h]
  PSID_AND_ATTRIBUTES Src; // [rsp+80h] [rbp-80h]
  PSID v110; // [rsp+88h] [rbp-78h]
  PVOID P; // [rsp+90h] [rbp-70h]
  PSID SidArea; // [rsp+98h] [rbp-68h] BYREF
  PSID Sid1; // [rsp+A0h] [rbp-60h]
  int v114; // [rsp+A8h] [rbp-58h]
  unsigned int v115; // [rsp+ACh] [rbp-54h]
  __int64 v116; // [rsp+B0h] [rbp-50h]
  PSID_AND_ATTRIBUTES v117; // [rsp+B8h] [rbp-48h]
  PHANDLE Handle; // [rsp+C0h] [rbp-40h]
  _QWORD *v119; // [rsp+C8h] [rbp-38h]
  __int64 v120; // [rsp+D0h] [rbp-30h]
  __int64 v121; // [rsp+D8h] [rbp-28h]
  __int64 v122; // [rsp+E0h] [rbp-20h]
  __int64 v123; // [rsp+E8h] [rbp-18h]
  void *v124; // [rsp+F0h] [rbp-10h]
  __int64 v125; // [rsp+F8h] [rbp-8h]
  __int64 v126; // [rsp+100h] [rbp+0h]
  __int64 v127; // [rsp+108h] [rbp+8h]
  struct _ACCESS_STATE PassedAccessState; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v129[224]; // [rsp+1B0h] [rbp+B0h] BYREF

  v26 = a15;
  v27 = Count;
  v106 = -1;
  v123 = a7;
  v104 = a14;
  Sid1 = a16;
  v124 = a17;
  v127 = a19;
  v126 = a20;
  v125 = a22;
  v115 = a3;
  v28 = 0;
  v101 = a2;
  Handle = a1;
  Object = 0LL;
  SidArea = 0LL;
  v102 = 0;
  v119 = (_QWORD *)a4;
  Src = a9;
  v117 = a11;
  v110 = a15;
  memset(&PassedAccessState, 0, sizeof(PassedAccessState));
  memset(v129, 0, sizeof(v129));
  v116 = 0LL;
  v98 = 0;
  v100 = 0;
  v99 = 0;
  P = 0LL;
  result = SeCaptureObjectAttributeSecurityDescriptorPresent(a4, a2, &v99);
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
      v26 = v110;
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
      v40 = RtlEqualSid(v26, Sid);
      v36 = 0LL;
      LOBYTE(v38) = 1;
      v39 = v40 != 0;
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
      v102 = 2048;
    }
    v105 = 0;
    if ( v27 )
    {
      v42 = 1;
      p_Attributes = &v117->Attributes;
      v105 = 0;
      while ( 1 )
      {
        v44 = *p_Attributes;
        if ( ((unsigned __int8)*p_Attributes & (unsigned __int8)v38) != 0 )
        {
          v44 |= 6u;
          *p_Attributes = v44;
        }
        if ( (v44 & 0x10) != 0 )
        {
          if ( (v44 & 6) != 0 )
            return 3221225485LL;
          v28 |= 0x800u;
          v102 = v28;
        }
        v45 = (unsigned __int8 *)*((_QWORD *)p_Attributes - 1);
        RtlIdentifierAuthoritySid(v45);
        v47 = RtlIdentifierAuthoritySid(SeUntrustedMandatorySid);
        if ( *(_DWORD *)v47->Value == *(_DWORD *)v48 && *(_WORD *)&v47->Value[4] == *(_WORD *)(v48 + 4) )
        {
          v49 = v45[1];
          if ( (_BYTE)v49 )
          {
            v50 = v45[1];
            if ( *(_DWORD *)&v45[4 * (v49 - 1) + 8] > 0x4000u )
              return 3221226566LL;
          }
          else
          {
            v50 = v36;
          }
          if ( (v46 & 0x40) != 0 )
            break;
        }
LABEL_42:
        if ( !v37 )
        {
          v52 = RtlEqualSid(Sid1, v45);
          v36 = 0LL;
          v38 = 1;
          v37 = v52 != 0;
        }
        if ( !v39 )
        {
          v53 = RtlEqualSid(v110, v45);
          v36 = 0LL;
          if ( v53 )
          {
            if ( (*p_Attributes & 8) == 0 )
              return 3221225562LL;
            v38 = 1;
            v105 = v42;
            v39 = 1;
          }
          else
          {
            v38 = 1;
          }
        }
        v42 += v38;
        p_Attributes += 4;
        if ( v42 - 1 >= v27 )
          goto LABEL_50;
      }
      if ( v106 != -1 )
        return 3221225485LL;
      v106 = v42;
      if ( (_BYTE)v49 )
      {
        v51 = *(_DWORD *)&v45[4 * (v50 - 1) + 8];
        if ( v51 >= 0x3000 )
        {
          v98 = v38;
          v28 |= 0x2000u;
LABEL_41:
          v102 = v28;
          goto LABEL_42;
        }
        if ( v51 >= 0x2000 )
        {
LABEL_39:
          v98 = v36;
          if ( v51 >= 0x2000 )
            v28 |= 0x2000u;
          goto LABEL_41;
        }
      }
      else
      {
        v51 = v36;
      }
      v100 = v38;
      goto LABEL_39;
    }
LABEL_50:
    if ( !v37 )
      return 3221225563LL;
    if ( !v39 )
      return 3221225562LL;
    v54 = v36;
    v120 = v36;
    v55 = v36;
    v121 = v36;
    v56 = v36;
    v122 = v36;
    if ( a13 )
    {
      v57 = (int *)(v104 + 1);
      do
      {
        v58 = *v57;
        if ( (*v57 & 0x7FFFFFF8) != 0 )
          return 3221225485LL;
        v59 = (unsigned int)*(v57 - 2);
        *v57 &= 3u;
        if ( (unsigned int)v59 > 0x24 )
          return 3221225568LL;
        if ( _bittest64(&v54, v59) )
          return 3221225894LL;
        v54 |= 1LL << v59;
        v120 = v54;
        if ( (v58 & 2) != 0 )
        {
          _bittestandset64(&v55, (unsigned int)v59);
          v121 = v55;
        }
        if ( (v58 & 1) != 0 )
        {
          _bittestandset64(&v56, (unsigned int)v59);
          v122 = v56;
        }
        LODWORD(v36) = v36 + 1;
        v57 += 3;
      }
      while ( (unsigned int)v36 < a13 );
    }
    if ( a23 && (*a23 & 0xFFFFFFFC) != 0 )
      return 3221225485LL;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x74416553u);
    v61 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225626LL;
    *PoolWithTag = 0;
    v62 = PoolWithTag + 2;
    v61[6] = 0;
    v62[1] = v62;
    *v62 = v62;
    *((_QWORD *)v61 + 5) = v61 + 8;
    *((_QWORD *)v61 + 4) = v61 + 8;
    if ( SeTokenLeakTracking )
    {
      P = ExAllocatePoolWithTag(PagedPool, 0x120uLL, 0x74416553u);
      v63 = P;
      if ( !P )
      {
        v64 = v61;
        goto LABEL_78;
      }
    }
    else
    {
      v63 = 0LL;
    }
    v116 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    v65 = (struct _ERESOURCE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x68uLL, 0x6C546553u);
    if ( !v65 )
    {
      ExFreePoolWithTag(v61, 0);
      if ( !SeTokenLeakTracking )
        return 3221225626LL;
      v64 = v63;
LABEL_78:
      ExFreePoolWithTag(v64, 0);
      return 3221225626LL;
    }
    v66 = 16 * v27;
    LODWORD(v110) = 16 * v27;
    if ( SepTokenSidSharingEnabled )
    {
      v67 = (v66 + 23) & 0xFFFFFFF8;
      v108 = a12;
    }
    else
    {
      v68 = (unsigned __int8 *)Src->Sid;
      v108 = (a12 + 7) & 0xFFFFFFF8;
      v67 = v66 + ((RtlLengthRequiredSid(v68[1]) + 3) & 0xFFFFFFFC) + v108 + 16;
    }
    SidAreaSize = v67;
    v69 = (RtlLengthRequiredSid(*((unsigned __int8 *)Sid1 + 1)) + 3) & 0xFFFFFFFC;
    if ( v124 )
      v69 += (*((unsigned __int16 *)v124 + 1) + 3) & 0xFFFFFFFC;
    v70 = v67 + 1168;
    v71 = 4096;
    if ( v69 >= 0x1000 )
      v71 = v69;
    v114 = v71;
    RemainingSidAreaSize = v70 + v71;
    LOBYTE(v70) = v101;
    inserted = ObCreateObject(
                 v70,
                 (_DWORD)SeTokenObjectType,
                 (_DWORD)v119,
                 1,
                 0,
                 v67 + 1168,
                 RemainingSidAreaSize,
                 0,
                 (__int64)&Object);
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(v61, 0);
      if ( SeTokenLeakTracking )
        ExFreePoolWithTag(P, 0);
      ExFreePoolWithTag(v65, 0);
      return (unsigned int)inserted;
    }
    v73 = Object;
    *((_QWORD *)Object + 6) = v65;
    ExInitializeResourceLite(v65);
    v74 = (char *)Object;
    v73[2] = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
    *((_QWORD *)v74 + 4) = 0LL;
    v75 = (_QWORD *)v123;
    *((_QWORD *)v74 + 28) = 0LL;
    v104 = 0LL;
    *((_QWORD *)v74 + 3) = *v75;
    v76 = v116;
    v74[204] = 0;
    *((_QWORD *)v74 + 7) = v76;
    *((_QWORD *)v74 + 5) = *a8;
    *((_DWORD *)v74 + 48) = a5;
    *((_DWORD *)v74 + 49) = a6;
    LODWORD(v76) = v102;
    *(_OWORD *)v74 = *a18;
    *((_DWORD *)v74 + 50) = v76;
    LODWORD(v76) = v114;
    *((_DWORD *)v74 + 30) = 0;
    *((_QWORD *)v74 + 145) = 0LL;
    *((_DWORD *)v74 + 34) = v76;
    LODWORD(v76) = v105;
    *((_DWORD *)v74 + 35) = 0;
    *((_DWORD *)v74 + 36) = v76;
    *((_QWORD *)v74 + 23) = 0LL;
    *((_QWORD *)v74 + 140) = 0LL;
    *((_QWORD *)v74 + 141) = 0LL;
    *((_DWORD *)v74 + 33) = v67;
    v104 = (char **)(v74 + 184);
    *((_DWORD *)v74 + 52) = v106;
    v77 = v120;
    *((_DWORD *)v74 + 53) = 0;
    *((_QWORD *)v74 + 8) = v77;
    *((_QWORD *)v74 + 9) = v121;
    *((_QWORD *)v74 + 10) = v122;
    *((_DWORD *)v74 + 200) = 0;
    *((_QWORD *)v74 + 99) = 0LL;
    *((_QWORD *)v74 + 98) = 0LL;
    *((_QWORD *)v74 + 135) = 0LL;
    *((_QWORD *)v74 + 136) = 0LL;
    *((_QWORD *)v74 + 144) = 0LL;
    memset(v74 + 808, 0, 0x110uLL);
    v78 = P;
    v79 = v74 + 1144;
    *((_QWORD *)v74 + 138) = 0LL;
    *((_QWORD *)v74 + 139) = 0LL;
    *((_QWORD *)v74 + 142) = 0LL;
    *((_QWORD *)v74 + 143) = v78;
    if ( a23 )
      *((_DWORD *)v74 + 53) = *a23;
    if ( !v98 )
    {
      *((_QWORD *)v74 + 9) &= 0xFFFFFFEEDFE9F97BuLL;
      *((_QWORD *)v74 + 10) &= 0xFFFFFFEEDFE9F97BuLL;
    }
    if ( v100 == 1 )
    {
      *((_QWORD *)v74 + 9) &= 0x202800000uLL;
      *((_QWORD *)v74 + 10) &= 0x202800000uLL;
    }
    v80 = v123;
    *(_OWORD *)(v74 + 88) = 0LL;
    *((_QWORD *)v74 + 13) = 0LL;
    *((_DWORD *)v74 + 28) = 0;
    *((_WORD *)v74 + 58) = 0;
    v74[118] = 0;
    *((_QWORD *)v74 + 97) = v61;
    *((_QWORD *)v74 + 137) = 0LL;
    *((_QWORD *)v74 + 22) = 0LL;
    v119 = v74 + 176;
    v81 = SepReferenceLogonSession(v80, v74 + 216);
    if ( v81 < 0 )
    {
      *((_DWORD *)v74 + 50) |= 0x20u;
      *((_QWORD *)v74 + 27) = 0LL;
      ObfDereferenceObjectWithTag(v74, 0x746C6644u);
      return (unsigned int)v81;
    }
    if ( SeTokenLeakTracking )
    {
      **(_QWORD **)v79 = KeGetCurrentThread()[1].CycleTime;
      *(_QWORD *)(*(_QWORD *)v79 + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
      *(_DWORD *)(*(_QWORD *)v79 + 32LL) = 12;
      *(_DWORD *)(*(_QWORD *)v79 + 280LL) = 0;
      *(_DWORD *)(*(_QWORD *)v79 + 284LL) = 0;
      v82 = *(_QWORD *)v79;
      Process = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(v82 + 16) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
      *(_DWORD *)(v82 + 24) = Process[1].ActiveProcessors.Bitmap[0];
      *(_WORD *)(v82 + 28) = WORD2(Process[1].ActiveProcessors.Bitmap[0]);
      *(_BYTE *)(v82 + 30) = BYTE6(Process[1].ActiveProcessors.Bitmap[0]);
      v84 = RtlWalkFrameChain((PVOID *)(*(_QWORD *)v79 + 40LL), 0x1Eu, 0);
      if ( KeGetCurrentIrql() < 2u )
        RtlWalkFrameChain((PVOID *)(*(_QWORD *)v79 + 40LL + 8LL * v84), 30 - v84, 1u);
      v74 = (char *)Object;
      SepAddTokenLogonSession(Object);
    }
    v85 = Src;
    if ( SepTokenSidSharingEnabled )
    {
      inserted = SepSetTokenUserAndGroups((_DWORD)v74, (_DWORD)Src, v27, (_DWORD)v117, v108);
      if ( inserted < 0 )
        goto LABEL_116;
    }
    else
    {
      v86 = v67 - (_DWORD)v110;
      *((_QWORD *)v74 + 19) = v74 + 1168;
      v87 = v27 + 1;
      *((_DWORD *)v74 + 31) = v87;
      SidArea = &v74[16 * v87 + 1168];
      SidAreaSize = v86 - 16;
      RtlCopySidAndAttributesArray(1u, v85, v86 - 16, (PSID_AND_ATTRIBUTES)v74 + 73, SidArea, &SidArea, &SidAreaSize);
      RtlCopySidAndAttributesArray(
        v27,
        v117,
        SidAreaSize,
        (PSID_AND_ATTRIBUTES)v74 + 74,
        SidArea,
        &SidArea,
        &SidAreaSize);
    }
    RtlSidHashInitialize(
      *((PSID_AND_ATTRIBUTES *)v74 + 19),
      *((_DWORD *)v74 + 31),
      (PSID_AND_ATTRIBUTES_HASH)(v74 + 232));
    *((_QWORD *)v74 + 20) = 0LL;
    *((_DWORD *)v74 + 32) = 0;
    v88 = (char *)ExAllocatePoolWithTag(PagedPool, v69, 0x64546553u);
    *v119 = v88;
    if ( v88 )
    {
      v89 = (unsigned __int8 *)Sid1;
      *((_QWORD *)v74 + 21) = v88;
      v90 = RtlLengthRequiredSid(v89[1]);
      RtlCopySid(v90, v88, v89);
      v91 = (unsigned __int16 *)v124;
      v92 = &v88[(v90 + 3) & 0xFFFFFFFC];
      if ( v124 )
      {
        v93 = v124;
        *v104 = v92;
        memmove(v92, v93, v91[1]);
      }
      inserted = SepSetTokenClaims((_DWORD)v74, v127, v126, a21, v125);
      if ( inserted >= 0 )
      {
        if ( !a24 || (inserted = SepSetTokenTrust(v74, SeProcTrustWinTcbSid), inserted >= 0) )
        {
          if ( SeTokenLeakTracking && SepTokenLeakMethodWatch == 12 )
          {
            if ( KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
            {
              *(_DWORD *)(*(_QWORD *)v79 + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
              v95 = *(_DWORD *)(*(_QWORD *)v79 + 280LL);
              if ( v95 >= SepTokenLeakBreakCount )
              {
                DbgPrint("\nToken number 0x%x = 0x%p\n", v95, Object);
                __debugbreak();
              }
            }
            v74 = (char *)Object;
          }
          if ( a24 )
          {
            v96 = Object;
            if ( KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5] )
              inserted = ObInsertObject(Object, 0LL, 0, 0, 0LL, 0LL);
            if ( inserted < 0 )
            {
              *Handle = 0LL;
            }
            else
            {
              if ( !v99 )
              {
                if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
                  SepFinalizeTokenAcls(v96);
                else
                  SepAppendAdminAceToTokenAcl(v96);
              }
              *Handle = v96;
            }
            return (unsigned int)inserted;
          }
          inserted = SeCreateAccessState(&PassedAccessState, v129, v115, (char *)SeTokenObjectType + 76);
          v94 = v74;
          if ( inserted < 0 )
            goto LABEL_117;
          inserted = ObInsertObject(v74, &PassedAccessState, 0, 1u, 0LL, Handle);
          SeDeleteAccessState(&PassedAccessState);
          if ( inserted < 0 )
            return (unsigned int)inserted;
          if ( !v99 )
          {
            if ( (unsigned int)Feature_Servicing_HardenTokenPPLRestrictions__private_IsEnabled() )
              SepFinalizeTokenAcls(v74);
            else
              SepAppendAdminAceToTokenAcl(v74);
          }
        }
      }
    }
    else
    {
      inserted = -1073741801;
    }
LABEL_116:
    v94 = v74;
LABEL_117:
    ObfDereferenceObjectWithTag(v94, 0x746C6644u);
    return (unsigned int)inserted;
  }
  return result;
}
