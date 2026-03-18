/*
 * XREFs of VidSchSubmitCommand @ 0x1C0067440
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_FLAGS@@@Z @ 0x1C0004590 (-VidSchValidatePresentFlags@@YAJPEAUVIDSCH_SUBMIT_DATA2@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_SUBMIT_.c)
 *     ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x1C0005E94 (-VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C00064F0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C00068D0 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x1C0006950 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     VidSchiSetPriorityContext @ 0x1C0010184 (VidSchiSetPriorityContext.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C00148FC (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C00150C0 (VidSchiPropagatePresentHistoryToken.c)
 *     VidSchiConvertDeferredWaits @ 0x1C00169F8 (VidSchiConvertDeferredWaits.c)
 *     memmove @ 0x1C0018300 (memmove.c)
 *     memset @ 0x1C00185C0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0069B80 (VidSchWaitForCompletionEvent.c)
 *     VidSchRegisterCompletionEvent @ 0x1C0069CA0 (VidSchRegisterCompletionEvent.c)
 *     VidSchiAllocateHistoryBufferStorage @ 0x1C00D0720 (VidSchiAllocateHistoryBufferStorage.c)
 */

__int64 __fastcall VidSchSubmitCommand(struct _VIDSCH_CONTEXT *a1, struct VIDSCH_SUBMIT_DATA2 *a2, __int64 a3)
{
  struct VIDSCH_SUBMIT_DATA2 *v3; // rsi
  __int64 v5; // rbp
  __int64 v6; // r13
  unsigned int v7; // r15d
  __int64 v8; // r14
  unsigned int v9; // r12d
  _QWORD *v10; // rax
  _DWORD *PoolWithTag; // rbx
  size_t v12; // rax
  bool v13; // zf
  __int16 v14; // ax
  int v15; // eax
  void *v16; // rcx
  __int64 v17; // rcx
  struct _VIDSCH_CONTEXT *v18; // rax
  char *v19; // rbx
  struct _VIDSCH_CONTEXT **v20; // rcx
  unsigned int v21; // ecx
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 result; // rax
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // r8d
  __int64 v29; // r9
  int v30; // eax
  unsigned int v31; // r14d
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rax
  const void *v38; // rbp
  KPRIORITY PriorityThread; // eax
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD v42[21]; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+180h] [rbp+18h] BYREF

  v3 = a2;
  if ( !a1 || !a2 )
  {
    v41 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v41 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v41);
    return 3221225485LL;
  }
  v5 = *((_QWORD *)a1 + 13);
  v6 = *(_QWORD *)(v5 + 32);
  if ( *(_BYTE *)(v5 + 204) || (v7 = 0, _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 200), 0, 0)) )
  {
    v40 = WdLogNewEntry5_WdWarning(a1, a2);
    *(_QWORD *)(v40 + 24) = v5;
    *(_QWORD *)(v40 + 32) = -1071775232LL;
    WdLogEvent5_WdWarning(v40);
    return 3223192064LL;
  }
  v44 = *(_QWORD *)a2;
  if ( (v44 & 0x20) != 0 )
  {
    result = VidSchValidatePresentFlags(a2, (struct _VIDSCH_DEVICE *)v5, (struct _VIDSCH_SUBMIT_FLAGS *)&v44);
    if ( (int)result < 0 )
      return result;
  }
  else if ( (v44 & 0x40000) != 0
         && !*((_DWORD *)a1 + 108)
         && !*((_DWORD *)a1 + 196)
         && (v44 & 0x1000000) == 0
         && (v44 & 0x400000000LL) == 0 )
  {
    VidSchiPropagatePresentHistoryToken(
      (struct _VIDSCH_GLOBAL *)v6,
      *((union _SLIST_HEADER **)a2 + 12),
      *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a2 + 13),
      0,
      0,
      0,
      0,
      0LL,
      0LL,
      (__int64)a2,
      0LL,
      0);
    return 0LL;
  }
  v8 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  v9 = *(_DWORD *)(v8 + 144) * ((*(_DWORD *)(v8 + 68) << 6) + ((8 * *(_DWORD *)(v8 + 68) + 199) & 0xFFFFFFF8))
     + 8 * (*(_DWORD *)(v8 + 68) + 108);
  if ( v9 <= 0x430 )
    v9 = 1072;
  v10 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v8 + 1720), (_QWORD **)a1 + 89, (_DWORD *)a1 + 182);
  if ( v10 )
  {
    PoolWithTag = v10 - 1;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v9, 0x35616956u);
    if ( PoolWithTag )
    {
      v12 = v9;
      goto LABEL_13;
    }
    memset(v42, 0, 0xA0uLL);
    v34 = *((_QWORD *)a1 + 12);
    LODWORD(v42[4]) |= 0x40u;
    LODWORD(v42[2]) = 1;
    LODWORD(v42[6]) = *(unsigned __int16 *)(v34 + 4);
    VidSchRegisterCompletionEvent(v8, v42);
    do
    {
      v35 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(v8 + 1720), (_QWORD **)a1 + 89, (_DWORD *)a1 + 182);
      if ( v35 )
        PoolWithTag = v35 - 1;
      else
        VidSchWaitForCompletionEvent(v8, v42, 19LL);
    }
    while ( !PoolWithTag );
    VidSchiInterlockedRemoveEntryList((KSPIN_LOCK *)(v8 + 1728), v42, 0LL);
    v3 = a2;
  }
  if ( !PoolWithTag )
    goto LABEL_14;
  v12 = v9;
