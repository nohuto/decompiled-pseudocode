/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x14093EB60
 * Callers:
 *     EtwpPsProvCaptureState @ 0x14093EAD8 (EtwpPsProvCaptureState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x14027C610 (ObFastDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memset @ 0x140414200 (memset.c)
 *     EtwpQueryTokenPackageInfo @ 0x1406023FC (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x140602928 (EtwpQueryProcessOtherInfo.c)
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 *     PsSetProcessTelemetryAppState @ 0x1406CDED4 (PsSetProcessTelemetryAppState.c)
 *     PsReferencePrimaryToken @ 0x140706D00 (PsReferencePrimaryToken.c)
 *     EtwpIsProcessZombie @ 0x140797B94 (EtwpIsProcessZombie.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(PEPROCESS Process, _BYTE *a2)
{
  char v4; // si
  struct _EX_RUNDOWN_REF *v5; // rcx
  bool v6; // zf
  _DWORD *v7; // r9
  struct _DMA_ADAPTER *v8; // r14
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v12[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v13[104]; // [rsp+70h] [rbp-90h] BYREF

  v11 = 0LL;
  v4 = 0;
  memset(v12, 0, sizeof(v12));
  memset(v13, 0, 0x198uLL);
  if ( !EtwpIsProcessZombie((__int64)Process) )
  {
    if ( a2[9] )
    {
      if ( (*a2 & 1) != 0 && Process != PsIdleProcess && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        PsSetProcessTelemetryAppState(v5, 5);
    }
    else
    {
      v6 = Process == PsIdleProcess;
      a2[8] = 0;
      if ( !v6
        && KeGetCurrentThread()->ApcState.Process != Process
        && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
      {
        KiStackAttachProcess(Process, 0LL, (__int64)v12, v7);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v10 = 0;
        v8 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
        EtwpQueryTokenPackageInfo((__int64)v8, (__int64)v13, &v10);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)Process, (__int64)&v11);
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v8);
        EtwpPsProvTraceProcess(Process, v10, v13, (int *)&v11, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((__int64)v12, 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
