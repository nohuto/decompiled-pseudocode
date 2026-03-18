/*
 * XREFs of MiResolveMappedFileFault @ 0x14025E350
 * Callers:
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x1403125E8 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiUseSlabAllocator @ 0x140221F88 (MiUseSlabAllocator.c)
 *     MiControlAreaUsingCopyExtents @ 0x140221FEC (MiControlAreaUsingCopyExtents.c)
 *     MiControlAreaUsingExtents @ 0x1402241C0 (MiControlAreaUsingExtents.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140227354 (MiGetAvailablePagesBelowPriority.c)
 *     MiFreeInPageSupportBlock @ 0x140229534 (MiFreeInPageSupportBlock.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiGetSessionIdForVa @ 0x14025D220 (MiGetSessionIdForVa.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiAllocateInPageSupport @ 0x14025EAF0 (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x14025EBC0 (MiComputeFaultNode.c)
 *     MiPickClusterForMappedFileFault @ 0x14025ED3C (MiPickClusterForMappedFileFault.c)
 *     MiFinishMdlForMappedFileFault @ 0x14025F04C (MiFinishMdlForMappedFileFault.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiGetSubsectionDriverProtos @ 0x140263D10 (MiGetSubsectionDriverProtos.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x1402ADCF0 (MiObtainFaultCharges.c)
 *     MiSanitizePfnProtection @ 0x1402AF410 (MiSanitizePfnProtection.c)
 *     MiBuildMdlForMappedFileFault @ 0x1402B9F20 (MiBuildMdlForMappedFileFault.c)
 *     MiGetSlabPage @ 0x1402E1028 (MiGetSlabPage.c)
 *     MiReturnFaultCharges @ 0x140311E30 (MiReturnFaultCharges.c)
 *     MiSetInPagePrefetchPriority @ 0x140311EE4 (MiSetInPagePrefetchPriority.c)
 *     MiComputeFaultCluster @ 0x140311F14 (MiComputeFaultCluster.c)
 *     KeInvalidAccessAllowed @ 0x140333400 (KeInvalidAccessAllowed.c)
 *     MiGetSharedProtos @ 0x1403A3578 (MiGetSharedProtos.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A8A8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x14053AC64 (MiCopyImageExtentContents.c)
 */

