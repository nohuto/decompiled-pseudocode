/*
 * XREFs of ?TdrDereferenceRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C02614C4
 * Callers:
 *     ??_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z @ 0x1C025F960 (--_GCTDR_GDI_RESET_THREAD@@MEAAPEAXI@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C02611D0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C0261AB0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 *     ?Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ @ 0x1C0261EF0 (-Worker@CTDR_SUBMIT_REPORT_THREAD@@MEAAXXZ.c)
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C0260158 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C0260220 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0261434 (-TdrDeleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C0262140 (TdrBugcheckOnTimeout.c)
 */

void __fastcall TdrDereferenceRecoveryContext(_QWORD *P, char a2)
{
  _QWORD *Pool; // rax
  DXGADAPTER *v4; // rcx

  if ( P )
  {
    if ( P[354] && a2 )
    {
      Pool = TdrAllocatePool(0x20uLL, PagedPool);
      if ( !Pool )
        TdrBugcheckOnTimeout((ULONG_PTR)P);
      Pool[1] = 0LL;
      *((_DWORD *)Pool + 4) = 0;
      *Pool = &CTDR_SUBMIT_REPORT_THREAD::`vftable';
      Pool[3] = P;
      if ( CVP_SYSTEM_THREAD::Start((void **)Pool) < 0 )
        TdrBugcheckOnTimeout((ULONG_PTR)P);
      *((_BYTE *)P + 2904) = 1;
    }
    else if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 720, 0xFFFFFFFF) <= 1 )
    {
      v4 = (DXGADAPTER *)P[4];
      if ( v4 )
      {
        DXGADAPTER::ReleaseReferenceNoTracking(v4);
        P[4] = 0LL;
      }
      TdrDeleteRecoveryContext(P);
    }
  }
}
