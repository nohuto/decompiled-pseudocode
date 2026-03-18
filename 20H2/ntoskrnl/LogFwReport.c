/*
 * XREFs of LogFwReport @ 0x1409F4718
 * Callers:
 *     ResFwFreeContext @ 0x1409F407C (ResFwFreeContext.c)
 *     BgpFwLibraryDisable @ 0x1409F6FE8 (BgpFwLibraryDisable.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     BgpGetResolution @ 0x140331880 (BgpGetResolution.c)
 *     DbgPrintEx @ 0x14037EFE0 (DbgPrintEx.c)
 *     BgpFwQueryPerformanceCounter @ 0x14039B5B0 (BgpFwQueryPerformanceCounter.c)
 *     BgpGetBitsPerPixel @ 0x14039B9B0 (BgpGetBitsPerPixel.c)
 */

void LogFwReport()
{
  _DWORD *Resolution; // rax
  __int64 v1; // xmm0_8
  int BitsPerPixel; // eax
  _DWORD v3[6]; // [rsp+30h] [rbp-18h] BYREF

  if ( (dword_140C13330 & 0x80u) != 0 )
  {
    dword_140C13330 &= ~0x80u;
    BgpFwQueryPerformanceCounter((LARGE_INTEGER *)&qword_140C11000);
    Resolution = BgpGetResolution(v3);
    v1 = *(_QWORD *)Resolution;
    LODWORD(Resolution) = Resolution[2];
    qword_140CDB060 = v1;
    dword_140CDB068 = (int)Resolution;
    BitsPerPixel = BgpGetBitsPerPixel();
    stru_140CF3018.Parameter = 0LL;
    stru_140CF3018.List.Flink = 0LL;
    dword_140CDB010 = BitsPerPixel;
    dword_140CDB050 = dword_140C13330;
    dword_140CDB088 = 1000000 * qword_140CDB020 / qword_140C11000;
    dword_140CDB048 = 1000000 * qword_140CDB090 / qword_140C11000;
    dword_140CDB00C = 1000000 * qword_140CDB078 / qword_140C11000;
    stru_140CF3018.WorkerRoutine = (void (__fastcall *)(void *))LogFwpRegisterWorker;
    ExQueueWorkItem(&stru_140CF3018, DelayedWorkQueue);
    if ( (dword_140C13330 & 0x10000) != 0 )
    {
      DbgPrintEx(0x65u, 0, "\n+--BGFX-REPORT-----------------+\n|                              |\n");
      DbgPrintEx(
        0x65u,
        0,
        "|  DisplayMode:  %4ux%4ux%2u  |\n",
        qword_140CDB060,
        HIDWORD(qword_140CDB060),
        dword_140CDB010);
      DbgPrintEx(0x65u, 0, "|  LogoSize:         %8u  |\n|                              |\n", Size);
      DbgPrintEx(0x65u, 0, "|  ProgressProlog:   %8u  |\n", 1000000 * qword_140CDB058 / qword_140C11000);
      DbgPrintEx(0x65u, 0, "|  ProgressFrames:   %8u  |\n", dword_140CDB04C);
      DbgPrintEx(0x65u, 0, "|  ProgressMemory:   %8u  |\n", dword_140C13350);
      DbgPrintEx(0x65u, 0, "|  ProgressLow:      %8u  |\n", 1000000 * qword_140C10FF8 / qword_140C11000);
      DbgPrintEx(0x65u, 0, "|  ProgressHigh:     %8u  |\n", 1000000 * qword_140CDAFF8 / qword_140C11000);
      DbgPrintEx(
        0x65u,
        0,
        "|  ProgressManual:   %8u  |\n|  ProgressTotal:    %8u  |\n|                              |\n",
        1000000 * qword_140CDB028 / qword_140C11000,
        1000000 * qword_140CDB038 / qword_140C11000);
      DbgPrintEx(0x65u, 0, "|  FadeProlog:       %8u  |\n", 1000000 * qword_140CDB070 / qword_140C11000);
      DbgPrintEx(0x65u, 0, "|  FadeFrames:       %8u  |\n", dword_140CDB008);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeMemory:       %8u  |\n|  FadeIo:           %8u  |\n|  FadeCpu:          %8u  |\n",
        dword_140C1334C,
        dword_140CDB048,
        dword_140CDB00C);
      DbgPrintEx(0x65u, 0, "|  FadeLow:          %8u  |\n", 1000000 * qword_140C11008 / qword_140C11000);
      DbgPrintEx(0x65u, 0, "|  FadeHigh:         %8u  |\n", 1000000 * qword_140CDB000 / qword_140C11000);
      DbgPrintEx(
        0x65u,
        0,
        "|  FadeOverlap:      %8u  |\n|  FadeTotal:        %8u  |\n|                              |\n",
        dword_140CDB088,
        1000000 * qword_140CDB030 / qword_140C11000);
      DbgPrintEx(
        0x65u,
        0,
        "|  AnimationTotal:   %8u  |\n|                              |",
        1000000 * qword_140CDB018 / qword_140C11000);
      if ( qword_140C13360 )
        DbgPrintEx(
          0x65u,
          0,
          "\n|  ResidentSize:     %8u  |\n|                              |",
          *(_DWORD *)qword_140C13360);
      DbgPrintEx(
        0x65u,
        0,
        "\n|  CompressBitmapsCPU: %8u|\n|                              |",
        1000000 * qword_140CF4EB0 / qword_140C11000);
      DbgPrintEx(0x65u, 0, "\n+------------------------------+\n\n");
    }
  }
}