LABEL_13:
  memset(PoolWithTag, 0, v12);
  *((_QWORD *)PoolWithTag + 7) = MEMORY[0xFFFFF78000000320];
  PoolWithTag[13] = 1;
  VidSchiInterlockedInsertTailList(
    (KSPIN_LOCK *)(v8 + 1720),
    (__int64)a1 + 760,
    (_QWORD *)PoolWithTag + 1,
    (_DWORD *)a1 + 194);
LABEL_14:
  *PoolWithTag = 895576406;
  v13 = (v44 & 0x40000) == 0;
  *((_QWORD *)PoolWithTag + 7) = MEMORY[0xFFFFF78000000320];
  PoolWithTag[13] = 2;
  PoolWithTag[16] = 0;
  if ( v13 )
  {
    if ( ((*((_DWORD *)v3 + 30) - 3) & 0xFFFFFFFD) != 0 )
    {
      PoolWithTag[12] = 0;
    }
    else
    {
      PoolWithTag[12] = 3;
      v26 = *((unsigned int *)v3 + 29);
      if ( (_DWORD)v26 != -1 )
      {
        v27 = *((_DWORD *)v3 + 144);
        v28 = ((unsigned __int16)v27 | (unsigned __int16)(v27 >> 10)) & 0x3FF;
        if ( (((unsigned __int16)v27 | (unsigned __int16)(v27 >> 10)) & 0x3FF) != 0 )
        {
          v29 = *(_QWORD *)(v6 + 8 * v26 + 3104);
          while ( 1 )
          {
            v13 = !_BitScanForward((unsigned int *)&v30, v28);
            if ( v13 )
              LOBYTE(v30) = -1;
            v31 = (char)v30;
            v32 = *(int *)(216LL * (unsigned int)(char)v30 + v29 + 172);
            if ( (int)v32 > -1 )
            {
              v36 = *(unsigned int *)(152 * v32 + *(_QWORD *)(v6 + 3232) + 112);
              if ( (_DWORD)v36 == 2 )
                break;
            }
            v26 = v31;
            v28 &= ~(1 << v31);
            if ( !v28 )
              goto LABEL_17;
          }
          v37 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v26, v36);
          v37[5] = v31;
          v37[3] = 281LL;
          v37[4] = 0x100000LL;
          v37[6] = *((unsigned int *)v3 + 29);
          v37[7] = v6;
          v14 = WdLogEvent5_WdCriticalError(v37);
          __debugbreak();
          goto LABEL_78;
        }
      }
    }
  }
  else
  {
    PoolWithTag[12] = 7;
  }
