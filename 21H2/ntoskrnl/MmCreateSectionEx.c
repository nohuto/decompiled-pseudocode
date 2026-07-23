/*
 * XREFs of MmCreateSectionEx @ 0x1406AB9E4
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x14029A360 (FsRtlCreateSectionForDataScan.c)
 *     MmCreateSection @ 0x1406AB960 (MmCreateSection.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiCreateSection @ 0x14071CAF0 (MiCreateSection.c)
 *     PsReferencePrimaryToken @ 0x14071E0E0 (PsReferencePrimaryToken.c)
 *     MiCaptureSectionCreateExtendedParameters @ 0x14071EB3C (MiCaptureSectionCreateExtendedParameters.c)
 */

__int64 __fastcall MmCreateSectionEx(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char a8,
        volatile void *Address,
        ULONGLONG ullMultiplicand)
{
  __int64 result; // rax
  _KPROCESS *Process; // rbp
  char PreviousMode; // r14
  char v15; // r15
  struct _DMA_ADAPTER *v16; // rsi
  int SessionId; // eax
  int v18; // edx
  unsigned int Section; // ebx
  _OWORD v20[4]; // [rsp+70h] [rbp-48h] BYREF

  v20[0] = 0LL;
  result = MiCaptureSectionCreateExtendedParameters(Address, (unsigned int)ullMultiplicand);
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    if ( PreviousMode == 1 )
    {
      v15 = BYTE1(Process[2].Header.WaitListHead.Flink);
      v16 = (struct _DMA_ADAPTER *)PsReferencePrimaryToken(Process);
    }
    else
    {
      v16 = 0LL;
      v15 = 0;
    }
    SessionId = MmGetSessionIdEx((__int64)Process);
    v18 = (a7 != 0 ? 2 : 0) | 4;
    if ( (a8 & 2) == 0 )
      v18 = a7 != 0 ? 2 : 0;
    Section = MiCreateSection(a1, a2, a3, a4, a5, v18, (__int64)v16, v15, a6, a7, PreviousMode, SessionId, (__int64)v20);
    if ( v16 )
      HalPutDmaAdapter(v16);
    return Section;
  }
  return result;
}
