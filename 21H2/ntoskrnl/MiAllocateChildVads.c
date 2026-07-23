/*
 * XREFs of MiAllocateChildVads @ 0x1408D8BF0
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1408D91C0 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiIsVadLargePrivate @ 0x14022B870 (MiIsVadLargePrivate.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     MiLocateVadEvent @ 0x140309104 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiFreeVadEvents @ 0x14053A9A4 (MiFreeVadEvents.c)
 *     MiCloneCaptureVadCommit @ 0x14054528C (MiCloneCaptureVadCommit.c)
 *     MiCloneImageVad @ 0x1405594C0 (MiCloneImageVad.c)
 *     MiVadShouldBeForked @ 0x14055BD04 (MiVadShouldBeForked.c)
 *     MiCreateWriteWatchView @ 0x1405FE7B0 (MiCreateWriteWatchView.c)
 *     MiFreePlaceholderStorage @ 0x1406229E8 (MiFreePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x1407028C0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140702B30 (MiInsertSharedCommitNode.c)
 *     MiCloneNoChange @ 0x1408C87E8 (MiCloneNoChange.c)
 *     MiFreeVadEventBitmap @ 0x1408C88B8 (MiFreeVadEventBitmap.c)
 *     MiCloneLargeFileOnlyVad @ 0x1408CFE10 (MiCloneLargeFileOnlyVad.c)
 *     MiCloneDiscardVadCommit @ 0x1408D0F44 (MiCloneDiscardVadCommit.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8438 (MiCreatePlaceholderStorage.c)
 *     MiDeletePartialCloneVads @ 0x1408D9688 (MiDeletePartialCloneVads.c)
 *     MiInsertChildVads @ 0x1408D98E0 (MiInsertChildVads.c)
 *     MiVadHasSharedCommit @ 0x1408D9B90 (MiVadHasSharedCommit.c)
 *     MiCreateLargePageVad @ 0x1408DA0C4 (MiCreateLargePageVad.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  _QWORD *v16; // rbx
  int v17; // ecx
  unsigned int v18; // ecx
  int inserted; // esi
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  _DWORD *v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
  _OWORD v30[3]; // [rsp+20h] [rbp-78h] BYREF

  memset(v30, 0, sizeof(v30));
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
    v16 = Pool;
    if ( !Pool )
      break;
    memmove(Pool, (const void *)v9, v14);
    v17 = *((_DWORD *)v16 + 12);
    if ( (*(_DWORD *)(v9 + 48) & 0x100000) != 0 )
      v17 &= ~8u;
    else
      v16[14] = BugCheckParameter1 | 1;
    v16[7] = 0LL;
    v18 = v17 & 0xFFFFFFFC;
    *((_DWORD *)v16 + 9) = 0;
    v16[5] = 0LL;
    v16[1] = 0LL;
    *((_DWORD *)v16 + 12) = v18;
    if ( (v18 & 0x100000) == 0 && (v18 & 0x70) == 0x20 && (v18 & 0x400000) != 0 )
      *((_DWORD *)v16 + 12) = v18 & 0xFFBFFFFF;
    v16[2] = -2LL;
    if ( (unsigned int)MiVadHasSharedCommit(v9) )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD ***)(v9 + 72), BugCheckParameter1, 0);
      if ( inserted < 0 )
        goto LABEL_52;
    }
    if ( (unsigned int)MiVadPureReserve((__int64)v16) )
    {
      v20 = *((unsigned int *)v16 + 13);
      LODWORD(v20) = v20 & 0x7FFFFFFF;
      if ( (v20 | ((unsigned __int64)*((unsigned __int8 *)v16 + 34) << 31)) < 0x7FFFFFFFDLL )
      {
        inserted = MiCloneCaptureVadCommit((__int64)v16);
        if ( inserted < 0 )
        {
          if ( (unsigned int)MiVadHasSharedCommit(v16) )
            MiRemoveSharedCommitNode(*(_QWORD **)v16[9], BugCheckParameter1, 0);
LABEL_52:
          ExFreePoolWithTag(v16, 0);
          v16 = 0LL;
          goto LABEL_56;
        }
      }
    }
    if ( (*(_DWORD *)(v9 + 48) & 8) != 0 )
    {
      inserted = MiCloneNoChange(v9, (__int64)v16);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( MiLocateVadEvent(v9) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v30);
      v4 = 1;
      inserted = MiCreatePlaceholderStorage((__int64)v16);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x300000) == 0x300000 )
    {
      if ( !v4 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v30);
        v4 = 1;
      }
      inserted = MiCreateWriteWatchView(BugCheckParameter1, (__int64)v16);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( (unsigned int)MiIsVadLargePrivate(v9) )
    {
      v21 = *(_DWORD *)(v9 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31);
      v22 = (v21 ^ *((_DWORD *)v16 + 13)) & 0x7FFFFFFF;
      *((_BYTE *)v16 + 34) = v21 >> 31;
      *((_DWORD *)v16 + 13) ^= v22;
      inserted = MiCreateLargePageVad(BugCheckParameter1, v16, 0LL, 1LL);
      if ( inserted < 0 )
        goto LABEL_56;
      ++*a2;
    }
    else
    {
      v23 = *(_DWORD *)(v9 + 48) & 0x70;
      if ( v23 == 32 )
      {
        v24 = MiCloneImageVad(BugCheckParameter1, (__int64)v16, v9);
      }
      else
      {
        if ( v23 != 80 || !*(_QWORD *)(**(_QWORD **)(v9 + 72) + 64LL) )
          goto LABEL_47;
        v24 = MiCloneLargeFileOnlyVad(v9);
      }
      inserted = v24;
      if ( v24 < 0 )
        goto LABEL_56;
    }
LABEL_47:
    if ( v4 )
    {
      KiUnstackDetachProcess((__int64)v30, 0LL);
      v4 = 0;
    }
    *v16 = v3;
    v3 = v16;
  }
  inserted = -1073741670;
LABEL_56:
  if ( !v4 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v30);
  if ( v16 )
  {
    if ( (unsigned int)MiVadHasSharedCommit(v16) )
      MiRemoveSharedCommitNode(*(_QWORD **)v16[9], BugCheckParameter1, 0);
    MiCloneDiscardVadCommit((__int64)v16);
    MiFreeVadEventBitmap((struct _KPROCESS *)BugCheckParameter1, (__int64)v16, 4LL, v26);
    MiFreePlaceholderStorage((__int64)v16, v27, v28, v29);
    MiFreeVadEvents((__int64)v16);
    ExFreePoolWithTag(v16, 0);
  }
  if ( v3 )
    MiDeletePartialCloneVads(v3);
  KiUnstackDetachProcess((__int64)v30, 0LL);
  return (unsigned int)inserted;
}
