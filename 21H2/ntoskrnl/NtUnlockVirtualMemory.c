/*
 * XREFs of NtUnlockVirtualMemory @ 0x14032DF30
 * Callers:
 *     <none>
 * Callees:
 *     KeUnstackDetachProcess @ 0x1402075C0 (KeUnstackDetachProcess.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     KeStackAttachProcess @ 0x14025C110 (KeStackAttachProcess.c)
 *     MiUnlockVa @ 0x14026FB00 (MiUnlockVa.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiRotatedToFrameBuffer @ 0x1402B0538 (MiRotatedToFrameBuffer.c)
 *     MiVadPagesTradable @ 0x1402BBEC0 (MiVadPagesTradable.c)
 *     MiLockLowestValidPageTable @ 0x1403055C0 (MiLockLowestValidPageTable.c)
 *     MiPageTableLockIsContended @ 0x140308460 (MiPageTableLockIsContended.c)
 *     MiWorkingSetIsContended @ 0x14030B7D0 (MiWorkingSetIsContended.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
 *     MiDemoteCombinedPte @ 0x14036B260 (MiDemoteCombinedPte.c)
 *     MiUnlockPageTable @ 0x1403B6C60 (MiUnlockPageTable.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiShouldYieldProcessor @ 0x1405369D8 (MiShouldYieldProcessor.c)
 *     MiLockVadRange @ 0x14061DC20 (MiLockVadRange.c)
 *     MiUnlockVadRange @ 0x140620130 (MiUnlockVadRange.c)
 *     MiLockUnlockCommon @ 0x14069975C (MiLockUnlockCommon.c)
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
  __int64 v15; // rdx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // r14
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r11
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  __int64 v26; // rcx
  _QWORD **v27; // rax
  _QWORD *i; // rcx
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // r12
  unsigned __int64 valid; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rcx
  __int64 v35; // r12
  unsigned __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rcx
  unsigned __int64 v39; // r15
  unsigned __int64 v40; // rsi
  __int64 m; // rdi
  __int64 v42; // r12
  __int64 v43; // rcx
  _QWORD **v44; // rax
  _QWORD *k; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  _DWORD *v48; // r9
  PRKPROCESS v49; // rdi
  unsigned __int64 v50; // rax
  unsigned __int8 v51; // [rsp+40h] [rbp-198h]
  int v52; // [rsp+44h] [rbp-194h]
  char v53; // [rsp+48h] [rbp-190h]
  __int64 v54; // [rsp+50h] [rbp-188h] BYREF
  PRKPROCESS PROCESS; // [rsp+58h] [rbp-180h] BYREF
  __int64 v56; // [rsp+60h] [rbp-178h] BYREF
  __int64 v57; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v58; // [rsp+70h] [rbp-168h] BYREF
  unsigned __int64 v59; // [rsp+78h] [rbp-160h]
  __int64 v60; // [rsp+80h] [rbp-158h]
  unsigned __int64 v61; // [rsp+88h] [rbp-150h]
  _QWORD *v62; // [rsp+90h] [rbp-148h]
  unsigned __int64 *v63; // [rsp+98h] [rbp-140h]
  int v64; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v65; // [rsp+A4h] [rbp-134h]
  __int16 v66; // [rsp+A6h] [rbp-132h]
  __int64 v67; // [rsp+A8h] [rbp-130h]
  __int64 v68; // [rsp+B0h] [rbp-128h]
  __int64 v69; // [rsp+B8h] [rbp-120h]
  __int128 v70; // [rsp+C0h] [rbp-118h]
  __int128 v71; // [rsp+D0h] [rbp-108h]
  __int128 v72; // [rsp+E0h] [rbp-F8h]
  __int128 v73; // [rsp+F0h] [rbp-E8h]
  __int128 v74; // [rsp+100h] [rbp-D8h]
  __int128 v75; // [rsp+110h] [rbp-C8h]
  __int128 v76; // [rsp+120h] [rbp-B8h]
  __int128 v77; // [rsp+130h] [rbp-A8h]
  __int128 v78; // [rsp+140h] [rbp-98h]
  __int64 v79; // [rsp+150h] [rbp-88h]
  struct _KAPC_STATE ApcState; // [rsp+160h] [rbp-78h] BYREF

  v62 = a3;
  v63 = a2;
  v4 = 0LL;
  v54 = 0LL;
  v56 = 0LL;
  PROCESS = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  v66 = 0;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  result = MiLockUnlockCommon(Handle, (__int64)&v56, (__int64)&v54, (__int64)&PROCESS);
  v6 = result;
  v52 = result;
  if ( (int)result < 0 )
    return result;
  v7 = 0LL;
  v59 = 0LL;
  v8 = 0;
  v53 = 0;
  v9 = (v56 + v54 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v54 = v9;
  v61 = v56 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v56 & 0xFFFFFFFFFFFFF000uLL;
  if ( Handle != (HANDLE)-1LL )
  {
    KeStackAttachProcess(PROCESS, &ApcState);
    v8 = 2;
    v53 = 2;
  }
  v67 = 20LL;
  v64 = 1;
  v65 = 4;
  v68 = 0LL;
  v69 = 0LL;
  j = 0LL;
  v12 = v9;
  v13 = PROCESS;
  v14 = MiLockVadRange(PROCESS, v10, v12, 0LL);
  v60 = v14;
  if ( !v14 )
    goto LABEL_91;
  v18 = (__int64)&v13[1].ActiveProcessorsPadding[6];
  v51 = MiLockWorkingSetShared(v18, v15, v16, v17);
  if ( v10 <= v54 )
  {
    v21 = 0xFFFFF68000000000uLL;
    v22 = 0xFFFFF6FB40000000uLL;
    while ( 1 )
    {
      if ( (((unsigned __int8)(v10 >> 12) + 1) & 0xF) == 0 )
      {
        if ( MiWorkingSetIsContended(v18)
          || v4 && (unsigned int)MiPageTableLockIsContended(v18, v4)
          || (unsigned int)MiShouldYieldProcessor() )
        {
          if ( HIDWORD(v67) )
            MiFreeWsleList(v18, (__int64)&v64, 0);
          if ( v4 )
          {
            MiUnlockPageTable(v18, v4, v19, v20);
            v4 = 0LL;
          }
          MiUnlockWorkingSetShared(v18, v51);
          MiLockWorkingSetShared(v18, v23, v24, v25);
        }
        v22 = 0xFFFFF6FB40000000uLL;
        v21 = 0xFFFFF68000000000uLL;
      }
      if ( v10 > v7 || !j )
      {
        if ( j )
        {
          v26 = j;
          v27 = *(_QWORD ***)(j + 8);
          if ( v27 )
          {
            j = *(_QWORD *)(j + 8);
            for ( i = *v27; i; i = (_QWORD *)*i )
              j = (__int64)i;
          }
          else
          {
            for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v26 )
                break;
              v26 = j;
            }
          }
        }
        else
        {
          j = (__int64)MiLocateAddress(v10);
        }
        v8 &= ~4u;
        v53 = v8;
        if ( (*(_DWORD *)(j + 48) & 0x70) == 0x40 )
        {
          v8 |= 4u;
          v53 = v8;
        }
        else if ( !(unsigned int)MiVadPagesTradable(j) )
        {
          goto LABEL_55;
        }
        v59 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
      }
      v29 = v21 + ((v10 >> 9) & 0x7FFFFFFFF8LL);
      v30 = v22 + ((v10 >> 18) & 0x3FFFFFF8);
      if ( v4 == v30 )
        break;
      if ( v4 )
      {
        if ( HIDWORD(v67) )
          MiFreeWsleList(v18, (__int64)&v64, 0);
        MiUnlockPageTable(v18, v4, v19, v20);
      }
      valid = MiLockLowestValidPageTable(v18, v29, &v58);
      v4 = valid;
      if ( valid == v30 )
        break;
      MiUnlockPageTable(v18, valid, v32, v33);
      v4 = 0LL;
      v21 = 0xFFFFF68000000000uLL;
      v10 = (__int64)((v30 << 25) + 0x10000000) >> 16 << 25 >> 16;
      v6 = -1073741782;
      v52 = -1073741782;
LABEL_54:
      v7 = v59;
      v22 = 0xFFFFF6FB40000000uLL;
      if ( v10 > v54 )
        goto LABEL_55;
    }
    v57 = MI_READ_PTE_LOCK_FREE(v29);
    if ( (v57 & 1) == 0 )
    {
      v6 = -1073741782;
      v52 = -1073741782;
LABEL_53:
      v21 = 0xFFFFF68000000000uLL;
      v10 += 4096LL;
      goto LABEL_54;
    }
    v34 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v57) >> 12) & 0xFFFFFFFFFLL)
        - 0x58000000000LL;
    v57 = v34;
    v35 = *(_QWORD *)(v34 + 8);
    v36 = v35 | 0x8000000000000000uLL;
    v58 = v35 | 0x8000000000000000uLL;
    if ( (v8 & 4) != 0 )
    {
      if ( MiRotatedToFrameBuffer(v29) )
      {
LABEL_52:
        v6 = v52;
        goto LABEL_53;
      }
      v34 = v57;
      v36 = v58;
    }
    v37 = *(_QWORD *)(v34 + 40);
    v38 = 0x1000000000LL;
    if ( (v37 & 0x1000000000LL) == 0 && v35 > 0 )
      MiDemoteCombinedPte(v18, v29, v36);
    if ( (MiGetWsleContents(v38, v10) & 0xF) != 8 )
    {
      MiInsertTbFlushEntry(&v64, v10, 1LL, 0LL);
      if ( HIDWORD(v67) == (_DWORD)v67 )
        MiFreeWsleList(v18, (__int64)&v64, 0);
      v6 = -1073741782;
      v52 = -1073741782;
      goto LABEL_53;
    }
    goto LABEL_52;
  }
LABEL_55:
  if ( HIDWORD(v67) )
    MiFreeWsleList(v18, (__int64)&v64, 0);
  if ( v4 )
  {
    MiUnlockPageTable(v18, v4, v19, v20);
    v4 = 0LL;
  }
  if ( v6 == -1073741782 )
  {
    MiUnlockWorkingSetShared(v18, v51);
    v13 = PROCESS;
    v14 = v60;
LABEL_91:
    MiUnlockVadRange(v13, v56, v14, 0LL);
    if ( (v8 & 2) != 0 )
      KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObjectWithTag(v13, 0x6D566D4Du);
    return 3221225514LL;
  }
  v39 = v61;
  v40 = 0LL;
  m = 0LL;
  v42 = v54;
  if ( v61 > v54 )
    goto LABEL_86;
  do
  {
    if ( v39 <= v40 && m )
      goto LABEL_75;
    if ( m )
    {
      v43 = m;
      v44 = *(_QWORD ***)(m + 8);
      if ( v44 )
      {
        m = *(_QWORD *)(m + 8);
        for ( k = *v44; k; k = (_QWORD *)*k )
          m = (__int64)k;
      }
      else
      {
        for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)m == v43 )
            break;
          v43 = m;
        }
      }
    }
    else
    {
      m = (__int64)MiLocateAddress(v39);
    }
    if ( !(unsigned int)MiVadPagesTradable(m) )
      break;
    v40 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
LABEL_75:
    if ( v4 != ((v39 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v4 )
        MiUnlockPageTable(v18, v4, v19, v20);
      v4 = MiLockLowestValidPageTable(v18, ((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, &v58);
    }
    MiUnlockVa(v18, v39);
    v39 += 4096LL;
    if ( (v39 & 0xF000) == 0
      && (MiWorkingSetIsContended(v18)
       || (unsigned int)MiPageTableLockIsContended(v18, v4)
       || (unsigned int)MiShouldYieldProcessor()) )
    {
      MiUnlockPageTable(v18, v4, v19, v20);
      v4 = 0LL;
      MiUnlockWorkingSetShared(v18, v51);
      MiLockWorkingSetShared(v18, v46, v47, v48);
    }
    v42 = v54;
  }
  while ( v39 <= v54 );
  LOBYTE(v8) = v53;
LABEL_86:
  if ( v4 )
    MiUnlockPageTable(v18, v4, v19, v20);
  MiUnlockWorkingSetShared(v18, v51);
  v49 = PROCESS;
  MiUnlockVadRange(PROCESS, v56, v60, 0LL);
  if ( (v8 & 2) != 0 )
    KeUnstackDetachProcess(&ApcState);
  ObfDereferenceObjectWithTag(v49, 0x6D566D4Du);
  v50 = v61;
  *v62 = v42 - v61 + 4096;
  *v63 = v50;
  return 0LL;
}
