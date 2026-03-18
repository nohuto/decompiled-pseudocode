/*
 * XREFs of CmpEnumerateLayeredKey @ 0x1405D5580
 * Callers:
 *     CmEnumerateKey @ 0x140677010 (CmEnumerateKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpIsRegistryLockContended @ 0x1404EB0EC (CmpIsRegistryLockContended.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x1404EC17C (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpCleanupKcbStack @ 0x14061B470 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x14061B4F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14066FBB0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpFindSubKeyByNumber @ 0x140676190 (CmpFindSubKeyByNumber.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpKeyEnumStackCleanup @ 0x1406BDC48 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x1406BDDE4 (CmpKeyEnumStackInitialize.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmpGetKeyNodeForKcb @ 0x1407028D4 (CmpGetKeyNodeForKcb.c)
 *     CmpQueryKeyDataFromNode @ 0x140703360 (CmpQueryKeyDataFromNode.c)
 *     CmpKeyEnumStackAdvance @ 0x140726068 (CmpKeyEnumStackAdvance.c)
 *     CmpReleaseKeyNodeForKcb @ 0x140866204 (CmpReleaseKeyNodeForKcb.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087CE68 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x14087D1BC (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x14087D2FC (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x14087D3E8 (CmpKeyEnumStackVerifyResumeContext.c)
 */

