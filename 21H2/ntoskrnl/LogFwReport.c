/*
 * XREFs of LogFwReport @ 0x140AABB9C
 * Callers:
 *     ResFwFreeContext @ 0x140AAB07C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x140AAE9F4 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpGetResolution @ 0x14025E2BC (BgpGetResolution.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     BgpFwQueryPerformanceCounter @ 0x1403A7BD8 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x1403A8368 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140C0DF90 & 0x80u) != 0 )
  {
    dword_140C0DF90 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140C0B450);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140CE1B68 = v1;
    dword_140CE1B70 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140D009D8.Parameter = 0LL;
    stru_140D009D8.List.Flink = 0LL;
    dword_140CE1AF0 = BitsPerPixel;
    dword_140CE1B48 = dword_140C0DF90;
    dword_140CE1B80 = 1000000 * qword_140CE1B18 / qword_140C0B450;
    dword_140CE1B24 = 1000000 * qword_140CE1B60 / qword_140C0B450;
    dword_140CE1AF4 = 1000000 * qword_140CE1B58 / qword_140C0B450;
    stru_140D009D8.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140D009D8, DelayedWorkQueue);
    if ( (dword_140C0DF90 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140CE1B68,
        HIDWORD(qword_140CE1B68),
        dword_140CE1AF0);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", dword_140C0DFE8);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140CE1B78 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140CE1B20);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140C0DFB0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140C0B448 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140CE1AE8 / qword_140C0B450);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140CE1B40 / qword_140C0B450,
        1000000 * qword_140CE1B30 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140CE1B28 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140CE1B08);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140C0DFAC,
        dword_140CE1B24,
        dword_140CE1AF4);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140C0B458 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140CE1B10 / qword_140C0B450);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140CE1B80,
        1000000 * qword_140CE1B38 / qword_140C0B450);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140CE1AF8 / qword_140C0B450);
      if ( qword_140C0DFC0 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140C0DFC0);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140D01578 / qword_140C0B450);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
