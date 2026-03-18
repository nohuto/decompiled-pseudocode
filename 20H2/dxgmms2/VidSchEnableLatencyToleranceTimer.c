/*
 * XREFs of VidSchEnableLatencyToleranceTimer @ 0x1C0034060
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C0033360 (McTemplateK0_EtwWriteTransfer.c)
 */

void __fastcall VidSchEnableLatencyToleranceTimer(__int64 a1, char a2, __int64 a3)
{
  LARGE_INTEGER v4; // rcx
  unsigned __int64 v5; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 3056) = a2;
  if ( a2 )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0_EtwWriteTransfer(a1, &Dxgk_LatencyToleranceTimerEnable, a3);
    PerformanceFrequency.QuadPart = 0LL;
    v4 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( is_mul_ok(v4.QuadPart, 0x989680uLL) )
      v5 = (unsigned __int64)v4.QuadPart
         * (unsigned __int128)0x989680uLL
         / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v5 = 10000000 * (v4.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
         + 10000000 * (v4.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    *(_QWORD *)(a1 + 3040) = v5 + *(_QWORD *)(a1 + 3048);
    *(_QWORD *)(a1 + 1376) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1344), 0, 0);
  }
  else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
  {
    McTemplateK0_EtwWriteTransfer(a1, &Dxgk_LatencyToleranceTimerDisable, a3);
  }
}