__int64 __fastcall CmpEnumerateLayeredKey(
        __int64 a1,
        ULONG a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        struct _PRIVILEGE_SET **a7,
        char a8)
{
  char v10; // si
  __int64 v11; // r13
  struct _PRIVILEGE_SET *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _PRIVILEGE_SET *v15; // rbx
  __int64 v16; // rax
  int started; // edi
  __int64 v18; // r9
  __int64 KcbAtLayerHeight; // rax
  __int16 v20; // dx
  __int64 v21; // r10
  __int16 v22; // r11
  __int64 KeyNodeForKcb; // r15
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  ULONG Control; // r14d
  ULONG v30; // esi
  int v31; // r9d
  int v32; // eax
  int ResumeContext; // eax
  int KeyDataFromKeyNodeStack; // eax
  struct _PRIVILEGE_SET *v35; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+58h] [rbp-A8h]
  ULONG v38; // [rsp+5Ch] [rbp-A4h]
  unsigned int v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v42[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v43; // [rsp+98h] [rbp-68h]
  __int64 v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int128 v46; // [rsp+B0h] [rbp-50h] BYREF
  struct _PRIVILEGE_SET **v47; // [rsp+C0h] [rbp-40h]
  __int16 v48[176]; // [rsp+D0h] [rbp-30h] BYREF

  v37 = a3;
  v38 = a2;
  v43 = a6;
  v47 = a7;
  v44 = a4;
  memset(v48, 0, sizeof(v48));
  v39 = 0;
  memset(v42, 0, sizeof(v42));
  WORD1(v42[0]) = -1;
  v10 = 0;
  v46 = 0LL;
  CmpKeyEnumStackInitialize(v48);
  v41 = 0xFFFFFFFFLL;
  v11 = 0LL;
  v40 = 0xFFFFFFFFLL;
  v12 = 0LL;
  v36 = 0LL;
  v45 = 0LL;
  CmpInitializeDelayDerefContext(&v46);
  v15 = *a7;
  *a7 = (struct _PRIVILEGE_SET *)(v16 & (unsigned __int64)*a7);
  v35 = v15;
  if ( v37 == 2 )
    CmpLockRegistryExclusive(v14, v13);
  else
    CmpLockRegistry();
  started = CmpStartKcbStackForTopLayerKcb(v42, *(_QWORD *)(a1 + 8));
  if ( started < 0 )
  {
    KeyNodeForKcb = 0LL;
  }
  else
  {
    CmpLockKcbStackShared(v42);
    v10 = 1;
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started < 0 )
    {
      KeyNodeForKcb = 0LL;
    }
    else
    {
      LOBYTE(v18) = 0;
      if ( SWORD1(v42[0]) <= 0 )
        goto LABEL_10;
      do
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v42);
        v18 = (unsigned __int8)v18;
        v11 = KcbAtLayerHeight;
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
          v18 = 1LL;
      }
      while ( (__int16)(v22 + v20) > 0 );
      if ( (_BYTE)v18 )
      {
        if ( v15
          || (v15 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(a1 + 88), v21),
              (v35 = v15) != 0LL) )
        {
          if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext(v42, v15) == -1073741735 || v15->Control > a2 )
          {
            v12 = v15;
            v15 = 0LL;
            v35 = 0LL;
          }
        }
        started = CmpKeyEnumStackStartFromKcbStack(v48, v42, v15);
        if ( started < 0
          || (!v15 ? (struct _PRIVILEGE_SET *)(Control = 0) : (Control = v15->Control, v12 = v15, v15 = 0LL, v35 = 0LL),
              started = CmpKeyEnumStackAdvance(v48),
              started < 0) )
        {
LABEL_52:
          KeyNodeForKcb = 0LL;
        }
        else
        {
          v30 = Control;
          if ( Control >= v38 )
          {
LABEL_45:
            ResumeContext = CmpKeyEnumStackCreateResumeContext(
                              (unsigned int)v42,
                              (unsigned int)v48,
                              v30,
                              0,
                              (__int64)&v35);
            v15 = v35;
            if ( ResumeContext >= 0 )
              v15 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(a1 + 88), (__int64)v35);
            KeyDataFromKeyNodeStack = CmpQueryKeyDataFromKeyNodeStack(&v48[4], v37, v44, a5, v43);
            KeyNodeForKcb = v36;
            started = KeyDataFromKeyNodeStack;
            if ( KeyDataFromKeyNodeStack >= 0 )
              started = 0;
            v10 = 1;
          }
          else
          {
            while ( !CmpIsRegistryLockContended() || v30 - Control < 0xA || !a8 )
            {
              started = CmpKeyEnumStackAdvance(v48);
              if ( started < 0 )
              {
                v10 = 1;
                goto LABEL_52;
              }
              if ( ++v30 >= v38 )
                goto LABEL_45;
            }
            LOBYTE(v31) = 1;
            v32 = CmpKeyEnumStackCreateResumeContext((unsigned int)v42, (unsigned int)v48, v30, v31, (__int64)&v35);
            v10 = 1;
            started = v32;
            KeyNodeForKcb = 0LL;
            if ( v32 < 0 )
            {
              v15 = v35;
            }
            else
            {
              v15 = 0LL;
              started = -1073741267;
              *v47 = v35;
            }
          }
        }
      }
      else
      {
LABEL_10:
        v11 = *((_QWORD *)&v42[0] + 1);
        KeyNodeForKcb = CmpGetKeyNodeForKcb(*((_QWORD *)&v42[0] + 1), &v41, 0LL, v18);
        started = CmpFindSubKeyByNumber(*(_QWORD *)(v11 + 32), KeyNodeForKcb, a2, &v39);
        if ( started >= 0 )
        {
          if ( v39 == -1 )
          {
            started = -2147483622;
          }
          else
          {
            v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v11 + 32) + 8LL))(
                    *(_QWORD *)(v11 + 32),
                    v39,
                    &v40);
            v25 = *(_QWORD *)(v11 + 32);
            v45 = v24;
            started = CmpQueryKeyDataFromNode(v25, v24, v37, v44, a5, v43, 0LL, 0LL);
            if ( started >= 0 )
              started = 0;
          }
        }
      }
    }
  }
  CmpKeyEnumStackCleanup(v48);
  if ( v45 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(v11 + 32) + 16LL))(*(_QWORD *)(v11 + 32), &v40);
  if ( KeyNodeForKcb )
    CmpReleaseKeyNodeForKcb(v11, &v41);
  if ( v10 )
    CmpUnlockKcbStack(v42);
  CmpCleanupKcbStack(v42);
  if ( v15 )
    CmpKeyEnumStackFreeResumeContext(v15);
  if ( v12 )
    CmpKeyEnumStackFreeResumeContext(v12);
  CmpDrainDelayDerefContext((_QWORD **)&v46);
  CmpUnlockRegistry(v27, v26);
  return (unsigned int)started;
}
