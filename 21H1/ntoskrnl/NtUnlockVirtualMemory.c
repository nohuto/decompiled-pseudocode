/*
 * XREFs of NtUnlockVirtualMemory @ 0x1402AF520
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     KeUnstackDetachProcess @ 0x14025E8B0 (KeUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     KeStackAttachProcess @ 0x1402A51A0 (KeStackAttachProcess.c)
 *     MiVadPagesTradable @ 0x1402ACB38 (MiVadPagesTradable.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiWorkingSetIsContended @ 0x1402B19F0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402B32C0 (MiPageTableLockIsContended.c)
 *     MiRotatedToFrameBuffer @ 0x140300408 (MiRotatedToFrameBuffer.c)
 *     MiUnlockVa @ 0x14030B15C (MiUnlockVa.c)
 *     MiDemoteCombinedPte @ 0x140368610 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTable @ 0x1403ACF00 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiShouldYieldProcessor @ 0x140530EB8 (MiShouldYieldProcessor.c)
 *     MiLockVadRange @ 0x140637338 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x14063C394 (MiLockUnlockCommon.c)
 *     MiUnlockVadRange @ 0x14063C4D4 (MiUnlockVadRange.c)
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
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r12
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // r15
  unsigned __int64 v33; // rsi
  __int64 m; // rdi
  __int64 v35; // r12
  __int64 v36; // rcx
  _QWORD **v37; // rax
  _QWORD *k; // rcx
  PRKPROCESS v39; // rdi
  void *v40; // rax
  unsigned __int8 v41; // [rsp+40h] [rbp-198h]
  NTSTATUS v42; // [rsp+44h] [rbp-194h]
  char v43; // [rsp+48h] [rbp-190h]
  __int64 v44; // [rsp+50h] [rbp-188h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-180h] BYREF
  __int64 v46; // [rsp+60h] [rbp-178h] BYREF
  __int64 v47; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v48; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v49; // [rsp+78h] [rbp-160h]
  __int64 v50; // [rsp+80h] [rbp-158h]
  unsigned __int64 v51; // [rsp+88h] [rbp-150h]
  PSIZE_T v52; // [rsp+90h] [rbp-148h]
  PVOID *v53; // [rsp+98h] [rbp-140h]
  int v54; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v55; // [rsp+A4h] [rbp-134h]
  __int16 v56; // [rsp+A6h] [rbp-132h]
  __int64 v57; // [rsp+A8h] [rbp-130h]
  __int64 v58; // [rsp+B0h] [rbp-128h]
  __int64 v59; // [rsp+B8h] [rbp-120h]
  __int128 v60; // [rsp+C0h] [rbp-118h]
  __int128 v61; // [rsp+D0h] [rbp-108h]
  __int128 v62; // [rsp+E0h] [rbp-F8h]
  __int128 v63; // [rsp+F0h] [rbp-E8h]
  __int128 v64; // [rsp+100h] [rbp-D8h]
  __int128 v65; // [rsp+110h] [rbp-C8h]
  __int128 v66; // [rsp+120h] [rbp-B8h]
  __int128 v67; // [rsp+130h] [rbp-A8h]
  __int128 v68; // [rsp+140h] [rbp-98h]
  __int64 v69; // [rsp+150h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v52 = RegionSize;
  v53 = BaseAddress;
  v5 = 0LL;
  v44 = 0LL;
  v46 = 0LL;
  PROCESS = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v56 = 0;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v46, (__int64)&v44, (__int64)&PROCESS);
  v7 = result;
  v42 = result;
  if ( result < 0 )
    return result;
  v8 = 0LL;
  v49 = 0LL;
  v9 = 0;
  v43 = 0;
  v10 = (v46 + v44 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v44 = v10;
  v51 = v46 & 0xFFFFFFFFFFFFF000uLL;
  v11 = v46 & 0xFFFFFFFFFFFFF000uLL;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v9 = 2;
    v43 = 2;
  }
  v57 = 20LL;
  v54 = 1;
  v55 = 4;
  v58 = 0LL;
  v59 = 0LL;
  j = 0LL;
  v13 = v10;
  v14 = PROCESS;
  v15 = MiLockVadRange(PROCESS, v11, v13, 0LL);
  v50 = v15;
  if ( !v15 )
    goto LABEL_91;
  v16 = (__int64)&v14[1].ActiveProcessorsPadding[6];
  v41 = MiLockWorkingSetShared(v16);
  if ( v11 <= v44 )
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
          if ( HIDWORD(v57) )
            MiFreeWsleList(v16, (__int64)&v54, 0);
          if ( v5 )
          {
            MiUnlockPageTable(v16, v5);
            v5 = 0LL;
          }
          MiUnlockWorkingSetShared(v16, v41);
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
        v43 = v9;
        if ( (*(_DWORD *)(j + 48) & 0x70) == 0x40 )
        {
          v9 |= 4u;
          v43 = v9;
        }
        else if ( !(unsigned int)MiVadPagesTradable(j) )
        {
          goto LABEL_55;
        }
        v49 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
      }
      v22 = v17 + ((v11 >> 9) & 0x7FFFFFFFF8LL);
      v23 = v18 + ((v11 >> 18) & 0x3FFFFFF8);
      if ( v5 == v23 )
        break;
      if ( v5 )
      {
        if ( HIDWORD(v57) )
          MiFreeWsleList(v16, (__int64)&v54, 0);
        MiUnlockPageTable(v16, v5);
      }
      valid = MiLockLowestValidPageTable(v16, v22, &v48);
      v5 = valid;
      if ( valid == v23 )
        break;
      MiUnlockPageTable(v16, valid);
      v5 = 0LL;
      v17 = 0xFFFFF68000000000uLL;
      v11 = (__int64)((v23 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v7 = -1073741782;
      v42 = -1073741782;
LABEL_54:
      v8 = v49;
      v18 = 0xFFFFF6FB40000000uLL;
      if ( v11 > v44 )
        goto LABEL_55;
    }
    v47 = MI_READ_PTE_LOCK_FREE(v22);
    if ( (v47 & 1) == 0 )
    {
      v7 = -1073741782;
      v42 = -1073741782;
LABEL_53:
      v17 = 0xFFFFF68000000000uLL;
      v11 += 4096LL;
      goto LABEL_54;
    }
    v25 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v47) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v47 = v25;
    v28 = *(_QWORD *)(v25 + 8);
    v29 = v28 | 0x8000000000000000uLL;
    v48 = v28 | 0x8000000000000000uLL;
    if ( (v9 & 4) != 0 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(v22, v29, v26, v27) == 1 )
      {
LABEL_52:
        v7 = v42;
        goto LABEL_53;
      }
      v25 = v47;
      v29 = v48;
    }
    v30 = *(_QWORD *)(v25 + 40);
    v31 = 0x1000000000LL;
    if ( (v30 & 0x1000000000LL) == 0 && v28 > 0 )
      MiDemoteCombinedPte(v16, v22, v29);
    if ( (MiGetWsleContents(v31, v11) & 0xF) != 8 )
    {
      MiInsertTbFlushEntry((__int64)&v54, v11, 1LL, 0);
      if ( HIDWORD(v57) == (_DWORD)v57 )
        MiFreeWsleList(v16, (__int64)&v54, 0);
      v7 = -1073741782;
      v42 = -1073741782;
      goto LABEL_53;
    }
    goto LABEL_52;
  }
LABEL_55:
  if ( HIDWORD(v57) )
    MiFreeWsleList(v16, (__int64)&v54, 0);
  if ( v5 )
  {
    MiUnlockPageTable(v16, v5);
    v5 = 0LL;
  }
  if ( v7 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v16, v41);
    v14 = PROCESS;
    v15 = v50;
LABEL_91:
    MiUnlockVadRange(v14, v46, v15, 0LL);
    if ( (v9 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
    return -1073741782;
  }
  v32 = v51;
  v33 = 0LL;
  m = 0LL;
  v35 = v44;
  if ( v51 > v44 )
    goto LABEL_86;
  do
  {
    if ( v32 <= v33 && m )
      goto LABEL_75;
    if ( m )
    {
      v36 = m;
      v37 = *(_QWORD ***)(m + 8);
      if ( v37 )
      {
        m = *(_QWORD *)(m + 8);
        for ( k = *v37; k; k = (_QWORD *)*k )
          m = (__int64)k;
      }
      else
      {
        for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)m == v36 )
            break;
          v36 = m;
        }
      }
    }
    else
    {
      m = (__int64)MiLocateAddress(v32);
    }
    if ( !(unsigned int)MiVadPagesTradable(m) )
      break;
    v33 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
LABEL_75:
    if ( v5 != ((v32 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v5 )
        MiUnlockPageTable(v16, v5);
      v5 = MiLockLowestValidPageTable(v16, ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v48);
    }
    MiUnlockVa(v16, v32);
    v32 += 4096LL;
    if ( (v32 & 0xF000) == 0
      && ((unsigned int)MiWorkingSetIsContended(v16)
       || (unsigned int)MiPageTableLockIsContended(v16, v5)
       || (unsigned int)MiShouldYieldProcessor()) )
    {
      MiUnlockPageTable(v16, v5);
      v5 = 0LL;
      MiUnlockWorkingSetShared(v16, v41);
      MiLockWorkingSetShared(v16);
    }
    v35 = v44;
  }
  while ( v32 <= v44 );
  LOBYTE(v9) = v43;
LABEL_86:
  if ( v5 )
    MiUnlockPageTable(v16, v5);
  MiUnlockWorkingSetShared(v16, v41);
  v39 = PROCESS;
  MiUnlockVadRange(PROCESS, v46, v50, 0LL);
  if ( (v9 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(v39, 0x6D566D4Du);
  v40 = (void *)v51;
  *v52 = v35 - v51 + 4096;
  *v53 = v40;
  return 0;
}
