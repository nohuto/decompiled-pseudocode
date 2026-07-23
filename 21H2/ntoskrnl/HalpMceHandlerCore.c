/*
 * XREFs of HalpMceHandlerCore @ 0x1404BB004
 * Callers:
 *     HalpMceHandler @ 0x1404BAEF0 (HalpMceHandler.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KxTryToAcquireSpinLock @ 0x14024EC18 (KxTryToAcquireSpinLock.c)
 *     HalpGetMcaPcrContext @ 0x1403A0D18 (HalpGetMcaPcrContext.c)
 *     HalpMcaReadErrorPresence @ 0x1403A0EE8 (HalpMcaReadErrorPresence.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpMcaClearError @ 0x1404BA528 (HalpMcaClearError.c)
 *     HalpMcaReadError @ 0x1404BAA50 (HalpMcaReadError.c)
 *     HalpMcaReportError @ 0x1404BACD0 (HalpMcaReportError.c)
 */

char __fastcall HalpMceHandlerCore(__int64 a1, char a2, __int64 a3)
{
  char v6; // bp
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 *McaPcrContext; // rax
  void *v11; // rsi
  int v12; // eax
  int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  v6 = 0;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))HalpWheaReadMsr)(a3, 378LL, 0LL);
  if ( !a2 || (v8 = v7, LOBYTE(v8) = v7 & 3, (v7 & 3) != 1) && (v7 & 4) != 0 )
  {
    v9 = 0LL;
    if ( !HalpMcaWheaReady
      || (McaPcrContext = (__int64 *)HalpGetMcaPcrContext(a3)) == 0LL
      || (v9 = *McaPcrContext, v11 = (void *)(*McaPcrContext + 80), !*McaPcrContext) )
    {
      v11 = &HalpMceBackupErrorBuffer;
    }
    while ( (int)HalpMcaReadErrorPresence(v8, a3) >= 0 )
    {
      while ( !KxTryToAcquireSpinLock((volatile signed __int32 *)&HalpMceLock) )
        _mm_pause();
      if ( (int)HalpMcaReadError(16, (__int64)v11, &v14, a1, a3) < 0 )
      {
        KxReleaseSpinLock(&HalpMceLock);
        return v6;
      }
      if ( v9 )
      {
        v12 = v14;
        *(_DWORD *)(v9 + 12) = 0;
        *(_DWORD *)(v9 + 20) = v12;
      }
      HalpProcessorInMceHandler = KeGetPcr()->Prcb.Number;
      HalpMcaReportError(v9, (__int64)v11, a3);
      HalpProcessorInMceHandler = 1280;
      HalpMcaClearError((__int64)v11, a3);
      if ( McaWmiCallback )
        LOBYTE(HalpClockWorkUnion) = 1;
      KxReleaseSpinLock(&HalpMceLock);
      v6 = 1;
    }
  }
  return v6;
}
