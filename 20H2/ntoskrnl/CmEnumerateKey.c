/*
 * XREFs of CmEnumerateKey @ 0x140677010
 * Callers:
 *     NtEnumerateKey @ 0x140676B10 (NtEnumerateKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140227238 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140227250 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     CmpEnumerateLayeredKey @ 0x1405D5580 (CmpEnumerateLayeredKey.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140616990 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x14061B720 (CmpDereferenceKeyControlBlock.c)
 *     HvUnlockHiveFlusherShared @ 0x14067010C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140670144 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140670160 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x140672198 (CmpKeyNodeNeedsAccessBitUpdate.c)
 *     CmpFindSubKeyByNumberEx @ 0x140676250 (CmpFindSubKeyByNumberEx.c)
 *     CmpLockTwoKcbsShared @ 0x140676570 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140676600 (CmpUnlockTwoKcbs.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406773C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x140678E90 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406790E0 (CmpAttachToRegistryProcess.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmpQueryKeyDataFromNode @ 0x140703360 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140872C18 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(_QWORD *a1, __int64 a2, ULONG a3, int a4, __int64 a5, unsigned int a6, __int64 a7)
{
  ULONG_PTR *v9; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  ULONG_PTR v14; // r14
  char v15; // r15
  ULONG_PTR v16; // r13
  int SubKeyByNumber; // esi
  __int64 v18; // rbx
  ULONG_PTR v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // r15
  __int64 v24; // rcx
  char v26; // al
  __int64 *v27; // rax
  int v28; // edx
  int v29; // ecx
  __int64 v30; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v31[2]; // [rsp+60h] [rbp-A8h] BYREF
  ULONG v32; // [rsp+68h] [rbp-A0h]
  int v33; // [rsp+6Ch] [rbp-9Ch]
  ULONG_PTR *v34; // [rsp+70h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v36; // [rsp+80h] [rbp-88h] BYREF
  __int64 v37; // [rsp+88h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-78h]
  __int128 v39; // [rsp+98h] [rbp-70h] BYREF
  struct _PRIVILEGE_SET *v40; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-58h]
  _OWORD v42[3]; // [rsp+B8h] [rbp-50h] BYREF

  v9 = 0LL;
  v38 = a5;
  v11 = 0LL;
  v37 = a7;
  v31[1] = 0;
  v33 = a4;
  v32 = a3;
  v41 = a2;
  HIDWORD(v30) = 0;
  memset(v42, 0, sizeof(v42));
  v36 = 0LL;
  v31[0] = -1;
  v35 = 0LL;
  v39 = 0LL;
  v34 = 0LL;
  v40 = 0LL;
  CmpInitializeDelayDerefContext(&v39);
  CmpAttachToRegistryProcess(v42);
  if ( *(_WORD *)(a1[1] + 66LL) )
  {
    do
    {
      v26 = (unsigned int)v9 <= 0xA;
      LODWORD(v9) = (_DWORD)v9 + 1;
      SubKeyByNumber = CmpEnumerateLayeredKey((__int64)a1, a3, v33, v38, a6, v37, &v40, v26);
    }
    while ( SubKeyByNumber == -1073741267 );
    v15 = 0;
    goto LABEL_24;
  }
  if ( a1[7] || a1[8] )
    CmpLockRegistryExclusive(v13, v12);
  else
    CmpLockRegistry();
  v14 = a1[1];
  v15 = 1;
  if ( a2 )
    v16 = *(_QWORD *)(a2 + 8);
  else
    v16 = 0LL;
  CmpLockTwoKcbsShared(v16, v14);
  SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( SubKeyByNumber >= 0 )
  {
    if ( !a1[7] && !a1[8]
      || (SubKeyByNumber = CmpTransSearchAddTransFromKeyBody(a1, &v35), SubKeyByNumber >= 0)
      && (v11 = v35, SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, v35), SubKeyByNumber >= 0) )
    {
      v18 = v41;
      if ( v41 )
      {
        SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(v41, v11);
        if ( SubKeyByNumber < 0 )
          goto LABEL_22;
      }
      else if ( !CmpVEEnabled || (*(_DWORD *)(v14 + 184) & 0x1000000) == 0 )
      {
        v19 = *(_QWORD *)(v14 + 32);
        if ( v11 )
        {
          v9 = (ULONG_PTR *)&v34;
          v20 = v16;
          v21 = v14;
        }
        else
        {
          v20 = 0LL;
          v21 = 0LL;
        }
        SubKeyByNumber = CmpFindSubKeyByNumberEx(
                           v19,
                           *(unsigned int *)(v14 + 40),
                           v32,
                           (_DWORD *)&v30 + 1,
                           v21,
                           v20,
                           v11,
                           (__int64)&v39,
                           v9);
        if ( SubKeyByNumber >= 0 )
          goto LABEL_16;
        goto LABEL_28;
      }
      v27 = (__int64 *)&v34;
      if ( !v11 )
        v27 = 0LL;
      v28 = v14;
      v29 = v16;
      if ( !v18 )
      {
        v28 = 0;
        v29 = v14;
      }
      SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                         v29,
                         v28,
                         v32,
                         v11,
                         (__int64)&v39,
                         (__int64)&v36,
                         (__int64)&v30 + 4,
                         (__int64)v27,
                         (__int64)&v35);
      if ( SubKeyByNumber >= 0 )
      {
        v19 = v36;
LABEL_16:
        v22 = HIDWORD(v30);
        if ( HIDWORD(v30) != -1 )
        {
          v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v19 + 8))(v19, HIDWORD(v30), v31);
          if ( CmpKeyNodeNeedsAccessBitUpdate(v19, v23) )
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(v19 + 16))(v24, v31);
            HvLockHiveFlusherShared(v19);
            v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v19 + 8))(v19, v22, v31);
            CmpUpdateKeyNodeAccessBits(v19, v23, v22);
            HvUnlockHiveFlusherShared(v19);
          }
          v9 = v34;
          SubKeyByNumber = CmpQueryKeyDataFromNode(v19, v23, v33, v38, a6, v37, (__int64)v34, v11);
          if ( v23 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v19 + 16))(v19, v31);
          v15 = 1;
          goto LABEL_22;
        }
        SubKeyByNumber = -2147483622;
      }
LABEL_28:
      v9 = v34;
    }
  }
LABEL_22:
  CmpUnlockTwoKcbs(v16, v14);
  if ( v9 )
    CmpDereferenceKeyControlBlock((ULONG_PTR)v9);
LABEL_24:
  CmpDrainDelayDerefContext((_QWORD **)&v39);
  if ( v15 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess(v42);
  return (unsigned int)SubKeyByNumber;
}
