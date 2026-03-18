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

__int64 __fastcall NtUnlockVirtualMemory(HANDLE Handle, unsigned __int64 *a2, _QWORD *a3)
{
  unsigned __int64 v4; // r13
  __int64 result; // rax
  int v6; // r12d
  unsigned __int64 v7; // r15
  int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rsi
  __int64 j; // rdi
  unsigned __int64 v12; // r8
  PRKPROCESS v13; // r14
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  _QWORD **v19; // rax
  _QWORD *i; // rcx
  unsigned __int64 v21; // r15
  unsigned __int64 v22; // r12
  unsigned __int64 valid; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r12
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rsi
  __int64 m; // rdi
  __int64 v34; // r12
  __int64 v35; // rcx
  _QWORD **v36; // rax
  _QWORD *k; // rcx
  PRKPROCESS v38; // rdi
  unsigned __int64 v39; // rax
  unsigned __int8 v40; // [rsp+40h] [rbp-198h]
  int v41; // [rsp+44h] [rbp-194h]
  char v42; // [rsp+48h] [rbp-190h]
  __int64 v43; // [rsp+50h] [rbp-188h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-180h] BYREF
  __int64 v45; // [rsp+60h] [rbp-178h] BYREF
  __int64 v46; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v47; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-160h]
  __int64 v49; // [rsp+80h] [rbp-158h]
  unsigned __int64 v50; // [rsp+88h] [rbp-150h]
  _QWORD *v51; // [rsp+90h] [rbp-148h]
  unsigned __int64 *v52; // [rsp+98h] [rbp-140h]
  int v53; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v54; // [rsp+A4h] [rbp-134h]
  __int16 v55; // [rsp+A6h] [rbp-132h]
  __int64 v56; // [rsp+A8h] [rbp-130h]
  __int64 v57; // [rsp+B0h] [rbp-128h]
  __int64 v58; // [rsp+B8h] [rbp-120h]
  __int128 v59; // [rsp+C0h] [rbp-118h]
  __int128 v60; // [rsp+D0h] [rbp-108h]
  __int128 v61; // [rsp+E0h] [rbp-F8h]
  __int128 v62; // [rsp+F0h] [rbp-E8h]
  __int128 v63; // [rsp+100h] [rbp-D8h]
  __int128 v64; // [rsp+110h] [rbp-C8h]
  __int128 v65; // [rsp+120h] [rbp-B8h]
  __int128 v66; // [rsp+130h] [rbp-A8h]
  __int128 v67; // [rsp+140h] [rbp-98h]
  __int64 v68; // [rsp+150h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v51 = a3;
  v52 = a2;
  v4 = 0LL;
  v43 = 0LL;
  v45 = 0LL;
  PROCESS = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v55 = 0;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  result = MiLockUnlockCommon(Handle, (__int64)&v45, (__int64)&v43, (__int64)&PROCESS);
  v6 = result;
  v41 = result;
  if ( (int)result < 0 )
    return result;
  v7 = 0LL;
  v48 = 0LL;
  v8 = 0;
  v42 = 0;
  v9 = (v45 + v43 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v43 = v9;
  v50 = v45 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v45 & 0xFFFFFFFFFFFFF000uLL;
  if ( Handle != (HANDLE)-1LL )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v8 = 2;
    v42 = 2;
  }
  v56 = 20LL;
  v53 = 1;
  v54 = 4;
  v57 = 0LL;
  v58 = 0LL;
  j = 0LL;
  v12 = v9;
  v13 = PROCESS;
  v14 = MiLockVadRange(PROCESS, v10, v12, 0LL);
  v49 = v14;
  if ( !v14 )
    goto LABEL_91;
  v15 = (__int64)&v13[1].ActiveProcessorsPadding[6];
  v40 = MiLockWorkingSetShared(v15);
  if ( v10 <= v43 )
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
          if ( HIDWORD(v56) )
            MiFreeWsleList(v15, (__int64)&v53, 0);
          if ( v4 )
          {
            MiUnlockPageTable(v15, v4);
            v4 = 0LL;
          }
          MiUnlockWorkingSetShared(v15, v40);
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
              j = (__int64)i;
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
          j = (__int64)MiLocateAddress(v10);
        }
        v8 &= ~4u;
        v42 = v8;
        if ( (*(_DWORD *)(j + 48) & 0x70) == 0x40 )
        {
          v8 |= 4u;
          v42 = v8;
        }
        else if ( !(unsigned int)MiVadPagesTradable(j) )
        {
          goto LABEL_55;
        }
        v48 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
      }
      v21 = v16 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
      v22 = v17 + ((v10 >> 18) & 0x3FFFFFF8);
      if ( v4 == v22 )
        break;
      if ( v4 )
      {
        if ( HIDWORD(v56) )
          MiFreeWsleList(v15, (__int64)&v53, 0);
        MiUnlockPageTable(v15, v4);
      }
      valid = MiLockLowestValidPageTable(v15, v21, &v47);
      v4 = valid;
      if ( valid == v22 )
        break;
      MiUnlockPageTable(v15, valid);
      v4 = 0LL;
      v16 = 0xFFFFF68000000000uLL;
      v10 = (__int64)((v22 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v6 = -1073741782;
      v41 = -1073741782;
LABEL_54:
      v7 = v48;
      v17 = 0xFFFFF6FB40000000uLL;
      if ( v10 > v43 )
        goto LABEL_55;
    }
    v46 = MI_READ_PTE_LOCK_FREE(v21);
    if ( (v46 & 1) == 0 )
    {
      v6 = -1073741782;
      v41 = -1073741782;
LABEL_53:
      v16 = 0xFFFFF68000000000uLL;
      v10 += 4096LL;
      goto LABEL_54;
    }
    v24 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v46) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v46 = v24;
    v27 = *(_QWORD *)(v24 + 8);
    v28 = v27 | 0x8000000000000000uLL;
    v47 = v27 | 0x8000000000000000uLL;
    if ( (v8 & 4) != 0 )
    {
      if ( (unsigned int)MiRotatedToFrameBuffer(v21, v28, v25, v26) == 1 )
      {
LABEL_52:
        v6 = v41;
        goto LABEL_53;
      }
      v24 = v46;
      v28 = v47;
    }
    v29 = *(_QWORD *)(v24 + 40);
    v30 = 0x1000000000LL;
    if ( (v29 & 0x1000000000LL) == 0 && v27 > 0 )
      MiDemoteCombinedPte(v15, v21, v28);
    if ( (MiGetWsleContents(v30, v10) & 0xF) != 8 )
    {
      MiInsertTbFlushEntry((__int64)&v53, v10, 1LL, 0);
      if ( HIDWORD(v56) == (_DWORD)v56 )
        MiFreeWsleList(v15, (__int64)&v53, 0);
      v6 = -1073741782;
      v41 = -1073741782;
      goto LABEL_53;
    }
    goto LABEL_52;
  }
