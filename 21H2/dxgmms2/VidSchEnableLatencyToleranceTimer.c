/*
 * XREFs of VidSchEnableLatencyToleranceTimer @ 0x1C0012D30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0_EtwWriteTransfer @ 0x1C003BFC0 (McTemplateK0_EtwWriteTransfer.c)
 */

void __fastcall VidSchEnableLatencyToleranceTimer(__int64 a1, char a2)
{
  LARGE_INTEGER v3; // rcx
  unsigned __int64 v4; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  *(_BYTE *)(a1 + 3152) = a2;
  if ( a2 )
  {
    if ( bTracingEnabled && (byte_1C006E942 & 1) != 0 )
      McTemplateK0_EtwWriteTransfer(a1, &Dxgk_LatencyToleranceTimerEnable);
    PerformanceFrequency.QuadPart = 0LL;
    v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( is_mul_ok(v3.QuadPart, 0x989680uLL) )
      v4 = (unsigned __int64)v3.QuadPart
         * (unsigned __int128)0x989680uLL
         / (unsigned __int64)PerformanceFrequency.QuadPart;
    else
      v4 = 10000000 * (v3.QuadPart / (unsigned __int64)PerformanceFrequency.QuadPart)
         + 10000000 * (v3.QuadPart % (unsigned __int64)PerformanceFrequency.QuadPart) / PerformanceFrequency.QuadPart;
    *(_QWORD *)(a1 + 3136) = v4 + *(_QWORD *)(a1 + 3144);
    *(_QWORD *)(a1 + 1392) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(a1 + 1360), 0, 0);
  }
  else if ( bTracingEnabled && (byte_1C006E942 & 1) != 0 )
  {
    McTemplateK0_EtwWriteTransfer(a1, &Dxgk_LatencyToleranceTimerDisable);
  }
}
