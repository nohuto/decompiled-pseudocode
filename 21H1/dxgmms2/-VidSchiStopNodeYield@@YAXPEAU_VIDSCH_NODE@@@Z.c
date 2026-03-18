/*
 * XREFs of ?VidSchiStopNodeYield@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0013384
 * Callers:
 *     ?VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0012FE4 (-VidSchiUpdateNodeYieldStatus@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiCheckYieldExitCondition @ 0x1C0013338 (VidSchiCheckYieldExitCondition.c)
 * Callees:
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C0024A40 (McTemplateK0pq_EtwWriteTransfer.c)
 */

void __fastcall VidSchiStopNodeYield(unsigned __int64 QuadPart, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  ULONGLONG v4; // rax
  __int64 v5; // rdi
  unsigned int MostSignificantBit; // edx
  __int64 v7; // rax
  unsigned __int64 v8; // rtt
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)(QuadPart + 1992) = 0LL;
  v3 = QuadPart;
  v4 = *(unsigned int *)(QuadPart + 1764);
  v5 = *(_QWORD *)(QuadPart + 24);
  *(_BYTE *)(QuadPart + 2016) = 0;
  if ( (_DWORD)v4 )
  {
    MostSignificantBit = RtlFindMostSignificantBit(v4);
    QuadPart = *(_QWORD *)(v3 + 8LL * *(unsigned int *)(v3 + 1552) + 1560);
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
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pq_EtwWriteTransfer(
      QuadPart,
      &EventYieldStopNode,
      a3,
      *(_QWORD *)(v5 + 16),
      *(unsigned __int16 *)(v3 + 4));
}
