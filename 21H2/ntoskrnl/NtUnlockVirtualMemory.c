/*
 * XREFs of NtUnlockVirtualMemory @ 0x140338C80
 * Callers:
 *     <none>
 * Callees:
 *     MiRotatedToFrameBuffer @ 0x14022E898 (MiRotatedToFrameBuffer.c)
 *     MiVadPagesTradable @ 0x14023A0D0 (MiVadPagesTradable.c)
 *     MiUnlockVa @ 0x14025DAA0 (MiUnlockVa.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     KeStackAttachProcess @ 0x14027D680 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402ABEC0 (KeUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x1403131B0 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTable @ 0x1403B6DD0 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiShouldYieldProcessor @ 0x140536C18 (MiShouldYieldProcessor.c)
 *     MiLockUnlockCommon @ 0x1405F8920 (MiLockUnlockCommon.c)
 *     MiLockVadRange @ 0x140687890 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140689DA0 (MiUnlockVadRange.c)
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
  __int64 v16; // rdx
  __int64 v17; // r8
  _DWORD *v18; // r9
  __int64 v19; // r14
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r11
  __int64 v24; // rdx
  __int64 v25; // r8
  _DWORD *v26; // r9
  __int64 v27; // rcx
  _QWORD **v28; // rax
  _QWORD *i; // rcx
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r12
  unsigned __int64 valid; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rcx
  __int64 v36; // r12
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // r15
  unsigned __int64 v41; // rsi
  __int64 m; // rdi
  __int64 v43; // r12
  __int64 v44; // rcx
  _QWORD **v45; // rax
  _QWORD *k; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  _DWORD *v49; // r9
  PRKPROCESS v50; // rdi
  void *v51; // rax
  unsigned __int8 v52; // [rsp+40h] [rbp-198h]
  NTSTATUS v53; // [rsp+44h] [rbp-194h]
  char v54; // [rsp+48h] [rbp-190h]
  __int64 v55; // [rsp+50h] [rbp-188h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-180h] BYREF
  __int64 v57; // [rsp+60h] [rbp-178h] BYREF
  __int64 v58; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v59; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v60; // [rsp+78h] [rbp-160h]
  __int64 v61; // [rsp+80h] [rbp-158h]
  unsigned __int64 v62; // [rsp+88h] [rbp-150h]
  PSIZE_T v63; // [rsp+90h] [rbp-148h]
  PVOID *v64; // [rsp+98h] [rbp-140h]
  int v65; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v66; // [rsp+A4h] [rbp-134h]
  __int16 v67; // [rsp+A6h] [rbp-132h]
  __int64 v68; // [rsp+A8h] [rbp-130h]
  __int64 v69; // [rsp+B0h] [rbp-128h]
  __int64 v70; // [rsp+B8h] [rbp-120h]
  __int128 v71; // [rsp+C0h] [rbp-118h]
  __int128 v72; // [rsp+D0h] [rbp-108h]
  __int128 v73; // [rsp+E0h] [rbp-F8h]
  __int128 v74; // [rsp+F0h] [rbp-E8h]
  __int128 v75; // [rsp+100h] [rbp-D8h]
  __int128 v76; // [rsp+110h] [rbp-C8h]
  __int128 v77; // [rsp+120h] [rbp-B8h]
  __int128 v78; // [rsp+130h] [rbp-A8h]
  __int128 v79; // [rsp+140h] [rbp-98h]
  __int64 v80; // [rsp+150h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v63 = RegionSize;
  v64 = BaseAddress;
  v5 = 0LL;
  v55 = 0LL;
  v57 = 0LL;
  PROCESS = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v67 = 0;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v57, (__int64)&v55, (__int64)&PROCESS);
  v7 = result;
  v53 = result;
  if ( result < 0 )
    return result;
  v8 = 0LL;
  v60 = 0LL;
  v9 = 0;
  v54 = 0;
  v10 = (v57 + v55 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v55 = v10;
  v62 = v57 & 0xFFFFFFFFFFFFF000uLL;
  v11 = v57 & 0xFFFFFFFFFFFFF000uLL;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v9 = 2;
    v54 = 2;
  }
  v68 = 20LL;
  v65 = 1;
  v66 = 4;
  v69 = 0LL;
  v70 = 0LL;
  j = 0LL;
  v13 = v10;
  v14 = PROCESS;
  v15 = MiLockVadRange(PROCESS, v11, v13, 0LL);
  v61 = v15;
  if ( !v15 )
    goto LABEL_91;
  v19 = (__int64)&v14[1].ActiveProcessorsPadding[6];
  v52 = MiLockWorkingSetShared(v19, v16, v17, v18);
  if ( v11 <= v55 )
  {
    v22 = 0xFFFFF68000000000uLL;
    v23 = 0xFFFFF6FB40000000uLL;
    while ( 1 )
    {
      if ( (((unsigned __int8)(v11 >> 12) + 1) & 0xF) == 0 )
      {
        if ( MiWorkingSetIsContended(v19)
          || v5 && (unsigned int)MiPageTableLockIsContended(v19, v5)
          || (unsigned int)MiShouldYieldProcessor() )
        {
          if ( HIDWORD(v68) )
            MiFreeWsleList(v19, (__int64)&v65, 0);
          if ( v5 )
          {
            MiUnlockPageTable(v19, v5, v20, v21);
            v5 = 0LL;
          }
          MiUnlockWorkingSetShared(v19, v52);
          MiLockWorkingSetShared(v19, v24, v25, v26);
        }
        v23 = 0xFFFFF6FB40000000uLL;
        v22 = 0xFFFFF68000000000uLL;
      }
      if ( v11 > v8 || !j )
      {
        if ( j )
        {
          v27 = j;
          v28 = *(_QWORD ***)(j + 8);
          if ( v28 )
          {
            j = *(_QWORD *)(j + 8);
            for ( i = *v28; i; i = (_QWORD *)*i )
              j = (__int64)i;
          }
          else
          {
            for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v27 )
                break;
              v27 = j;
            }
          }
        }
        else
        {
          j = (__int64)MiLocateAddress(v11);
        }
        v9 &= ~4u;
        v54 = v9;
        if ( (*(_DWORD *)(j + 48) & 0x70) == 0x40 )
        {
          v9 |= 4u;
          v54 = v9;
        }
        else if ( !(unsigned int)MiVadPagesTradable(j) )
        {
          goto LABEL_55;
        }
        v60 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
      }
      v30 = v22 + ((v11 >> 9) & 0x7FFFFFFFF8LL);
      v31 = v23 + ((v11 >> 18) & 0x3FFFFFF8);
      if ( v5 == v31 )
        break;
      if ( v5 )
      {
        if ( HIDWORD(v68) )
          MiFreeWsleList(v19, (__int64)&v65, 0);
        MiUnlockPageTable(v19, v5, v20, v21);
      }
      valid = MiLockLowestValidPageTable(v19, v30, &v59);
      v5 = valid;
      if ( valid == v31 )
        break;
      MiUnlockPageTable(v19, valid, v33, v34);
      v5 = 0LL;
      v22 = 0xFFFFF68000000000uLL;
      v11 = (__int64)((v31 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v7 = -1073741782;
      v53 = -1073741782;
LABEL_54:
      v8 = v60;
      v23 = 0xFFFFF6FB40000000uLL;
      if ( v11 > v55 )
        goto LABEL_55;
    }
    v58 = MI_READ_PTE_LOCK_FREE(v30);
    if ( (v58 & 1) == 0 )
    {
      v7 = -1073741782;
      v53 = -1073741782;
LABEL_53:
      v22 = 0xFFFFF68000000000uLL;
      v11 += 4096LL;
      goto LABEL_54;
    }
    v35 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v58) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v58 = v35;
    v36 = *(_QWORD *)(v35 + 8);
    v37 = v36 | 0x8000000000000000uLL;
    v59 = v36 | 0x8000000000000000uLL;
    if ( (v9 & 4) != 0 )
    {
      if ( MiRotatedToFrameBuffer(v30) )
      {
LABEL_52:
        v7 = v53;
        goto LABEL_53;
      }
      v35 = v58;
      v37 = v59;
    }
    v38 = *(_QWORD *)(v35 + 40);
    v39 = 0x1000000000LL;
    if ( (v38 & 0x1000000000LL) == 0 && v36 > 0 )
      MiDemoteCombinedPte(v19, v30, v37);
    if ( (MiGetWsleContents(v39, v11) & 0xF) != 8 )
    {
      MiInsertTbFlushEntry(&v65, v11, 1LL, 0LL);
      if ( HIDWORD(v68) == (_DWORD)v68 )
        MiFreeWsleList(v19, (__int64)&v65, 0);
      v7 = -1073741782;
      v53 = -1073741782;
      goto LABEL_53;
    }
    goto LABEL_52;
  }
LABEL_55:
  if ( HIDWORD(v68) )
    MiFreeWsleList(v19, (__int64)&v65, 0);
  if ( v5 )
  {
    MiUnlockPageTable(v19, v5, v20, v21);
    v5 = 0LL;
  }
  if ( v7 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v19, v52);
    v14 = PROCESS;
    v15 = v61;
LABEL_91:
    MiUnlockVadRange(v14, v57, v15, 0LL);
    if ( (v9 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v14, 0x6D566D4Du);
    return -1073741782;
  }
  v40 = v62;
  v41 = 0LL;
  m = 0LL;
  v43 = v55;
  if ( v62 > v55 )
    goto LABEL_86;
  do
  {
    if ( v40 <= v41 && m )
      goto LABEL_75;
    if ( m )
    {
      v44 = m;
      v45 = *(_QWORD ***)(m + 8);
      if ( v45 )
      {
        m = *(_QWORD *)(m + 8);
        for ( k = *v45; k; k = (_QWORD *)*k )
          m = (__int64)k;
      }
      else
      {
        for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)m == v44 )
            break;
          v44 = m;
        }
      }
    }
    else
    {
      m = (__int64)MiLocateAddress(v40);
    }
    if ( !(unsigned int)MiVadPagesTradable(m) )
      break;
    v41 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
LABEL_75:
    if ( v5 != ((v40 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v5 )
        MiUnlockPageTable(v19, v5, v20, v21);
      v5 = MiLockLowestValidPageTable(v19, ((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v59);
    }
    MiUnlockVa(v19, v40);
    v40 += 4096LL;
    if ( (v40 & 0xF000) == 0
      && (MiWorkingSetIsContended(v19)
       || (unsigned int)MiPageTableLockIsContended(v19, v5)
       || (unsigned int)MiShouldYieldProcessor()) )
    {
      MiUnlockPageTable(v19, v5, v20, v21);
      v5 = 0LL;
      MiUnlockWorkingSetShared(v19, v52);
      MiLockWorkingSetShared(v19, v47, v48, v49);
    }
    v43 = v55;
  }
  while ( v40 <= v55 );
  LOBYTE(v9) = v54;
LABEL_86:
  if ( v5 )
    MiUnlockPageTable(v19, v5, v20, v21);
  MiUnlockWorkingSetShared(v19, v52);
  v50 = PROCESS;
  MiUnlockVadRange(PROCESS, v57, v61, 0LL);
  if ( (v9 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(v50, 0x6D566D4Du);
  v51 = (void *)v62;
  *v63 = v43 - v62 + 4096;
  *v64 = v51;
  return 0;
}
