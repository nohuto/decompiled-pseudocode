/*
 * XREFs of KsepApplyShimsToDriver @ 0x1408C0310
 * Callers:
 *     KseDriverLoadImage @ 0x14075B720 (KseDriverLoadImage.c)
 * Callees:
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     KsepLogInfo @ 0x1403712F8 (KsepLogInfo.c)
 *     KsepLogError @ 0x140371AC4 (KsepLogError.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     KsepPatchDriverImportsTable @ 0x1408C05B8 (KsepPatchDriverImportsTable.c)
 */

__int64 __fastcall KsepApplyShimsToDriver(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rsi
  __int64 (__fastcall *v9)(__int64, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  int v10; // edi
  unsigned int v11; // edi
  void *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v7 = 0;
  if ( !a4 )
  {
LABEL_16:
    v14 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v14]) = 0;
    LODWORD(KsepHistoryMessages[v14]) = 459438;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(8LL, "KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
    KsepLogInfo(8LL, (__int64)"KSE: Successfully applied shims to driver [%ws]\n", *(_QWORD *)(a2 + 8));
    return 0;
  }
  v8 = a3 + 72;
  while ( 1 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v8 + 28LL) & 4) != 0 )
      goto LABEL_15;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 40LL);
    if ( v9 )
    {
      v10 = v9(a2, *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), *(unsigned int *)(a1 + 156), *(_DWORD *)(a1 + 120));
      if ( v10 < 0 )
        break;
    }
    v11 = KsepPatchDriverImportsTable(a1, *(_QWORD *)(*(_QWORD *)v8 + 16LL));
    if ( (v11 & 0x80000000) != 0 )
    {
      v17 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
      dword_140C2AAC4[2 * v17] = v11;
      KsepHistoryErrors[2 * v17] = 459415;
      if ( (KsepDebugFlag & 2) != 0 )
        KsepDebugPrint(8LL, "KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v11);
      KsepLogError(8, "KSE: Failed to patch driver [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), v11);
      return v11;
    }
    v12 = *(void **)(*(_QWORD *)v8 + 32LL);
    if ( v12 )
      ObfReferenceObject(v12);
    v13 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F;
    HIDWORD(KsepHistoryMessages[v13]) = 0;
    LODWORD(KsepHistoryMessages[v13]) = 459434;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(
        8LL,
        "KSE: Applied shim [0x%08X] to driver [%ws]\n",
        **(unsigned int **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 8LL),
        *(_QWORD *)(a2 + 8));
    KsepLogInfo(
      8LL,
      (__int64)"KSE: Applied shim [0x%08X] to driver [%ws]\n",
      **(unsigned int **)(*(_QWORD *)(*(_QWORD *)v8 + 16LL) + 8LL),
      *(_QWORD *)(a2 + 8));
LABEL_15:
    ++v7;
    v8 += 80LL;
    if ( v7 >= a4 )
      goto LABEL_16;
  }
  v16 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
  dword_140C2AAC4[2 * v16] = v10;
  KsepHistoryErrors[2 * v16] = 459396;
  if ( (KsepDebugFlag & 2) != 0 )
    KsepDebugPrint(8LL, "KSE: Driver blocked with [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), (unsigned int)v10);
  KsepLogError(8, "KSE: Driver blocked with [%ws]: 0x%x\n", *(_QWORD *)(a2 + 8), (unsigned int)v10);
  return (unsigned int)-1073740948;
}
