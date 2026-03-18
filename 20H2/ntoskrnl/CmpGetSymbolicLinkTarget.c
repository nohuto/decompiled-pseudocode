/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x14061CB10
 * Callers:
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140203DF0 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x14022A2F0 (RtlUnicodeStringCat.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbShared @ 0x140613810 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x14061B4F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpIsKeyStackDeleted @ 0x14061B650 (CmpIsKeyStackDeleted.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     CmpCleanupPathInfo @ 0x14061BCA0 (CmpCleanupPathInfo.c)
 *     CmpValidateComponents @ 0x14061BD10 (CmpValidateComponents.c)
 *     CmpComputeComponentHashes @ 0x14061BD70 (CmpComputeComponentHashes.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x14061C460 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpGetComponentNameAtIndex @ 0x14061C5F0 (CmpGetComponentNameAtIndex.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14061CAE0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpGetEffectiveKcbSemantics @ 0x14066BE80 (CmpGetEffectiveKcbSemantics.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14066DDF8 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindNameInListWithStatus @ 0x14066FDFC (CmpFindNameInListWithStatus.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1406721C0 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpGetValueData @ 0x14067B060 (CmpGetValueData.c)
 *     CmEqualTrans @ 0x1406A1CCC (CmEqualTrans.c)
 *     CmpConstructAndCacheName @ 0x1406DB784 (CmpConstructAndCacheName.c)
 *     CmpCompareUnicodeString @ 0x1407015F8 (CmpCompareUnicodeString.c)
 *     CmpUnlockHashEntryByKcb @ 0x140702950 (CmpUnlockHashEntryByKcb.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpGetSymbolicLinkTarget(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int16 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        volatile signed __int64 **a9)
{
  unsigned int v11; // esi
  unsigned int v12; // ebx
  volatile signed __int64 *v13; // r15
  char v14; // r12
  __int16 v15; // dx
  char v16; // r13
  __int64 KcbAtLayerHeight; // rax
  __int64 v18; // rdi
  char v19; // cl
  unsigned __int64 v20; // r12
  char v21; // r13
  unsigned int v22; // edi
  unsigned int i; // r8d
  unsigned __int16 *v24; // rax
  int v25; // r8d
  const UNICODE_STRING *v26; // rax
  unsigned __int64 v27; // rcx
  UNICODE_STRING *v28; // rbx
  void *v29; // rcx
  int NameInListWithStatus; // esi
  wchar_t *Buffer; // rbx
  __int64 v33; // rsi
  __int64 v34; // rax
  __int16 v35; // cx
  __int64 v36; // rsi
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // r8d
  unsigned int v42; // esi
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v44; // r8d
  unsigned int v45; // r9d
  __int64 v46; // rbx
  void (__fastcall *v47)(__int64, _QWORD *); // rax
  __int64 v48; // rsi
  UNICODE_STRING v49; // xmm6
  __int16 v50; // r8
  wchar_t *v51; // rax
  __int16 MaximumLength; // dx
  __int16 Length; // cx
  unsigned int v54; // ebx
  int v55; // ebx
  int v56; // eax
  int v57; // ebx
  unsigned int v58; // ebx
  __int64 v59; // rax
  unsigned int v60; // esi
  unsigned int v61; // ebx
  const UNICODE_STRING *v62; // rax
  unsigned __int64 v63; // rcx
  UNICODE_STRING *v64; // rbx
  void *v65; // rcx
  __int16 v66; // [rsp+48h] [rbp-C0h]
  __int16 v67; // [rsp+4Ah] [rbp-BEh] BYREF
  _BYTE v68[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v71[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v72; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int16 v73; // [rsp+70h] [rbp-98h]
  unsigned int v74; // [rsp+74h] [rbp-94h] BYREF
  __int64 v75; // [rsp+78h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  __int64 v78; // [rsp+90h] [rbp-78h]
  __int64 v79; // [rsp+98h] [rbp-70h] BYREF
  __int64 v80; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v81[2]; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v82; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v83; // [rsp+C8h] [rbp-40h]
  __int64 v84; // [rsp+D0h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v86; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v87; // [rsp+F8h] [rbp-10h]
  volatile signed __int64 **v88; // [rsp+100h] [rbp-8h]
  __int64 v89; // [rsp+108h] [rbp+0h]
  __int64 v90; // [rsp+110h] [rbp+8h]
  _OWORD v91[2]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v92[176]; // [rsp+138h] [rbp+30h] BYREF

  v78 = a6;
  v90 = a7;
  v87 = a8;
  v88 = a9;
  v11 = a4;
  v83 = a1;
  v71[0] = 0;
  v72 = 0;
  v73 = a4;
  v12 = a3;
  v89 = a5;
  DestinationString_8 = 0LL;
  SourceString = 0LL;
  v86 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  DestinationString = -1;
  v13 = 0LL;
  v14 = 0;
  BugCheckParameter2 = 0LL;
  v84 = 0LL;
  v75 = 0LL;
  P = 0LL;
  v74 = 0;
  v67 = 0;
  v79 = 0xFFFFFFFFLL;
  v81[0] = 0xFFFFFFFFLL;
  v68[0] = 0;
  v80 = 0xFFFFFFFFLL;
  memset(v92, 0, 0xA8uLL);
  v15 = *(_WORD *)(a1 + 2);
  memset(v91, 0, sizeof(v91));
  WORD1(v91[0]) = -1;
  if ( a5 || v15 )
  {
    v16 = 0;
  }
  else
  {
    v16 = 1;
    v15 = 0;
  }
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v15);
  v18 = KcbAtLayerHeight;
  if ( !v16 || (*(_DWORD *)(KcbAtLayerHeight + 8) & 8) == 0 )
  {
LABEL_30:
    v33 = v78;
    if ( (*(_DWORD *)(v78 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess(v78 + 168);
      *(_DWORD *)(v33 + 160) |= 1u;
    }
    v34 = v83;
    v35 = *(_WORD *)(v83 + 2);
    v66 = v35;
    if ( v35 < 0 )
      goto LABEL_111;
    while ( 1 )
    {
      v78 = CmpGetKcbAtLayerHeight(v34, v35);
      v36 = v78;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v78) == 1 )
        goto LABEL_111;
      if ( *(_DWORD *)(v37 + 40) != -1 )
      {
        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v37 + 288), v89) )
        {
          if ( !*(_DWORD *)(v36 + 280) )
          {
            DestinationString = -1;
            goto LABEL_95;
          }
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v36 + 32),
                                   (int)v36 + 280,
                                   (unsigned int)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&DestinationString);
        }
        else
        {
          v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v36 + 32) + 8LL))(
                  *(_QWORD *)(v36 + 32),
                  *(unsigned int *)(v36 + 40),
                  &v79);
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v36 + 32),
                                   v38 + 36,
                                   (unsigned int)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&DestinationString);
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v78 + 32) + 16LL))(*(_QWORD *)(v78 + 32), &v79);
        }
        if ( NameInListWithStatus >= 0 )
        {
          v39 = *(_QWORD *)(v78 + 32);
          v75 = v39;
          goto LABEL_39;
        }
        if ( NameInListWithStatus != -1073741772 )
          goto LABEL_99;
      }
