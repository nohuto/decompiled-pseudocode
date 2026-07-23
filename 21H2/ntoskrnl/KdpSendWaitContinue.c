/*
 * XREFs of KdpSendWaitContinue @ 0x1409B94F4
 * Callers:
 *     KdpReportCommandStringStateChange @ 0x1409B8B48 (KdpReportCommandStringStateChange.c)
 *     KdpReportExceptionStateChange @ 0x1409B8CE0 (KdpReportExceptionStateChange.c)
 *     KdpReportLoadSymbolsStateChange @ 0x1409B8DD0 (KdpReportLoadSymbolsStateChange.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalReturnToFirmware @ 0x1404BE3E0 (HalReturnToFirmware.c)
 *     KdpGetContextEx @ 0x140511538 (KdpGetContextEx.c)
 *     KdpSetContextEx @ 0x14051172C (KdpSetContextEx.c)
 *     KdpWriteCustomBreakpoint @ 0x140511864 (KdpWriteCustomBreakpoint.c)
 *     KdpSysReadIoSpace @ 0x140511F44 (KdpSysReadIoSpace.c)
 *     KdpSysReadMsr @ 0x140512004 (KdpSysReadMsr.c)
 *     KdpSysWriteIoSpace @ 0x140512038 (KdpSysWriteIoSpace.c)
 *     KdpSysWriteMsr @ 0x1405120F0 (KdpSysWriteMsr.c)
 *     KeSwitchFrozenProcessor @ 0x14051DD40 (KeSwitchFrozenProcessor.c)
 *     KdExitDebugger @ 0x1409B8190 (KdExitDebugger.c)
 *     KdpFillMemory @ 0x1409B8430 (KdpFillMemory.c)
 *     KdpGetBusData @ 0x1409B8560 (KdpGetBusData.c)
 *     KdpGetContext @ 0x1409B8628 (KdpGetContext.c)
 *     KdpQueryMemory @ 0x1409B871C (KdpQueryMemory.c)
 *     KdpReadControlSpace @ 0x1409B87B4 (KdpReadControlSpace.c)
 *     KdpReadPhysicalMemory @ 0x1409B8870 (KdpReadPhysicalMemory.c)
 *     KdpReadPhysicalMemoryLong @ 0x1409B89C0 (KdpReadPhysicalMemoryLong.c)
 *     KdpReadVirtualMemory @ 0x1409B8A84 (KdpReadVirtualMemory.c)
 *     KdpRestoreBreakPointEx @ 0x1409B8F08 (KdpRestoreBreakPointEx.c)
 *     KdpSearchMemory @ 0x1409B9018 (KdpSearchMemory.c)
 *     KdpSearchPhysicalPageRange @ 0x1409B9450 (KdpSearchPhysicalPageRange.c)
 *     KdpSetBusData @ 0x1409B9CF0 (KdpSetBusData.c)
 *     KdpSetContext @ 0x1409B9D7C (KdpSetContext.c)
 *     KdpWriteBreakPointEx @ 0x1409BA090 (KdpWriteBreakPointEx.c)
 *     KdpWriteControlSpace @ 0x1409BA254 (KdpWriteControlSpace.c)
 *     KdpWritePhysicalMemory @ 0x1409BA2E0 (KdpWritePhysicalMemory.c)
 *     KdpCopyMemoryChunks @ 0x1409BAB9C (KdpCopyMemoryChunks.c)
 *     KdpGetStateChange @ 0x1409BAE1C (KdpGetStateChange.c)
 *     KdpAddBreakpoint @ 0x1409BB0B0 (KdpAddBreakpoint.c)
 *     KdpDeleteBreakpoint @ 0x1409BB248 (KdpDeleteBreakpoint.c)
 */

