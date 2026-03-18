/*
 * XREFs of LogFwReport @ 0x1409EE718
 * Callers:
 *     ResFwFreeContext @ 0x1409EE07C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F0FE8 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     BgpGetResolution @ 0x140323060 (BgpGetResolution.c)
 *     DbgPrintEx @ 0x14037C640 (DbgPrintEx.c)
 *     BgpFwQueryPerformanceCounter @ 0x140398960 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x140398D60 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140C132D0 & 0x80u) != 0 )
  {
    dword_140C132D0 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140C10FD0);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140CDB0D0 = v1;
    dword_140CDB0D8 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140CF3098.Parameter = 0LL;
    stru_140CF3098.List.Flink = 0LL;
    dword_140CDB078 = BitsPerPixel;
    dword_140CDB0BC = dword_140C132D0;
    dword_140CDB0F8 = 1000000 * qword_140CDB088 / qword_140C10FD0;
    dword_140CDB0E8 = 1000000 * qword_140CDB100 / qword_140C10FD0;
    dword_140CDB074 = 1000000 * qword_140CDB108 / qword_140C10FD0;
    stru_140CF3098.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140CF3098, DelayedWorkQueue);
    if ( (dword_140C132D0 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140CDB0D0,
        HIDWORD(qword_140CDB0D0),
        dword_140CDB078);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140CDB0C8 / qword_140C10FD0);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140CDB0B8);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140C132F0);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140C10FC8 / qword_140C10FD0);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140CDB080 / qword_140C10FD0);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140CDB0C0 / qword_140C10FD0,
        1000000 * qword_140CDB0A0 / qword_140C10FD0);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140CDB0E0 / qword_140C10FD0);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140CDB070);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140C132EC,
        dword_140CDB0E8,
        dword_140CDB074);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140C10FD8 / qword_140C10FD0);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140CDB090 / qword_140C10FD0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140CDB0F8,
        1000000 * qword_140CDB098 / qword_140C10FD0);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140CDB0B0 / qword_140C10FD0);
      if ( qword_140C13300 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140C13300);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140CF4F20 / qword_140C10FD0);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