LABEL_17:
  *((_QWORD *)PoolWithTag + 11) = a1;
  *((_QWORD *)PoolWithTag + 13) = KeGetCurrentThread();
  v14 = v44;
  *((_QWORD *)PoolWithTag + 9) = v44;
  *((_QWORD *)PoolWithTag + 18) = *((_QWORD *)v3 + 12);
  *((_QWORD *)PoolWithTag + 19) = *((_QWORD *)v3 + 13);
  PoolWithTag[40] = *((_DWORD *)v3 + 29);
  if ( (v14 & 4) == 0 )
  {
    if ( (v14 & 0x20) != 0 )
    {
      v15 = (*(_DWORD *)(v6 + 2448) >> 5) & 4;
    }
    else
    {
      v15 = PoolWithTag[16];
      if ( PoolWithTag[12] != 7 )
        v15 = 4;
    }
    PoolWithTag[16] = v15;
    goto LABEL_22;
  }
  PoolWithTag[16] = (*(_DWORD *)(v6 + 2448) >> 4) & 4;
  if ( ((*((_DWORD *)v3 + 30) - 3) & 0xFFFFFFFD) == 0 )
  {
    if ( (v14 & 0x400) == 0 )
    {
LABEL_67:
      v33 = *((unsigned int *)v3 + 29);
      *((_QWORD *)v3 + 16) = ++*(_QWORD *)(v5 + 8 * v33 + 248);
      goto LABEL_22;
    }
LABEL_78:
    if ( (v14 & 0x800) == 0 )
      goto LABEL_22;
    goto LABEL_67;
  }
LABEL_22:
  memmove(PoolWithTag + 68, v3, *((unsigned int *)v3 + 135));
  if ( !*((_BYTE *)a1 + 901) )
    VidSchiAcquirePrivateDataReference(
      (struct _VIDSCH_GLOBAL *)v6,
      (struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *)(PoolWithTag + 212));
  if ( *((_QWORD *)v3 + 4) && !*((_BYTE *)a1 + 901) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)PoolWithTag + 38) + 12LL));
  v16 = (void *)*((_QWORD *)PoolWithTag + 45);
  if ( v16 )
    ObfReferenceObject(v16);
  v17 = *((_QWORD *)PoolWithTag + 35);
  if ( v17 && (PoolWithTag[68] & 0x8000000) != 0 && !*((_QWORD *)PoolWithTag + 39) )
    *((_QWORD *)PoolWithTag + 39) = *(_QWORD *)(v17 + 96);
  if ( (PoolWithTag[150] & 1) != 0 )
    VidSchiConvertDeferredWaits((__int64)a1);
  if ( *((_DWORD *)v3 + 86) )
  {
    v38 = (const void *)*((_QWORD *)v3 + 42);
    result = VidSchiAllocateHistoryBufferStorage(PoolWithTag);
    if ( (int)result < 0 )
      return result;
    memmove(*((void **)PoolWithTag + 76), v38, 8LL * *((unsigned int *)v3 + 86));
  }
  if ( (*(_DWORD *)(v6 + 2448) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(a1, PriorityThread);
  }
  *((_QWORD *)PoolWithTag + 7) = MEMORY[0xFFFFF78000000320];
  v18 = (struct _VIDSCH_CONTEXT *)(PoolWithTag + 8);
  PoolWithTag[13] = 3;
  v19 = (char *)a1 + 680;
  v20 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 86);
  if ( *v20 != (struct _VIDSCH_CONTEXT *)((char *)a1 + 680) )
    goto LABEL_84;
  *((_QWORD *)v18 + 1) = v20;
  *(_QWORD *)v18 = v19;
  *v20 = v18;
  *((_QWORD *)a1 + 86) = v18;
  v21 = *((_DWORD *)a1 + 108) + 1;
  *((_DWORD *)a1 + 108) = v21;
  if ( (*(_DWORD *)v3 & 0x40) != 0 )
    v7 = 1;
  if ( v21 > v7 )
  {
    while ( 1 )
    {
      v22 = *(__int64 **)v19;
      if ( *(char **)(*(_QWORD *)v19 + 8LL) != v19 )
        break;
      v23 = *v22;
      if ( *(__int64 **)(*v22 + 8) != v22 )
        break;
      *(_QWORD *)v19 = v23;
      *(_QWORD *)(v23 + 8) = v19;
      --*((_DWORD *)a1 + 108);
      VidSchiSubmitCommandPacketToQueue((__int64)(v22 - 4));
      if ( *((_DWORD *)a1 + 108) <= v7 )
        goto LABEL_40;
    }
LABEL_84:
    __fastfail(3u);
  }
LABEL_40:
  v24 = *((unsigned int *)v3 + 29);
  if ( (unsigned int)v24 < *(_DWORD *)(v6 + 40) && (*(_BYTE *)v3 & 5) == 5 )
    _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v6 + 8 * v24 + 3104) + 66432LL), 2, 1);
  return 0LL;
}