__int64 __fastcall KdpSendWaitContinue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int128 *v10; // rdx
  PVOID *v11; // r8
  char v12; // al
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  __int64 v15; // [rsp+28h] [rbp-D8h]
  PVOID v16[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  void *v18; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v19; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v20[2]; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+78h] [rbp-88h] BYREF
  int v22; // [rsp+7Ch] [rbp-84h] BYREF
  int v23; // [rsp+80h] [rbp-80h] BYREF
  int v24; // [rsp+84h] [rbp-7Ch] BYREF
  __int128 v25; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v26[2]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v27[2]; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD v28[2]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v29[2]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v30[2]; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD v31[2]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v32[2]; // [rsp+F8h] [rbp-8h] BYREF
  _QWORD v33[2]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v34[2]; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v35[2]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v36[2]; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v37[2]; // [rsp+148h] [rbp+48h] BYREF
  __int128 v38; // [rsp+158h] [rbp+58h] BYREF
  PVOID BaseAddress[2]; // [rsp+168h] [rbp+68h] BYREF
  __int128 v40; // [rsp+178h] [rbp+78h] BYREF
  __int64 v41; // [rsp+188h] [rbp+88h]

  v41 = 0LL;
  v20[0] = 3670016LL;
  v16[0] = (PVOID)0x10000000;
  v17 = 0;
  KdpContextSent = 0;
  v20[1] = &v38;
  v16[1] = &KdpMessageBuffer;
  v38 = 0LL;
  *(_OWORD *)BaseAddress = 0LL;
  v40 = 0LL;
  KdSendPacket(7LL, a2, a3, &KdpContext);
  while ( !(_BYTE)KdDebuggerNotPresent )
  {
    while ( 1 )
    {
      if ( (_DWORD)KeNumberProcessors_0 == 1 )
        KeQueryPerformanceCounter(0LL);
      v7 = KdReceivePacket(2LL, v20, v16, &v17, &KdpContext);
      if ( v7 == 2 )
        break;
      if ( v7 != 1 )
      {
        switch ( (int)v38 )
        {
          case 12592:
            KdpReadVirtualMemory((__int64)&v38, v16, v8);
            continue;
          case 12593:
            v25 = 0LL;
            DWORD2(v38) = KdpCopyMemoryChunks(BaseAddress[0], 5, (__int64)&BaseAddress[1] + 4);
            v10 = &v25;
            v11 = 0LL;
            LOWORD(v25) = 56;
            *((_QWORD *)&v25 + 1) = &v38;
            goto LABEL_45;
          case 12594:
            v27[0] = 56LL;
            v27[1] = &v38;
            KdpGetContext((__int64)&v38, (__int64)v16, a4);
            if ( !DWORD2(v38) )
              KdpContextSent = 1;
            v10 = (__int128 *)v27;
            goto LABEL_44;
          case 12595:
            KdpSetContext(&v38, v16, a4);
            continue;
          case 12596:
            v28[0] = 56LL;
            LOBYTE(v8) = 1;
            v28[1] = &v38;
            LODWORD(BaseAddress[1]) = KdpAddBreakpoint(BaseAddress[0], 204LL, v8, 0LL, BugCheckParameter4, v15);
            v10 = (__int128 *)v28;
            DWORD2(v38) = LODWORD(BaseAddress[1]) == 0 ? 0xC0000001 : 0;
            v11 = 0LL;
            goto LABEL_45;
          case 12597:
            v29[0] = 56LL;
            v29[1] = &v38;
            v12 = KdpDeleteBreakpoint(LODWORD(BaseAddress[0]));
            v10 = (__int128 *)v29;
            DWORD2(v38) = v12 == 0 ? 0xC0000001 : 0;
            v11 = 0LL;
            goto LABEL_45;
          case 12598:
            return SLODWORD(BaseAddress[0]) >= 0;
          case 12599:
            KdpReadControlSpace((__int64)&v38, (__int64)v16, v8);
            continue;
          case 12600:
            KdpWriteControlSpace(&v38, v16);
            continue;
          case 12601:
            HIDWORD(BaseAddress[1]) = 0;
            v30[0] = 56LL;
            v30[1] = &v38;
            DWORD2(v38) = KdpSysReadIoSpace(
                            1,
                            0,
                            1,
                            (unsigned __int16)BaseAddress[0],
                            (_BYTE *)&BaseAddress[1] + 4,
                            (int)BaseAddress[1],
                            &v21);
            v10 = (__int128 *)v30;
            v11 = 0LL;
            goto LABEL_45;
          case 12602:
            v31[0] = 56LL;
            v31[1] = &v38;
            DWORD2(v38) = KdpSysWriteIoSpace(
                            1,
                            0,
                            1,
                            (unsigned __int16)BaseAddress[0],
                            (unsigned __int8 *)&BaseAddress[1] + 4,
                            (int)BaseAddress[1],
                            &v22);
            v10 = (__int128 *)v31;
            v11 = 0LL;
            goto LABEL_45;
          case 12603:
            KiResumeForReboot = 1;
            KdExitDebugger(0);
            ((void (__fastcall *)(_QWORD))off_140C008A8[0])(0LL);
            HalReturnToFirmware(3);
          case 12604:
            if ( SLODWORD(BaseAddress[0]) < 0 )
              return 0LL;
            KdpGetStateChange(&v38, a4);
            return 1LL;
          case 12605:
            KdpReadPhysicalMemory((__int64)&v38, (__int64)v16, v8, (__int64)&KdpContext);
            continue;
          case 12606:
            KdpWritePhysicalMemory(&v38, v16);
            continue;
          case 12608:
          case 12609:
          case 12610:
          case 12634:
            continue;
          case 12612:
            v32[0] = 56LL;
            v32[1] = &v38;
            DWORD2(v40) = 0;
            DWORD2(v38) = KdpSysReadIoSpace(
                            SHIDWORD(BaseAddress[0]),
                            (int)BaseAddress[1],
                            SHIDWORD(BaseAddress[1]),
                            v40,
                            (_BYTE *)&v40 + 8,
                            (int)BaseAddress[0],
                            &v23);
            v10 = (__int128 *)v32;
            v11 = 0LL;
            goto LABEL_45;
          case 12613:
            v33[0] = 56LL;
            v33[1] = &v38;
            DWORD2(v38) = KdpSysWriteIoSpace(
                            SHIDWORD(BaseAddress[0]),
                            (int)BaseAddress[1],
                            SHIDWORD(BaseAddress[1]),
                            v40,
                            (unsigned __int8 *)&v40 + 8,
                            (int)BaseAddress[0],
                            &v24);
            v10 = (__int128 *)v33;
            v11 = 0LL;
            goto LABEL_45;
          case 12614:
            DWORD2(v38) = 0;
            LODWORD(v38) = 12614;
            v36[0] = 56LL;
            v36[1] = &v38;
            v10 = (__int128 *)v36;
            v40 = xmmword_140C0F408;
            v11 = 0LL;
            *(_OWORD *)BaseAddress = KdVersionBlock;
            v41 = qword_140C0F418;
            goto LABEL_45;
          case 12615:
            if ( !(unsigned int)KdpWriteBreakPointEx(&v38, v16) )
              continue;
            return 0LL;
          case 12616:
            KdpRestoreBreakPointEx((__int64)&v38, v16);
            continue;
          case 12617:
            KdExitDebugger(0);
            KeBugCheckEx(0xE2u, 0LL, 0LL, 0LL, 0LL);
          case 12624:
            return KeSwitchFrozenProcessor(WORD3(v38));
          case 12625:
            DWORD2(v38) = -1073741823;
            v10 = (__int128 *)v37;
            v37[0] = 56LL;
            v11 = 0LL;
            v37[1] = &v38;
            goto LABEL_45;
          case 12626:
            v18 = 0LL;
            v34[0] = 56LL;
            v34[1] = &v38;
            DWORD2(v38) = KdpSysReadMsr((unsigned int)BaseAddress[0], &v18);
            v10 = (__int128 *)v34;
            v11 = 0LL;
            *(PVOID *)((char *)BaseAddress + 4) = v18;
            goto LABEL_45;
          case 12627:
            v35[0] = 56LL;
            v35[1] = &v38;
            v19 = *(unsigned __int64 *)((char *)BaseAddress + 4);
            DWORD2(v38) = KdpSysWriteMsr((unsigned int)BaseAddress[0], &v19);
            v10 = (__int128 *)v35;
            v11 = 0LL;
            goto LABEL_45;
          case 12630:
            KdpSearchMemory((__int64)&v38, (__int64)v16);
            continue;
          case 12631:
            KdpGetBusData(&v38, (__int64)v16, v8);
            continue;
          case 12632:
            KdpSetBusData(&v38, v16);
            continue;
          case 12633:
            v26[0] = 56LL;
            v26[1] = &v38;
            if ( KdpSearchInProgress )
              KdpSearchPhysicalPageRange(4);
            DWORD2(v38) = 0;
            v10 = (__int128 *)v26;
            v11 = 0LL;
            goto LABEL_45;
          case 12635:
            KdpFillMemory((__int64)&v38, (__int64)v16);
            continue;
          case 12636:
            KdpQueryMemory((__int64)&v38);
            continue;
          case 12639:
            KdpGetContextEx(&v38, (unsigned __int16 *)v16);
            continue;
          case 12640:
            KdpSetContextEx((__int64)&v38, (__int64)v16, a4);
            continue;
          case 12641:
            KdpWriteCustomBreakpoint((__int64)&v38, 0x140000000LL, v8, v9);
            continue;
          case 12642:
            KdpReadPhysicalMemoryLong((__int64)&v38, v16, v8);
            continue;
          default:
            LOWORD(v16[0]) = 0;
            v10 = (__int128 *)v20;
            DWORD2(v38) = -1073741823;
LABEL_44:
            v11 = v16;
LABEL_45:
            KdSendPacket(2LL, v10, v11, &KdpContext);
            continue;
        }
      }
    }
    KdSendPacket(7LL, a2, a3, &KdpContext);
  }
  return 1LL;
}
