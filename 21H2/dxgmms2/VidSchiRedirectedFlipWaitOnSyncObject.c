/*
 * XREFs of VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C00394DC
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x1C003E070 (VidSchSubmitCommandContextless.c)
 * Callees:
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0005A40 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0009AD0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0011570 (VidSchiSubmitPresentHistoryToken.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001D980 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1C00A3970 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiRedirectedFlipWaitOnSyncObject(struct _VIDSCH_GLOBAL *a1, char *Src, __int64 a3, _DWORD *a4)
{
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // r15
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD, __int64, __int64); // rax
  struct _VIDSCH_GLOBAL *v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // edi
  PSLIST_ENTRY v19; // r15
  __int64 (__fastcall *v20)(__int64, __int64, __int64, char *); // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rcx
  char *v25; // rdi
  char *v26; // r15
  char **v27; // rax
  _QWORD v28[2]; // [rsp+58h] [rbp-9h] BYREF
  char v29; // [rsp+68h] [rbp+7h]
  _QWORD v30[4]; // [rsp+70h] [rbp+Fh] BYREF
  __int16 v31; // [rsp+90h] [rbp+2Fh]

  v8 = *(_QWORD *)&Src[*((_DWORD *)Src + 151) * ((8 * *((_DWORD *)Src + 152) + 231) & 0xFFFFFFF8) + 648];
  if ( v8 )
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 32LL);
  else
    v9 = 0LL;
  v10 = *((unsigned int *)Src + 29);
  if ( (*(_DWORD *)Src & 0x1000000) != 0 && (_DWORD)v10 != -1 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)a1 + v10 + 400) + 44232LL);
    if ( (_DWORD)v11 != -1 )
    {
      v12 = (void (__fastcall *)(_QWORD, __int64, __int64))*((_QWORD *)a1 + 382);
      if ( v12 )
        v12(*((_QWORD *)a1 + 390), v11, 0xFFFFFFFFLL);
    }
  }
  if ( (*a4 & 0x1000) != 0 && (*a4 & 0xC00) != 0x400 && (_DWORD)v10 != -1 && (*(_DWORD *)Src & 0x1040000) == 0x1040000 )
  {
    _InterlockedAdd((volatile signed __int32 *)a1 + 184, 1u);
    v13 = a1;
    if ( *((_BYTE *)a1 + 2212) )
      v13 = (struct _VIDSCH_GLOBAL *)((char *)a1 + 4 * v10);
    _InterlockedAdd((volatile signed __int32 *)v13 + 185, 1u);
    _InterlockedAdd((volatile signed __int32 *)(v9 + 1572), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v9 + 4 * v10 + 1508), 1u);
    if ( (*(_DWORD *)(v9 + 48) & 2) != 0 || *((int *)Src + 30) >= 4 || *((_BYTE *)a1 + 156) )
      VidSchIsVSyncEnabled(a1);
  }
  v31 = 0;
  v30[0] = (char *)a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v30);
  v14 = *((_QWORD *)Src + 59);
  v28[1] = v28;
  v28[0] = v28;
  v29 = 0;
  if ( *(_BYTE *)(a3 + 28) )
    goto LABEL_22;
  v15 = *(unsigned __int64 **)(a3 + 64);
  if ( *(_BYTE *)(a3 + 29) )
  {
    if ( *v15 >= v14 )
    {
LABEL_22:
      WdLogSingleEntry3(4LL, a3, **(_QWORD **)(a3 + 64), *((_QWORD *)Src + 59));
      VidSchiAcquirePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(Src + 600));
      v16 = *((_QWORD *)Src + 4);
      if ( v16 )
        _InterlockedAdd((volatile signed __int32 *)(v16 + 12), 1u);
      VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)v28, 0LL, Src, 0LL, (__int64)a1);
LABEL_25:
      v17 = 0;
      goto LABEL_26;
    }
  }
  else if ( *(_DWORD *)v15 - (int)v14 >= 0 )
  {
    goto LABEL_22;
  }
  if ( *(_DWORD *)(a3 + 36) == 0x7FFFFFFF )
  {
    WdLogSingleEntry0(1LL);
    DxgCoreInterface[85](
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Synchronization object already has MAX_LONG reference pending, can't reference more.\n",
      13315LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v17 = -1073741823;
  }
  else
  {
    ++*((_DWORD *)a1 + 225);
    v19 = ExpInterlockedPopEntrySList((PSLIST_HEADER)a1 + 55);
    if ( v19
      || (v20 = (__int64 (__fastcall *)(__int64, __int64, __int64, char *))*((_QWORD *)a1 + 116),
          v21 = *((unsigned int *)a1 + 231),
          v22 = *((unsigned int *)a1 + 230),
          v23 = *((unsigned int *)a1 + 229),
          ++*((_DWORD *)a1 + 226),
          (v19 = (PSLIST_ENTRY)v20(v23, v21, v22, (char *)a1 + 880)) != 0LL) )
    {
      *((_QWORD *)&v19->Next + 1) = a3;
      v19[1].Next = (struct _SLIST_ENTRY *)*((_QWORD *)Src + 59);
      memmove(&v19[2].Next + 1, Src, *((unsigned int *)Src + 139));
      VidSchiAcquirePrivateDataReference(a1, (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)&v19[40]);
      v24 = *((_QWORD *)&v19[4].Next + 1);
      if ( v24 )
        _InterlockedAdd((volatile signed __int32 *)(v24 + 12), 1u);
      v25 = (char *)a1 + 856;
      v26 = (char *)(&v19[1].Next + 1);
      v27 = (char **)*((_QWORD *)v25 + 1);
      if ( *v27 != v25 )
        __fastfail(3u);
      *(_QWORD *)v26 = v25;
      *((_QWORD *)v26 + 1) = v27;
      *v27 = v26;
      *((_QWORD *)v25 + 1) = v26;
      ++*(_DWORD *)(a3 + 44);
      _InterlockedAdd((volatile signed __int32 *)(a3 + 36), 1u);
      goto LABEL_25;
    }
    WdLogSingleEntry0(1LL);
    DxgCoreInterface[85](
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate VIDSCH_SYNCOBJ_PHT_DATA",
      13327LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v17 = -1073741801;
  }
LABEL_26:
  if ( !v29 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v28);
  AcquireSpinLock::Release((AcquireSpinLock *)v30);
  return v17;
}
