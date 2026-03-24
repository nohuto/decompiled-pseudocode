/*
 * XREFs of CmEnumerateKey @ 0x1405F4350
 * Callers:
 *     NtEnumerateKey @ 0x1405F3E50 (NtEnumerateKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1403510E8 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140351100 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1405EE808 (CmpKeyNodeNeedsAccessBitUpdate.c)
 *     CmpFindSubKeyByNumberEx @ 0x1405F35A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpLockTwoKcbsShared @ 0x1405F38C0 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1405F3950 (CmpUnlockTwoKcbs.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405F4700 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1405F613C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     HvUnlockHiveFlusherShared @ 0x14066628C (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x1406662C4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1406662E0 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpQueryKeyDataFromNode @ 0x14066AB20 (CmpQueryKeyDataFromNode.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A3094 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1406F5F10 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1406FB610 (CmpDereferenceKeyControlBlock.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140870448 (CmpFindSubKeyByNumberFromMergedView.c)
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
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // edi
  __int64 v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  char v28; // al
  __int64 *v29; // rax
  int v30; // edx
  int v31; // ecx
  __int64 v32; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v33[2]; // [rsp+60h] [rbp-A8h] BYREF
  ULONG v34; // [rsp+68h] [rbp-A0h]
  int v35; // [rsp+6Ch] [rbp-9Ch]
  ULONG_PTR *v36; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h] BYREF
  __int64 v38; // [rsp+80h] [rbp-88h] BYREF
  __int64 v39; // [rsp+88h] [rbp-80h]
  __int64 v40; // [rsp+90h] [rbp-78h]
  __int128 v41; // [rsp+98h] [rbp-70h] BYREF
  struct _PRIVILEGE_SET *v42; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h]
  _OWORD v44[3]; // [rsp+B8h] [rbp-50h] BYREF

  v9 = 0LL;
  v40 = a5;
  v11 = 0LL;
  v39 = a7;
  v33[1] = 0;
  v35 = a4;
  v34 = a3;
  v43 = a2;
  HIDWORD(v32) = 0;
  memset(v44, 0, sizeof(v44));
  v38 = 0LL;
  v33[0] = -1;
  v37 = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  v42 = 0LL;
  CmpInitializeDelayDerefContext(&v41);
  CmpAttachToRegistryProcess(v44);
  if ( *(_WORD *)(a1[1] + 66LL) )
  {
    do
    {
      v28 = (unsigned int)v9 <= 0xA;
      LODWORD(v9) = (_DWORD)v9 + 1;
      SubKeyByNumber = CmpEnumerateLayeredKey((__int64)a1, a3, v35, v40, a6, v39, &v42, v28);
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
      || (SubKeyByNumber = CmpTransSearchAddTransFromKeyBody(a1, &v37), SubKeyByNumber >= 0)
      && (v11 = v37, SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, v37), SubKeyByNumber >= 0) )
    {
      v18 = v43;
      if ( v43 )
      {
        SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(v43, v11);
        if ( SubKeyByNumber < 0 )
          goto LABEL_22;
      }
      else if ( !CmpVEEnabled || (*(_DWORD *)(v14 + 184) & 0x1000000) == 0 )
      {
        v19 = *(_QWORD *)(v14 + 32);
        if ( v11 )
        {
          v9 = (ULONG_PTR *)&v36;
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
                           v34,
                           (_DWORD *)&v32 + 1,
                           v21,
                           v20,
                           v11,
                           (__int64)&v41,
                           v9);
        if ( SubKeyByNumber >= 0 )
          goto LABEL_16;
        goto LABEL_28;
      }
      v29 = (__int64 *)&v36;
      if ( !v11 )
        v29 = 0LL;
      v30 = v14;
      v31 = v16;
      if ( !v18 )
      {
        v30 = 0;
        v31 = v14;
      }
      SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                         v31,
                         v30,
                         v34,
                         v11,
                         (__int64)&v41,
                         (__int64)&v38,
                         (__int64)&v32 + 4,
                         (__int64)v29,
                         (__int64)&v37);
      if ( SubKeyByNumber >= 0 )
      {
        v19 = v38;
LABEL_16:
        v22 = HIDWORD(v32);
        if ( HIDWORD(v32) != -1 )
        {
          v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v19 + 8))(v19, HIDWORD(v32), v33);
          if ( CmpKeyNodeNeedsAccessBitUpdate(v19, v23) )
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(v19 + 16))(v24, v33);
            HvLockHiveFlusherShared(v19);
            v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v19 + 8))(v19, v22, v33);
            CmpUpdateKeyNodeAccessBits(v19, v23, v22);
            HvUnlockHiveFlusherShared(v19);
          }
          v9 = v36;
          SubKeyByNumber = CmpQueryKeyDataFromNode(v19, v23, v35, v40, a6, v39, (__int64)v36, v11);
          if ( v23 )
            (*(void (__fastcall **)(__int64, _DWORD *))(v19 + 16))(v19, v33);
          v15 = 1;
          goto LABEL_22;
        }
        SubKeyByNumber = -2147483622;
      }
LABEL_28:
      v9 = v36;
    }
  }
LABEL_22:
  CmpUnlockTwoKcbs(v16, v14);
  if ( v9 )
    CmpDereferenceKeyControlBlock((ULONG_PTR)v9);
LABEL_24:
  CmpDrainDelayDerefContext((_QWORD **)&v41);
  if ( v15 )
    CmpUnlockRegistry(v26, v25);
  CmpDetachFromRegistryProcess(v44);
  return (unsigned int)SubKeyByNumber;
}