LABEL_55:
  if ( HIDWORD(v56) )
    MiFreeWsleList(v15, (__int64)&v53, 0);
  if ( v4 )
  {
    MiUnlockPageTable(v15, v4);
    v4 = 0LL;
  }
  if ( v6 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v15, v40);
    v13 = PROCESS;
    v14 = v49;
LABEL_91:
    MiUnlockVadRange(v13, v45, v14, 0LL);
    if ( (v8 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v13, 0x6D566D4Du);
    return 3221225514LL;
  }
  v31 = v50;
  v32 = 0LL;
  m = 0LL;
  v34 = v43;
  if ( v50 > v43 )
    goto LABEL_86;
  do
  {
    if ( v31 <= v32 && m )
      goto LABEL_75;
    if ( m )
    {
      v35 = m;
      v36 = *(_QWORD ***)(m + 8);
      if ( v36 )
      {
        m = *(_QWORD *)(m + 8);
        for ( k = *v36; k; k = (_QWORD *)*k )
          m = (__int64)k;
      }
      else
      {
        for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)m == v35 )
            break;
          v35 = m;
        }
      }
    }
    else
    {
      m = (__int64)MiLocateAddress(v31);
    }
    if ( !(unsigned int)MiVadPagesTradable(m) )
      break;
    v32 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
LABEL_75:
    if ( v4 != ((v31 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v4 )
        MiUnlockPageTable(v15, v4);
      v4 = MiLockLowestValidPageTable(v15, ((v31 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v47);
    }
    MiUnlockVa(v15, v31);
    v31 += 4096LL;
    if ( (v31 & 0xF000) == 0
      && ((unsigned int)MiWorkingSetIsContended(v15)
       || (unsigned int)MiPageTableLockIsContended(v15, v4)
       || (unsigned int)MiShouldYieldProcessor()) )
    {
      MiUnlockPageTable(v15, v4);
      v4 = 0LL;
      MiUnlockWorkingSetShared(v15, v40);
      MiLockWorkingSetShared(v15);
    }
    v34 = v43;
  }
  while ( v31 <= v43 );
  LOBYTE(v8) = v42;
LABEL_86:
  if ( v4 )
    MiUnlockPageTable(v15, v4);
  MiUnlockWorkingSetShared(v15, v40);
  v38 = PROCESS;
  MiUnlockVadRange(PROCESS, v45, v49, 0LL);
  if ( (v8 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(v38, 0x6D566D4Du);
  v39 = v50;
  *v51 = v34 - v50 + 4096;
  *v52 = v39;
  return 0LL;
}
