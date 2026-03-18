/*
 * XREFs of CmQueryValueKey @ 0x140620880
 * Callers:
 *     NtQueryValueKey @ 0x1405EC5D0 (NtQueryValueKey.c)
 * Callees:
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14025C5C0 (CmpAllocateTransientPoolWithTag.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140263840 (PsBoostThreadIo.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405CC470 (CmpSetKcbAtLayerHeight.c)
 *     CmpQueryKeyValueData @ 0x140620F80 (CmpQueryKeyValueData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1406231D0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpLockKcbStackShared @ 0x1406260F0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140626150 (CmpUnlockKcbStack.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406569A4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmListGetNextElement @ 0x140658FC0 (CmListGetNextElement.c)
 *     CmpFreeKeyControlBlock @ 0x140659940 (CmpFreeKeyControlBlock.c)
 *     CmEqualTrans @ 0x14068E7AC (CmEqualTrans.c)
 *     RtlCompareUnicodeStrings @ 0x1406B5F00 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, _DWORD *a4, int a5, __int64 a6)
{
  __int16 v6; // si
  unsigned __int16 *v7; // r14
  _KPROCESS *Process; // rcx
  unsigned int v10; // r12d
  __int64 v11; // r8
  struct _LOOKASIDE_LIST_EX *v12; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r15
  PPRIVILEGE_SET v15; // r13
  int v16; // ebx
  __int16 v17; // dx
  signed __int64 v18; // r13
  int *v19; // r14
  int *v20; // rbx
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // r10
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rbx
  unsigned int v28; // edi
  __int64 v29; // r13
  unsigned int *v30; // r12
  __int64 v31; // rax
  unsigned int v32; // r15d
  __int64 v33; // rax
  unsigned __int64 v34; // r9
  const WCHAR *v35; // rsi
  unsigned __int16 v36; // bx
  unsigned __int16 *v37; // rdi
  unsigned __int16 v38; // r10
  unsigned int v39; // r11d
  LONG v40; // r14d
  __int64 v41; // rcx
  int v42; // ebx
  __int64 v43; // rax
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdi
  int KeyValueData; // ebx
  struct _PRIVILEGE_SET *v48; // r12
  int *v49; // r14
  ULONG_PTR *v50; // rdi
  ULONG_PTR v51; // rdi
  bool v52; // r15
  __int64 v53; // rdx
  __int64 NextElement; // rax
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
  Size = (size_t)a4;
  v68 = 0LL;
  v10 = -1;
  v78 = 0LL;
  v74 = 0xFFFFFFFFLL;
  memset(v83, 0, sizeof(v83));
  v70 = 0LL;
  if ( !*((_QWORD *)&CmpRegistryProcess + 1) )
    Process = KeGetCurrentThread()->ApcState.Process;
  KiStackAttachProcess(Process, 0LL, (__int64)v83, a4);
  if ( !BYTE6(NlsMbCodePageTag) )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  v14 = *(_QWORD *)(a1 + 8);
  v15 = 0LL;
  Privileges = 0LL;
  v16 = *(__int16 *)(v14 + 66);
  v63 = *(_WORD *)(v14 + 66);
  v17 = v63;
  if ( v16 >= 2 )
  {
    v61 = 8LL * (unsigned int)(v16 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v61, 0x35364D43u, v12);
    Privileges = TransientPoolWithTag;
    v15 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v48 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
      KeyValueData = -1073741670;
      goto LABEL_68;
    }
    memset(TransientPoolWithTag, 0, v61);
    v17 = *(_WORD *)(v14 + 66);
    v6 = 0;
    v63 = v17;
  }
  LOWORD(v69[0]) = v16;
  *((_QWORD *)&v70 + 1) = v15;
  HIWORD(v69[0]) = v17;
  if ( v17 )
  {
    v57 = *(_QWORD *)(v14 + 192);
    if ( v57 )
    {
      do
      {
        CmpSetKcbAtLayerHeight((__int64)v69, v17, *(_QWORD *)(v57 + 16));
        v57 = *(_QWORD *)(v58 + 24);
        v17 = v59 - 1;
      }
      while ( v57 );
      v15 = (PPRIVILEGE_SET)*((_QWORD *)&v70 + 1);
      v17 = HIWORD(v69[0]);
      Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v70 + 1);
      v63 = HIWORD(v69[0]);
    }
  }
  else
  {
    *(_QWORD *)&v69[2] = v14;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockKcbStackShared(v69);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v60 = (*(_BYTE *)(a1 + 48) & 1) == 0;
LABEL_104:
      KeyValueData = -1073740763;
      if ( v60 )
        KeyValueData = -1073741444;
      goto LABEL_79;
    }
    CmpUnlockKcbStack(v69);
    KeyValueData = CmpTransSearchAddTransFromKeyBody(a1, &v68);
    if ( KeyValueData < 0 )
    {
      v48 = Privileges;
      goto LABEL_68;
    }
    v17 = v63;
  }
  if ( v17 >= 0 )
  {
    v18 = (char *)v15 - (char *)&v69[2];
    v19 = &v69[2];
    do
    {
      if ( v6 >= 2 )
        v20 = (int *)((char *)v19 + v18 - 16);
      else
        v20 = v19;
      v21 = *(_QWORD *)v20;
      ExAcquirePushLockSharedEx(v21 + 48, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v21 + 56));
      ++v6;
      v19 += 2;
      v63 = HIWORD(v69[0]);
    }
    while ( v6 <= SHIWORD(v69[0]) );
    v15 = (PPRIVILEGE_SET)*((_QWORD *)&v70 + 1);
    v7 = v77;
    Privileges = (PPRIVILEGE_SET)*((_QWORD *)&v70 + 1);
  }
  v22 = *(_DWORD *)(a1 + 48);
  v6 = 0;
  v23 = *(_QWORD *)(a1 + 8);
  v79 = 0LL;
  if ( (v22 & 9) != 0 )
  {
LABEL_103:
    v60 = (v22 & 1) == 0;
    goto LABEL_104;
  }
  v24 = v68;
  if ( v68 )
  {
    NextElement = CmListGetNextElement(v23 + 208, &v79, 32LL);
    if ( NextElement )
    {
      while ( 1 )
      {
        v56 = *(_DWORD *)(NextElement + 68);
        if ( v56 == 2 || v56 == 11 )
          break;
        NextElement = CmListGetNextElement(v12, &v79, 32LL);
        if ( !NextElement )
          goto LABEL_18;
      }
      if ( (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), v24) )
      {
        v22 = *(_DWORD *)(a1 + 48);
        goto LABEL_103;
      }
      v24 = v68;
    }
  }
LABEL_18:
  LOWORD(v25) = *(_WORD *)(v14 + 66);
  v66 = v25;
  if ( (v25 & 0x8000u) == 0LL )
  {
    while ( 1 )
    {
      v25 = (__int16)v25;
      v26 = v66 >= 2 ? *((_QWORD *)v15 + v25 - 2) : *(_QWORD *)&v69[2 * v25 + 2];
      v60 = *(_WORD *)(v26 + 66) == 0;
      v76 = v26;
      if ( !v60 && *(_BYTE *)(v26 + 65) == 1 )
        break;
      if ( *(_DWORD *)(v26 + 40) != -1 )
      {
        if ( v24 && *(_QWORD *)(v26 + 288) == v24 )
          v27 = 280LL;
        else
          v27 = 96LL;
        v28 = *(_DWORD *)(v27 + v26);
        v29 = *(_QWORD *)(v26 + 32);
        v30 = 0LL;
        v72 = 0LL;
        v73 = 0xFFFFFFFFLL;
        v64 = v28;
        if ( v28 )
        {
          v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v29 + 8))(
                  v29,
                  *(unsigned int *)(v27 + v26 + 4),
                  &v73);
          v28 = *(_DWORD *)(v27 + v26);
          v30 = (unsigned int *)v31;
          v72 = v31;
          v64 = v28;
        }
        v71 = 0xFFFFFFFFLL;
        if ( v28 )
        {
          v32 = 0;
          while ( 1 )
          {
            v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v29 + 8))(v29, *v30, &v71);
            v34 = *(unsigned __int16 *)(v33 + 2);
            v35 = (const WCHAR *)(v33 + 20);
            LOBYTE(v33) = *(_BYTE *)(v33 + 16);
            v82 = v35;
            if ( (v33 & 1) != 0 )
            {
              v36 = *v7 >> 1;
              v37 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
              if ( v36 )
              {
                while ( (_WORD)v34 )
                {
                  v38 = *v37++;
                  v39 = *(unsigned __int8 *)v35;
                  v35 = (const WCHAR *)((char *)v35 + 1);
                  if ( v38 != (_WORD)v39 )
                  {
                    if ( v38 >= 0x61u )
                    {
                      if ( v38 > 0x7Au )
                        v38 = NLS_UPCASE(v38);
                      else
                        v38 -= 32;
                    }
                    if ( v39 >= 0x61 )
                    {
                      if ( v39 > 0x7A )
                        LOWORD(v39) = NLS_UPCASE(v39);
                      else
                        LOWORD(v39) = v39 - 32;
                    }
                    v40 = v38 - (unsigned __int16)v39;
                    if ( v38 != (unsigned __int16)v39 )
                      goto LABEL_38;
                  }
                  LOWORD(v34) = v34 - 1;
                  if ( !--v36 )
                    break;
                }
              }
              v40 = v36 - (unsigned __int16)v34;
LABEL_38:
              v28 = v64;
            }
            else
            {
              v40 = RtlCompareUnicodeStrings(*((PCWCH *)v7 + 1), (unsigned __int64)*v7 >> 1, v35, v34 >> 1, 1u);
            }
            (*(void (__fastcall **)(__int64, __int64 *))(v29 + 16))(v29, &v71);
            if ( !v40 )
              break;
            v7 = v77;
            ++v32;
            ++v30;
            if ( v32 >= v28 )
            {
              v26 = v76;
              goto LABEL_42;
            }
          }
          v41 = v72;
          v43 = v32;
          v42 = 0;
          v26 = v76;
          v10 = *(_DWORD *)(v72 + 4 * v43);
        }
        else
        {
LABEL_42:
          v41 = v72;
          v42 = -1073741772;
          v10 = -1;
        }
        if ( v41 )
          (*(void (__fastcall **)(__int64, __int64 *))(v29 + 16))(v29, &v73);
        if ( v42 >= 0 )
        {
          v44 = *(_QWORD *)(v26 + 32);
          goto LABEL_52;
        }
        if ( *(_WORD *)(v26 + 66) && *(_BYTE *)(v26 + 65) )
          break;
        v24 = v68;
        v15 = Privileges;
      }
      LOWORD(v25) = --v66;
      if ( v66 < 0 )
        break;
      v7 = v77;
    }
    v44 = v78;
LABEL_52:
    if ( v10 != -1 )
    {
      v45 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v44 + 8))(v44, v10, &v74);
      v46 = v45;
      if ( (*(_DWORD *)(v44 + 160) & 0x80000) != 0 && (*(_BYTE *)(v45 + 16) & 2) != 0 )
      {
        KeyValueData = -1073741772;
      }
      else
      {
        KeyValueData = CmpQueryKeyValueData(v26, v10, v45, v75, Size, a5, v80);
        if ( KeyValueData >= 0 )
          KeyValueData = 0;
      }
      v65 = KeyValueData;
      if ( v46 )
        (*(void (__fastcall **)(__int64, __int64 *))(v44 + 16))(v44, &v74);
      v6 = 0;
      goto LABEL_59;
    }
    v6 = 0;
  }
  KeyValueData = -1073741772;
LABEL_79:
  v65 = KeyValueData;
LABEL_59:
  v48 = Privileges;
  if ( v63 >= 0 )
  {
    v49 = &v69[2];
    do
    {
      if ( v6 >= 2 )
        v50 = (ULONG_PTR *)((char *)v49 + (char *)Privileges - (char *)&v69[2] - 16);
      else
        v50 = (ULONG_PTR *)v49;
      v51 = *v50;
      v52 = (*(_DWORD *)(v51 + 8) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v51 + 56) == KeGetCurrentThread() )
        *(_QWORD *)(v51 + 56) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v51 + 56));
      ExReleasePushLockEx(v51 + 48, 0LL);
      if ( v52 && (*(_DWORD *)(v51 + 8) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v51);
      ++v6;
      v49 += 2;
    }
    while ( v6 <= SHIWORD(v69[0]) );
    v48 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
    KeyValueData = v65;
  }
LABEL_68:
  if ( !BYTE6(NlsMbCodePageTag) )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v53) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v53);
    v48 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
  }
  KiUnstackDetachProcess((__int64)v83, 0LL, v11, v12);
  if ( v48 )
    CmSiFreeMemory(v48);
  return (unsigned int)KeyValueData;
}
