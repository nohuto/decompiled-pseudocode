/*
 * XREFs of EtwpPsProvProcessEnumCallback @ 0x14093A2C0
 * Callers:
 *     EtwpPsProvCaptureState @ 0x14093A238 (EtwpPsProvCaptureState.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ObFastDereferenceObject @ 0x140206540 (ObFastDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpPsProvTraceProcess @ 0x1405D879C (EtwpPsProvTraceProcess.c)
 *     EtwpQueryProcessOtherInfo @ 0x1405D8F68 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x1405D92C0 (EtwpQueryTokenPackageInfo.c)
 *     PsReferencePrimaryToken @ 0x1405E13A0 (PsReferencePrimaryToken.c)
 *     PsSetProcessTelemetryAppState @ 0x140663550 (PsSetProcessTelemetryAppState.c)
 *     EtwpIsProcessZombie @ 0x1407808B4 (EtwpIsProcessZombie.c)
 */

__int64 __fastcall EtwpPsProvProcessEnumCallback(PEPROCESS Process, _BYTE *a2)
{
  char v4; // si
  signed __int64 *v5; // rcx
  __int64 v6; // r8
  _DWORD *v7; // r9
  bool v8; // zf
  struct _DMA_ADAPTER *v9; // r14
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v12; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v13[3]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int PackageSize[104]; // [rsp+70h] [rbp-90h] BYREF

  v12 = 0LL;
  v4 = 0;
  memset(v13, 0, sizeof(v13));
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
      v8 = Process == PsIdleProcess;
      a2[8] = 0;
      if ( !v8
        && KeGetCurrentThread()->ApcState.Process != Process
        && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
      {
        KiStackAttachProcess(Process, 0LL, (__int64)v13, v7);
        v4 = 1;
        a2[8] = 1;
      }
      if ( (*a2 & 0x10) != 0 )
      {
        v11 = 0;
        v9 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
        EtwpQueryTokenPackageInfo(v9, (WCHAR *)PackageSize, &v11);
        if ( a2[8] )
          EtwpQueryProcessOtherInfo((__int64)Process, (__int64)&v12);
        ObFastDereferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5], v9);
        EtwpPsProvTraceProcess(Process, v11, PackageSize, (int *)&v12, 771);
      }
      if ( v4 )
      {
        KiUnstackDetachProcess((__int64)v13, 0LL, v6, v7);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
      }
    }
  }
  return 0LL;
}
