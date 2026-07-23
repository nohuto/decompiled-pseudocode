/*
 * XREFs of CmEnumerateKey @ 0x1406E3AB0
 * Callers:
 *     NtEnumerateKey @ 0x1406E35B0 (NtEnumerateKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x14035BE38 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x14035BE50 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpEnumerateLayeredKey @ 0x1405D8520 (CmpEnumerateLayeredKey.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     HvUnlockHiveFlusherShared @ 0x14065B0AC (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14065B0E4 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpQueryKeyDataFromNode @ 0x14065F940 (CmpQueryKeyDataFromNode.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1406DDF68 (CmpKeyNodeNeedsAccessBitUpdate.c)
 *     CmpFindSubKeyByNumberEx @ 0x1406E2D00 (CmpFindSubKeyByNumberEx.c)
 *     CmpLockTwoKcbsShared @ 0x1406E3020 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1406E30B0 (CmpUnlockTwoKcbs.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406E3E60 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpDetachFromRegistryProcess @ 0x1406E589C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpDereferenceKeyControlBlock @ 0x1407129F0 (CmpDereferenceKeyControlBlock.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1408705A8 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(
        _QWORD *a1,
        __int64 a2,
        ULONG a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  ULONG_PTR *v9; // rdi
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned __int64 v13; // r14
  char v14; // r15
  unsigned __int64 v15; // r13
  int SubKeyByNumber; // esi
  __int64 v17; // rbx
  ULONG_PTR v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // edi
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v27; // al
  __int64 *v28; // rax
  int v29; // edx
  int v30; // ecx
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v32[2]; // [rsp+60h] [rbp-A8h] BYREF
  ULONG v33; // [rsp+68h] [rbp-A0h]
  unsigned int v34; // [rsp+6Ch] [rbp-9Ch]
  ULONG_PTR *v35; // [rsp+70h] [rbp-98h] BYREF
  __int64 v36; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v37; // [rsp+80h] [rbp-88h] BYREF
  unsigned int *v38; // [rsp+88h] [rbp-80h]
  __int64 v39; // [rsp+90h] [rbp-78h]
  __int128 v40; // [rsp+98h] [rbp-70h] BYREF
  struct _PRIVILEGE_SET *v41; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v42; // [rsp+B0h] [rbp-58h]
  _OWORD v43[3]; // [rsp+B8h] [rbp-50h] BYREF

  v9 = 0LL;
  v39 = a5;
  v11 = 0LL;
  v38 = a7;
  v32[1] = 0;
  v34 = a4;
  v33 = a3;
  v42 = a2;
  HIDWORD(v31) = 0;
  memset(v43, 0, sizeof(v43));
  v37 = 0LL;
  v32[0] = -1;
  v36 = 0LL;
  v40 = 0LL;
  v35 = 0LL;
  v41 = 0LL;
  CmpInitializeDelayDerefContext(&v40);
  CmpAttachToRegistryProcess(v43);
  if ( *(_WORD *)(a1[1] + 66LL) )
  {
    do
    {
      v27 = (unsigned int)v9 <= 0xA;
      LODWORD(v9) = (_DWORD)v9 + 1;
      SubKeyByNumber = CmpEnumerateLayeredKey((__int64)a1, a3, v34, v39, a6, (__int64)v38, &v41, v27);
    }
    while ( SubKeyByNumber == -1073741267 );
    v14 = 0;
    goto LABEL_24;
  }
  if ( a1[7] || a1[8] )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry(v12);
  v13 = a1[1];
  v14 = 1;
  if ( a2 )
    v15 = *(_QWORD *)(a2 + 8);
  else
    v15 = 0LL;
  CmpLockTwoKcbsShared(v15, v13);
  SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( SubKeyByNumber >= 0 )
  {
    if ( !a1[7] && !a1[8]
      || (SubKeyByNumber = CmpTransSearchAddTransFromKeyBody(a1, &v36), SubKeyByNumber >= 0)
      && (v11 = v36, SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, v36), SubKeyByNumber >= 0) )
    {
      v17 = v42;
      if ( v42 )
      {
        SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(v42, v11);
        if ( SubKeyByNumber < 0 )
          goto LABEL_22;
      }
      else if ( !CmpVEEnabled || (*(_DWORD *)(v13 + 184) & 0x1000000) == 0 )
      {
        v18 = *(_QWORD *)(v13 + 32);
        if ( v11 )
        {
          v9 = (ULONG_PTR *)&v35;
          v19 = v15;
          v20 = v13;
        }
        else
        {
          v19 = 0LL;
          v20 = 0LL;
        }
        SubKeyByNumber = CmpFindSubKeyByNumberEx(
                           v18,
                           *(unsigned int *)(v13 + 40),
                           v33,
                           (_DWORD *)&v31 + 1,
                           v20,
                           v19,
                           v11,
                           (__int64)&v40,
                           v9);
        if ( SubKeyByNumber >= 0 )
          goto LABEL_16;
        goto LABEL_28;
      }
      v28 = (__int64 *)&v35;
      if ( !v11 )
        v28 = 0LL;
      v29 = v13;
      v30 = v15;
      if ( !v17 )
      {
        v29 = 0;
        v30 = v13;
      }
      SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                         v30,
                         v29,
                         v33,
                         v11,
                         (__int64)&v40,
                         (__int64)&v37,
                         (__int64)&v31 + 4,
                         (__int64)v28,
                         (__int64)&v36);
      if ( SubKeyByNumber >= 0 )
      {
        v18 = v37;
LABEL_16:
        v21 = HIDWORD(v31);
        if ( HIDWORD(v31) != -1 )
        {
          v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v18 + 8))(v18, HIDWORD(v31), v32);
          if ( CmpKeyNodeNeedsAccessBitUpdate(v18, v22) )
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(v18 + 16))(v23, v32);
            HvLockHiveFlusherShared(v18);
            v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v18 + 8))(v18, v21, v32);
            CmpUpdateKeyNodeAccessBits(v18, v22, v21);
            HvUnlockHiveFlusherShared(v18);
          }
          v9 = v35;
          SubKeyByNumber = CmpQueryKeyDataFromNode(v18, v22, v34, v39, a6, v38, (__int64)v35, v11);
          if ( v22 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v18 + 16))(v18, v32);
          v14 = 1;
          goto LABEL_22;
        }
        SubKeyByNumber = -2147483622;
      }
LABEL_28:
      v9 = v35;
    }
  }
LABEL_22:
  CmpUnlockTwoKcbs(v15, v13);
  if ( v9 )
    CmpDereferenceKeyControlBlock((ULONG_PTR)v9);
LABEL_24:
  CmpDrainDelayDerefContext((_QWORD **)&v40);
  if ( v14 )
    CmpUnlockRegistry(v25, v24);
  CmpDetachFromRegistryProcess(v43);
  return (unsigned int)SubKeyByNumber;
}
