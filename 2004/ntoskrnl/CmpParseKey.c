/*
 * XREFs of CmpParseKey @ 0x1405EE060
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1402036A0 (CmpAllocateTransientPoolWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140208500 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     PsGetCurrentSilo @ 0x140299370 (PsGetCurrentSilo.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14029BBE0 (ExIsResourceAcquiredSharedLite.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmpGetRegistryNamespaceRootForSilo @ 0x1405EA880 (CmpGetRegistryNamespaceRootForSilo.c)
 *     CmpDoesParseEnterRegistryA @ 0x1405EE570 (CmpDoesParseEnterRegistryA.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     CmpCallCallBacksEx @ 0x1405F1510 (CmpCallCallBacksEx.c)
 *     CmpCleanupParseContext @ 0x140694400 (CmpCleanupParseContext.c)
 *     CmPostCallbackNotificationEx @ 0x140696470 (CmPostCallbackNotificationEx.c)
 *     CmpRollbackTransactionArray @ 0x140871C40 (CmpRollbackTransactionArray.c)
 */

__int64 __fastcall CmpParseKey(
        PVOID a1,
        POBJECT_TYPE *a2,
        _DWORD *a3,
        struct _LOOKASIDE_LIST_EX *a4,
        int a5,
        __int64 a6,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        _QWORD *a11)
{
  __int64 v11; // r15
  __int64 RegistryNamespaceRootForSilo; // rdi
  __int64 v13; // r14
  _DWORD *v14; // rbx
  __int128 v15; // xmm0
  PPRIVILEGE_SET v16; // r12
  __int64 v17; // r13
  unsigned __int16 v18; // dx
  _WORD *v19; // rcx
  __int16 v20; // ax
  int v21; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r12
  int v24; // r9d
  __int64 v25; // rax
  int v26; // eax
  int v27; // ebx
  unsigned int i; // esi
  int v29; // eax
  __int64 v30; // r8
  _DWORD *v31; // rdi
  __int64 v32; // rdx
  int v33; // eax
  bool v35; // zf
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  _DWORD *v37; // rdi
  int v38; // eax
  __int128 v39; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v41; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+78h] [rbp-88h]
  _QWORD v43[2]; // [rsp+80h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+90h] [rbp-70h]
  _WORD v45[2]; // [rsp+98h] [rbp-68h] BYREF
  int v46; // [rsp+9Ch] [rbp-64h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int128 v48; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v49; // [rsp+C0h] [rbp-40h]
  __int128 v50; // [rsp+D0h] [rbp-30h]
  __int128 v51; // [rsp+E0h] [rbp-20h]
  __int128 v52; // [rsp+F0h] [rbp-10h]
  __int128 v53; // [rsp+100h] [rbp+0h]
  __int128 v54; // [rsp+110h] [rbp+10h]
  __int128 v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+130h] [rbp+30h]
  __int128 v57; // [rsp+140h] [rbp+40h] BYREF
  char v58; // [rsp+1A0h] [rbp+A0h]
  int v59; // [rsp+1A8h] [rbp+A8h] BYREF
  _DWORD *v60; // [rsp+1B0h] [rbp+B0h]
  unsigned __int8 v61; // [rsp+1B8h] [rbp+B8h]

  v61 = (unsigned __int8)a4;
  v60 = a3;
  v11 = (__int64)a11;
  RegistryNamespaceRootForSilo = (__int64)a1;
  v13 = a8;
  v57 = 0LL;
  v14 = a3;
  v58 = 0;
  v15 = *a7;
  *a11 = 0LL;
  v16 = 0LL;
  v56 = 0LL;
  v42 = 0LL;
  v43[1] = v43;
  v39 = v15;
  v43[0] = v43;
  v40 = 0LL;
  Privileges = 0LL;
  v48 = 0LL;
  LODWORD(a7) = 0;
  v49 = 0LL;
  v59 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v41 = 0LL;
  if ( a2 != CmKeyObjectType )
    return 3221225508LL;
  v17 = a10;
  if ( a1 == CmpRegistryRootObject )
    RegistryNamespaceRootForSilo = CmpGetRegistryNamespaceRootForSilo(*(_QWORD *)(a10 + 8));
  v18 = v39;
  if ( (_WORD)v39 )
  {
    v19 = (_WORD *)*((_QWORD *)&v39 + 1);
    while ( *(_WORD *)(*((_QWORD *)&v39 + 1) + 2 * ((unsigned __int64)v18 >> 1) - 2) == 92 )
    {
      v35 = v18 == 2;
      v18 -= 2;
      LOWORD(v39) = v18;
      if ( v35 )
        goto LABEL_10;
    }
    if ( v18 )
    {
      v20 = WORD1(v39);
      do
      {
        if ( *v19 != 92 )
          break;
        ++v19;
        v18 -= 2;
        v20 -= 2;
        *((_QWORD *)&v39 + 1) = v19;
        LOWORD(v39) = v18;
        WORD1(v39) = v20;
      }
      while ( v18 );
    }
  }
