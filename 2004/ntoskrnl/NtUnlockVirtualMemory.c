/*
 * XREFs of NtUnlockVirtualMemory @ 0x1402564F0
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x140205990 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     KeStackAttachProcess @ 0x14024C170 (KeStackAttachProcess.c)
 *     MiVadPagesTradable @ 0x140253B08 (MiVadPagesTradable.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x14025A290 (MiPageTableLockIsContended.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiRotatedToFrameBuffer @ 0x14033CD08 (MiRotatedToFrameBuffer.c)
 *     MiUnlockVa @ 0x1403479AC (MiUnlockVa.c)
 *     MiDemoteCombinedPte @ 0x140368FD0 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTable @ 0x1403B2B80 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiShouldYieldProcessor @ 0x140531508 (MiShouldYieldProcessor.c)
 *     MiLockVadRange @ 0x1406022F8 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x140607244 (MiLockUnlockCommon.c)
 *     MiUnlockVadRange @ 0x140607384 (MiUnlockVadRange.c)
 */

NTSTATUS __cdecl NtUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  unsigned __int64 v5; // r13
  NTSTATUS result; // eax
  NTSTATUS v7; // r12d
  unsigned __int64 v8; // r15
  int v9; // ebx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rsi
  __int64 j; // rdi
  unsigned __int64 v13; // r8
  PRKPROCESS v14; // r14
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r11
  __int64 v19; // rcx
  _QWORD **v20; // rax
  _QWORD *i; // rcx
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r12
  unsigned __int64 valid; // rax
  unsigned __int64 v25; // rcx
  __int64 v26; // r12
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rsi
  __int64 m; // rdi
  __int64 v33; // r12
  __int64 v34; // rcx
  _QWORD **v35; // rax
  _QWORD *k; // rcx
  PRKPROCESS v37; // rdi
  void *v38; // rax
  unsigned __int8 v39; // [rsp+40h] [rbp-198h]
  NTSTATUS v40; // [rsp+44h] [rbp-194h]
  char v41; // [rsp+48h] [rbp-190h]
  __int64 v42; // [rsp+50h] [rbp-188h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-180h] BYREF
  __int64 v44; // [rsp+60h] [rbp-178h] BYREF
  __int64 v45; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v47; // [rsp+78h] [rbp-160h]
  __int64 v48; // [rsp+80h] [rbp-158h]
  unsigned __int64 v49; // [rsp+88h] [rbp-150h]
  PSIZE_T v50; // [rsp+90h] [rbp-148h]
  PVOID *v51; // [rsp+98h] [rbp-140h]
  int v52; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v53; // [rsp+A4h] [rbp-134h]
  __int16 v54; // [rsp+A6h] [rbp-132h]
  __int64 v55; // [rsp+A8h] [rbp-130h]
  __int64 v56; // [rsp+B0h] [rbp-128h]
  __int64 v57; // [rsp+B8h] [rbp-120h]
  __int128 v58; // [rsp+C0h] [rbp-118h]
  __int128 v59; // [rsp+D0h] [rbp-108h]
  __int128 v60; // [rsp+E0h] [rbp-F8h]
  __int128 v61; // [rsp+F0h] [rbp-E8h]
  __int128 v62; // [rsp+100h] [rbp-D8h]
  __int128 v63; // [rsp+110h] [rbp-C8h]
  __int128 v64; // [rsp+120h] [rbp-B8h]
  __int128 v65; // [rsp+130h] [rbp-A8h]
  __int128 v66; // [rsp+140h] [rbp-98h]
  __int64 v67; // [rsp+150h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v50 = RegionSize;
  v51 = BaseAddress;
  v5 = 0LL;
  v42 = 0LL;
  v44 = 0LL;
  PROCESS = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v54 = 0;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v44, (__int64)&v42, (__int64)&PROCESS);
  v7 = result;
  v40 = result;
  if ( result < 0 )
    return result;
  v8 = 0LL;
  v47 = 0LL;
  v9 = 0;
  v41 = 0;
  v10 = (v44 + v42 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v42 = v10;
  v49 = v44 & 0xFFFFFFFFFFFFF000uLL;
  v11 = v44 & 0xFFFFFFFFFFFFF000uLL;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v9 = 2;
    v41 = 2;
  }
  v55 = 20LL;
  v52 = 1;
  v53 = 4;
  v56 = 0LL;
  v57 = 0LL;
  j = 0LL;
  v13 = v10;
  v14 = PROCESS;
  v15 = MiLockVadRange(PROCESS, v11, v13, 0LL);
  v48 = v15;
  if ( !v15 )
    goto LABEL_91;
  v16 = (__int64)&v14[1].ActiveProcessorsPadding[6];
  v39 = MiLockWorkingSetShared(v16);
  if ( v11 <= v42 )
  {
    v17 = 0xFFFFF68000000000uLL;
    v18 = 0xFFFFF6FB40000000uLL;
    while ( 1 )
    {
      if ( (((unsigned __int8)(v11 >> 12) + 1) & 0xF) == 0 )
      {
        if ( (unsigned int)MiWorkingSetIsContended(v16)
          || v5 && (unsigned int)MiPageTableLockIsContended(v16, v5)
          || (unsigned int)MiShouldYieldProcessor() )
        {
          if ( HIDWORD(v55) )
            MiFreeWsleList(v16, &v52, 0LL);
          if ( v5 )
          {
            MiUnlockPageTable(v16, v5);
            v5 = 0LL;
          }
          MiUnlockWorkingSetShared(v16, v39);
          MiLockWorkingSetShared(v16);
        }
        v18 = 0xFFFFF6FB40000000uLL;
        v17 = 0xFFFFF68000000000uLL;
      }
      if ( v11 > v8 || !j )
      {
        if ( j )
        {
          v19 = j;
          v20 = *(_QWORD ***)(j + 8);
          if ( v20 )
          {
            j = *(_QWORD *)(j + 8);
            for ( i = *v20; i; i = (_QWORD *)*i )
              j = (__int64)i;
          }
          else
          {
            for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v19 )
                break;
              v19 = j;
            }
          }
        }
        else
        {
          j = (__int64)MiLocateAddress(v11);
        }
        v9 &= ~4u;
        v41 = v9;
        if ( (*(_DWORD *)(j + 48) & 0x70) == 0x40 )
        {
          v9 |= 4u;
          v41 = v9;
        }
        else if ( !(unsigned int)MiVadPagesTradable(j) )
        {
          goto LABEL_55;
        }
        v47 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
      }
      v22 = v17 + ((v11 >> 9) & 0x7FFFFFFFF8LL);
      v23 = v18 + ((v11 >> 18) & 0x3FFFFFF8);
      if ( v5 == v23 )
        break;
      if ( v5 )
      {
        if ( HIDWORD(v55) )
          MiFreeWsleList(v16, &v52, 0LL);
        MiUnlockPageTable(v16, v5);
      }
      valid = MiLockLowestValidPageTable(v16, v22, &v46);
      v5 = valid;
      if ( valid == v23 )
        break;
      MiUnlockPageTable(v16, valid);
      v5 = 0LL;
      v17 = 0xFFFFF68000000000uLL;
      v11 = (__int64)((v23 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v7 = -1073741782;
      v40 = -1073741782;
LABEL_54:
      v8 = v47;
      v18 = 0xFFFFF6FB40000000uLL;
      if ( v11 > v42 )
        goto LABEL_55;
    }
    v45 = MI_READ_PTE_LOCK_FREE(v22);
    if ( (v45 & 1) == 0 )
    {
      v7 = -1073741782;
      v40 = -1073741782;
LABEL_53:
      v17 = 0xFFFFF68000000000uLL;
      v11 += 4096LL;
      goto LABEL_54;
    }
    v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v45) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v45 = v25;
    v26 = *(_QWORD *)(v25 + 8);
    v27 = v26 | 0x8000000000000000uLL;
    v46 = v26 | 0x8000000000000000uLL;
    if ( (v9 & 4) != 0 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(v22) == 1 )
      {
LABEL_52:
        v7 = v40;
        goto LABEL_53;
      }
      v25 = v45;
      v27 = v46;
    }
    v28 = *(_QWORD *)(v25 + 40);
    v29 = 0x1000000000LL;
    if ( (v28 & 0x1000000000LL) == 0 && v26 > 0 )
      MiDemoteCombinedPte(v16, v22, v27);
    if ( (MiGetWsleContents(v29, v11) & 0xF) != 8 )
    {
      MiInsertTbFlushEntry(&v52, v11, 1LL, 0LL);
      if ( HIDWORD(v55) == (_DWORD)v55 )
        MiFreeWsleList(v16, &v52, 0LL);
      v7 = -1073741782;
      v40 = -1073741782;
      goto LABEL_53;
    }
    goto LABEL_52;
  }
