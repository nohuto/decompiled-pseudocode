/*
 * XREFs of RtlpHpEnvAllocVA @ 0x1800067A0
 * Callers:
 *     RtlpCSparseBitmapPageCommit @ 0x180006458 (RtlpCSparseBitmapPageCommit.c)
 *     RtlpHpVaMgrAllocAligned @ 0x180006740 (RtlpHpVaMgrAllocAligned.c)
 *     RtlCSparseBitmapStart @ 0x18010F6DC (RtlCSparseBitmapStart.c)
 * Callees:
 *     NtAllocateVirtualMemoryEx @ 0x18009E4B0 (NtAllocateVirtualMemoryEx.c)
 */

NTSTATUS __fastcall RtlpHpEnvAllocVA(
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        __int64 a3,
        int a4,
        ULONG PageProtection,
        int a6,
        int a7,
        __int64 a8)
{
  ULONG v8; // r9d
  ULONG ExtendedParameterCount; // edx
  __int64 v12; // rax
  unsigned int v13; // eax
  MEM_EXTENDED_PARAMETER *ExtendedParameters; // rax
  _QWORD v16[3]; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v17[6]; // [rsp+58h] [rbp-30h] BYREF

  v8 = a4 & 0xBFFFFFFF;
  if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v8 & 0x2000) == 0 )
    v8 &= ~0x20000000u;
  ExtendedParameterCount = 0;
  if ( (v8 & 0x2000) != 0 )
  {
    v16[2] = a3;
    v16[1] = 0LL;
    v17[0] = 1LL;
    v17[1] = v16;
    v12 = 0LL;
    ExtendedParameterCount = 1;
    if ( (v8 & 0x40000) != 0 )
      v12 = 0x100000000LL;
    v16[0] = v12;
    v13 = v8 & 0xFFFBFFFF;
    if ( (v8 & 0x40000) == 0 )
      v13 = v8;
    v8 = v13;
    if ( a8 )
    {
      v17[2] = 3LL;
      ExtendedParameterCount = 2;
      v17[3] = a8;
    }
  }
  ExtendedParameters = (MEM_EXTENDED_PARAMETER *)v17;
  if ( !ExtendedParameterCount )
    ExtendedParameters = 0LL;
  return NtAllocateVirtualMemoryEx(
           (HANDLE)0xFFFFFFFFFFFFFFFFLL,
           BaseAddress,
           RegionSize,
           v8,
           PageProtection,
           ExtendedParameters,
           ExtendedParameterCount);
}
