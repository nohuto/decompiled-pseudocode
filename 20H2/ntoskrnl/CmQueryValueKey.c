/*
 * XREFs of CmQueryValueKey @ 0x14067A400
 * Callers:
 *     NtQueryValueKey @ 0x140618560 (NtQueryValueKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140204C50 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140222030 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140223930 (PsBoostThreadIo.c)
 *     CmSiFreeMemory @ 0x140267C30 (CmSiFreeMemory.c)
 *     NLS_UPCASE @ 0x140268110 (NLS_UPCASE.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D3CAC (CmpSetKcbAtLayerHeight.c)
 *     CmpLockKcbStackShared @ 0x14061B4F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x14061B550 (CmpUnlockKcbStack.c)
 *     RtlCompareUnicodeStrings @ 0x140670240 (RtlCompareUnicodeStrings.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140678E00 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpQueryKeyValueData @ 0x14067AB00 (CmpQueryKeyValueData.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406A1494 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmEqualTrans @ 0x1406A1CCC (CmEqualTrans.c)
 *     CmpFreeKeyControlBlock @ 0x1406A38E0 (CmpFreeKeyControlBlock.c)
 *     CmListGetNextElement @ 0x1406A42B0 (CmListGetNextElement.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, size_t a4, int a5, __int64 a6)
{
  __int16 v6; // si
  unsigned __int16 *v7; // r14
  _KPROCESS *Process; // rcx
  unsigned int v10; // r12d
  struct _LOOKASIDE_LIST_EX *v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r15
  PPRIVILEGE_SET v14; // r13
  int v15; // ebx
  __int16 v16; // dx
  signed __int64 v17; // r13
  int *v18; // r14
  int *v19; // rbx
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r10
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbx
  unsigned int v27; // edi
  __int64 v28; // r13
  unsigned int *v29; // r12
  __int64 v30; // rax
  unsigned int v31; // r15d
  __int64 v32; // rax
  unsigned __int64 v33; // r9
  const WCHAR *v34; // rsi
  unsigned __int16 v35; // bx
  unsigned __int16 *v36; // rdi
  unsigned __int16 v37; // r10
  unsigned int v38; // r11d
  LONG v39; // r14d
  __int64 v40; // rcx
  int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdi
  int KeyValueData; // ebx
  struct _PRIVILEGE_SET *v47; // r12
  int *v48; // r14
  ULONG_PTR *v49; // rdi
  ULONG_PTR v50; // rdi
  bool v51; // r15
  __int64 v52; // rdx
  __int64 NextElement; // rax
  __int64 v55; // r9
  int v56; // ecx
  __int64 v57; // r10
  __int64 v58; // r10
  __int16 v59; // dx
  bool v60; // zf
  SIZE_T v61; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int16 v63; // [rsp+40h] [rbp-C0h]
  unsigned int v64; // [rsp+44h] [rbp-BCh]
  int v65; // [rsp+44h] [rbp-BCh]
  __int16 v66; // [rsp+48h] [rbp-B8h]
  PPRIVILEGE_SET Privileges; // [rsp+50h] [rbp-B0h]
  __int64 v68; // [rsp+58h] [rbp-A8h] BYREF
  int v69[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v70; // [rsp+70h] [rbp-90h]
  __int64 v71; // [rsp+80h] [rbp-80h] BYREF
  __int64 v72; // [rsp+88h] [rbp-78h]
  __int64 v73; // [rsp+90h] [rbp-70h] BYREF
  __int64 v74; // [rsp+98h] [rbp-68h] BYREF
  int v75; // [rsp+A0h] [rbp-60h]
  __int64 v76; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v77; // [rsp+B0h] [rbp-50h]
  __int64 v78; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-38h]
  size_t Size; // [rsp+D0h] [rbp-30h]
  const WCHAR *v82; // [rsp+E0h] [rbp-20h]
  _OWORD v83[3]; // [rsp+E8h] [rbp-18h] BYREF

  v6 = 0;
  v80 = a6;
  *(_OWORD *)v69 = 0LL;
  HIWORD(v69[0]) = -1;
  v7 = a2;
  v77 = a2;
  v75 = a3;
  Process = (_KPROCESS *)*((_QWORD *)&CmpRegistryProcess + 1);
  Size = a4;
  v68 = 0LL;
  v10 = -1;
  v78 = 0LL;
  v74 = 0xFFFFFFFFLL;
  memset(v83, 0, sizeof(v83));
  v70 = 0LL;
  if ( !*((_QWORD *)&CmpRegistryProcess + 1) )
    Process = KeGetCurrentThread()->ApcState.Process;
  KiStackAttachProcess(Process, 0, (__int64)v83);
  if ( !BYTE6(NlsMbCodePageTag) )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  v13 = *(_QWORD *)(a1 + 8);
  v14 = 0LL;
  Privileges = 0LL;
  v15 = *(__int16 *)(v13 + 66);
  v63 = *(_WORD *)(v13 + 66);
  v16 = v63;
  if ( v15 >= 2 )
  {
    v61 = 8LL * (unsigned int)(v15 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v61, 0x35364D43u, v11);
    Privileges = TransientPoolWithTag;
    v14 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v47 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
      KeyValueData = -1073741670;
      goto LABEL_68;
    }
    memset(TransientPoolWithTag, 0, v61);
    v16 = *(_WORD *)(v13 + 66);
    v6 = 0;
    v63 = v16;
  }
  LOWORD(v69[0]) = v15;
  *((_QWORD *)&v70 + 1) = v14;
  HIWORD(v69[0]) = v16;
  if ( v16 )
  {
    v57 = *(_QWORD *)(v13 + 192);
    if ( v57 )
    {
      do
      {
        CmpSetKcbAtLayerHeight((__int64)v69, v16, *(_QWORD *)(v57 + 16));
        v57 = *(_QWORD *)(v58 + 24);
        v16 = v59 - 1;
      }
      while ( v57 );
      v14 = (PPRIVILEGE_SET)*((_QWORD *)&v70 + 1);
      v16 = HIWORD(v69[0]);
      Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v70 + 1);
      v63 = HIWORD(v69[0]);
    }
  }
  else
  {
    *(_QWORD *)&v69[2] = v13;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockKcbStackShared((__int64)v69);
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v60 = (*(_BYTE *)(a1 + 48) & 1) == 0;
LABEL_104:
      KeyValueData = -1073740763;
      if ( v60 )
        KeyValueData = -1073741444;
      goto LABEL_79;
    }
    CmpUnlockKcbStack((__int64)v69);
    KeyValueData = CmpTransSearchAddTransFromKeyBody(a1, &v68);
    if ( KeyValueData < 0 )
    {
      v47 = Privileges;
      goto LABEL_68;
    }
    v16 = v63;
  }
  if ( v16 >= 0 )
  {
    v17 = (char *)v14 - (char *)&v69[2];
    v18 = &v69[2];
    do
    {
      if ( v6 >= 2 )
        v19 = (int *)((char *)v18 + v17 - 16);
      else
        v19 = v18;
      v20 = *(_QWORD *)v19;
      ExAcquirePushLockSharedEx(v20 + 48, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 56));
      ++v6;
      v18 += 2;
      v63 = HIWORD(v69[0]);
    }
    while ( v6 <= SHIWORD(v69[0]) );
    v14 = (PPRIVILEGE_SET)*((_QWORD *)&v70 + 1);
    v7 = v77;
    Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v70 + 1);
  }
  v21 = *(_DWORD *)(a1 + 48);
  v6 = 0;
  v22 = *(_QWORD *)(a1 + 8);
  v79 = 0LL;
  if ( (v21 & 9) != 0 )
  {
LABEL_103:
    v60 = (v21 & 1) == 0;
    goto LABEL_104;
  }
  v23 = v68;
  if ( v68 )
  {
    NextElement = CmListGetNextElement(v22 + 208, &v79, 32LL);
    if ( NextElement )
    {
      while ( 1 )
      {
        v56 = *(_DWORD *)(NextElement + 68);
        if ( v56 == 2 || v56 == 11 )
          break;
        NextElement = CmListGetNextElement(v55, &v79, 32LL);
        if ( !NextElement )
          goto LABEL_18;
      }
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), v23) )
      {
        v21 = *(_DWORD *)(a1 + 48);
        goto LABEL_103;
      }
      v23 = v68;
    }
  }
LABEL_18:
  LOWORD(v24) = *(_WORD *)(v13 + 66);
  v66 = v24;
  if ( (v24 & 0x8000u) == 0LL )
  {
    while ( 1 )
    {
      v24 = (__int16)v24;
      v25 = v66 >= 2 ? *((_QWORD *)v14 + v24 - 2) : *(_QWORD *)&v69[2 * v24 + 2];
      v60 = *(_WORD *)(v25 + 66) == 0;
      v76 = v25;
      if ( !v60 && *(_BYTE *)(v25 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v25 + 40) != -1 )
      {
        if ( v23 && *(_QWORD *)(v25 + 288) == v23 )
          v26 = 280LL;
        else
          v26 = 96LL;
        v27 = *(_DWORD *)(v26 + v25);
        v28 = *(_QWORD *)(v25 + 32);
        v29 = 0LL;
        v72 = 0LL;
        v73 = 0xFFFFFFFFLL;
        v64 = v27;
        if ( v27 )
        {
          v30 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v28 + 8))(
                  v28,
                  *(unsigned int *)(v26 + v25 + 4),
                  &v73);
          v27 = *(_DWORD *)(v26 + v25);
          v29 = (unsigned int *)v30;
          v72 = v30;
          v64 = v27;
        }
        v71 = 0xFFFFFFFFLL;
        if ( v27 )
        {
          v31 = 0;
          while ( 1 )
          {
            v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v28 + 8))(v28, *v29, &v71);
            v33 = *(unsigned __int16 *)(v32 + 2);
            v34 = (const WCHAR *)(v32 + 20);
            LOBYTE(v32) = *(_BYTE *)(v32 + 16);
            v82 = v34;
            if ( (v32 & 1) != 0 )
            {
              v35 = *v7 >> 1;
              v36 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
              if ( v35 )
              {
                while ( (_WORD)v33 )
                {
                  v37 = *v36++;
                  v38 = *(unsigned __int8 *)v34;
                  v34 = (const WCHAR *)((char *)v34 + 1);
                  if ( v37 != (_WORD)v38 )
                  {
                    if ( v37 >= 0x61u )
                    {
                      if ( v37 > 0x7Au )
                        v37 = NLS_UPCASE(v37);
                      else
                        v37 -= 32;
                    }
                    if ( v38 >= 0x61 )
                    {
                      if ( v38 > 0x7A )
                        LOWORD(v38) = NLS_UPCASE(v38);
                      else
                        LOWORD(v38) = v38 - 32;
                    }
                    v39 = v37 - (unsigned __int16)v38;
                    if ( v37 != (unsigned __int16)v38 )
                      goto LABEL_38;
                  }
                  LOWORD(v33) = v33 - 1;
                  if ( !--v35 )
                    break;
                }
              }
              v39 = v35 - (unsigned __int16)v33;
LABEL_38:
              v27 = v64;
            }
            else
            {
              v39 = RtlCompareUnicodeStrings(*((PCWCH *)v7 + 1), (unsigned __int64)*v7 >> 1, v34, v33 >> 1, 1u);
            }
            (*(void (__fastcall **)(__int64, __int64 *))(v28 + 16))(v28, &v71);
            if ( !v39 )
              break;
            v7 = v77;
            ++v31;
            ++v29;
            if ( v31 >= v27 )
            {
              v25 = v76;
              goto LABEL_42;
            }
          }
          v40 = v72;
          v42 = v31;
          v41 = 0;
          v25 = v76;
          v10 = *(_DWORD *)(v72 + 4 * v42);
        }
        else
        {
LABEL_42:
          v40 = v72;
          v41 = -1073741772;
          v10 = -1;
        }
        if ( v40 )
          (*(void (__fastcall **)(__int64, __int64 *))(v28 + 16))(v28, &v73);
        if ( v41 >= 0 )
        {
          v43 = *(_QWORD *)(v25 + 32);
          goto LABEL_52;
        }
        if ( *(_WORD *)(v25 + 66) && *(_BYTE *)(v25 + 65) )
          break;
        v23 = v68;
        v14 = Privileges;
      }
      LOWORD(v24) = --v66;
      if ( v66 < 0 )
        break;
      v7 = v77;
    }
    v43 = v78;
LABEL_52:
    if ( v10 != -1 )
    {
      v44 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v43 + 8))(v43, v10, &v74);
      v45 = v44;
      if ( (*(_DWORD *)(v43 + 160) & 0x80000) != 0 && (*(_BYTE *)(v44 + 16) & 2) != 0 )
      {
        KeyValueData = -1073741772;
      }
      else
      {
        KeyValueData = CmpQueryKeyValueData(v25, v10, v44, v75, Size, a5, v80);
        if ( KeyValueData >= 0 )
          KeyValueData = 0;
      }
      v65 = KeyValueData;
      if ( v45 )
        (*(void (__fastcall **)(__int64, __int64 *))(v43 + 16))(v43, &v74);
      v6 = 0;
      goto LABEL_59;
    }
    v6 = 0;
  }
  KeyValueData = -1073741772;
LABEL_79:
  v65 = KeyValueData;
LABEL_59:
  v47 = Privileges;
  if ( v63 >= 0 )
  {
    v48 = &v69[2];
    do
    {
      if ( v6 >= 2 )
        v49 = (ULONG_PTR *)((char *)v48 + (char *)Privileges - (char *)&v69[2] - 16);
      else
        v49 = (ULONG_PTR *)v48;
      v50 = *v49;
      v51 = (*(_DWORD *)(v50 + 8) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v50 + 56) == KeGetCurrentThread() )
        *(_QWORD *)(v50 + 56) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v50 + 56));
      ExReleasePushLockEx(v50 + 48, 0LL);
      if ( v51 && (*(_DWORD *)(v50 + 8) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v50);
      ++v6;
      v48 += 2;
    }
    while ( v6 <= SHIWORD(v69[0]) );
    v47 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
    KeyValueData = v65;
  }
LABEL_68:
  if ( !BYTE6(NlsMbCodePageTag) )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v52) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v52);
    v47 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
  }
  KiUnstackDetachProcess((__int64)v83, 0);
  if ( v47 )
    CmSiFreeMemory(v47);
  return (unsigned int)KeyValueData;
}
