/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x14093B560
 * Callers:
 *     EtwpPsProvCaptureState @ 0x14093B4D8 (EtwpPsProvCaptureState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140299050 (ObFastDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     PsSetProcessTelemetryAppState @ 0x14061DE30 (PsSetProcessTelemetryAppState.c)
 *     EtwpPsProvTraceProcess @ 0x14065EA9C (EtwpPsProvTraceProcess.c)
 *     EtwpQueryProcessOtherInfo @ 0x14065F268 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x14065F5C0 (EtwpQueryTokenPackageInfo.c)
 *     PsReferencePrimaryToken @ 0x1406676A0 (PsReferencePrimaryToken.c)
 *     EtwpIsProcessZombie @ 0x14077FED4 (EtwpIsProcessZombie.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(PEPROCESS Process, _BYTE *a2)
{
  char v4; // si
  _QWORD *v5; // rcx
  bool v6; // zf
  struct _DMA_ADAPTER *v7; // r14
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v11[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int PackageSize[104]; // [rsp+70h] [rbp-90h] BYREF

  v10 = 0LL;
  v4 = 0;
  memset(v11, 0, sizeof(v11));
  memset(PackageSize, 0, 0x198uLL);
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
        KiStackAttachProcess(Process, 0LL, (__int64)v11);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v9 = 0;
        v7 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
        EtwpQueryTokenPackageInfo(v7, (WCHAR *)PackageSize, &v9);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)Process, (__int64)&v10);
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v7);
        EtwpPsProvTraceProcess(Process, v9, PackageSize, (int *)&v10, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((__int64)v11, 0LL);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
