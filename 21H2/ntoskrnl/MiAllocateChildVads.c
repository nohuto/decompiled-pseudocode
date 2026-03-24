/*
 * XREFs of MiAllocateChildVads @ 0x1408D8A90
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1408D9060 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MiVadPureReserve @ 0x14021B990 (MiVadPureReserve.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     MiIsVadLargePrivate @ 0x1402AD514 (MiIsVadLargePrivate.c)
 *     MiLocateVadEvent @ 0x1402FE3B4 (MiLocateVadEvent.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     MiFreeVadEvents @ 0x14053A764 (MiFreeVadEvents.c)
 *     MiCloneCaptureVadCommit @ 0x14054504C (MiCloneCaptureVadCommit.c)
 *     MiCloneImageVad @ 0x140559280 (MiCloneImageVad.c)
 *     MiVadShouldBeForked @ 0x14055BAC4 (MiVadShouldBeForked.c)
 *     MiCreateWriteWatchView @ 0x14069F46C (MiCreateWriteWatchView.c)
 *     MiFreePlaceholderStorage @ 0x1406C3E08 (MiFreePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x1406EB4E0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406EB750 (MiInsertSharedCommitNode.c)
 *     MiCloneNoChange @ 0x1408C8688 (MiCloneNoChange.c)
 *     MiFreeVadEventBitmap @ 0x1408C8758 (MiFreeVadEventBitmap.c)
 *     MiCloneLargeFileOnlyVad @ 0x1408CFCB0 (MiCloneLargeFileOnlyVad.c)
 *     MiCloneDiscardVadCommit @ 0x1408D0DE4 (MiCloneDiscardVadCommit.c)
 *     MiCreatePlaceholderStorage @ 0x1408D82D8 (MiCreatePlaceholderStorage.c)
 *     MiDeletePartialCloneVads @ 0x1408D9528 (MiDeletePartialCloneVads.c)
 *     MiInsertChildVads @ 0x1408D9780 (MiInsertChildVads.c)
 *     MiVadHasSharedCommit @ 0x1408D9A30 (MiVadHasSharedCommit.c)
 *     MiCreateLargePageVad @ 0x1408D9F64 (MiCreateLargePageVad.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  _DWORD *v16; // r9
  _QWORD *v17; // rbx
  int v18; // ecx
  unsigned int v19; // ecx
  int inserted; // esi
  __int64 v21; // rax
  unsigned __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  _DWORD *v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // r9
  _OWORD v31[3]; // [rsp+20h] [rbp-78h] BYREF

  memset(v31, 0, sizeof(v31));
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
    v17 = Pool;
    if ( !Pool )
      break;
    memmove(Pool, (const void *)v9, v14);
    v18 = *((_DWORD *)v17 + 12);
    if ( (*(_DWORD *)(v9 + 48) & 0x100000) != 0 )
      v18 &= ~8u;
    else
      v17[14] = BugCheckParameter1 | 1;
    v17[7] = 0LL;
    v19 = v18 & 0xFFFFFFFC;
    *((_DWORD *)v17 + 9) = 0;
    v17[5] = 0LL;
    v17[1] = 0LL;
    *((_DWORD *)v17 + 12) = v19;
    if ( (v19 & 0x100000) == 0 && (v19 & 0x70) == 0x20 && (v19 & 0x400000) != 0 )
      *((_DWORD *)v17 + 12) = v19 & 0xFFBFFFFF;
    v17[2] = -2LL;
    if ( (unsigned int)MiVadHasSharedCommit(v9) )
    {
      inserted = MiInsertSharedCommitNode(**(_QWORD ***)(v9 + 72), BugCheckParameter1, 0);
      if ( inserted < 0 )
        goto LABEL_52;
    }
    if ( (unsigned int)MiVadPureReserve((__int64)v17) )
    {
      v21 = *((unsigned int *)v17 + 13);
      LODWORD(v21) = v21 & 0x7FFFFFFF;
      if ( (v21 | ((unsigned __int64)*((unsigned __int8 *)v17 + 34) << 31)) < 0x7FFFFFFFDLL )
      {
        inserted = MiCloneCaptureVadCommit((__int64)v17);
        if ( inserted < 0 )
        {
          if ( (unsigned int)MiVadHasSharedCommit(v17) )
            MiRemoveSharedCommitNode(*(_QWORD **)v17[9], BugCheckParameter1, 0);
LABEL_52:
          ExFreePoolWithTag(v17, 0);
          v17 = 0LL;
          goto LABEL_56;
        }
      }
    }
    if ( (*(_DWORD *)(v9 + 48) & 8) != 0 )
    {
      inserted = MiCloneNoChange(v9, (__int64)v17);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( MiLocateVadEvent(v9, 128LL) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v31, v16);
      v4 = 1;
      inserted = MiCreatePlaceholderStorage((__int64)v17);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x300000) == 0x300000 )
    {
      if ( !v4 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v31, v16);
        v4 = 1;
      }
      inserted = MiCreateWriteWatchView(BugCheckParameter1, (__int64)v17);
      if ( inserted < 0 )
        goto LABEL_56;
    }
    if ( MiIsVadLargePrivate(v9) )
    {
      v22 = *(_DWORD *)(v9 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31);
      v23 = (v22 ^ *((_DWORD *)v17 + 13)) & 0x7FFFFFFF;
      *((_BYTE *)v17 + 34) = v22 >> 31;
      *((_DWORD *)v17 + 13) ^= v23;
      inserted = MiCreateLargePageVad(BugCheckParameter1, v17, 0LL, 1LL);
      if ( inserted < 0 )
        goto LABEL_56;
      ++*a2;
    }
    else
    {
      v24 = *(_DWORD *)(v9 + 48) & 0x70;
      if ( v24 == 32 )
      {
        v25 = MiCloneImageVad(BugCheckParameter1, (__int64)v17, v9);
      }
      else
      {
        if ( v24 != 80 || !*(_QWORD *)(**(_QWORD **)(v9 + 72) + 64LL) )
          goto LABEL_47;
        v25 = MiCloneLargeFileOnlyVad(v9);
      }
      inserted = v25;
      if ( v25 < 0 )
        goto LABEL_56;
    }
LABEL_47:
    if ( v4 )
    {
      KiUnstackDetachProcess((__int64)v31, 0);
      v4 = 0;
    }
    *v17 = v3;
    v3 = v17;
  }
  inserted = -1073741670;
LABEL_56:
  if ( !v4 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v31, v16);
  if ( v17 )
  {
    if ( (unsigned int)MiVadHasSharedCommit(v17) )
      MiRemoveSharedCommitNode(*(_QWORD **)v17[9], BugCheckParameter1, 0);
    MiCloneDiscardVadCommit((__int64)v17);
    MiFreeVadEventBitmap((struct _KPROCESS *)BugCheckParameter1, (__int64)v17, 4LL, v27);
    MiFreePlaceholderStorage((__int64)v17, v28, v29, v30);
    MiFreeVadEvents((__int64)v17);
    ExFreePoolWithTag(v17, 0);
  }
  if ( v3 )
    MiDeletePartialCloneVads(v3);
  KiUnstackDetachProcess((__int64)v31, 0);
  return (unsigned int)inserted;
}