LABEL_10:
  if ( !v13 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                      PagedPool,
                                                      0x128uLL,
                                                      0x34364D43u,
                                                      a4);
    Privileges = TransientPoolWithTag;
    v16 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    memset(TransientPoolWithTag, 0, 0x128uLL);
    v16[4].Privilege[0].Attributes = -1;
    *(_QWORD *)&v16[7].Privilege[0].Luid.HighPart = (char *)v16 + 144;
    *(_QWORD *)&v16[7].Control = (char *)v16 + 144;
    memset(&v16[10].Privilege[0].Attributes, 0, 0x50uLL);
    v13 = (__int64)v16;
  }
  v21 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(RegistryNamespaceRootForSilo + 96);
  *(_DWORD *)(v13 + 96) = v21;
  if ( (unsigned __int8)CmpDoesParseEnterRegistryA(RegistryNamespaceRootForSilo, &v39) && (*(_DWORD *)v13 & 0x40) == 0 )
  {
    v27 = -1073741790;
    goto LABEL_38;
  }
  if ( (*(_DWORD *)v13 & 0x800) != 0 && !(unsigned __int8)CmpDoesParseEnterRegistryA(RegistryNamespaceRootForSilo, &v39) )
  {
    v27 = -1073741790;
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(RegistryNamespaceRootForSilo + 48) & 0x10) != 0 )
    *(_DWORD *)(v13 + 24) |= 0x10u;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v23 = a6;
  if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    goto LABEL_23;
  *((_QWORD *)&v54 + 1) = 1LL;
  DWORD2(v55) = *(_DWORD *)(v13 + 28);
  LOBYTE(v24) = 1;
  HIDWORD(v55) = a5;
  *(_QWORD *)&v55 = &v39;
  LOBYTE(v56) = v61;
  DWORD2(v49) = *(_DWORD *)(v13 + 24);
  *(_QWORD *)&v49 = CmKeyObjectType;
  DWORD2(v51) = v14[4];
  *(_QWORD *)&v48 = v23;
  *((_QWORD *)&v48 + 1) = RegistryNamespaceRootForSilo;
  *((_QWORD *)&v52 + 1) = v11;
  v25 = *(_QWORD *)(v13 + 72);
  if ( (v25 & 1) != 0 )
    v25 = 0LL;
  *(_QWORD *)&v54 = v25;
  *(_QWORD *)&v41 = &v48;
  DWORD2(v41) = *(_DWORD *)(v13 + 96);
  v42 = v13 + 144;
  if ( (*(_DWORD *)v13 & 1) != 0 )
  {
    v45[0] = *(_WORD *)(v13 + 4);
    v45[1] = v45[0];
    v47 = *(_QWORD *)(v13 + 8);
    *(_QWORD *)&v52 = v13 + 32;
    *(_QWORD *)&v50 = v45;
    *((_QWORD *)&v50 + 1) = *((_QWORD *)v14 + 8);
    *(_QWORD *)&v51 = a9;
    v46 = 0;
    v26 = CmpCallCallBacksEx(
            26,
            (unsigned int)&v48,
            (unsigned int)&v41,
            v24,
            27,
            RegistryNamespaceRootForSilo,
            (__int64)v43);
  }
  else
  {
    v26 = CmpCallCallBacksEx(
            28,
            (unsigned int)&v48,
            (unsigned int)&v41,
            v24,
            29,
            RegistryNamespaceRootForSilo,
            (__int64)v43);
  }
  v27 = v26;
  if ( v26 >= 0 )
  {
    RegistryNamespaceRootForSilo = *((_QWORD *)&v48 + 1);
    LODWORD(v14) = (_DWORD)v60;
    *(_DWORD *)(v13 + 96) = DWORD2(v41);
    v58 = 1;
LABEL_23:
    for ( i = (unsigned int)a7; ; ++i )
    {
      while ( 1 )
      {
        v57 = v39;
        v29 = CmpDoParseKey(
                RegistryNamespaceRootForSilo,
                (_DWORD)v14,
                v61,
                a5,
                v23,
                (__int64)&v57,
                v13,
                a9,
                (__int64)&v40);
        v27 = v29;
        if ( v29 != 259 )
          break;
        KeWaitForSingleObject((char *)&unk_140C00F70 + 200 * *(unsigned int *)(v13 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v13 &= ~0x100u;
        LODWORD(v14) = (_DWORD)v60;
      }
      if ( v29 != -1073741267 )
        break;
      if ( i >= 0x40 )
      {
        v27 = -1073741772;
        break;
      }
      if ( (*(_DWORD *)(v13 + 100) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v13 + 120), *(_QWORD *)(v13 + 128), v30, &v59);
        *(_DWORD *)(v13 + 100) &= ~4u;
        *(_DWORD *)(v13 + 120) = 0;
        *(_QWORD *)(v13 + 128) = 0LL;
      }
      LODWORD(v14) = (_DWORD)v60;
    }
    v21 = *(_DWORD *)(v17 + 4) & *(_DWORD *)(RegistryNamespaceRootForSilo + 96);
    if ( v27 >= 0 )
    {
      *(_QWORD *)v11 = v40;
      v40 = 0LL;
    }
    if ( v58 )
    {
      v31 = v60;
      v32 = *(_QWORD *)v11;
      HIDWORD(v51) = v60[5];
      v27 = CmPostCallbackNotificationEx(
              2 * (unsigned int)((*(_DWORD *)v13 & 1) == 0) + 27,
              v32,
              v27,
              (unsigned int)&v48,
              (__int64)&v41,
              (__int64)v43);
      if ( v27 >= 0 )
      {
        v33 = HIDWORD(v51);
        if ( HIDWORD(v51) != v31[5] )
        {
          v31[5] = HIDWORD(v51);
          v31[4] = v31[6] & ~(v33 | 0x2000000);
        }
      }
      if ( *(_QWORD *)v11 )
        *(_DWORD *)(*(_QWORD *)v11 + 96LL) = DWORD2(v41);
    }
LABEL_34:
    if ( v27 != 872 )
    {
      if ( v27 == 260 )
      {
        *(_DWORD *)(v13 + 96) = v21;
        *(_QWORD *)(v17 + 8) = PsGetCurrentSilo();
      }
      goto LABEL_37;
    }
    goto LABEL_50;
  }
  if ( v26 != -1073740541 )
    goto LABEL_34;
  v27 = HIDWORD(v41);
  if ( HIDWORD(v41) == 260 )
    goto LABEL_34;
  if ( HIDWORD(v41) != 872 )
  {
    v37 = v60;
    v38 = HIDWORD(v51);
    v60[5] |= HIDWORD(v51);
    v37[4] &= ~(v38 | 0x2000000);
    v27 = 0;
    goto LABEL_37;
  }
LABEL_50:
  *(_QWORD *)(v13 + 64) = 0LL;
  *(_QWORD *)(v17 + 8) = 0LL;
LABEL_37:
  KeLeaveCriticalRegion();
  v16 = Privileges;
LABEL_38:
  if ( v16 )
  {
    CmpCleanupParseContext(v16, 0LL);
    CmSiFreeMemory(v16);
  }
  return (unsigned int)v27;
}
