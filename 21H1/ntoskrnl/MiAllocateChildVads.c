/*
 * XREFs of MiAllocateChildVads @ 0x1408D4140
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1408D4710 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiVadPureReserve @ 0x14021AF70 (MiVadPureReserve.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x1402AA0B4 (MiLocateVadEvent.c)
 *     MiIsVadLargePrivate @ 0x1402FE744 (MiIsVadLargePrivate.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiFreeVadEvents @ 0x140534C44 (MiFreeVadEvents.c)
 *     MiCloneCaptureVadCommit @ 0x14053F528 (MiCloneCaptureVadCommit.c)
 *     MiCloneImageVad @ 0x140553790 (MiCloneImageVad.c)
 *     MiVadShouldBeForked @ 0x140555FD4 (MiVadShouldBeForked.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 *     MiCreateWriteWatchView @ 0x1406CED18 (MiCreateWriteWatchView.c)
 *     MiFreePlaceholderStorage @ 0x1406EDC98 (MiFreePlaceholderStorage.c)
 *     MiCloneNoChange @ 0x1408C3D38 (MiCloneNoChange.c)
 *     MiFreeVadEventBitmap @ 0x1408C3E08 (MiFreeVadEventBitmap.c)
 *     MiCloneLargeFileOnlyVad @ 0x1408CB360 (MiCloneLargeFileOnlyVad.c)
 *     MiCloneDiscardVadCommit @ 0x1408CC494 (MiCloneDiscardVadCommit.c)
 *     MiCreatePlaceholderStorage @ 0x1408D3988 (MiCreatePlaceholderStorage.c)
 *     MiDeletePartialCloneVads @ 0x1408D4BD8 (MiDeletePartialCloneVads.c)
 *     MiInsertChildVads @ 0x1408D4E30 (MiInsertChildVads.c)
 *     MiVadHasSharedCommit @ 0x1408D50E0 (MiVadHasSharedCommit.c)
 *     MiCreateLargePageVad @ 0x1408D5614 (MiCreateLargePageVad.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  void *v3; // r12
  int v4; // r15d
  _QWORD *j; // rdi
  _QWORD *i; // rax
  _QWORD **v8; // rax
  __int64 v9; // rbp
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  int v12; // r8d
  ULONG v13; // r9d
  SIZE_T v14; // rsi
  _QWORD *Pool; // rax
  __int64 v16; // r8
  _DWORD *v17; // r9
  _QWORD *v18; // rbx
  int v19; // ecx
  unsigned int v20; // ecx
  int inserted; // esi
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _DWORD *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  _OWORD v32[3]; // [rsp+20h] [rbp-78h] BYREF

  memset(v32, 0, sizeof(v32));
  v3 = 0LL;
  v4 = 0;
  j = 0LL;
  for ( i = *(_QWORD **)&KeGetCurrentThread()->ApcState.Process[1].Spare2[15]; i; i = (_QWORD *)*i )
    j = i;
  while ( 1 )
  {
    do
    {
      if ( !j )
        return MiInsertChildVads(BugCheckParameter1, v3);
      v8 = (_QWORD **)j[1];
      v9 = (__int64)j;
      v10 = j;
      if ( v8 )
      {
        v11 = *v8;
        for ( j = (_QWORD *)j[1]; v11; v11 = (_QWORD *)*v11 )
          j = v11;
      }
      else
      {
        while ( 1 )
        {
          j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !j || (_QWORD *)*j == v10 )
            break;
          v10 = j;
        }
      }
    }
    while ( !(unsigned int)MiVadShouldBeForked(v9) );
    v12 = *(_DWORD *)(v9 + 48);
    v13 = 1818517846;
    v14 = (-(__int64)((v12 & 0x100000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136;
    if ( (v12 & 0x100000) == 0 && (v12 & 0x70) == 0x20 && (v12 & 0x200000) != 0 )
    {
      v13 = 1231315286;
      v14 = 8
          * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(v9 + 72) + 8LL) >> 6)
           + ((*(_DWORD *)(***(_QWORD ***)(v9 + 72) + 8LL) & 0x3F) != 0)
           + 20LL);
    }
    Pool = MiAllocatePool(64, v14, v13);
    v18 = Pool;
    if ( !Pool )
      break;
    memmove(Pool, (const void *)v9, v14);
    v19 = *((_DWORD *)v18 + 12);
    if ( (*(_DWORD *)(v9 + 48) & 0x100000) != 0 )
      v19 &= ~8u;
    else
      v18[14] = BugCheckParameter1 | 1;
    v18[7] = 0LL;
    v20 = v19 & 0xFFFFFFFC;
    *((_DWORD *)v18 + 9) = 0;
    v18[5] = 0LL;
    v18[1] = 0LL;
    *((_DWORD *)v18 + 12) = v20;
    if ( (v20 & 0x100000) == 0 && (v20 & 0x70) == 0x20 && (v20 & 0x400000) != 0 )
      *((_DWORD *)v18 + 12) = v20 & 0xFFBFFFFF;
    v18[2] = -2LL;
    if ( (unsigned int)MiVadHasSharedCommit(v9) )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD ***)(v9 + 72), BugCheckParameter1, 0);
      if ( inserted < 0 )
        goto LABEL_52;
    }
    if ( (unsigned int)MiVadPureReserve((__int64)v18) )
    {
      v22 = *((unsigned int *)v18 + 13);
      LODWORD(v22) = v22 & 0x7FFFFFFF;
      if ( (v22 | ((unsigned __int64)*((unsigned __int8 *)v18 + 34) << 31)) < 0x7FFFFFFFDLL )
      {
        inserted = MiCloneCaptureVadCommit((__int64)v18);
        if ( inserted < 0 )
        {
          if ( (unsigned int)MiVadHasSharedCommit(v18) )
            MiRemoveSharedCommitNode(*(_QWORD **)v18[9], BugCheckParameter1, 0);
LABEL_52:
          ExFreePoolWithTag(v18, 0);
          v18 = 0LL;
          goto LABEL_56;
        }
      }
    }
    if ( (*(_DWORD *)(v9 + 48) & 8) != 0 )
    {
      inserted = MiCloneNoChange(v9, (__int64)v18);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( MiLocateVadEvent(v9, 128LL) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v32, v17);
      v4 = 1;
      inserted = MiCreatePlaceholderStorage((__int64)v18);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x300000) == 0x300000 )
    {
      if ( !v4 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v32, v17);
        v4 = 1;
      }
      inserted = MiCreateWriteWatchView(BugCheckParameter1, (__int64)v18);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( MiIsVadLargePrivate(v9) )
    {
      v23 = *(_DWORD *)(v9 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31);
      v24 = (v23 ^ *((_DWORD *)v18 + 13)) & 0x7FFFFFFF;
      *((_BYTE *)v18 + 34) = v23 >> 31;
      *((_DWORD *)v18 + 13) ^= v24;
      inserted = MiCreateLargePageVad(BugCheckParameter1, v18, 0LL, 1LL);
      if ( inserted < 0 )
        goto LABEL_56;
      ++*a2;
    }
    else
    {
      v25 = *(_DWORD *)(v9 + 48) & 0x70;
      if ( v25 == 32 )
      {
        v26 = MiCloneImageVad(BugCheckParameter1, (__int64)v18, v9);
      }
      else
      {
        if ( v25 != 80 || !*(_QWORD *)(**(_QWORD **)(v9 + 72) + 64LL) )
          goto LABEL_47;
        v26 = MiCloneLargeFileOnlyVad(v9);
      }
      inserted = v26;
      if ( v26 < 0 )
        goto LABEL_56;
    }
LABEL_47:
    if ( v4 )
    {
      KiUnstackDetachProcess((__int64)v32, 0LL, v16, v17);
      v4 = 0;
    }
    *v18 = v3;
    v3 = v18;
  }
  inserted = -1073741670;
LABEL_56:
  if ( !v4 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v32, v17);
  if ( v18 )
  {
    if ( (unsigned int)MiVadHasSharedCommit(v18) )
      MiRemoveSharedCommitNode(*(_QWORD **)v18[9], BugCheckParameter1, 0);
    MiCloneDiscardVadCommit((__int64)v18);
    MiFreeVadEventBitmap(BugCheckParameter1, (__int64)v18, 4LL, v28);
    MiFreePlaceholderStorage((__int64)v18, v29, v30, v31);
    MiFreeVadEvents((__int64)v18);
    ExFreePoolWithTag(v18, 0);
  }
  if ( v3 )
    MiDeletePartialCloneVads(v3);
  KiUnstackDetachProcess((__int64)v32, 0LL, v16, v17);
  return (unsigned int)inserted;
}