LABEL_55:
  if ( HIDWORD(v55) )
    MiFreeWsleList(v16, &v52, 0LL);
  if ( v5 )
  {
    MiUnlockPageTable(v16, v5);
    v5 = 0LL;
  }
  if ( v7 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v16, v39);
    v14 = PROCESS;
    v15 = v48;
LABEL_91:
    MiUnlockVadRange(v14, v44, v15, 0LL);
    if ( (v9 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
    return -1073741782;
  }
  v30 = v49;
  v31 = 0LL;
  m = 0LL;
  v33 = v42;
  if ( v49 > v42 )
    goto LABEL_86;
  do
  {
    if ( v30 <= v31 && m )
      goto LABEL_75;
    if ( m )
    {
      v34 = m;
      v35 = *(_QWORD ***)(m + 8);
      if ( v35 )
      {
        m = *(_QWORD *)(m + 8);
        for ( k = *v35; k; k = (_QWORD *)*k )
          m = (__int64)k;
      }
      else
      {
        for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)m == v34 )
            break;
          v34 = m;
        }
      }
    }
    else
    {
      m = (__int64)MiLocateAddress(v30);
    }
    if ( !(unsigned int)MiVadPagesTradable(m) )
      break;
    v31 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
LABEL_75:
    if ( v5 != ((v30 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v5 )
        MiUnlockPageTable(v16, v5);
      v5 = MiLockLowestValidPageTable(v16, ((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v46);
    }
    MiUnlockVa(v16, v30);
    v30 += 4096LL;
    if ( (v30 & 0xF000) == 0
      && ((unsigned int)MiWorkingSetIsContended(v16)
       || (unsigned int)MiPageTableLockIsContended(v16, v5)
       || (unsigned int)MiShouldYieldProcessor()) )
    {
      MiUnlockPageTable(v16, v5);
      v5 = 0LL;
      MiUnlockWorkingSetShared(v16, v39);
      MiLockWorkingSetShared(v16);
    }
    v33 = v42;
  }
  while ( v30 <= v42 );
  LOBYTE(v9) = v41;
LABEL_86:
  if ( v5 )
    MiUnlockPageTable(v16, v5);
  MiUnlockWorkingSetShared(v16, v39);
  v37 = PROCESS;
  MiUnlockVadRange(PROCESS, v44, v48, 0LL);
  if ( (v9 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(v37, 0x6D566D4Du);
  v38 = (void *)v49;
  *v50 = v33 - v49 + 4096;
  *v51 = v38;
  return 0;
}
