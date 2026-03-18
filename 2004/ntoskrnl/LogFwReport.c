/*
 * XREFs of LogFwReport @ 0x1409EE718
 * Callers:
 *     ResFwFreeContext @ 0x1409EE224 (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F0FE8 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402B9BC0 (ExQueueWorkItem.c)
 *     BgpGetResolution @ 0x140360B50 (BgpGetResolution.c)
 *     DbgPrintEx @ 0x14037D2B0 (DbgPrintEx.c)
 *     BgpFwQueryPerformanceCounter @ 0x1403990F0 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x1403994F0 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140C13310 & 0x80u) != 0 )
  {
    dword_140C13310 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140C10FE0);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140CDAFC0 = v1;
    dword_140CDAFC8 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140CF2F58.Parameter = 0LL;
    stru_140CF2F58.List.Flink = 0LL;
    dword_140CDAF78 = BitsPerPixel;
    dword_140CDAFE0 = dword_140C13310;
    dword_140CDB000 = 1000000 * qword_140CDAFA8 / qword_140C10FE0;
    dword_140CDAFB4 = 1000000 * qword_140CDAFF0 / qword_140C10FE0;
    dword_140CDAF7C = 1000000 * qword_140CDAFE8 / qword_140C10FE0;
    stru_140CF2F58.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140CF2F58, DelayedWorkQueue);
    if ( (dword_140C13310 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140CDAFC0,
        HIDWORD(qword_140CDAFC0),
        dword_140CDAF78);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140CDAFF8 / qword_140C10FE0);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140CDAFB0);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140C13330);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140C10FD8 / qword_140C10FE0);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140CDAF70 / qword_140C10FE0);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140CDAFD8 / qword_140C10FE0,
        1000000 * qword_140CDAF98 / qword_140C10FE0);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140CDAFB8 / qword_140C10FE0);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140CDAF80);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140C1332C,
        dword_140CDAFB4,
        dword_140CDAF7C);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140C10FE8 / qword_140C10FE0);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140CDAFA0 / qword_140C10FE0);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140CDB000,
        1000000 * qword_140CDAFD0 / qword_140C10FE0);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140CDAF88 / qword_140C10FE0);
      if ( qword_140C13340 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140C13340);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140CF4DD0 / qword_140C10FE0);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
