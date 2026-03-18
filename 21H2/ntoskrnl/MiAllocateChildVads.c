/*
 * XREFs of MiAllocateChildVads @ 0x1409800F4
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1409806C8 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     MiLocateVadEvent @ 0x1402EE0C8 (MiLocateVadEvent.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     MiIsVadLargePrivate @ 0x14030FBE0 (MiIsVadLargePrivate.c)
 *     MiVadPureReserve @ 0x140319990 (MiVadPureReserve.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiFreeVadEvents @ 0x140595D50 (MiFreeVadEvents.c)
 *     MiCloneCaptureVadCommit @ 0x1405A42BC (MiCloneCaptureVadCommit.c)
 *     MiCloneImageVad @ 0x1405B9904 (MiCloneImageVad.c)
 *     MiVadShouldBeForked @ 0x1405BC008 (MiVadShouldBeForked.c)
 *     MiCreateWriteWatchView @ 0x1406BF94C (MiCreateWriteWatchView.c)
 *     MiFreePlaceholderStorage @ 0x1406EBA90 (MiFreePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x1406FC2F0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 *     MiCloneNoChange @ 0x14096D6A8 (MiCloneNoChange.c)
 *     MiFreeVadEventBitmap @ 0x14096D778 (MiFreeVadEventBitmap.c)
 *     MiCloneLargeFileOnlyVad @ 0x14096FEDC (MiCloneLargeFileOnlyVad.c)
 *     MiCloneDiscardVadCommit @ 0x140977E30 (MiCloneDiscardVadCommit.c)
 *     MiCreatePlaceholderStorage @ 0x14097EE60 (MiCreatePlaceholderStorage.c)
 *     MiDeletePartialCloneVads @ 0x140980B94 (MiDeletePartialCloneVads.c)
 *     MiInsertChildVads @ 0x140980DD8 (MiInsertChildVads.c)
 *     MiCreateLargePageVad @ 0x140982DE4 (MiCreateLargePageVad.c)
 *     MiVadHasSharedCommit @ 0x140983978 (MiVadHasSharedCommit.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateChildVads(ULONG_PTR BugCheckParameter1, _QWORD *a2)
{
  _QWORD **v3; // r12
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
  _QWORD ***Pool; // rax
  _DWORD *v16; // r9
  _QWORD ***v17; // rbx
  int v18; // ecx
  unsigned int v19; // ecx
  int inserted; // esi
  __int64 v21; // rax
  _DWORD *v22; // r9
  unsigned __int64 v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _OWORD v28[3]; // [rsp+20h] [rbp-78h] BYREF

  memset(v28, 0, sizeof(v28));
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
    while ( !MiVadShouldBeForked(v9) );
    v12 = *(_DWORD *)(v9 + 48);
    v13 = 1818517846;
    v14 = (-(__int64)((v12 & 0x200000) != 0) & 0xFFFFFFFFFFFFFFB8uLL) + 136;
    if ( (v12 & 0x200000) == 0 && (v12 & 0x70) == 0x20 && (v12 & 0x400000) != 0 )
    {
      v13 = 1231315286;
      v14 = 8
          * (((unsigned __int64)*(unsigned int *)(***(_QWORD ***)(v9 + 72) + 8LL) >> 6)
           + ((*(_DWORD *)(***(_QWORD ***)(v9 + 72) + 8LL) & 0x3F) != 0)
           + 21LL);
    }
    Pool = (_QWORD ***)MiAllocatePool(64, v14, v13);
    v17 = Pool;
    if ( !Pool )
    {
      inserted = -1073741670;
      goto LABEL_56;
    }
    memmove(Pool, (const void *)v9, v14);
    v18 = *((_DWORD *)v17 + 12);
    if ( _bittest((const signed __int32 *)(v9 + 48), 0x15u) )
      v18 &= ~8u;
    else
      v17[14] = (_QWORD **)(BugCheckParameter1 | 1);
    v17[7] = (_QWORD **)((unsigned __int64)v17[7] & 0xF);
    v19 = v18 & 0xFFFFFFFC;
    *((_DWORD *)v17 + 9) = 0;
    v17[5] = 0LL;
    v17[1] = 0LL;
    *((_DWORD *)v17 + 12) = v19;
    if ( (v19 & 0x200000) == 0 && (v19 & 0x70) == 0x20 && (v19 & 0x1800000) != 0 )
      *((_DWORD *)v17 + 12) = v19 & 0xFE7FFFFF;
    v17[2] = (_QWORD **)-2LL;
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
          break;
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
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v28, v22);
      v4 = 1;
      inserted = MiCreatePlaceholderStorage((__int64)v17);
      if ( inserted < 0 )
        goto LABEL_59;
    }
    if ( (*(_DWORD *)(v9 + 48) & 0x600000) == 0x600000 )
    {
      if ( !v4 )
      {
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v28, v22);
        v4 = 1;
      }
      inserted = MiCreateWriteWatchView(BugCheckParameter1, (__int64)v17);
      if ( inserted < 0 )
        goto LABEL_59;
    }
    if ( MiIsVadLargePrivate(v9) )
    {
      v23 = *(_DWORD *)(v9 + 52) & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(v9 + 34) << 31);
      v24 = (v23 ^ *((_DWORD *)v17 + 13)) & 0x7FFFFFFF;
      *((_BYTE *)v17 + 34) = v23 >> 31;
      *((_DWORD *)v17 + 13) ^= v24;
      inserted = MiCreateLargePageVad(BugCheckParameter1, v17, 0LL, 1LL);
      if ( inserted < 0 )
        goto LABEL_56;
      ++*a2;
    }
    else
    {
      v25 = *(_DWORD *)(v9 + 48) & 0x70;
      if ( v25 == 32 )
      {
        v26 = MiCloneImageVad(BugCheckParameter1, (__int64)v17, v9);
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
      KiUnstackDetachProcess((__int64)v28, 0LL);
      v4 = 0;
    }
    *v17 = v3;
    v3 = v17;
  }
  if ( (unsigned int)MiVadHasSharedCommit(v17) )
    MiRemoveSharedCommitNode(*v17[9], BugCheckParameter1, 0);
LABEL_52:
  ExFreePoolWithTag(v17, 0);
  v17 = 0LL;
LABEL_56:
  if ( !v4 )
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v28, v16);
  if ( v17 )
  {
LABEL_59:
    if ( (unsigned int)MiVadHasSharedCommit(v17) )
      MiRemoveSharedCommitNode(*v17[9], BugCheckParameter1, 0);
    MiCloneDiscardVadCommit((__int64)v17);
    MiFreeVadEventBitmap((struct _KPROCESS *)BugCheckParameter1, (__int64)v17, 4);
    MiFreePlaceholderStorage((__int64)v17);
    MiFreeVadEvents((__int64)v17);
    ExFreePoolWithTag(v17, 0);
  }
  if ( v3 )
    MiDeletePartialCloneVads(v3);
  KiUnstackDetachProcess((__int64)v28, 0LL);
  return (unsigned int)inserted;
}