LABEL_95:
      v35 = --v66;
      if ( v66 < 0 )
      {
        v39 = v75;
LABEL_39:
        if ( DestinationString != -1 )
        {
          v40 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(v39 + 8))(v39, DestinationString, v81);
          v84 = v40;
          if ( (*(_BYTE *)(v40 + 16) & 2) == 0 && *(_DWORD *)(v40 + 12) == 6 )
          {
            if ( !(unsigned __int8)CmpGetValueData(
                                     v75,
                                     DestinationString,
                                     v40,
                                     (unsigned int)&v74,
                                     (__int64)&P,
                                     (__int64)v68,
                                     (__int64)&v80) )
            {
              NameInListWithStatus = -1073741670;
              goto LABEL_99;
            }
            if ( v74 <= 0xFFFF && (v74 & 1) == 0 )
            {
              v41 = v12;
              SourceString.Buffer = (wchar_t *)P;
              SourceString.Length = v74;
              SourceString.MaximumLength = v74;
              v42 = (unsigned __int16)v74;
              LODWORD(v78) = v12;
              if ( v12 < v73 )
              {
                do
                {
                  ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(a2, v41);
                  v41 = v44 + 1;
                  v42 += *ComponentNameAtIndex + 2;
                }
                while ( v41 < v45 );
              }
              if ( v42 <= 0xFFFF )
              {
                DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v42, 0x36364D43u);
                Buffer = DestinationString_8.Buffer;
                if ( !DestinationString_8.Buffer )
                {
                  NameInListWithStatus = -1073741670;
                  v21 = 1;
                  goto LABEL_21;
                }
                DestinationString_8.Length = 0;
                DestinationString_8.MaximumLength = v42;
                RtlUnicodeStringCopy(&DestinationString_8, &SourceString);
                if ( v68[0] )
                {
                  ExFreePoolWithTag(P, 0);
                  v46 = v75;
                }
                else
                {
                  v46 = v75;
                  (*(void (__fastcall **)(__int64, __int64 *))(v75 + 16))(v75, &v80);
                }
                v47 = *(void (__fastcall **)(__int64, _QWORD *))(v46 + 16);
                P = 0LL;
                v47(v46, v81);
                v84 = 0LL;
                v48 = v83;
                CmpUnlockKcbStack(v83);
                v49 = DestinationString_8;
                if ( v16 )
                {
                  v21 = 0;
                  *((_QWORD *)&v86 + 1) = DestinationString_8.Buffer;
                  v50 = 0;
                  v82 = DestinationString_8;
                  LOWORD(v86) = 0;
                  WORD1(v86) = DestinationString_8.MaximumLength;
                  if ( DestinationString_8.Length )
                  {
                    v51 = v82.Buffer;
                    MaximumLength = v82.MaximumLength;
                    Length = v82.Length;
                    while ( *v51 == 92 )
                    {
                      ++v51;
                      Length -= 2;
                      MaximumLength -= 2;
                      v82.Buffer = v51;
                      v50 += 2;
                      v82.Length = Length;
                      v82.MaximumLength = MaximumLength;
                      LOWORD(v86) = v50;
                      if ( !Length )
                        goto LABEL_61;
                    }
                    if ( Length )
                    {
                      while ( *v51 != 92 )
                      {
                        ++v51;
                        Length -= 2;
                        MaximumLength -= 2;
                        v82.Buffer = v51;
                        v50 += 2;
                        v82.Length = Length;
                        v82.MaximumLength = MaximumLength;
                        LOWORD(v86) = v50;
                        if ( !Length )
                          goto LABEL_61;
                      }
                      do
                      {
                        if ( *v51 != 92 )
                          break;
                        ++v51;
                        MaximumLength -= 2;
                        Length -= 2;
                      }
                      while ( Length );
                      v82.Buffer = v51;
                      v82.Length = Length;
                      v82.MaximumLength = MaximumLength;
                    }
                  }
LABEL_61:
                  if ( !(unsigned int)CmpCompareUnicodeString(&v86, &CmRegistryRootName, 2LL)
                    && (int)CmpComputeComponentHashes((__m128i *)&v82, v71, (__int64)v92) >= 0 )
                  {
                    v54 = v71[0];
                    if ( (int)CmpValidateComponents(v71[0], (__int64)v92) >= 0 )
                    {
                      if ( (int)CmpPerformCompleteKcbCacheLookup(
                                  *((_QWORD *)CmpRegistryRootObject + 1),
                                  0,
                                  v54,
                                  (__int64)v92,
                                  0LL,
                                  &BugCheckParameter2,
                                  (_BYTE *)&v67 + 1,
                                  &v72) < 0 )
                      {
                        v13 = (volatile signed __int64 *)BugCheckParameter2;
                      }
                      else if ( v72 == (_WORD)v54 )
                      {
                        v13 = (volatile signed __int64 *)BugCheckParameter2;
                        if ( (int)CmpStartKcbStackForTopLayerKcb(v91, BugCheckParameter2) >= 0 )
                        {
                          CmpLockKcbStackShared((__int64)v91);
                          v55 = CmpConstructAndCacheName(v13, 0LL);
                          CmpUnlockKcbStack((__int64)v91);
                          if ( v55 >= 0 )
                          {
                            if ( HIBYTE(v67) )
                            {
                              CmpUnlockHashEntryByKcb(v13);
                              HIBYTE(v67) = 0;
                            }
                            CmpLockKcbStackTopExclusiveRestShared(v48);
                            v21 = 1;
                            if ( !CmpIsKeyStackDeleted(v48, 0LL) )
                            {
                              v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v18 + 32) + 8LL))(
                                      *(_QWORD *)(v18 + 32),
                                      *(unsigned int *)(v18 + 40),
                                      &v79);
                              v57 = CmpFindNameInListWithStatus(
                                      *(_QWORD *)(v18 + 32),
                                      v56 + 36,
                                      (unsigned int)&CmSymbolicLinkValueName,
                                      0,
                                      0LL,
                                      (__int64)&DestinationString);
                              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v18 + 32) + 16LL))(
                                *(_QWORD *)(v18 + 32),
                                &v79);
                              if ( v57 >= 0 )
                              {
                                v58 = DestinationString;
                                v75 = *(_QWORD *)(v18 + 32);
                                v59 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(v75 + 8))(
                                        v75,
                                        DestinationString,
                                        v81);
                                v84 = v59;
                                if ( *(_DWORD *)(v59 + 12) == 6 )
                                {
                                  if ( (unsigned __int8)CmpGetValueData(
                                                          v75,
                                                          v58,
                                                          v59,
                                                          (unsigned int)&v74,
                                                          (__int64)&P,
                                                          (__int64)v68,
                                                          (__int64)&v80) )
                                  {
                                    if ( v74 <= 0xFFFF && (v74 & 1) == 0 )
                                    {
                                      SourceString.Length = v74;
                                      SourceString.MaximumLength = v74;
                                      SourceString.Buffer = (wchar_t *)P;
                                      if ( !(unsigned int)CmpCompareUnicodeString(
                                                            &DestinationString_8,
                                                            &SourceString,
                                                            0LL) )
                                      {
                                        CmpCleanUpKcbCachedSymlink(v18, v90);
                                        *(_QWORD *)(v18 + 104) = v13;
                                        CmpReferenceKeyControlBlockUnsafe(v13);
                                        *(_WORD *)(v18 + 8) |= 8u;
                                        CmpUnlockKcbStack(v48);
                                        goto LABEL_78;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      else
                      {
                        CmpDereferenceKeyControlBlock(BugCheckParameter2);
                        v13 = 0LL;
                      }
                    }
                  }
                }
                else
                {
LABEL_78:
                  v21 = 0;
                }
                v60 = v73;
                v61 = v78;
                if ( (unsigned int)v78 < v73 )
                {
                  do
                  {
                    v62 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(a2, v61);
                    v63 = (unsigned __int64)DestinationString_8.Length >> 1;
                    DestinationString_8.Length += 2;
                    DestinationString_8.Buffer[v63] = 92;
                    RtlUnicodeStringCat(&DestinationString_8, v62);
                    ++v61;
                  }
                  while ( v61 < v60 );
                  v49 = DestinationString_8;
                  v14 = v67;
                }
                v64 = (UNICODE_STRING *)v87;
                v65 = *(void **)(v87 + 8);
                if ( v65 )
                {
                  ExFreePoolWithTag(v65, 0);
                  v64->Buffer = 0LL;
                }
                if ( HIBYTE(v67) )
                  CmpUnlockHashEntryByKcb(v13);
                *v88 = v13;
                v13 = 0LL;
                *v64 = v49;
                RtlInitUnicodeString(&DestinationString_8, 0LL);
                NameInListWithStatus = 0;
                goto LABEL_19;
              }
            }
          }
        }
LABEL_111:
        NameInListWithStatus = -1073741772;
LABEL_99:
        v21 = 1;
LABEL_19:
        Buffer = DestinationString_8.Buffer;
        if ( DestinationString_8.Buffer )
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
LABEL_21:
        if ( P )
        {
          if ( v68[0] )
            ExFreePoolWithTag(P, 0);
          else
            (*(void (__fastcall **)(__int64, __int64 *))(v75 + 16))(v75, &v80);
        }
        if ( v84 )
          (*(void (__fastcall **)(__int64, _QWORD *))(v75 + 16))(v75, v81);
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        if ( v21 )
          CmpUnlockKcbStack(v83);
        goto LABEL_28;
      }
      v34 = v83;
    }
  }
  v19 = 0;
  BugCheckParameter2 = *(_QWORD *)(KcbAtLayerHeight + 104);
  v20 = *(_QWORD *)(BugCheckParameter2 + 296);
  if ( (v20 & 1) != 0 )
  {
    v19 = 1;
    v20 &= ~1uLL;
  }
  if ( !v20 || v19 )
  {
    v13 = (volatile signed __int64 *)BugCheckParameter2;
    v14 = 0;
    goto LABEL_30;
  }
  v13 = (volatile signed __int64 *)BugCheckParameter2;
  CmpReferenceKeyControlBlockUnsafe((volatile signed __int64 *)BugCheckParameter2);
  CmpUnlockKcbStack(v83);
  v21 = 0;
  CmpLockKcbShared((__int64)v13);
  v22 = *(unsigned __int16 *)v20;
  for ( i = v12; i < v11; v22 += *v24 + 2 )
  {
    v24 = (unsigned __int16 *)CmpGetComponentNameAtIndex(a2, i);
    i = v25 + 1;
  }
  if ( v22 > 0xFFFF )
  {
    v14 = 1;
    NameInListWithStatus = -1073741772;
    goto LABEL_19;
  }
  DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v22, 0x36364D43u);
  if ( DestinationString_8.Buffer )
  {
    DestinationString_8.MaximumLength = v22;
    DestinationString_8.Length = 0;
    RtlUnicodeStringCopy(&DestinationString_8, (PCUNICODE_STRING)v20);
    for ( ; v12 < v11; ++v12 )
    {
      v26 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(a2, v12);
      v27 = (unsigned __int64)DestinationString_8.Length >> 1;
      DestinationString_8.Length += 2;
      DestinationString_8.Buffer[v27] = 92;
      RtlUnicodeStringCat(&DestinationString_8, v26);
    }
    v28 = (UNICODE_STRING *)v87;
    v29 = *(void **)(v87 + 8);
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    *v28 = DestinationString_8;
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    CmpUnlockKcb((ULONG_PTR)v13);
    v14 = 0;
    *v88 = v13;
    v13 = 0LL;
    NameInListWithStatus = 0;
    goto LABEL_19;
  }
  v14 = 1;
  NameInListWithStatus = -1073741670;
LABEL_28:
  if ( v13 )
  {
    if ( v14 )
      CmpUnlockKcb((ULONG_PTR)v13);
    CmpDereferenceKeyControlBlock((ULONG_PTR)v13);
  }
  CmpCleanupKcbStack((__int64)v91);
  CmpCleanupPathInfo((__int64)v92);
  return (unsigned int)NameInListWithStatus;
}
