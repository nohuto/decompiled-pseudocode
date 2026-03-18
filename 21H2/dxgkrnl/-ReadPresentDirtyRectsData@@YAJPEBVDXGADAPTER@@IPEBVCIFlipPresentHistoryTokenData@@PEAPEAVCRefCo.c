/*
 * XREFs of ?ReadPresentDirtyRectsData@@YAJPEBVDXGADAPTER@@IPEBVCIFlipPresentHistoryTokenData@@PEAPEAVCRefCountedBuffer@@@Z @ 0x1C015B3E8
 * Callers:
 *     ?PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@PEAVCRefCountedBuffer@@@Z @ 0x1C0175D10 (-PrepareIndependentFlipToken@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAUDXGK_PRESENT_PARAMS@@PEAUV.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall ReadPresentDirtyRectsData(
        const struct DXGADAPTER *a1,
        int a2,
        const struct CIFlipPresentHistoryTokenData *a3,
        struct CRefCountedBuffer **a4)
{
  __int64 v6; // r15
  _DWORD *v7; // rax
  __int64 v8; // r9
  _OWORD *v9; // rdi
  BOOL v10; // r14d
  __int64 v11; // rax
  struct CRefCountedBuffer *v12; // rbx
  __int64 v13; // rbp
  void *Src; // [rsp+90h] [rbp+8h]

  *a4 = 0LL;
  v6 = (*(unsigned int (__fastcall **)(const struct CIFlipPresentHistoryTokenData *))(*(_QWORD *)a3 + 168LL))(a3);
  Src = (void *)(*(__int64 (__fastcall **)(const struct CIFlipPresentHistoryTokenData *))(*(_QWORD *)a3 + 176LL))(a3);
  v7 = (_DWORD *)(*(__int64 (__fastcall **)(const struct CIFlipPresentHistoryTokenData *))(*(_QWORD *)a3 + 184LL))(a3);
  v9 = v7;
  v10 = v7 && (*v7 || v7[2] || v7[1] || v7[3]);
  if ( !(_DWORD)v6 && !v10 )
    return 0LL;
  v11 = operator new[]((unsigned int)(16 * (v10 + v6) + 40), 0x4B677844u, 64LL, v8);
  v12 = (struct CRefCountedBuffer *)v11;
  if ( v11 )
  {
    *(_DWORD *)(v11 + 8) = 16 * (v10 + v6) + 24;
    *(_QWORD *)v11 = 0LL;
    *(_DWORD *)(v11 + 12) = 1;
    v13 = v11 + 40;
    *(_DWORD *)(v11 + 16) = 1;
    *(_DWORD *)(v11 + 24) = a2;
    *(_QWORD *)(v11 + 32) = v11 + 40;
    *(_DWORD *)(v11 + 28) = v10 + v6;
    memmove((void *)(v11 + 40), Src, 16 * v6);
    if ( v10 )
      *(_OWORD *)(16 * v6 + v13) = *v9;
    *a4 = v12;
    return 0LL;
  }
  WdLogSingleEntry1(6LL, 1707LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocate memory for present dirty rects data",
    1707LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
