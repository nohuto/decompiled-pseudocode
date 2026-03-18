/*
 * XREFs of ?DeferredSetVprCallback@@YAXPEAX@Z @ 0x1C00C5D20
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001C48 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ?DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00222FC (-DdiSetVideoProtectedRegion@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 *     McTemplateK0qqqxxp_EtwWriteTransfer @ 0x1C0028534 (McTemplateK0qqqxxp_EtwWriteTransfer.c)
 *     ?WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0083620 (-WaitForAllPagingEnginesIdle@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00879B8 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z @ 0x1C00C7A04 (-CheckFreeVPRReserve@VIDMM_SEGMENT@@QEAA_NPEAU_DXGKARG_SETVIDEOPROTECTEDREGION@@@Z.c)
 */

void __fastcall DeferredSetVprCallback(char *a1)
{
  bool v2; // si
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbx
  _QWORD *v12; // rax
  _QWORD v13[12]; // [rsp+50h] [rbp-68h] BYREF

  VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(
    *((VIDMM_GLOBAL **)a1 + 5),
    *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 6) + 16LL) + 380LL));
  v2 = VIDMM_SEGMENT::CheckFreeVPRReserve(
         *(VIDMM_SEGMENT **)(*((_QWORD *)a1 + 6) + 16LL),
         (struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 56));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0qqqxxp_EtwWriteTransfer(
      *((_QWORD *)a1 + 11),
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL),
      v3,
      *((_DWORD *)a1 + 14),
      *((_DWORD *)a1 + 15),
      *((_DWORD *)a1 + 16),
      *((_QWORD *)a1 + 11),
      *((_QWORD *)a1 + 12),
      *(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL));
  if ( (int)ADAPTER_RENDER::DdiSetVideoProtectedRegion(
              *(ADAPTER_RENDER **)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 24LL) + 2680LL),
              (const struct _DXGKARG_SETVIDEOPROTECTEDREGION *)(a1 + 56)) < 0
    && g_IsInternalRelease )
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v5, v4);
    v6[5] = 0LL;
    v6[6] = 0LL;
    v6[7] = 0LL;
    v6[3] = 270LL;
    v6[4] = 9LL;
    WdLogEvent5_WdCriticalError(v6);
  }
  if ( v2 )
  {
    memset(v13, 0, 0x58uLL);
    v7 = *((_QWORD *)a1 + 6);
    LODWORD(v13[0]) = 128;
    LODWORD(v13[6]) = 1;
    v13[5] = *(_QWORD *)(v7 + 16);
    VIDMM_GLOBAL::QueueSystemCommandAndWait(*((VIDMM_GLOBAL **)a1 + 5), (struct _VIDMM_SYSTEM_COMMAND *)v13, 1);
  }
  v8 = (_QWORD *)*((_QWORD *)a1 + 6);
  if ( v8[3] )
  {
    v9 = *((_QWORD *)a1 + 5);
    v10 = v9 + 40048;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v9 + 40048));
    v11 = v9 + 40032;
    v12 = *(_QWORD **)(v11 + 8);
    if ( *v12 != v11 )
      __fastfail(3u);
    *v8 = v11;
    v8[1] = v12;
    *v12 = v8;
    *(_QWORD *)(v11 + 8) = v8;
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
    *((_QWORD *)a1 + 6) = 0LL;
  }
}
