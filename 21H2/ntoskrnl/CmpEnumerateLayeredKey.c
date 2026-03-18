/*
 * XREFs of CmpEnumerateLayeredKey @ 0x140914324
 * Callers:
 *     CmEnumerateKey @ 0x1407C16A0 (CmEnumerateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140225E68 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpInitializeDelayDerefContext @ 0x1402AD320 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpIsRegistryLockContended @ 0x14053F0D4 (CmpIsRegistryLockContended.c)
 *     CmpKeyEnumStackAdvance @ 0x14065B900 (CmpKeyEnumStackAdvance.c)
 *     CmpGetKeyNodeForKcb @ 0x14067E828 (CmpGetKeyNodeForKcb.c)
 *     CmpKeyEnumStackCleanup @ 0x14069F024 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x14069F1F4 (CmpKeyEnumStackInitialize.c)
 *     CmpFindSubKeyByNumber @ 0x1406BF278 (CmpFindSubKeyByNumber.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmpLockKcbStackShared @ 0x140721B68 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140721BAC (CmpUnlockKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x140721CE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1407C05F4 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpQueryKeyDataFromNode @ 0x1407C3490 (CmpQueryKeyDataFromNode.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x140920D44 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140920E78 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140920F1C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140921018 (CmpKeyEnumStackVerifyResumeContext.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 */

