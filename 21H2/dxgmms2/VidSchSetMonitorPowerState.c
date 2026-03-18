/*
 * XREFs of VidSchSetMonitorPowerState @ 0x1C001AFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0014690 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0014924 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z @ 0x1C001D620 (-ResetSmoother@VIDSCH_VSYNC_SMOOTHER@@QEAAXII@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq_EtwWriteTransfer @ 0x1C003818C (McTemplateK0qqqq_EtwWriteTransfer.c)
 *     ?MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z @ 0x1C003B68C (-MonitorPowerStateChange@VSYNC_TIME_STATS@@QEAAXW4VSYNC_TIME_STATS_TYPE@@@Z.c)
 *     VidSchiControlVSync @ 0x1C00A3788 (VidSchiControlVSync.c)
 */

__int64 __fastcall VidSchSetMonitorPowerState(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        char a3,
        unsigned int *a4,
        _DWORD *a5)
{
  unsigned int v5; // ebx
  __int64 v6; // rbp
  struct _ERESOURCE *v11; // rsi
  char v12; // dl
  int v13; // eax
  int v14; // ecx
  bool v15; // zf
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r15
  unsigned int v21; // r12d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  unsigned int v26; // ecx
  int v27; // ecx
  int v28; // r8d
  _QWORD v29[4]; // [rsp+58h] [rbp-50h] BYREF
  __int16 v30; // [rsp+78h] [rbp-30h]

  v5 = 0;
  v6 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[85])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchGlobal, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  if ( a2 >= *((_DWORD *)a1 + 10) )
  {
    WdLogSingleEntry2(3LL, a2, -1073741811LL);
    return 3221225485LL;
  }
  _mm_lfence();
  v11 = (struct _ERESOURCE *)((char *)a1 + 1088);
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1088), 1u);
  v12 = *((_BYTE *)a1 + 2212);
  v13 = 1 << v6;
  v14 = *((_DWORD *)a1 + 552);
  if ( a3 )
  {
    *((_DWORD *)a1 + 552) = v13 | v14;
    if ( v12 )
      v15 = *((_DWORD *)a1 + v6 + 456) == 0;
    else
      v15 = *((_DWORD *)a1 + 456) == 0;
    if ( v15 )
      goto LABEL_15;
  }
  else
  {
    v16 = v14 & ~v13;
    *((_DWORD *)a1 + 552) = v16;
    if ( !v12 && v16 )
      goto LABEL_15;
  }
  VidSchiControlVSync(a1);
LABEL_15:
  ExReleaseResourceLite(v11);
  v30 = 0;
  v29[0] = (char *)a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v29);
  v17 = v6;
  v18 = *((_QWORD *)a1 + v6 + 400);
  if ( *((_BYTE *)a1 + 59) )
  {
    VSYNC_TIME_STATS::MonitorPowerStateChange(v18 + 78400, 2 - (unsigned int)(a3 != 0));
    v17 = v6;
  }
  if ( a3 )
  {
    v19 = a4[3];
    if ( (_DWORD)v19 )
    {
      v21 = 0x3E8 / (unsigned int)v19;
      v20 = 0x989680 / v19;
      if ( *(_DWORD *)(v18 + 82736) != 0x3E8 / (unsigned int)v19 && *((_BYTE *)a1 + 6610) )
      {
        if ( is_mul_ok(v20, *((_QWORD *)a1 + 328)) )
          v22 = v20 * *((_QWORD *)a1 + 328) / 0x989680;
        else
          LODWORD(v22) = *((_QWORD *)a1 + 328) * (v20 / 0x989680) + *((_QWORD *)a1 + 328) * (v20 % 0x989680) / 0x989680;
        VIDSCH_VSYNC_SMOOTHER::ResetSmoother(*(VIDSCH_VSYNC_SMOOTHER **)(v18 + 44152), *(_DWORD *)(v18 + 82744), v22);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, v17);
      v20 = 160000LL;
      v21 = 0;
    }
    *(_DWORD *)(v18 + 82736) = v21;
    if ( is_mul_ok(v20, *((_QWORD *)a1 + 328)) )
      v23 = v20 * *((_QWORD *)a1 + 328) / 0x989680;
    else
      v23 = *((_QWORD *)a1 + 328) * (v20 / 0x989680) + *((_QWORD *)a1 + 328) * (v20 % 0x989680) / 0x989680;
    *(_QWORD *)(v18 + 82744) = v23;
    if ( a5 && *(int *)(*((_QWORD *)a1 + 2) + 2692LL) >= 2600 )
      *(_DWORD *)(v18 + 82740) ^= (*(_DWORD *)(v18 + 82740) ^ (*a5 >> 11)) & 1;
    else
      *(_DWORD *)(v18 + 82740) &= ~1u;
    if ( *(int *)(*((_QWORD *)a1 + 2) + 2692LL) >= 2900 )
    {
      v24 = a4[5];
      v25 = a4[4];
      if ( (_DWORD)v25 * a4[15] != (_DWORD)v24 * a4[14] )
        v5 = 10000000 * v24 / v25;
      v26 = *(_DWORD *)(v18 + 82728);
      if ( v5 != v26 )
      {
        WdLogSingleEntry4(4LL, v5, v6, v26, *(unsigned int *)(v18 + 2944));
        if ( (byte_1C006E944 & 1) != 0 )
          McTemplateK0qqqq_EtwWriteTransfer(
            v27,
            (unsigned int)&EventSetBaseDesktopDuration,
            v28,
            v6,
            *(_DWORD *)(v18 + 82728),
            *(_DWORD *)(v18 + 2944),
            v5);
        *(_DWORD *)(v18 + 82728) = v5;
      }
      *(_DWORD *)(v18 + 82724) = 1;
    }
  }
  AcquireSpinLock::Release((AcquireSpinLock *)v29);
  return 0LL;
}
