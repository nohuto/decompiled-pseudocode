/*
 * XREFs of CmQueryKey @ 0x1406E4F70
 * Callers:
 *     NtQueryKey @ 0x14070F950 (NtQueryKey.c)
 * Callees:
 *     CmQueryLayeredKey @ 0x140200A78 (CmQueryLayeredKey.c)
 *     PsGetCurrentThreadProcess @ 0x14023C620 (PsGetCurrentThreadProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     KCBNeedsVirtualImage_0 @ 0x1404ECBB0 (KCBNeedsVirtualImage_0.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmGetKeyFlags @ 0x140621510 (CmGetKeyFlags.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x14064CA80 (SeCaptureSubjectContextEx.c)
 *     CmpQueryKeyData @ 0x14065F49C (CmpQueryKeyData.c)
 *     CmpConstructName @ 0x1406E271C (CmpConstructName.c)
 *     CmpLockTwoKcbsShared @ 0x1406E3020 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1406E30B0 (CmpUnlockTwoKcbs.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140709EF0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14086F570 (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x14086FC38 (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1408705A8 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, unsigned int *a6)
{
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r15
  int KeyData; // edi
  const void **p_UnicodeString; // rax
  unsigned int v16; // eax
  _DWORD *v17; // r15
  unsigned int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  int v26; // eax
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v29; // edi
  __int64 v30; // r12
  bool v31; // al
  unsigned int v32; // r8d
  unsigned int v33; // r8d
  int v34; // edx
  unsigned int v35; // edx
  int v36; // ecx
  __int64 v37; // rcx
  int v38; // r8d
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // r12d
  unsigned int LayeredKey; // ebx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  _DWORD v50[3]; // [rsp+54h] [rbp-154h] BYREF
  int v51; // [rsp+60h] [rbp-148h] BYREF
  unsigned int *v52; // [rsp+68h] [rbp-140h]
  const void **v53; // [rsp+70h] [rbp-138h]
  _QWORD v54[2]; // [rsp+78h] [rbp-130h] BYREF
  int v55; // [rsp+88h] [rbp-120h] BYREF
  int v56; // [rsp+8Ch] [rbp-11Ch] BYREF
  unsigned int *v57; // [rsp+90h] [rbp-118h]
  unsigned int *v58; // [rsp+98h] [rbp-110h]
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-108h] BYREF
  __int64 v60; // [rsp+B0h] [rbp-F8h]
  __int64 v61; // [rsp+B8h] [rbp-F0h]
  __int128 v62; // [rsp+C0h] [rbp-E8h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-D8h] BYREF
  __int64 v64; // [rsp+D8h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E0h] [rbp-C8h] BYREF
  __int128 v66; // [rsp+100h] [rbp-A8h] BYREF
  __int128 v67; // [rsp+110h] [rbp-98h]
  __int128 v68; // [rsp+120h] [rbp-88h]
  _BYTE v69[48]; // [rsp+130h] [rbp-78h] BYREF

  v52 = a4;
  v54[1] = a1;
  v61 = a1;
  *(_QWORD *)&v50[1] = a2;
  v57 = a4;
  v58 = a6;
  v53 = 0LL;
  v10 = 0LL;
  v54[0] = 0LL;
  UnicodeString = 0LL;
  memset(v69, 0, sizeof(v69));
  v62 = 0LL;
  CmpInitializeDelayDerefContext(&v62);
  CmpAttachToRegistryProcess(v69);
  CmpLockRegistry(v11);
  v12 = *(_QWORD *)(a1 + 8);
  v60 = v12;
  if ( *(_WORD *)(v12 + 66) )
  {
    LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, a6);
    CmpUnlockRegistry(v47, v46);
    CmpDetachFromRegistryProcess(v69);
    return LayeredKey;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
      goto LABEL_4;
    CmpLockKcbShared(v12);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyData = -1073740763;
      if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        KeyData = -1073741444;
      CmpUnlockKcb(v12);
      CmpUnlockRegistry(v49, v48);
      CmpDetachFromRegistryProcess(v69);
      return (unsigned int)KeyData;
    }
    CmpUnlockKcb(v12);
    v44 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, v54);
    if ( v44 >= 0 )
    {
      v10 = v54[0];
LABEL_4:
      if ( a2 )
      {
        v12 = *(_QWORD *)(a2 + 8);
        v60 = v12;
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
          v26 = -1073741444;
          if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            v26 = -1073740763;
          KeyData = v26;
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
              *a4 = CmGetKeyFlags(v12, v10, v20, v21);
              a4[1] = 0;
              v22 = 0;
              if ( *(int *)(v12 + 40) < 0 )
              {
                v22 = 1;
                a4[1] = 1;
              }
              v23 = *(_DWORD *)(v12 + 184);
              if ( (v23 & 0x100000) != 0 )
              {
                a4[1] = v22 | 2;
                v23 = *(_DWORD *)(v12 + 184);
              }
              a4[2] = (unsigned __int8)v23 >> 4;
              KeyData = 0;
            }
            v17 = v52;
            break;
          case 6:
            memset(&SubjectContext, 0, sizeof(SubjectContext));
            CurrentThread = KeGetCurrentThread();
            CurrentThreadProcess = PsGetCurrentThreadProcess();
            SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
            v29 = 4;
            *a6 = 4;
            if ( a5 >= 4 )
            {
              v30 = v60;
              v31 = KCBNeedsVirtualImage_0(v60);
              v17 = v52;
              v32 = v31 | *v52 & 0xFFFFFFFE;
              *v52 = v32;
              v33 = v32 & 0xFFFFFFFD;
              *v17 = v33;
              v34 = v33;
              if ( v31 && (*(_DWORD *)(v30 + 184) & 0x20) == 0 )
              {
                v34 = v33 | 2;
                *v17 = v33 | 2;
              }
              if ( !CmpVEEnabled || (*(_DWORD *)(v30 + 184) & 0x1000000) == 0 )
                v29 = 0;
              v35 = v29 | v34 & 0xFFFFFFFB;
              *v17 = v35;
              v36 = v35 ^ ((unsigned __int8)v35 ^ (unsigned __int8)(*(_DWORD *)(v30 + 184) >> 22)) & 8;
              *v17 = v36;
              *v17 = v36 ^ ((unsigned __int8)v36 ^ (unsigned __int8)(*(_DWORD *)(v30 + 184) >> 19)) & 0x10;
              KeyData = 0;
            }
            else
            {
              KeyData = -1073741789;
              v17 = v52;
            }
            SeReleaseSubjectContext(&SubjectContext);
            v10 = v54[0];
            break;
          case 8:
            *a6 = 4;
            if ( a5 >= 4 )
            {
              v24 = *a4;
              if ( (*(_DWORD *)(*(_QWORD *)(v12 + 32) + 4152LL) & 1) != 0 )
                v25 = v24 & 0xFFFFFFFE;
              else
                v25 = v24 | 1;
              *a4 = v25;
              KeyData = 0;
              v17 = v52;
LABEL_23:
              if ( a2 )
              {
                if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
                {
                  v37 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL);
                  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) < v37 )
                    *(_QWORD *)v17 = v37;
                }
                if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
                {
                  v50[0] = 0;
                  v63 = 0LL;
                  v55 = 0;
                  v66 = 0LL;
                  v67 = 0LL;
                  v68 = 0LL;
                  if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                       *(_QWORD *)(a2 + 8),
                                       *(_QWORD *)(a1 + 8),
                                       -1,
                                       v10,
                                       (__int64)&v62,
                                       (__int64)&v63,
                                       (__int64)&v55,
                                       0LL,
                                       (__int64)v50) == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v17[5] = v50[0];
                    else
                      v17[3] = v50[0];
                  }
                  LOBYTE(v38) = 1;
                  if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v38, -1, 0, 0LL, 0, 0LL, (__int64)v50) == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v17[8] = v50[0];
                    else
                      v17[5] = v50[0];
                  }
                  KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (int)&v66, 48, (__int64)a6, v10);
                  if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
                  {
                    if ( a3 == 2 )
                    {
                      if ( DWORD2(v67) > v17[6] )
                        v17[6] = DWORD2(v67);
                      if ( DWORD1(v68) > v17[9] )
                        v17[9] = DWORD1(v68);
                      if ( DWORD2(v68) > v17[10] )
                        v17[10] = DWORD2(v68);
                    }
                    else
                    {
                      if ( (unsigned int)v67 > v17[4] )
                        v17[4] = v67;
                      if ( DWORD2(v67) > v17[6] )
                        v17[6] = DWORD2(v67);
                      if ( HIDWORD(v67) > v17[7] )
                        v17[7] = HIDWORD(v67);
                    }
                  }
                }
              }
              else if ( CmpVEEnabled )
              {
                v19 = *(_QWORD *)(a1 + 8);
                if ( (*(_DWORD *)(v19 + 184) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
                {
                  v51 = 0;
                  v64 = 0LL;
                  v56 = 0;
                  KeyData = CmpFindSubKeyByNumberFromMergedView(
                              v19,
                              0,
                              -1,
                              v10,
                              (__int64)&v62,
                              (__int64)&v64,
                              (__int64)&v56,
                              0LL,
                              (__int64)&v51);
                  if ( KeyData == -2147483622 )
                  {
                    if ( a3 == 2 )
                      v17[5] = v51;
                    else
                      v17[3] = v51;
                    KeyData = 0;
                  }
                }
              }
              goto LABEL_102;
            }
            KeyData = -1073741789;
LABEL_102:
            if ( a2 )
              CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(v61 + 8));
            else
              CmpUnlockKcb(*(_QWORD *)(v61 + 8));
            CmpDrainDelayDerefContext((_QWORD **)&v62);
            CmpUnlockRegistry(v40, v39);
            CmpDetachFromRegistryProcess(v69);
            if ( UnicodeString.Buffer )
            {
              RtlFreeAnsiString(&UnicodeString);
            }
            else if ( v53 )
            {
              CmpFreeTransientPoolWithTag(v53, 0x624E4D43u);
            }
            return (unsigned int)KeyData;
          default:
            KeyData = CmpQueryKeyData(v12, a3, (int)a4, a5, (__int64)a6, v10);
            v17 = v52;
            break;
        }
LABEL_22:
        if ( KeyData >= 0 )
          goto LABEL_23;
        goto LABEL_102;
      }
      v13 = *(_QWORD *)(a1 + 8);
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
      if ( !*(_QWORD *)(v13 + 80) )
      {
LABEL_56:
        KeyData = -1073741670;
        goto LABEL_102;
      }
      if ( CmpVEEnabled && (*(_DWORD *)(v13 + 184) & 0x1000000) != 0 )
      {
        if ( (int)CmVirtualKCBToRealPath(v13, &UnicodeString) < 0 )
        {
LABEL_15:
          if ( v53 )
          {
            v16 = *(unsigned __int16 *)v53;
            *a6 = v16 + 4;
            v17 = v52;
            if ( a5 < 4 )
            {
              KeyData = -1073741789;
            }
            else
            {
              *v52 = v16;
              v18 = a5 - 4;
              if ( a5 - 4 >= v16 )
                v18 = v16;
              else
                KeyData = -2147483643;
              memmove(v17 + 1, v53[1], v18);
            }
            goto LABEL_22;
          }
          goto LABEL_56;
        }
        p_UnicodeString = (const void **)&UnicodeString;
      }
      else
      {
        p_UnicodeString = (const void **)CmpConstructName(v13);
      }
      v53 = p_UnicodeString;
      goto LABEL_15;
    }
    CmpUnlockRegistry(v43, v42);
    CmpDetachFromRegistryProcess(v69);
    return (unsigned int)v44;
  }
}