__int64 MiResolveMappedFileFault(__int64 a1, unsigned __int64 a2, ...)
{
  __int64 v2; // r14
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r15
  int v10; // ecx
  __int64 v11; // rax
  bool v12; // zf
  __int64 v13; // rdx
  unsigned int v14; // r13d
  __int64 v15; // rcx
  unsigned int v16; // esi
  _QWORD *v17; // r14
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rdi
  _BYTE *v21; // r10
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // r12
  unsigned __int64 v25; // rax
  __int64 v26; // r10
  int v27; // esi
  __int64 v28; // r13
  _QWORD *v29; // r15
  __int64 v30; // rdx
  signed __int32 v31; // ecx
  unsigned int v32; // r11d
  int v33; // r9d
  __int64 SlabPage; // rax
  int v35; // r9d
  unsigned __int64 v36; // r12
  __int64 v37; // rsi
  __int64 result; // rax
  int v39; // r9d
  __int64 v40; // rbx
  unsigned int v41; // r12d
  int v42; // edi
  int v43; // eax
  int v44; // ebx
  __int64 **v45; // rax
  unsigned __int64 v46; // r10
  __int64 v47; // r14
  unsigned __int64 v48; // rcx
  unsigned __int64 v49; // rcx
  __int64 SharedProtos; // rax
  __int64 **Address; // rax
  unsigned int SessionIdForVa; // eax
  char v53; // cl
  __int64 v54; // rax
  __int64 v55; // r15
  int v56; // eax
  unsigned int v57; // esi
  unsigned int v58; // eax
  __int64 *v59; // rax
  unsigned int v60; // [rsp+20h] [rbp-A9h]
  __int64 v61; // [rsp+28h] [rbp-A1h]
  int v62; // [rsp+50h] [rbp-79h] BYREF
  int v63; // [rsp+54h] [rbp-75h]
  unsigned int v64; // [rsp+58h] [rbp-71h]
  _BYTE *v65; // [rsp+60h] [rbp-69h]
  unsigned int v66; // [rsp+68h] [rbp-61h]
  _QWORD *v67; // [rsp+70h] [rbp-59h]
  unsigned __int64 v68; // [rsp+78h] [rbp-51h]
  __int64 **v69; // [rsp+80h] [rbp-49h] BYREF
  __int64 v70; // [rsp+88h] [rbp-41h]
  __int64 v71; // [rsp+90h] [rbp-39h]
  int v72; // [rsp+98h] [rbp-31h]
  __int64 v73; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-21h]
  __int64 v75; // [rsp+B0h] [rbp-19h]
  __int64 v76; // [rsp+B8h] [rbp-11h]
  __int64 v77; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v78; // [rsp+C8h] [rbp-1h] BYREF
  __int128 v79; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v82; // [rsp+140h] [rbp+77h] BYREF
  va_list va; // [rsp+140h] [rbp+77h]
  __int64 *v84; // [rsp+148h] [rbp+7Fh]
  va_list va1; // [rsp+150h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v82 = va_arg(va1, _QWORD);
  v84 = va_arg(va1, __int64 *);
  v2 = *(_QWORD *)(a1 + 16);
  v68 = *(_QWORD *)a1;
  v76 = *(_QWORD *)(a1 + 56);
  v78 = 0LL;
  v77 = 0LL;
  v62 = 0;
  v79 = 0LL;
  v71 = v2;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  v73 = v6;
  v65 = 0LL;
  v64 = 2;
  if ( ((__int64)KeGetCurrentThread()[1].Queue & 4) != 0 )
  {
    LOBYTE(v5) = 17;
    MiUnlockProtoPoolPage(v82, v5);
    return 3221225633LL;
  }
  v7 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( (v2 & 1) != 0 )
  {
    if ( *(_BYTE *)v7 == 5 )
    {
      if ( (*(_DWORD *)(v7 + 56) & 4) != 0 )
      {
        LOBYTE(v5) = 17;
        MiUnlockProtoPoolPage(v82, v5);
        return 3221225495LL;
      }
      v65 = 0LL;
    }
    else if ( (v2 & 1) != 0 )
    {
      if ( *(_BYTE *)v7 == 1 )
      {
        v12 = (*(_DWORD *)(v7 + 80) & 0x100) == 0;
        v65 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v12 )
        {
          LOBYTE(v5) = 17;
          MiUnlockProtoPoolPage(v82, v5);
          return 0LL;
        }
        v64 = 0;
      }
      else if ( (v2 & 1) != 0 && *(_BYTE *)v7 == 2 )
      {
        v65 = (_BYTE *)(v2 & 0xFFFFFFFFFFFFFFFEuLL);
      }
    }
  }
  if ( (v6 & 0x400) != 0 )
  {
    if ( qword_140C4DD40 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C4DD40;
    v75 = 0LL;
  }
  else
  {
    if ( qword_140C4DD40 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C4DD40;
    v5 = 0xFFFFFA8000000000uLL;
    v75 = 48 * (((unsigned __int64)v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v6 = *(_QWORD *)(v75 + 16);
    if ( qword_140C4DD40 && (v6 & 0x10) == 0 )
      v6 &= ~qword_140C4DD40;
  }
  v8 = v6 >> 16;
  v9 = *(_QWORD *)v8;
  v10 = *(_DWORD *)(*(_QWORD *)v8 + 56LL);
  if ( (v10 & 0x10) != 0 )
  {
    LOBYTE(v5) = 17;
    MiUnlockProtoPoolPage(v82, v5);
    return 3221225478LL;
  }
  v11 = *(_QWORD *)(v8 + 8);
  v12 = (*(_BYTE *)(v8 + 34) & 2) == 0;
  v66 = -1;
  v74 = 0LL;
  v70 = v11;
  if ( !v12 && (v10 & 0x4000000) != 0 )
  {
    SessionIdForVa = MiGetSessionIdForVa(v68);
    v13 = 0xFFFF800000000000uLL;
    v66 = SessionIdForVa;
    if ( v68 >= 0xFFFF800000000000uLL )
    {
      if ( (v2 & 1) != 0 )
      {
        v53 = *(_BYTE *)v7;
        if ( *(_BYTE *)v7 == 1 || v53 == 3 || v53 == 6 )
        {
LABEL_106:
          v54 = *(_QWORD *)(a1 + 16);
          if ( (v54 & 1) == 0 || *(_BYTE *)(v54 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
            goto LABEL_110;
        }
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(v2, 0LL) == 1 )
      {
        goto LABEL_106;
      }
    }
    SharedProtos = MiGetSharedProtos(v9, v66, v8);
    v74 = SharedProtos;
LABEL_109:
    v70 = *(_QWORD *)(SharedProtos + 72);
    goto LABEL_12;
  }
  v13 = 0xFFFF800000000000uLL;
  if ( v68 >= 0xFFFF800000000000uLL && (v10 & 0x20) != 0 )
  {
    SharedProtos = MiGetSubsectionDriverProtos(v8);
    if ( SharedProtos )
      goto LABEL_109;
  }
LABEL_12:
  if ( a2 >= v70 - 8LL * (*(_DWORD *)(v8 + 52) & 0x3FFFFFFF) + 8 * (unsigned __int64)*(unsigned int *)(v8 + 44) )
  {
LABEL_110:
    LOBYTE(v13) = 17;
    MiUnlockProtoPoolPage(v82, v13);
    return 3221225477LL;
  }
  v14 = 0;
  v15 = *(_WORD *)(v9 + 60) & 0x3FF;
  v16 = 0;
  v63 = 0;
  v17 = *(_QWORD **)(qword_140C4E448 + 8 * v15);
  v67 = v17;
  v20 = v73;
  if ( MiControlAreaUsingExtents(v9) )
  {
    if ( v19 )
    {
      v14 = 2;
    }
    else
    {
      v14 = 3;
      v62 = 1;
    }
    v63 = v14;
    v64 = 0;
    if ( v14 > 2 )
      goto LABEL_21;
  }
  else if ( MiControlAreaUsingCopyExtents(v18) )
  {
    v14 = 1;
    v63 = 1;
  }
  v69 = 0LL;
  v16 = MiComputeFaultNode(a1, v9, &v69);
  v62 = 0;
  if ( v14 - 1 <= 1 )
  {
    v62 = 1;
  }
  else
  {
    v21 = v65;
    if ( v65 )
    {
      Address = v69;
      if ( !v69 )
      {
        Address = MiLocateAddress(v68);
        v69 = Address;
      }
      v62 = MiComputeFaultCluster(v17, v21, Address, 0LL);
    }
    else if ( (v20 & 0x400) != 0 && (*(_DWORD *)(v9 + 56) & 0x20) == 0 && (*(_BYTE *)(v76 + 184) & 7) == 0 )
    {
      v45 = v69;
      v46 = v68;
      if ( !v69 )
      {
        v45 = MiLocateAddress(v68);
        v69 = v45;
      }
      v47 = (__int64)v45[15];
      if ( v47 >= 0 )
      {
        v48 = (unsigned __int64)v45[15] & 0xFFF;
        if ( v48 >= 0x11 && (v46 & 0xFFFFFFFFFFFFF000uLL) == (((unsigned __int64)v47 >> 12) - 1 + v48) << 12 )
        {
          v49 = a2 + 8;
          if ( (((_DWORD)a2 + 8) & 0xFFF) != 0
            && v49 < -8LL * (*(_DWORD *)(v8 + 52) & 0x3FFFFFFF) + v70 + 8 * (unsigned __int64)*(unsigned int *)(v8 + 44)
            && MI_READ_PTE_LOCK_FREE(v49) == v20 )
          {
            v62 = (v47 & 0xFFF) - 1;
          }
        }
      }
    }
  }
LABEL_21:
  v22 = MiAllocateInPageSupport(a2, v64, &v62, (__int64 *)va);
  if ( !v22 )
  {
    result = 3221225626LL;
    goto LABEL_129;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) == v20 )
  {
    v24 = (v20 >> 10) & 1;
    if ( ((v20 >> 10) & 1) != 0
      || (*(_BYTE *)(v75 + 34) & 0x20) != 0 && (*(_DWORD *)(*(_QWORD *)v75 + 160LL) & 0x20) == 0 )
    {
      if ( v14 == 3 )
      {
        v55 = v82;
        v36 = a2;
        goto LABEL_127;
      }
      if ( v65 && *v65 == 1 )
        MiSetInPagePrefetchPriority(v65, v22);
      if ( v24 )
        v25 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v73);
      else
        v25 = v20;
      v64 = (*(unsigned __int16 *)(v8 + 32) >> 1) & 0x1F;
      v72 = MiSanitizePfnProtection(0LL, v64, (v25 >> 5) & 0x1F);
      MiInitializePageColorBase(v76, v16, &v79);
      v27 = v63;
      v28 = -1LL;
      if ( (unsigned int)(v63 - 1) <= 1 )
        goto LABEL_33;
      if ( (*(_DWORD *)(v9 + 56) & 0x40020) == 0x20 && v24 && !dword_140C4EAC0 )
      {
        if ( !v26 )
        {
LABEL_33:
          v29 = v67;
          goto LABEL_34;
        }
        v29 = v67;
        if ( *(_BYTE *)v26 != 1 || MiGetAvailablePagesBelowPriority(v67, ((*(_DWORD *)(v26 + 80) >> 3) & 7u) + 1) )
        {
LABEL_34:
          if ( (unsigned int)MiObtainFaultCharges(v29, 1LL, 1LL) )
          {
            v31 = _InterlockedExchangeAdd((volatile signed __int32 *)v79, 1u);
            v20 = v73;
            v32 = HIDWORD(v79) | v31 & DWORD2(v79);
            if ( v24 && (unsigned int)MiUseSlabAllocator((__int64)v29, (_BYTE *)v8, v73, 0LL) )
              SlabPage = MiGetSlabPage((_DWORD)v29, v64, 0, v33, v33);
            else
              SlabPage = MiGetPage(v29, v32, 0LL);
            v28 = SlabPage;
            if ( SlabPage != -1 )
            {
              v35 = v71;
              if ( v27 == 1 )
              {
                MiCopyImageExtentContents(v22, v8, a2, v71, SlabPage, v82, v74);
                *v84 = v22;
                return 3221435187LL;
              }
              v36 = a2;
              if ( v27 != 2 )
              {
                v37 = v82;
                v61 = v82;
                *(_QWORD *)(v22 + 224) = v68;
                if ( (unsigned int)MiCopyDataPageToImagePage(v22, v8, a2, v35, SlabPage, v61) != 1 )
                  goto LABEL_42;
LABEL_51:
                *v84 = v22;
                return 3221435187LL;
              }
              v55 = v82;
              v56 = MiCopyFileOnlyGlobalSubsectionPage(v22, v8, a2, v71, SlabPage, v82, v74);
              v57 = v56;
              if ( v56 >= 0 )
                goto LABEL_51;
              if ( v56 == -1073741739 )
              {
                v57 = 0;
LABEL_125:
                LOBYTE(v23) = 17;
                MiUnlockProtoPoolPage(v55, v23);
                MiFreeInPageSupportBlock((PSLIST_ENTRY)v22);
                return v57;
              }
              if ( v56 != -1073740748 )
              {
                if ( v56 == -1073532109 )
                {
                  v57 = -1073741802;
                  *(_DWORD *)(a1 + 80) |= 0x100u;
                }
                goto LABEL_125;
              }
LABEL_127:
              LOBYTE(v23) = 17;
              MiUnlockProtoPoolPage(v55, v23);
              v58 = *(_DWORD *)(v22 + 192) & 0xFFFBFFFF;
              *(_DWORD *)(v22 + 312) = 0;
              *(_QWORD *)(v22 + 208) = v8;
              *(_DWORD *)(v22 + 192) = v58 | 1;
              v59 = v84;
              *(_DWORD *)(v22 + 184) = 0;
              *(_QWORD *)(v22 + 168) = v20;
              *(_QWORD *)(v22 + 232) = v36;
              *v59 = v22;
              result = 3221435187LL;
              *(_QWORD *)(v22 + 160) = 0LL;
              *(_QWORD *)(v22 + 256) = 0LL;
              *(_DWORD *)(v22 + 80) = 0;
              return result;
            }
            MiReturnFaultCharges(v29, 1LL, 1LL);
          }
          v36 = a2;
          v37 = v82;
LABEL_42:
          if ( (unsigned int)(v63 - 1) <= 1 )
            goto LABEL_43;
          goto LABEL_46;
        }
      }
      else
      {
        v29 = v67;
      }
      v37 = v82;
      v36 = a2;
LABEL_46:
      v39 = v70;
      *(_DWORD *)(v22 + 184) = v62;
      *(_QWORD *)(v22 + 208) = v8;
      v40 = (__int64)v65;
      *(_QWORD *)(v22 + 232) = v36;
      v41 = v66;
      v60 = v66;
      *(_QWORD *)(v22 + 160) = v37;
      *(_QWORD *)(v22 + 168) = v20;
      v42 = MiPickClusterForMappedFileFault((_DWORD)v29, v22, v40, v39, v60, v28, (__int64)&v78, (__int64)&v77);
      v43 = MiBuildMdlForMappedFileFault(v22, v78, v77, (_DWORD)v29, v42, v28, v72, v40, a1, (__int64)&v79);
      v44 = v43;
      if ( v43 != v42 )
        MiReturnFaultCharges(v29, (unsigned int)(v42 - v43), 1LL);
      if ( v44 )
      {
        MiFinishMdlForMappedFileFault(v22, v71, v44, v75, v41);
        *v84 = v22;
        return 3221435187LL;
      }
LABEL_43:
      LOBYTE(v30) = 17;
      MiUnlockProtoPoolPage(v37, v30);
      MiFreeInPageSupportBlock((PSLIST_ENTRY)v22);
      return 3221225495LL;
    }
  }
  LOBYTE(v23) = 17;
  MiUnlockProtoPoolPage(v82, v23);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v22);
  result = 3221226548LL;
LABEL_129:
  if ( v65 )
    v65[1] = ((_DWORD)result == -1073741670) + 1;
  return result;
}
