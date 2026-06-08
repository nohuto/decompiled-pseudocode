/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0004A40
 * Callers:
 *     DisplayGenAddr @ 0x1C00058C0 (DisplayGenAddr.c)
 *     Display_CPC @ 0x1C0005B7C (Display_CPC.c)
 *     Display_PCT_PTC @ 0x1C0006734 (Display_PCT_PTC.c)
 *     Display_xSD @ 0x1C0006E4C (Display_xSD.c)
 *     DisplayPPMFlags @ 0x1C0008518 (DisplayPPMFlags.c)
 *     DecodeAcpiIdleState @ 0x1C000C2A4 (DecodeAcpiIdleState.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C0020548 (CpcGuaranteedNotifyWorker.c)
 *     CpcHighestNotifyWorker @ 0x1C00207F0 (CpcHighestNotifyWorker.c)
 *     AcpiEval_PCT_PTC @ 0x1C00247A8 (AcpiEval_PCT_PTC.c)
 *     AcpiEval_PSD_TSD @ 0x1C0024C20 (AcpiEval_PSD_TSD.c)
 *     ValidateAcpiCPCRegister @ 0x1C00297BC (ValidateAcpiCPCRegister.c)
 *     ProcLibGlobalInit @ 0x1C0036650 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_s(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6)
{
  __int64 v6; // rdi
  unsigned __int64 v9; // rsi
  unsigned int v10; // r14d
  const char *v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  const char *v16; // rcx
  int v18; // [rsp+20h] [rbp-48h]

  v6 = -1LL;
  v9 = (unsigned __int64)a3 >> 16;
  v10 = a2;
  v12 = a6;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v9 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v9 + 1) >= a2 )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = "NULL";
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v9), 43LL, a5, a4, v16, v15, 0LL);
  }
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
  }
  if ( !a6 )
    v12 = "NULL";
  LOWORD(v18) = a4;
  return WppAutoLogTrace(a1, v10, a3, a5, v18, v12);
}
