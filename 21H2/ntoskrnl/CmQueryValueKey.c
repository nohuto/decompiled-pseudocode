/*
 * XREFs of CmQueryValueKey @ 0x1406E6E60
 * Callers:
 *     NtQueryValueKey @ 0x14070EEC0 (NtQueryValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14023EDD0 (CmpAllocateTransientPoolWithTag.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x140358530 (PsBoostThreadIo.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpSetKcbAtLayerHeight @ 0x1405D6C8C (CmpSetKcbAtLayerHeight.c)
 *     RtlCompareUnicodeStrings @ 0x1405DCCD0 (RtlCompareUnicodeStrings.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFreeKeyControlBlock @ 0x1405E0C60 (CmpFreeKeyControlBlock.c)
 *     CmListGetNextElement @ 0x1405E17C4 (CmListGetNextElement.c)
 *     CmEqualTrans @ 0x14066440C (CmEqualTrans.c)
 *     CmpQueryKeyValueData @ 0x1406E7610 (CmpQueryKeyValueData.c)
 *     CmpLockKcbStackShared @ 0x1407127C0 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x140712820 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, size_t a4, int a5, __int64 a6)
{
  __int64 v6; // r13
  _KPROCESS *Process; // rcx
  unsigned int v8; // r15d
  __int64 v9; // r8
  struct _LOOKASIDE_LIST_EX *v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r14
  int v13; // ebx
  __int16 v14; // r12
  SIZE_T v15; // rdi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v17; // rbx
  int KeyValueData; // edi
  __int64 v19; // r10
  __int64 v20; // r10
  bool v21; // zf
  __int16 v22; // si
  char *v23; // rdi
  char *v24; // rbx
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // r9
  __int64 v28; // r10
  char *NextElement; // rax
  int v30; // ecx
  __int16 v31; // cx
  __int64 v32; // r12
  int v33; // edx
  char v34; // al
  __int64 v35; // rax
  unsigned int v36; // esi
  unsigned int *v37; // rbx
  __int64 v38; // r13
  __int64 v39; // rax
  unsigned int v40; // r15d
  unsigned int *v41; // rdi
  __int64 v42; // rax
  unsigned __int64 v43; // r11
  const WCHAR *v44; // r14
  unsigned __int16 v45; // di
  unsigned __int16 *v46; // rsi
  unsigned __int16 v47; // r10
  unsigned int v48; // r9d
  LONG v49; // ebx
  __int64 v50; // rcx
  int v51; // edi
  int v52; // edx
  char v53; // al
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rbx
  __int16 v57; // si
  ULONG_PTR *v58; // r14
  ULONG_PTR *v59; // rbx
  ULONG_PTR v60; // rbx
  int v61; // r15d
  __int64 v62; // rdx
  unsigned int v64; // [rsp+48h] [rbp-C0h]
  int v65; // [rsp+48h] [rbp-C0h]
  __int16 v66; // [rsp+4Ch] [rbp-BCh]
  __int16 v67; // [rsp+4Eh] [rbp-BAh]
  struct _PRIVILEGE_SET *v68; // [rsp+50h] [rbp-B8h]
  __int128 v69; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v70; // [rsp+68h] [rbp-A0h]
  __int64 v71; // [rsp+78h] [rbp-90h] BYREF
  __int64 v72; // [rsp+80h] [rbp-88h]
  __int64 v73; // [rsp+88h] [rbp-80h] BYREF
  __int64 v74; // [rsp+90h] [rbp-78h] BYREF
  __int64 v75; // [rsp+98h] [rbp-70h]
  __int64 v76; // [rsp+A0h] [rbp-68h] BYREF
  int v77; // [rsp+A8h] [rbp-60h]
  unsigned int *v78; // [rsp+B0h] [rbp-58h]
  _QWORD *v79; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int16 *v80; // [rsp+C0h] [rbp-48h]
  __int64 v81; // [rsp+C8h] [rbp-40h]
  __int64 v82; // [rsp+D0h] [rbp-38h]
  size_t Size; // [rsp+D8h] [rbp-30h]
  __int64 v84; // [rsp+E8h] [rbp-20h]
  _OWORD v85[3]; // [rsp+F0h] [rbp-18h] BYREF

  v6 = a1;
  v82 = a6;
  v69 = 0LL;
  WORD1(v69) = -1;
  v80 = a2;
  v81 = a1;
  Process = (_KPROCESS *)*((_QWORD *)&CmpRegistryProcess + 1);
  v8 = -1;
  v77 = a3;
  Size = a4;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0xFFFFFFFFLL;
  memset(v85, 0, sizeof(v85));
  v70 = 0LL;
  if ( !*((_QWORD *)&CmpRegistryProcess + 1) )
    Process = KeGetCurrentThread()->ApcState.Process;
  KiStackAttachProcess(Process, 0, (__int64)v85);
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  v12 = *(_QWORD *)(v6 + 8);
  v68 = 0LL;
  v13 = *(__int16 *)(v12 + 66);
  v66 = *(_WORD *)(v12 + 66);
  v14 = v66;
  if ( v13 >= 2 )
  {
    v15 = 8LL * (unsigned int)(v13 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v15, 0x35364D43u, v10);
    v68 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v17 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
      KeyValueData = -1073741670;
      goto LABEL_117;
    }
    memset(TransientPoolWithTag, 0, v15);
    v14 = *(_WORD *)(v12 + 66);
    v66 = v14;
  }
  LOWORD(v69) = v13;
  v17 = v68;
  *((_QWORD *)&v70 + 1) = v68;
  WORD1(v69) = v14;
  if ( v14 )
  {
    v19 = *(_QWORD *)(v12 + 192);
    if ( v19 )
    {
      do
      {
        CmpSetKcbAtLayerHeight((__int64)&v69, v14, *(_QWORD *)(v19 + 16));
        v19 = *(_QWORD *)(v20 + 24);
        --v14;
      }
      while ( v19 );
      v17 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
      v14 = WORD1(v69);
      v68 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
      v66 = WORD1(v69);
    }
  }
  else
  {
    *((_QWORD *)&v69 + 1) = v12;
  }
  if ( *(_QWORD *)(v6 + 56) || *(_QWORD *)(v6 + 64) )
  {
    CmpLockKcbStackShared(&v69);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v6, 0LL) )
    {
      v21 = (*(_BYTE *)(v6 + 48) & 1) == 0;
      goto LABEL_18;
    }
    CmpUnlockKcbStack(&v69);
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)v6, &v74);
    if ( KeyValueData < 0 )
      goto LABEL_117;
  }
  v22 = 0;
  if ( v14 >= 0 )
  {
    v23 = (char *)&v69 + 8;
    do
    {
      if ( v22 < 2 )
        v24 = v23;
      else
        v24 = &v23[(char *)v68 - ((char *)&v69 + 8) - 16];
      v25 = *(_QWORD *)v24;
      ExAcquirePushLockSharedEx(v25 + 48, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 56));
      ++v22;
      v23 += 8;
      v66 = WORD1(v69);
    }
    while ( v22 <= SWORD1(v69) );
    v17 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
    v8 = -1;
    v68 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
  }
  v26 = *(_DWORD *)(v6 + 48);
  v27 = *(_QWORD *)(v6 + 8);
  v79 = 0LL;
  if ( (v26 & 9) != 0 )
  {
LABEL_38:
    v21 = (v26 & 1) == 0;
LABEL_18:
    KeyValueData = -1073740763;
    if ( v21 )
      KeyValueData = -1073741444;
    goto LABEL_102;
  }
  v28 = v74;
  if ( v74 )
  {
    NextElement = CmListGetNextElement((_QWORD **)(v27 + 208), &v79, 32);
    if ( NextElement )
    {
      while ( 1 )
      {
        v30 = *((_DWORD *)NextElement + 17);
        if ( v30 == 2 || v30 == 11 )
          break;
        NextElement = CmListGetNextElement((_QWORD **)(v27 + 208), &v79, 32);
        if ( !NextElement )
          goto LABEL_40;
      }
      if ( CmEqualTrans(*((_QWORD *)NextElement + 7), v28) )
      {
        v26 = *(_DWORD *)(v6 + 48);
        goto LABEL_38;
      }
      v28 = v74;
    }
  }
LABEL_40:
  v31 = *(_WORD *)(v12 + 66);
  v67 = v31;
  if ( v31 < 0 )
  {
LABEL_101:
    KeyValueData = -1073741772;
LABEL_102:
    v65 = KeyValueData;
    goto LABEL_103;
  }
  while ( 1 )
  {
    v32 = v31 < 2 ? *((_QWORD *)&v69 + v31 + 1) : *((_QWORD *)v17 + v31 - 2);
    v33 = *(__int16 *)(v32 + 66);
    if ( v33 == *(unsigned __int16 *)(v6 + 4) )
    {
      v34 = *(_BYTE *)(v32 + 65);
      if ( !v34 )
        goto LABEL_50;
    }
    else
    {
      if ( !(_WORD)v33 )
        goto LABEL_50;
      v34 = *(_BYTE *)(v32 + 65);
    }
    if ( v34 == 1 )
      break;
LABEL_50:
    if ( *(_DWORD *)(v32 + 40) == -1 )
      goto LABEL_89;
    if ( !v28 || (v35 = 280LL, *(_QWORD *)(v32 + 288) != v28) )
      v35 = 96LL;
    v36 = *(_DWORD *)(v35 + v32);
    v37 = (unsigned int *)(v35 + v32);
    v38 = *(_QWORD *)(v32 + 32);
    v39 = 0LL;
    v72 = 0LL;
    v73 = 0xFFFFFFFFLL;
    v64 = v36;
    if ( v36 )
    {
      v39 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64))(v38 + 8))(v38, v37[1], &v73, v27);
      v36 = *v37;
      v72 = v39;
      v64 = v36;
    }
    v71 = 0xFFFFFFFFLL;
    if ( v36 )
    {
      v40 = 0;
      v78 = (unsigned int *)v39;
      v41 = (unsigned int *)v39;
      while ( 1 )
      {
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64))(v38 + 8))(v38, *v41, &v71, v27);
        v43 = *(unsigned __int16 *)(v42 + 2);
        v44 = (const WCHAR *)(v42 + 20);
        v21 = (*(_BYTE *)(v42 + 16) & 1) == 0;
        v84 = v42 + 20;
        if ( v21 )
        {
          v49 = RtlCompareUnicodeStrings(*((PCWCH *)v80 + 1), (unsigned __int64)*v80 >> 1, v44, v43 >> 1, 1u);
        }
        else
        {
          v45 = *v80 >> 1;
          v46 = (unsigned __int16 *)*((_QWORD *)v80 + 1);
          if ( v45 )
          {
            while ( (_WORD)v43 )
            {
              v47 = *v46++;
              v48 = *(unsigned __int8 *)v44;
              v44 = (const WCHAR *)((char *)v44 + 1);
              if ( v47 != (_WORD)v48 )
              {
                if ( v47 >= 0x61u )
                {
                  if ( v47 <= 0x7Au )
                    v47 -= 32;
                  else
                    v47 = NLS_UPCASE(v47);
                }
                if ( v48 >= 0x61 )
                {
                  if ( v48 <= 0x7A )
                    LOWORD(v48) = v48 - 32;
                  else
                    LOWORD(v48) = NLS_UPCASE(v48);
                }
                v49 = v47 - (unsigned __int16)v48;
                if ( v47 != (unsigned __int16)v48 )
                  goto LABEL_73;
              }
              LOWORD(v43) = v43 - 1;
              if ( !--v45 )
                break;
            }
          }
          v49 = v45 - (unsigned __int16)v43;
LABEL_73:
          v41 = v78;
          v36 = v64;
        }
        (*(void (__fastcall **)(__int64, __int64 *))(v38 + 16))(v38, &v71);
        if ( !v49 )
          break;
        ++v41;
        ++v40;
        v78 = v41;
        if ( v40 >= v36 )
          goto LABEL_77;
      }
      v50 = v72;
      v51 = 0;
      v8 = *(_DWORD *)(v72 + 4LL * v40);
    }
    else
    {
LABEL_77:
      v50 = v72;
      v51 = -1073741772;
      v8 = -1;
    }
    if ( v50 )
      (*(void (__fastcall **)(__int64, __int64 *, __int64, __int64))(v38 + 16))(v38, &v73, v9, v27);
    if ( v51 >= 0 )
    {
      v54 = *(_QWORD *)(v32 + 32);
      goto LABEL_93;
    }
    v6 = v81;
    v52 = *(__int16 *)(v32 + 66);
    if ( v52 == *(unsigned __int16 *)(v81 + 4) )
    {
      v53 = *(_BYTE *)(v32 + 65);
      if ( !v53 )
        break;
LABEL_87:
      if ( v53 )
        break;
      goto LABEL_88;
    }
    if ( (_WORD)v52 )
    {
      v53 = *(_BYTE *)(v32 + 65);
      goto LABEL_87;
    }
LABEL_88:
    v17 = v68;
LABEL_89:
    v31 = --v67;
    if ( v67 < 0 )
      break;
    v28 = v74;
  }
  v54 = v75;
LABEL_93:
  if ( v8 == -1 )
    goto LABEL_101;
  v55 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, __int64))(v54 + 8))(v54, v8, &v76, v27);
  v56 = v55;
  if ( (*(_DWORD *)(v54 + 160) & 0x80000) != 0 && (*(_BYTE *)(v55 + 16) & 2) != 0 )
  {
    KeyValueData = -1073741772;
  }
  else
  {
    KeyValueData = CmpQueryKeyValueData(v32, v8, v55, v77, Size, a5, v82);
    if ( KeyValueData >= 0 )
      KeyValueData = 0;
  }
  v65 = KeyValueData;
  if ( v56 )
    (*(void (__fastcall **)(__int64, __int64 *))(v54 + 16))(v54, &v76);
LABEL_103:
  v57 = 0;
  if ( v66 < 0 )
  {
    v17 = v68;
  }
  else
  {
    v58 = (ULONG_PTR *)&v69 + 1;
    do
    {
      if ( v57 < 2 )
        v59 = v58;
      else
        v59 = (ULONG_PTR *)((char *)v58 + (char *)v68 - ((char *)&v69 + 8) - 16);
      v60 = *v59;
      v61 = *(_DWORD *)(v60 + 8) & 0x80000;
      if ( *(struct _KTHREAD **)(v60 + 56) == KeGetCurrentThread() )
        *(_QWORD *)(v60 + 56) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v60 + 56));
      ExReleasePushLockEx(v60 + 48, 0LL);
      if ( v61 && (*(_DWORD *)(v60 + 8) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v60);
      ++v57;
      ++v58;
    }
    while ( v57 <= SWORD1(v69) );
    v17 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
    KeyValueData = v65;
  }
LABEL_117:
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v62) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v62);
    v17 = (struct _PRIVILEGE_SET *)*((_QWORD *)&v70 + 1);
  }
  KiUnstackDetachProcess((__int64)v85, 0LL);
  if ( v17 )
    CmSiFreeMemory(v17);
  return (unsigned int)KeyValueData;
}
