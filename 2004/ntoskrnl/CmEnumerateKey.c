/*
 * XREFs of CmEnumerateKey @ 0x140672240
 * Callers:
 *     NtEnumerateKey @ 0x140672B00 (NtEnumerateKey.c)
 * Callees:
 *     CmpDrainDelayDerefContext @ 0x140205E60 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x140205F64 (CmpInitializeDelayDerefContext.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpEnumerateLayeredKey @ 0x1405CF0D0 (CmpEnumerateLayeredKey.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405E2CC4 (CmpUpdateKeyNodeAccessBits.c)
 *     HvLockHiveFlusherShared @ 0x1405E2D14 (HvLockHiveFlusherShared.c)
 *     HvUnlockHiveFlusherShared @ 0x1405E2D30 (HvUnlockHiveFlusherShared.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x1405EC100 (CmpDetachFromRegistryProcess.c)
 *     CmpDereferenceKeyControlBlock @ 0x1405EEA10 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406536B4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1406701EC (CmpKeyNodeNeedsAccessBitUpdate.c)
 *     CmpQueryKeyDataFromNode @ 0x140670220 (CmpQueryKeyDataFromNode.c)
 *     CmpFindSubKeyByNumberEx @ 0x140671DE0 (CmpFindSubKeyByNumberEx.c)
 *     CmpLockTwoKcbsShared @ 0x140672100 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140672190 (CmpUnlockTwoKcbs.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1406725F0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14086D010 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(
        _QWORD *a1,
        __int64 a2,
        ULONG a3,
        int a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  ULONG_PTR *v9; // rdi
  __int64 v11; // r12
  ULONG_PTR v12; // r14
  char v13; // r15
  ULONG_PTR v14; // r13
  int SubKeyByNumber; // esi
  __int64 v16; // rbx
  ULONG_PTR v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // r15
  __int64 v22; // rcx
  char v24; // al
  __int64 *v25; // rax
  int v26; // edx
  int v27; // ecx
  __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  _DWORD v29[2]; // [rsp+60h] [rbp-A8h] BYREF
  ULONG v30; // [rsp+68h] [rbp-A0h]
  int v31; // [rsp+6Ch] [rbp-9Ch]
  ULONG_PTR *v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-90h] BYREF
  ULONG_PTR v34; // [rsp+80h] [rbp-88h] BYREF
  unsigned int *v35; // [rsp+88h] [rbp-80h]
  __int64 v36; // [rsp+90h] [rbp-78h]
  __int128 v37; // [rsp+98h] [rbp-70h] BYREF
  struct _PRIVILEGE_SET *v38; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-58h]
  _OWORD v40[3]; // [rsp+B8h] [rbp-50h] BYREF

  v9 = 0LL;
  v36 = a5;
  v11 = 0LL;
  v35 = a7;
  v29[1] = 0;
  v31 = a4;
  v30 = a3;
  v39 = a2;
  HIDWORD(v28) = 0;
  memset(v40, 0, sizeof(v40));
  v34 = 0LL;
  v29[0] = -1;
  v33 = 0LL;
  v37 = 0LL;
  v32 = 0LL;
  v38 = 0LL;
  CmpInitializeDelayDerefContext(&v37);
  CmpAttachToRegistryProcess((__int64)v40);
  if ( *(_WORD *)(a1[1] + 66LL) )
  {
    do
    {
      v24 = (unsigned int)v9 <= 0xA;
      LODWORD(v9) = (_DWORD)v9 + 1;
      SubKeyByNumber = CmpEnumerateLayeredKey((__int64)a1, a3, v31, v36, a6, (__int64)v35, &v38, v24);
    }
    while ( SubKeyByNumber == -1073741267 );
    v13 = 0;
    goto LABEL_24;
  }
  if ( a1[7] || a1[8] )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  v12 = a1[1];
  v13 = 1;
  if ( a2 )
    v14 = *(_QWORD *)(a2 + 8);
  else
    v14 = 0LL;
  CmpLockTwoKcbsShared(v14, v12);
  SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( SubKeyByNumber >= 0 )
  {
    if ( !a1[7] && !a1[8]
      || (SubKeyByNumber = CmpTransSearchAddTransFromKeyBody(a1, &v33), SubKeyByNumber >= 0)
      && (v11 = v33, SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, v33), SubKeyByNumber >= 0) )
    {
      v16 = v39;
      if ( v39 )
      {
        SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(v39, v11);
        if ( SubKeyByNumber < 0 )
          goto LABEL_22;
      }
      else if ( !CmpVEEnabled || (*(_DWORD *)(v12 + 184) & 0x1000000) == 0 )
      {
        v17 = *(_QWORD *)(v12 + 32);
        if ( v11 )
        {
          v9 = (ULONG_PTR *)&v32;
          v18 = v14;
          v19 = v12;
        }
        else
        {
          v18 = 0LL;
          v19 = 0LL;
        }
        SubKeyByNumber = CmpFindSubKeyByNumberEx(
                           v17,
                           *(unsigned int *)(v12 + 40),
                           v30,
                           (_DWORD *)&v28 + 1,
                           v19,
                           v18,
                           v11,
                           (__int64)&v37,
                           v9);
        if ( SubKeyByNumber >= 0 )
          goto LABEL_16;
        goto LABEL_28;
      }
      v25 = (__int64 *)&v32;
      if ( !v11 )
        v25 = 0LL;
      v26 = v12;
      v27 = v14;
      if ( !v16 )
      {
        v26 = 0;
        v27 = v12;
      }
      SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                         v27,
                         v26,
                         v30,
                         v11,
                         (__int64)&v37,
                         (__int64)&v34,
                         (__int64)&v28 + 4,
                         (__int64)v25,
                         (__int64)&v33);
      if ( SubKeyByNumber >= 0 )
      {
        v17 = v34;
LABEL_16:
        v20 = HIDWORD(v28);
        if ( HIDWORD(v28) != -1 )
        {
          v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v17 + 8))(v17, HIDWORD(v28), v29);
          if ( CmpKeyNodeNeedsAccessBitUpdate(v17, v21) )
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(v17 + 16))(v22, v29);
            HvLockHiveFlusherShared(v17);
            v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v17 + 8))(v17, v20, v29);
            CmpUpdateKeyNodeAccessBits(v17, v21, v20);
            HvUnlockHiveFlusherShared(v17);
          }
          v9 = v32;
          SubKeyByNumber = CmpQueryKeyDataFromNode(v17, v21, v31, v36, a6, v35, (__int64)v32, v11);
          if ( v21 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v17 + 16))(v17, v29);
          v13 = 1;
          goto LABEL_22;
        }
        SubKeyByNumber = -2147483622;
      }
LABEL_28:
      v9 = v32;
    }
  }
LABEL_22:
  CmpUnlockTwoKcbs(v14, v12);
  if ( v9 )
    CmpDereferenceKeyControlBlock((ULONG_PTR)v9);
LABEL_24:
  CmpDrainDelayDerefContext((_QWORD **)&v37);
  if ( v13 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((__int64)v40);
  return (unsigned int)SubKeyByNumber;
}
