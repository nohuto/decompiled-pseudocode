/*
 * XREFs of NtUnlockVirtualMemory @ 0x1402B1340
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     KeStackAttachProcess @ 0x14023EE20 (KeStackAttachProcess.c)
 *     KeUnstackDetachProcess @ 0x1402688E0 (KeUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiWorkingSetIsContended @ 0x1402CB2C0 (MiWorkingSetIsContended.c)
 *     MiPageTableLockIsContended @ 0x1402CFD90 (MiPageTableLockIsContended.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiUnlockVa @ 0x1402D4B38 (MiUnlockVa.c)
 *     MiRotatedToFrameBuffer @ 0x14030F8A8 (MiRotatedToFrameBuffer.c)
 *     MiVadPagesTradable @ 0x14034120C (MiVadPagesTradable.c)
 *     MiDemoteCombinedPte @ 0x14036AFB0 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTable @ 0x1403B54F0 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiShouldYieldProcessor @ 0x140534ED8 (MiShouldYieldProcessor.c)
 *     MiUnlockVadRange @ 0x14062DF70 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x14062E080 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1406BD73C (MiLockUnlockCommon.c)
 */

__int64 __fastcall NtUnlockVirtualMemory(HANDLE Handle, unsigned __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v4; // r13
  __int64 result; // rax
  int v6; // r12d
  unsigned __int64 v7; // r15
  int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned __int64 j; // rdi
  unsigned __int64 v12; // r8
  PRKPROCESS v13; // r14
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // rcx
  _QWORD **v19; // rax
  _QWORD *i; // rcx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r12
  unsigned __int64 valid; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // r12
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rsi
  unsigned __int64 m; // rdi
  __int64 v32; // r12
  unsigned __int64 v33; // rcx
  _QWORD **v34; // rax
  _QWORD *k; // rcx
  PRKPROCESS v36; // rdi
  unsigned __int64 v37; // rax
  unsigned __int8 v38; // [rsp+40h] [rbp-198h]
  int v39; // [rsp+44h] [rbp-194h]
  char v40; // [rsp+48h] [rbp-190h]
  __int64 v41; // [rsp+50h] [rbp-188h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-180h] BYREF
  __int64 v43; // [rsp+60h] [rbp-178h] BYREF
  __int64 v44; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-160h]
  __int64 v47; // [rsp+80h] [rbp-158h]
  unsigned __int64 v48; // [rsp+88h] [rbp-150h]
  _QWORD *v49; // [rsp+90h] [rbp-148h]
  unsigned __int64 *v50; // [rsp+98h] [rbp-140h]
  int v51; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v52; // [rsp+A4h] [rbp-134h]
  __int16 v53; // [rsp+A6h] [rbp-132h]
  __int64 v54; // [rsp+A8h] [rbp-130h]
  __int64 v55; // [rsp+B0h] [rbp-128h]
  __int64 v56; // [rsp+B8h] [rbp-120h]
  __int128 v57; // [rsp+C0h] [rbp-118h]
  __int128 v58; // [rsp+D0h] [rbp-108h]
  __int128 v59; // [rsp+E0h] [rbp-F8h]
  __int128 v60; // [rsp+F0h] [rbp-E8h]
  __int128 v61; // [rsp+100h] [rbp-D8h]
  __int128 v62; // [rsp+110h] [rbp-C8h]
  __int128 v63; // [rsp+120h] [rbp-B8h]
  __int128 v64; // [rsp+130h] [rbp-A8h]
  __int128 v65; // [rsp+140h] [rbp-98h]
  __int64 v66; // [rsp+150h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v49 = a3;
  v50 = a2;
  v4 = 0LL;
  v41 = 0LL;
  v43 = 0LL;
  PROCESS = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v53 = 0;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  result = MiLockUnlockCommon(Handle, (__int64)&v43, (__int64)&v41, (__int64)&PROCESS);
  v6 = result;
  v39 = result;
  if ( (int)result < 0 )
    return result;
  v7 = 0LL;
  v46 = 0LL;
  v8 = 0;
  v40 = 0;
  v9 = (v43 + v41 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v41 = v9;
  v48 = v43 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v43 & 0xFFFFFFFFFFFFF000uLL;
  if ( Handle != (HANDLE)-1LL )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v8 = 2;
    v40 = 2;
  }
  v54 = 20LL;
  v51 = 1;
  v52 = 4;
  v55 = 0LL;
  v56 = 0LL;
  j = 0LL;
  v12 = v9;
  v13 = PROCESS;
  v14 = MiLockVadRange(PROCESS, v10, v12, 0LL);
  v47 = v14;
  if ( !v14 )
    goto LABEL_91;
  v15 = (__int64)&v13[1].ActiveProcessorsPadding[6];
  v38 = MiLockWorkingSetShared(v15);
  if ( v10 <= v41 )
  {
    v16 = 0xFFFFF68000000000uLL;
    v17 = 0xFFFFF6FB40000000uLL;
    while ( 1 )
    {
      if ( (((unsigned __int8)(v10 >> 12) + 1) & 0xF) == 0 )
      {
        if ( (unsigned int)MiWorkingSetIsContended(v15)
          || v4 && (unsigned int)MiPageTableLockIsContended(v15, v4)
          || (unsigned int)MiShouldYieldProcessor() )
        {
          if ( HIDWORD(v54) )
            MiFreeWsleList(v15, (__int64)&v51, 0);
          if ( v4 )
          {
            MiUnlockPageTable(v15, v4);
            v4 = 0LL;
          }
          MiUnlockWorkingSetShared(v15, v38);
          MiLockWorkingSetShared(v15);
        }
        v17 = 0xFFFFF6FB40000000uLL;
        v16 = 0xFFFFF68000000000uLL;
      }
      if ( v10 > v7 || !j )
      {
        if ( j )
        {
          v18 = j;
          v19 = *(_QWORD ***)(j + 8);
          if ( v19 )
          {
            j = *(_QWORD *)(j + 8);
            for ( i = *v19; i; i = (_QWORD *)*i )
              j = (unsigned __int64)i;
          }
          else
          {
            for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v18 )
                break;
              v18 = j;
            }
          }
        }
        else
        {
          j = (unsigned __int64)MiLocateAddress(v10);
        }
        v8 &= ~4u;
        v40 = v8;
        if ( (*(_DWORD *)(j + 48) & 0x70) == 0x40 )
        {
          v8 |= 4u;
          v40 = v8;
        }
        else if ( !(unsigned int)MiVadPagesTradable(j) )
        {
          goto LABEL_55;
        }
        v46 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
      }
      v21 = v16 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
      v22 = v17 + ((v10 >> 18) & 0x3FFFFFF8);
      if ( v4 == v22 )
        break;
      if ( v4 )
      {
        if ( HIDWORD(v54) )
          MiFreeWsleList(v15, (__int64)&v51, 0);
        MiUnlockPageTable(v15, v4);
      }
      valid = MiLockLowestValidPageTable(v15, v21, &v45);
      v4 = valid;
      if ( valid == v22 )
        break;
      MiUnlockPageTable(v15, valid);
      v4 = 0LL;
      v16 = 0xFFFFF68000000000uLL;
      v10 = (__int64)((v22 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v6 = -1073741782;
      v39 = -1073741782;
LABEL_54:
      v7 = v46;
      v17 = 0xFFFFF6FB40000000uLL;
      if ( v10 > v41 )
        goto LABEL_55;
    }
    v44 = MI_READ_PTE_LOCK_FREE(v21);
    if ( (v44 & 1) == 0 )
    {
      v6 = -1073741782;
      v39 = -1073741782;
LABEL_53:
      v16 = 0xFFFFF68000000000uLL;
      v10 += 4096LL;
      goto LABEL_54;
    }
    v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v44) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v44 = v24;
    v25 = *(_QWORD *)(v24 + 8);
    v26 = v25 | 0x8000000000000000uLL;
    v45 = v25 | 0x8000000000000000uLL;
    if ( (v8 & 4) != 0 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(v21) == 1 )
      {
LABEL_52:
        v6 = v39;
        goto LABEL_53;
      }
      v24 = v44;
      v26 = v45;
    }
    v27 = *(_QWORD *)(v24 + 40);
    v28 = 0x1000000000LL;
    if ( (v27 & 0x1000000000LL) == 0 && v25 > 0 )
      MiDemoteCombinedPte(v15, v21, v26);
    if ( (MiGetWsleContents(v28, v10) & 0xF) != 8 )
    {
      MiInsertTbFlushEntry(&v51, v10, 1LL, 0LL);
      if ( HIDWORD(v54) == (_DWORD)v54 )
        MiFreeWsleList(v15, (__int64)&v51, 0);
      v6 = -1073741782;
      v39 = -1073741782;
      goto LABEL_53;
    }
    goto LABEL_52;
  }
