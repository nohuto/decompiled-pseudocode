/*
 * XREFs of CmpGetSymbolicLinkTarget @ 0x1405E6CF0
 * Callers:
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x140203400 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x140203570 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpGetEffectiveKcbSemantics @ 0x1405DE270 (CmpGetEffectiveKcbSemantics.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1405DF248 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpFindNameInListWithStatus @ 0x1405E31A4 (CmpFindNameInListWithStatus.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1405E6AE8 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405E7738 (CmpGetKcbAtLayerHeight.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1405E77E0 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpGetValueData @ 0x1405EBEC0 (CmpGetValueData.c)
 *     CmpUnlockHashEntryByKcb @ 0x1405ECD50 (CmpUnlockHashEntryByKcb.c)
 *     CmpGetComponentNameAtIndex @ 0x1405EDC70 (CmpGetComponentNameAtIndex.c)
 *     CmpComputeComponentHashes @ 0x1405EE5C0 (CmpComputeComponentHashes.c)
 *     CmpValidateComponents @ 0x1405EE8F0 (CmpValidateComponents.c)
 *     CmpCleanupPathInfo @ 0x1405EE950 (CmpCleanupPathInfo.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsKeyStackDeleted @ 0x1405EEF40 (CmpIsKeyStackDeleted.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405EF010 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCleanupKcbStack @ 0x1405F0A50 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x1405F0AD0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F0B30 (CmpUnlockKcbStack.c)
 *     CmpLockKcbShared @ 0x1405F0BE0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpCompareUnicodeString @ 0x140640290 (CmpCompareUnicodeString.c)
 *     CmEqualTrans @ 0x140643290 (CmEqualTrans.c)
 *     CmpConstructAndCacheName @ 0x140708F74 (CmpConstructAndCacheName.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
        ULONG_PTR *a9)
{
  unsigned int v11; // esi
  unsigned int v12; // ebx
  ULONG_PTR v13; // r15
  char v14; // r12
  __int16 v15; // dx
  bool v16; // r13
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
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // r8d
  unsigned int v41; // esi
  unsigned __int16 *ComponentNameAtIndex; // rax
  int v43; // r8d
  unsigned int v44; // r9d
  __int64 v45; // rbx
  void (__fastcall *v46)(__int64, _QWORD *); // rax
  __int64 v47; // rsi
  UNICODE_STRING v48; // xmm6
  __int16 v49; // r8
  wchar_t *v50; // rax
  unsigned __int16 MaximumLength; // dx
  unsigned __int16 Length; // cx
  __int16 v53; // bx
  __int64 v54; // r8
  struct _LOOKASIDE_LIST_EX *v55; // r9
  int v56; // ebx
  __int64 v57; // rax
  int v58; // ebx
  unsigned int v59; // ebx
  __int64 v60; // rax
  unsigned int v61; // esi
  unsigned int v62; // ebx
  const UNICODE_STRING *v63; // rax
  unsigned __int64 v64; // rcx
  UNICODE_STRING *v65; // rbx
  void *v66; // rcx
  __int16 v67; // [rsp+48h] [rbp-C0h]
  __int16 v68; // [rsp+4Ah] [rbp-BEh] BYREF
  _BYTE v69[4]; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v72[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v73; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int16 v74; // [rsp+70h] [rbp-98h]
  unsigned int v75; // [rsp+74h] [rbp-94h] BYREF
  __int64 v76; // [rsp+78h] [rbp-90h]
  ULONG_PTR v77; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  __int64 v79; // [rsp+90h] [rbp-78h]
  __int64 v80; // [rsp+98h] [rbp-70h] BYREF
  __int64 v81; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v82[2]; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v83; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v84; // [rsp+C8h] [rbp-40h]
  __int64 v85; // [rsp+D0h] [rbp-38h]
  UNICODE_STRING SourceString; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v87; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v88; // [rsp+F8h] [rbp-10h]
  ULONG_PTR *v89; // [rsp+100h] [rbp-8h]
  __int64 v90; // [rsp+108h] [rbp+0h]
  __int64 v91; // [rsp+110h] [rbp+8h]
  _OWORD v92[2]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v93[176]; // [rsp+138h] [rbp+30h] BYREF

  v79 = a6;
  v91 = a7;
  v88 = a8;
  v89 = a9;
  v11 = a4;
  v84 = a1;
  v72[0] = 0;
  LOWORD(v73) = 0;
  v74 = a4;
  v12 = a3;
  v90 = a5;
  DestinationString_8 = 0LL;
  SourceString = 0LL;
  v87 = 0LL;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  DestinationString = -1;
  v13 = 0LL;
  v14 = 0;
  v77 = 0LL;
  v85 = 0LL;
  v76 = 0LL;
  P = 0LL;
  v75 = 0;
  v68 = 0;
  v80 = 0xFFFFFFFFLL;
  v82[0] = 0xFFFFFFFFLL;
  v69[0] = 0;
  v81 = 0xFFFFFFFFLL;
  memset(v93, 0, 0xA8uLL);
  v15 = *(_WORD *)(a1 + 2);
  memset(v92, 0, sizeof(v92));
  WORD1(v92[0]) = -1;
  v16 = !a5 && !v15;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  v18 = KcbAtLayerHeight;
  if ( !v16 || (*(_DWORD *)(KcbAtLayerHeight + 8) & 8) == 0 )
  {
LABEL_30:
    v33 = v79;
    if ( (*(_DWORD *)(v79 + 160) & 1) == 0 )
    {
      CmpAttachToRegistryProcess(v79 + 168);
      *(_DWORD *)(v33 + 160) |= 1u;
    }
    v34 = v84;
    v67 = *(_WORD *)(v84 + 2);
    if ( v67 < 0 )
      goto LABEL_111;
    while ( 1 )
    {
      v79 = CmpGetKcbAtLayerHeight(v34);
      v35 = v79;
      if ( (unsigned int)CmpGetEffectiveKcbSemantics(v79) == 1 )
        goto LABEL_111;
      if ( *(_DWORD *)(v36 + 40) != -1 )
      {
        if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(v36 + 288), v90) )
        {
          if ( !*(_DWORD *)(v35 + 280) )
          {
            DestinationString = -1;
            goto LABEL_95;
          }
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v35 + 32),
                                   (unsigned int *)(v35 + 280),
                                   (__int64)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&DestinationString);
        }
        else
        {
          v37 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v35 + 32) + 8LL))(
                  *(_QWORD *)(v35 + 32),
                  *(unsigned int *)(v35 + 40),
                  &v80);
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v35 + 32),
                                   (unsigned int *)(v37 + 36),
                                   (__int64)&CmSymbolicLinkValueName,
                                   0,
                                   0LL,
                                   (__int64)&DestinationString);
          (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v79 + 32) + 16LL))(*(_QWORD *)(v79 + 32), &v80);
        }
        if ( NameInListWithStatus >= 0 )
        {
          v38 = *(_QWORD *)(v79 + 32);
          v76 = v38;
          goto LABEL_39;
        }
        if ( NameInListWithStatus != -1073741772 )
          goto LABEL_99;
      }
LABEL_95:
      if ( --v67 < 0 )
      {
        v38 = v76;
LABEL_39:
        if ( DestinationString != -1 )
        {
          v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(v38 + 8))(v38, DestinationString, v82);
          v85 = v39;
          if ( (*(_BYTE *)(v39 + 16) & 2) == 0 && *(_DWORD *)(v39 + 12) == 6 )
          {
            if ( !(unsigned __int8)CmpGetValueData(
                                     v76,
                                     DestinationString,
                                     v39,
                                     (unsigned int)&v75,
                                     (__int64)&P,
                                     (__int64)v69,
                                     (__int64)&v81) )
            {
              NameInListWithStatus = -1073741670;
              goto LABEL_99;
            }
            if ( v75 <= 0xFFFF && (v75 & 1) == 0 )
            {
              v40 = v12;
              SourceString.Buffer = (wchar_t *)P;
              SourceString.Length = v75;
              SourceString.MaximumLength = v75;
              v41 = (unsigned __int16)v75;
              LODWORD(v79) = v12;
              if ( v12 < v74 )
              {
                do
                {
                  ComponentNameAtIndex = (unsigned __int16 *)CmpGetComponentNameAtIndex(a2, v40);
                  v40 = v43 + 1;
                  v41 += *ComponentNameAtIndex + 2;
                }
                while ( v40 < v44 );
              }
              if ( v41 <= 0xFFFF )
              {
                DestinationString_8.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v41, 0x36364D43u);
                Buffer = DestinationString_8.Buffer;
                if ( !DestinationString_8.Buffer )
                {
                  NameInListWithStatus = -1073741670;
                  v21 = 1;
                  goto LABEL_21;
                }
                DestinationString_8.Length = 0;
                DestinationString_8.MaximumLength = v41;
                RtlUnicodeStringCopy(&DestinationString_8, &SourceString);
                if ( v69[0] )
                {
                  ExFreePoolWithTag(P, 0);
                  v45 = v76;
                }
                else
                {
                  v45 = v76;
                  (*(void (__fastcall **)(__int64, __int64 *))(v76 + 16))(v76, &v81);
                }
                v46 = *(void (__fastcall **)(__int64, _QWORD *))(v45 + 16);
                P = 0LL;
                v46(v45, v82);
                v85 = 0LL;
                v47 = v84;
                CmpUnlockKcbStack(v84);
                v48 = DestinationString_8;
                if ( v16 )
                {
                  v21 = 0;
                  *((_QWORD *)&v87 + 1) = DestinationString_8.Buffer;
                  v49 = 0;
                  v83 = DestinationString_8;
                  LOWORD(v87) = 0;
                  WORD1(v87) = DestinationString_8.MaximumLength;
                  if ( DestinationString_8.Length )
                  {
                    v50 = v83.Buffer;
                    MaximumLength = v83.MaximumLength;
                    Length = v83.Length;
                    while ( *v50 == 92 )
                    {
                      ++v50;
                      Length -= 2;
                      MaximumLength -= 2;
                      v83.Buffer = v50;
                      v49 += 2;
                      v83.Length = Length;
                      v83.MaximumLength = MaximumLength;
                      LOWORD(v87) = v49;
                      if ( !Length )
                        goto LABEL_61;
                    }
                    if ( Length )
                    {
                      while ( *v50 != 92 )
                      {
                        ++v50;
                        Length -= 2;
                        MaximumLength -= 2;
                        v83.Buffer = v50;
                        v49 += 2;
                        v83.Length = Length;
                        v83.MaximumLength = MaximumLength;
                        LOWORD(v87) = v49;
                        if ( !Length )
                          goto LABEL_61;
                      }
                      do
                      {
                        if ( *v50 != 92 )
                          break;
                        ++v50;
                        MaximumLength -= 2;
                        Length -= 2;
                      }
                      while ( Length );
                      v83.Buffer = v50;
                      v83.Length = Length;
                      v83.MaximumLength = MaximumLength;
                    }
                  }
LABEL_61:
                  if ( !(unsigned int)CmpCompareUnicodeString(&v87, &CmRegistryRootName, 2LL)
                    && (int)CmpComputeComponentHashes(&v83, v72, v93) >= 0 )
                  {
                    v53 = v72[0];
                    if ( (int)CmpValidateComponents((unsigned int)v72[0], v93) >= 0 )
                    {
                      if ( (int)CmpPerformCompleteKcbCacheLookup(
                                  *((_QWORD *)CmpRegistryRootObject + 1),
                                  0LL,
                                  (__int64)&v77,
                                  (__int64)&v68 + 1,
                                  (__int64)&v73) < 0 )
                      {
                        v13 = v77;
                      }
                      else if ( (_WORD)v73 == v53 )
                      {
                        v13 = v77;
                        if ( (int)CmpStartKcbStackForTopLayerKcb((__int64)v92, v77, v54, v55) >= 0 )
                        {
                          CmpLockKcbStackShared(v92);
                          v56 = CmpConstructAndCacheName(v13, 0LL);
                          CmpUnlockKcbStack(v92);
                          if ( v56 >= 0 )
                          {
                            if ( HIBYTE(v68) )
                            {
                              CmpUnlockHashEntryByKcb(v13);
                              HIBYTE(v68) = 0;
                            }
                            CmpLockKcbStackTopExclusiveRestShared(v47);
                            v21 = 1;
                            if ( !(unsigned __int8)CmpIsKeyStackDeleted(v47, 0LL) )
                            {
                              v57 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v18 + 32) + 8LL))(
                                      *(_QWORD *)(v18 + 32),
                                      *(unsigned int *)(v18 + 40),
                                      &v80);
                              v58 = CmpFindNameInListWithStatus(
                                      *(_QWORD *)(v18 + 32),
                                      (unsigned int *)(v57 + 36),
                                      (__int64)&CmSymbolicLinkValueName,
                                      0,
                                      0LL,
                                      (__int64)&DestinationString);
                              (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v18 + 32) + 16LL))(
                                *(_QWORD *)(v18 + 32),
                                &v80);
                              if ( v58 >= 0 )
                              {
                                v59 = DestinationString;
                                v76 = *(_QWORD *)(v18 + 32);
                                v60 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(v76 + 8))(
                                        v76,
                                        DestinationString,
                                        v82);
                                v85 = v60;
                                if ( *(_DWORD *)(v60 + 12) == 6 )
                                {
                                  if ( (unsigned __int8)CmpGetValueData(
                                                          v76,
                                                          v59,
                                                          v60,
                                                          (unsigned int)&v75,
                                                          (__int64)&P,
                                                          (__int64)v69,
                                                          (__int64)&v81) )
                                  {
                                    if ( v75 <= 0xFFFF && (v75 & 1) == 0 )
                                    {
                                      SourceString.Length = v75;
                                      SourceString.MaximumLength = v75;
                                      SourceString.Buffer = (wchar_t *)P;
                                      if ( !(unsigned int)CmpCompareUnicodeString(
                                                            &DestinationString_8,
                                                            &SourceString,
                                                            0LL) )
                                      {
                                        CmpCleanUpKcbCachedSymlink(v18);
                                        *(_QWORD *)(v18 + 104) = v13;
                                        CmpReferenceKeyControlBlockUnsafe(v13);
                                        *(_WORD *)(v18 + 8) |= 8u;
                                        CmpUnlockKcbStack(v47);
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
                        CmpDereferenceKeyControlBlock(v77);
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
                v61 = v74;
                v62 = v79;
                if ( (unsigned int)v79 < v74 )
                {
                  do
                  {
                    v63 = (const UNICODE_STRING *)CmpGetComponentNameAtIndex(a2, v62);
                    v64 = (unsigned __int64)DestinationString_8.Length >> 1;
                    DestinationString_8.Length += 2;
                    DestinationString_8.Buffer[v64] = 92;
                    RtlUnicodeStringCat(&DestinationString_8, v63);
                    ++v62;
                  }
                  while ( v62 < v61 );
                  v48 = DestinationString_8;
                  v14 = v68;
                }
                v65 = (UNICODE_STRING *)v88;
                v66 = *(void **)(v88 + 8);
                if ( v66 )
                {
                  ExFreePoolWithTag(v66, 0);
                  v65->Buffer = 0LL;
                }
                if ( HIBYTE(v68) )
                  CmpUnlockHashEntryByKcb(v13);
                *v89 = v13;
                v13 = 0LL;
                *v65 = v48;
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
          if ( v69[0] )
            ExFreePoolWithTag(P, 0);
          else
            (*(void (__fastcall **)(__int64, __int64 *))(v76 + 16))(v76, &v81);
        }
        if ( v85 )
          (*(void (__fastcall **)(__int64, _QWORD *))(v76 + 16))(v76, v82);
        if ( Buffer )
          ExFreePoolWithTag(Buffer, 0);
        if ( v21 )
          CmpUnlockKcbStack(v84);
        goto LABEL_28;
      }
      v34 = v84;
    }
  }
  v19 = 0;
  v77 = *(_QWORD *)(KcbAtLayerHeight + 104);
  v20 = *(_QWORD *)(v77 + 296);
  if ( (v20 & 1) != 0 )
  {
    v19 = 1;
    v20 &= ~1uLL;
  }
  if ( !v20 || v19 )
  {
    v13 = v77;
    v14 = 0;
    goto LABEL_30;
  }
  v13 = v77;
  CmpReferenceKeyControlBlockUnsafe(v77);
  CmpUnlockKcbStack(v84);
  v21 = 0;
  CmpLockKcbShared(v13);
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
    v28 = (UNICODE_STRING *)v88;
    v29 = *(void **)(v88 + 8);
    if ( v29 )
      ExFreePoolWithTag(v29, 0);
    *v28 = DestinationString_8;
    RtlInitUnicodeString(&DestinationString_8, 0LL);
    CmpUnlockKcb(v13);
    v14 = 0;
    *v89 = v13;
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
      CmpUnlockKcb(v13);
    CmpDereferenceKeyControlBlock(v13);
  }
  CmpCleanupKcbStack(v92);
  CmpCleanupPathInfo(v93);
  return (unsigned int)NameInListWithStatus;
}
