/*
 * XREFs of ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C02644F0
 * Callers:
 *     ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C020D6C0 (-PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0264DD0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D03C (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C0019498 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C02647E4 (-TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0264F70 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 */

void __fastcall TdrCompleteRecoveryContext(char *P, struct _LUID *a2, bool a3)
{
  __int64 v4; // rcx
  char v6; // si
  __int64 v7; // rcx
  DXGADAPTER *v8; // rcx
  __int64 v9; // rcx
  int v10; // r11d
  unsigned __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( P )
  {
    v4 = *((_QWORD *)P + 6);
    v6 = (char)a2;
    if ( v4 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)P + 4) + 2704LL) + 616LL)
                                                          + 8LL)
                                              + 472LL))(
        v4,
        0LL);
    if ( *((_DWORD *)P + 4) != 6 )
    {
      a2 = (struct _LUID *)&g_TdrHistory;
      v7 = 5LL * (((unsigned __int8)_InterlockedExchangeAdd(dword_1C00B1414, 1u) + 1) & 0x3F);
      *((_QWORD *)&g_TdrHistory + v7 + 3) = *((_QWORD *)P + 14);
      *((_DWORD *)&g_TdrHistory + 2 * v7 + 8) = *((_DWORD *)P + 4);
      *(UUID *)((char *)&g_TdrHistory + 8 * v7 + 40) = *(UUID *)(P + 56);
      *((_QWORD *)&g_TdrHistory + v7 + 7) = *((_QWORD *)P + 9);
    }
    v8 = (DXGADAPTER *)*((_QWORD *)P + 4);
    v11 = 0LL;
    DXGADAPTER::IsAdapterSessionized(v8, a2, 0LL, &v11);
    DxgkLogCodePointPacketForSession(0x18u, v11, *((_DWORD *)P + 4), v10, *((_DWORD *)P + 20), *(_QWORD *)(v9 + 316));
    _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, 0LL, (signed __int64)P);
    if ( v6 )
    {
      *((_DWORD *)P + 27) &= ~1u;
      TdrUpdateDbgReport((struct _TDR_RECOVERY_CONTEXT *)P, 0);
    }
    TdrDereferenceRecoveryContext(P, a3);
  }
}
