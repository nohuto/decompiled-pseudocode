/*
 * XREFs of LogFwReport @ 0x1409F2524
 * Callers:
 *     ResFwFreeContext @ 0x1409F207C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F4FE8 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpGetResolution @ 0x140251E30 (BgpGetResolution.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x14037F370 (DbgPrintEx.c)
 *     BgpFwQueryPerformanceCounter @ 0x14039BFD0 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x14039C3D0 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140C134F0 & 0x80u) != 0 )
  {
    dword_140C134F0 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140C11060);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140CDB228 = v1;
    dword_140CDB230 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140CF3358.Parameter = 0LL;
    stru_140CF3358.List.Flink = 0LL;
    dword_140CDB208 = BitsPerPixel;
    dword_140CDB1D8 = dword_140C134F0;
    dword_140CDB240 = 1000000 * qword_140CDB1E8 / qword_140C11060;
    dword_140CDB1D4 = 1000000 * qword_140CDB210 / qword_140C11060;
    dword_140CDB1F0 = 1000000 * qword_140CDB238 / qword_140C11060;
    stru_140CF3358.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140CF3358, DelayedWorkQueue);
    if ( (dword_140C134F0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140CDB228,
        HIDWORD(qword_140CDB228),
        dword_140CDB208);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140CDB218 / qword_140C11060);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140CDB1D0);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140C13510);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140C11068 / qword_140C11060);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140CDB200 / qword_140C11060);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140CDB1B8 / qword_140C11060,
        1000000 * qword_140CDB1C8 / qword_140C11060);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140CDB220 / qword_140C11060);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140CDB1F4);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140C1350C,
        dword_140CDB1D4,
        dword_140CDB1F0);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140C11058 / qword_140C11060);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140CDB1E0 / qword_140C11060);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140CDB240,
        1000000 * qword_140CDB1B0 / qword_140C11060);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140CDB1F8 / qword_140C11060);
      if ( qword_140C13520 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140C13520);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140CF53A8 / qword_140C11060);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
