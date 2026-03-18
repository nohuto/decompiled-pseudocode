/*
 * XREFs of CmQueryKey @ 0x1406784D0
 * Callers:
 *     NtQueryKey @ 0x140618FF0 (NtQueryKey.c)
 * Callees:
 *     CmQueryLayeredKey @ 0x140200A58 (CmQueryLayeredKey.c)
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140268308 (CmpFreeTransientPoolWithTag.c)
 *     PsGetCurrentThreadProcess @ 0x14031C770 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404EADE0 (KCBNeedsVirtualImage_0.c)
 *     SeCaptureSubjectContextEx @ 0x140602A50 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     CmpLockKcbShared @ 0x140613810 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140613840 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     CmpConstructName @ 0x140675CDC (CmpConstructName.c)
 *     CmpLockTwoKcbsShared @ 0x140676570 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140676600 (CmpUnlockTwoKcbs.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmGetKeyFlags @ 0x1406E26E0 (CmGetKeyFlags.c)
 *     CmpQueryKeyData @ 0x140702EB4 (CmpQueryKeyData.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140871BE0 (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x1408722A8 (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140872C18 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, unsigned int *a6)
{
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r15
  int KeyData; // edi
  const void **p_UnicodeString; // rax
  unsigned int v15; // eax
  _DWORD *v16; // r15
  unsigned int v17; // ecx
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  int v23; // eax
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v26; // edi
  __int64 v27; // r12
  bool v28; // al
  unsigned int v29; // r8d
  unsigned int v30; // r8d
  int v31; // edx
  unsigned int v32; // edx
  int v33; // ecx
  __int64 v34; // rcx
  int v35; // r8d
  int v37; // r12d
  unsigned int LayeredKey; // ebx
  _DWORD v39[3]; // [rsp+54h] [rbp-154h] BYREF
  int v40; // [rsp+60h] [rbp-148h] BYREF
  unsigned int *v41; // [rsp+68h] [rbp-140h]
  const void **v42; // [rsp+70h] [rbp-138h]
  _QWORD v43[2]; // [rsp+78h] [rbp-130h] BYREF
  int v44; // [rsp+88h] [rbp-120h] BYREF
  int v45; // [rsp+8Ch] [rbp-11Ch] BYREF
  unsigned int *v46; // [rsp+90h] [rbp-118h]
  unsigned int *v47; // [rsp+98h] [rbp-110h]
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-F8h]
  __int64 v50; // [rsp+B8h] [rbp-F0h]
  __int128 v51; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-C8h] BYREF
  __int128 v55; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v56; // [rsp+110h] [rbp-98h]
  __int128 v57; // [rsp+120h] [rbp-88h]
  _BYTE v58[48]; // [rsp+130h] [rbp-78h] BYREF

  v41 = a4;
  v43[1] = a1;
  v50 = a1;
  *(_QWORD *)&v39[1] = a2;
  v46 = a4;
  v47 = a6;
  v42 = 0LL;
  v10 = 0LL;
  v43[0] = 0LL;
  UnicodeString = 0LL;
  memset(v58, 0, sizeof(v58));
  v51 = 0LL;
  CmpInitializeDelayDerefContext(&v51);
  CmpAttachToRegistryProcess(v58);
  CmpLockRegistry();
  v11 = *(_QWORD *)(a1 + 8);
  v49 = v11;
  if ( *(_WORD *)(v11 + 66) )
  {
    LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, a6);
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(v58);
    return LayeredKey;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
      goto LABEL_4;
    CmpLockKcbShared(v11);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyData = -1073740763;
      if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        KeyData = -1073741444;
      CmpUnlockKcb(v11);
      CmpUnlockRegistry();
      CmpDetachFromRegistryProcess(v58);
      return (unsigned int)KeyData;
    }
    CmpUnlockKcb(v11);
    v37 = CmpTransSearchAddTransFromKeyBody(a1, v43);
    if ( v37 >= 0 )
    {
      v10 = v43[0];
LABEL_4:
      if ( a2 )
      {
        v11 = *(_QWORD *)(a2 + 8);
        v49 = v11;
        CmpLockTwoKcbsShared(*(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 8));
      }
      else
      {
        CmpLockKcbShared(*(_QWORD *)(a1 + 8));
      }
      if ( a3 != 3 )
      {
        if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v10)
          || (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
        {
          v23 = -1073741444;
          if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            v23 = -1073740763;
          KeyData = v23;
          goto LABEL_102;
        }
        switch ( a3 )
        {
          case 5:
            *a6 = 12;
            if ( a5 < 0xC )
            {
              KeyData = -1073741789;
            }
            else
            {
              *a4 = CmGetKeyFlags(v11, v10);
              a4[1] = 0;
              v19 = 0;
              if ( *(int *)(v11 + 40) < 0 )
              {
                v19 = 1;
                a4[1] = 1;
              }
              v20 = *(_DWORD *)(v11 + 184);
              if ( (v20 & 0x100000) != 0 )
              {
                a4[1] = v19 | 2;
                v20 = *(_DWORD *)(v11 + 184);
              }
              a4[2] = (unsigned __int8)v20 >> 4;
              KeyData = 0;
            }
            v16 = v41;
            break;
          case 6:
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            CurrentThread = KeGetCurrentThread();
            CurrentThreadProcess = PsGetCurrentThreadProcess();
            SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
            v26 = 4;
            *a6 = 4;
            if ( a5 >= 4 )
            {
              v27 = v49;
              v28 = KCBNeedsVirtualImage_0(v49);
              v16 = v41;
              v29 = v28 | *v41 & 0xFFFFFFFE;
              *v41 = v29;
              v30 = v29 & 0xFFFFFFFD;
              *v16 = v30;
              v31 = v30;
              if ( v28 && (*(_DWORD *)(v27 + 184) & 0x20) == 0 )
              {
                v31 = v30 | 2;
                *v16 = v30 | 2;
              }
              if ( !CmpVEEnabled || (*(_DWORD *)(v27 + 184) & 0x1000000) == 0 )
                v26 = 0;
              v32 = v26 | v31 & 0xFFFFFFFB;
              *v16 = v32;
              v33 = v32 ^ ((unsigned __int8)v32 ^ (unsigned __int8)(*(_DWORD *)(v27 + 184) >> 22)) & 8;
              *v16 = v33;
              *v16 = v33 ^ ((unsigned __int8)v33 ^ (unsigned __int8)(*(_DWORD *)(v27 + 184) >> 19)) & 0x10;
              KeyData = 0;
            }
            else
            {
              KeyData = -1073741789;
              v16 = v41;
            }
            SeReleaseSubjectContext(&SubjectContext);
            v10 = v43[0];
            break;
          case 8:
            *a6 = 4;
            if ( a5 >= 4 )
            {
              v21 = *a4;
              if ( (*(_DWORD *)(*(_QWORD *)(v11 + 32) + 4152LL) & 1) != 0 )
                v22 = v21 & 0xFFFFFFFE;
              else
                v22 = v21 | 1;
              *a4 = v22;
              KeyData = 0;
              v16 = v41;
LABEL_23:
              if ( a2 )
              {
                if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
                {
                  v34 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL);
                  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) < v34 )
                    *(_QWORD *)v16 = v34;
                }
                if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
                {
                  v39[0] = 0;
                  v52 = 0LL;
                  v44 = 0;
                  v55 = 0LL;
                  v56 = 0LL;
                  v57 = 0LL;
                  if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                       *(_QWORD *)(a2 + 8),
                                       *(_QWORD *)(a1 + 8),
                                       -1,
                                       v10,
                                       (__int64)&v51,
                                       (__int64)&v52,
                                       (__int64)&v44,
                                       0LL,
                                       (__int64)v39) == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v16[5] = v39[0];
                    else
                      v16[3] = v39[0];
                  }
                  LOBYTE(v35) = 1;
                  if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v35, -1, 0, 0LL, 0, 0LL, (__int64)v39) == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v16[8] = v39[0];
                    else
                      v16[5] = v39[0];
                  }
                  KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (unsigned int)&v55, 48, (__int64)a6, v10);
                  if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
                  {
                    if ( a3 == 2 )
                    {
                      if ( DWORD2(v56) > v16[6] )
                        v16[6] = DWORD2(v56);
                      if ( DWORD1(v57) > v16[9] )
                        v16[9] = DWORD1(v57);
                      if ( DWORD2(v57) > v16[10] )
                        v16[10] = DWORD2(v57);
                    }
                    else
                    {
                      if ( (unsigned int)v56 > v16[4] )
                        v16[4] = v56;
                      if ( DWORD2(v56) > v16[6] )
                        v16[6] = DWORD2(v56);
                      if ( HIDWORD(v56) > v16[7] )
                        v16[7] = HIDWORD(v56);
                    }
                  }
                }
              }
              else if ( CmpVEEnabled )
              {
                v18 = *(_QWORD *)(a1 + 8);
                if ( (*(_DWORD *)(v18 + 184) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
                {
                  v40 = 0;
                  v53 = 0LL;
                  v45 = 0;
                  KeyData = CmpFindSubKeyByNumberFromMergedView(
                              v18,
                              0,
                              -1,
                              v10,
                              (__int64)&v51,
                              (__int64)&v53,
                              (__int64)&v45,
                              0LL,
                              (__int64)&v40);
                  if ( KeyData == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v16[5] = v40;
                    else
                      v16[3] = v40;
                    KeyData = 0;
                  }
                }
              }
              goto LABEL_102;
            }
            KeyData = -1073741789;
LABEL_102:
            if ( a2 )
              CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(v50 + 8));
            else
              CmpUnlockKcb(*(_QWORD *)(v50 + 8));
            CmpDrainDelayDerefContext((_QWORD **)&v51);
            CmpUnlockRegistry();
            CmpDetachFromRegistryProcess(v58);
            if ( UnicodeString.Buffer )
            {
              RtlFreeAnsiString(&UnicodeString);
            }
            else if ( v42 )
            {
              CmpFreeTransientPoolWithTag(v42, 0x624E4D43u);
            }
            return (unsigned int)KeyData;
          default:
            KeyData = CmpQueryKeyData(v11, a3, (_DWORD)a4, a5, (__int64)a6, v10);
            v16 = v41;
            break;
        }
LABEL_22:
        if ( KeyData >= 0 )
          goto LABEL_23;
        goto LABEL_102;
      }
      v12 = *(_QWORD *)(a1 + 8);
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
      {
        if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
        {
          KeyData = -1073740763;
          goto LABEL_102;
        }
        KeyData = -1073741444;
      }
      else
      {
        KeyData = 0;
      }
      if ( !*(_QWORD *)(v12 + 80) )
      {
LABEL_56:
        KeyData = -1073741670;
        goto LABEL_102;
      }
      if ( CmpVEEnabled && (*(_DWORD *)(v12 + 184) & 0x1000000) != 0 )
      {
        if ( (int)CmVirtualKCBToRealPath(v12, &UnicodeString) < 0 )
        {
LABEL_15:
          if ( v42 )
          {
            v15 = *(unsigned __int16 *)v42;
            *a6 = v15 + 4;
            v16 = v41;
            if ( a5 < 4 )
            {
              KeyData = -1073741789;
            }
            else
            {
              *v41 = v15;
              v17 = a5 - 4;
              if ( a5 - 4 >= v15 )
                v17 = v15;
              else
                KeyData = -2147483643;
              memmove(v16 + 1, v42[1], v17);
            }
            goto LABEL_22;
          }
          goto LABEL_56;
        }
        p_UnicodeString = (const void **)&UnicodeString;
      }
      else
      {
        p_UnicodeString = (const void **)CmpConstructName(v12);
      }
      v42 = p_UnicodeString;
      goto LABEL_15;
    }
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess(v58);
    return (unsigned int)v37;
  }
}
