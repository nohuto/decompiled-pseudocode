/*
 * XREFs of ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001757C
 * Callers:
 *     VidSchiCheckYieldExitCondition @ 0x1C00173F0 (VidSchiCheckYieldExitCondition.c)
 *     ?VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0017440 (-VidSchiWorkerThreadTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00181D8 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C002EB14 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiStopNodeYield(unsigned __int64 QuadPart, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // rdi
  unsigned int MostSignificantBit; // edx
  __int64 v7; // rax
  unsigned __int64 v8; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(QuadPart + 2000) = 0LL;
  v3 = QuadPart;
  v4 = *(_DWORD *)(QuadPart + 1772);
  v5 = *(_QWORD *)(QuadPart + 24);
  *(_BYTE *)(QuadPart + 2024) = 0;
  if ( v4 )
  {
    MostSignificantBit = RtlFindMostSignificantBit(v4);
    QuadPart = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1560) + 1568);
    if ( QuadPart )
    {
      if ( *(_DWORD *)(QuadPart + 404) < MostSignificantBit )
      {
        v7 = *(_QWORD *)(v3 + 96);
        PerformanceFrequency.QuadPart = 0LL;
        *(_QWORD *)(v3 + 136) = v7;
        QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
        if ( is_mul_ok(QuadPart, 0x989680uLL) )
        {
          a3 = QuadPart * (unsigned __int128)0x989680uLL / (unsigned __int64)PerformanceFrequency.QuadPart;
        }
        else
        {
          v8 = QuadPart;
          QuadPart /= PerformanceFrequency.QuadPart;
          a3 = 10000000 * QuadPart + 10000000 * (v8 % PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
        }
        *(_QWORD *)(v3 + 128) = a3;
      }
    }
  }
  if ( (byte_1C006E941 & 1) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      QuadPart,
      &EventYieldStopNode,
      a3,
      *(_QWORD *)(v5 + 16),
      *(unsigned __int16 *)(v3 + 4));
}