__int64 __fastcall CmpEnumerateLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        PPRIVILEGE_SET *a7,
        char a8)
{
  __int64 KcbAtLayerHeight; // r13
  _DWORD *KeyNodeForKcb; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  PPRIVILEGE_SET v16; // rbx
  int started; // edi
  __int16 v18; // dx
  __int16 v19; // dx
  char v20; // r8
  _DWORD *v21; // r9
  __int16 v22; // r10
  int v23; // esi
  int v24; // r9d
  int ResumeContext; // eax
  __int64 v26; // rcx
  ULONG_PTR v27; // rcx
  __int64 CellFlat; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v35; // [rsp+40h] [rbp-C0h]
  PPRIVILEGE_SET v36[2]; // [rsp+48h] [rbp-B8h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  PPRIVILEGE_SET v42; // [rsp+80h] [rbp-80h]
  __int128 v43; // [rsp+88h] [rbp-78h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+98h] [rbp-68h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  __int128 v47; // [rsp+B8h] [rbp-48h] BYREF
  PPRIVILEGE_SET *v48; // [rsp+C8h] [rbp-38h]
  __int16 v49[176]; // [rsp+D0h] [rbp-30h] BYREF

  v40 = a3;
  v45 = a6;
  v48 = a7;
  v46 = a4;
  memset(v49, 0, sizeof(v49));
  v39 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v38 = 0LL;
  v43 = 0LL;
  WORD1(v43) = -1;
  v47 = 0LL;
  v35 = 0;
  *(_OWORD *)Privileges = 0LL;
  CmpKeyEnumStackInitialize((char *)v49);
  KcbAtLayerHeight = 0LL;
  KeyNodeForKcb = 0LL;
  HvpGetCellContextReinitialize(&v39);
  v41 = 0LL;
  HvpGetCellContextReinitialize(&v38);
  v42 = 0LL;
  CmpInitializeDelayDerefContext(&v47);
  v16 = *a7;
  *a7 = 0LL;
  v36[0] = v16;
  if ( a3 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v14, v13, v15);
  started = CmpStartKcbStackForTopLayerKcb((__int64)&v43, *(_QWORD *)(a1 + 8));
  if ( started >= 0 )
  {
    CmpLockKcbStackShared((__int64)&v43);
    v35 = 1;
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started >= 0 )
    {
      v18 = WORD1(v43);
      if ( SWORD1(v43) <= 0 )
        goto LABEL_33;
      do
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)&v43, v18);
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
          v20 = 1;
        v18 = v22 + v19;
      }
      while ( v18 > 0 );
      KeyNodeForKcb = v21;
      if ( v20 )
      {
        if ( v16
          || (v16 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), 0LL), (v36[0] = v16) != 0LL) )
        {
          if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext(&v43, v16) == -1073741735 || v16->Control > a2 )
          {
            v42 = v16;
            v16 = 0LL;
            v36[0] = 0LL;
          }
        }
        started = CmpKeyEnumStackStartFromKcbStack(v49, &v43, a1, v16);
        if ( started >= 0 )
        {
          if ( v16 )
          {
            LODWORD(KeyNodeForKcb) = v16->Control;
            v42 = v16;
            v16 = 0LL;
            v36[0] = 0LL;
          }
          started = CmpKeyEnumStackAdvance(v49);
          if ( started < 0 )
          {
            KeyNodeForKcb = 0LL;
          }
          else
          {
            v23 = (int)KeyNodeForKcb;
            if ( (unsigned int)KeyNodeForKcb >= a2 )
            {
LABEL_26:
              ResumeContext = CmpKeyEnumStackCreateResumeContext(
                                (unsigned int)&v43,
                                (unsigned int)v49,
                                v23,
                                0,
                                (__int64)v36);
              v16 = v36[0];
              if ( ResumeContext >= 0 )
                v16 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), (__int64)v36[0]);
              started = CmpQueryKeyDataFromKeyNodeStack(&v49[4], v40, v46, a5, v45);
              KeyNodeForKcb = 0LL;
              if ( started >= 0 )
                started = 0;
            }
            else
            {
              while ( !CmpIsRegistryLockContended() || (unsigned int)(v23 - (_DWORD)KeyNodeForKcb) < 0xA || !a8 )
              {
                started = CmpKeyEnumStackAdvance(v49);
                if ( started < 0 )
                {
                  KeyNodeForKcb = 0LL;
                  goto LABEL_36;
                }
                if ( ++v23 >= a2 )
                  goto LABEL_26;
              }
              LOBYTE(v24) = 1;
              started = CmpKeyEnumStackCreateResumeContext(
                          (unsigned int)&v43,
                          (unsigned int)v49,
                          v23,
                          v24,
                          (__int64)v36);
              KeyNodeForKcb = 0LL;
              if ( started < 0 )
              {
                v16 = v36[0];
              }
              else
              {
                v16 = 0LL;
                started = -1073741267;
                *v48 = v36[0];
              }
            }
          }
        }
      }
      else
      {
LABEL_33:
        KcbAtLayerHeight = *((_QWORD *)&v43 + 1);
        KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(*((__int64 *)&v43 + 1), (__int64)&v39, 0);
        started = CmpFindSubKeyByNumber(*(_QWORD *)(KcbAtLayerHeight + 32), KeyNodeForKcb, a2, &BugCheckParameter4);
        if ( started >= 0 )
        {
          if ( (_DWORD)BugCheckParameter4 == -1 )
          {
            started = -2147483622;
          }
          else
          {
            v27 = *(_QWORD *)(KcbAtLayerHeight + 32);
            if ( (*(_BYTE *)(v27 + 140) & 1) != 0 )
              CellFlat = HvpGetCellFlat(v27, (unsigned int)BugCheckParameter4, &v38);
            else
              CellFlat = HvpGetCellPaged(v27, BugCheckParameter4, (unsigned int *)&v38);
            v41 = CellFlat;
            started = CmpQueryKeyDataFromNode(
                        *(_QWORD *)(KcbAtLayerHeight + 32),
                        CellFlat,
                        a3,
                        v46,
                        a5,
                        (unsigned int *)v45,
                        0LL,
                        0LL);
            if ( started >= 0 )
              started = 0;
          }
        }
      }
    }
  }
LABEL_36:
  CmpKeyEnumStackCleanup((__int64)v49);
  if ( v41 )
  {
    v26 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v26 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v26, &v38);
    else
      HvpReleaseCellPaged(v26, (unsigned int *)&v38);
  }
  if ( KeyNodeForKcb )
  {
    v29 = *(_QWORD *)(KcbAtLayerHeight + 32);
    if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v29, &v39);
    else
      HvpReleaseCellPaged(v29, (unsigned int *)&v39);
  }
  if ( v35 )
    CmpUnlockKcbStack((__int64)&v43);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v16 )
    CmpKeyEnumStackFreeResumeContext(v16);
  if ( v42 )
    CmpKeyEnumStackFreeResumeContext(v42);
  CmpDrainDelayDerefContext((_QWORD **)&v47);
  CmpUnlockRegistry(v31, v30, v32, v33);
  return (unsigned int)started;
}