LABEL_55:
  if ( HIDWORD(v54) )
    MiFreeWsleList(v15, (__int64)&v51, 0);
  if ( v4 )
  {
    MiUnlockPageTable(v15, v4);
    v4 = 0LL;
  }
  if ( v6 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v15, v38);
    v13 = PROCESS;
    v14 = v47;
LABEL_91:
    MiUnlockVadRange(v13, v43, v14, 0LL);
    if ( (v8 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v13, 0x6D566D4Du);
    return 3221225514LL;
  }
  v29 = v48;
  v30 = 0LL;
  m = 0LL;
  v32 = v41;
  if ( v48 > v41 )
    goto LABEL_86;
  do
  {
    if ( v29 <= v30 && m )
      goto LABEL_75;
    if ( m )
    {
      v33 = m;
      v34 = *(_QWORD ***)(m + 8);
      if ( v34 )
      {
        m = *(_QWORD *)(m + 8);
        for ( k = *v34; k; k = (_QWORD *)*k )
          m = (unsigned __int64)k;
      }
      else
      {
        for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)m == v33 )
            break;
          v33 = m;
        }
      }
    }
    else
    {
      m = (unsigned __int64)MiLocateAddress(v29);
    }
    if ( !(unsigned int)MiVadPagesTradable(m) )
      break;
    v30 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
LABEL_75:
    if ( v4 != ((v29 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v4 )
        MiUnlockPageTable(v15, v4);
      v4 = MiLockLowestValidPageTable(v15, ((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v45);
    }
    MiUnlockVa(v15, v29);
    v29 += 4096LL;
    if ( (v29 & 0xF000) == 0
      && ((unsigned int)MiWorkingSetIsContended(v15)
       || (unsigned int)MiPageTableLockIsContended(v15, v4)
       || (unsigned int)MiShouldYieldProcessor()) )
    {
      MiUnlockPageTable(v15, v4);
      v4 = 0LL;
      MiUnlockWorkingSetShared(v15, v38);
      MiLockWorkingSetShared(v15);
    }
    v32 = v41;
  }
  while ( v29 <= v41 );
  LOBYTE(v8) = v40;
LABEL_86:
  if ( v4 )
    MiUnlockPageTable(v15, v4);
  MiUnlockWorkingSetShared(v15, v38);
  v36 = PROCESS;
  MiUnlockVadRange(PROCESS, v43, v47, 0LL);
  if ( (v8 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(v36, 0x6D566D4Du);
  v37 = v48;
  *v49 = v32 - v48 + 4096;
  *v50 = v37;
  return 0LL;
}
