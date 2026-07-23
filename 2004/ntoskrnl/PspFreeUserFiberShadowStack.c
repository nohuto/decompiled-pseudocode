/*
 * XREFs of PspFreeUserFiberShadowStack @ 0x140906DA4
 * Callers:
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MmUpdateUserShadowStackValue @ 0x1403EE978 (MmUpdateUserShadowStackValue.c)
 *     ZwQueryVirtualMemory @ 0x1403F3A20 (ZwQueryVirtualMemory.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MmFreeVirtualMemory @ 0x1405F9180 (MmFreeVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspFreeUserFiberShadowStack(PVOID BaseAddress)
{
  int updated; // edi
  _QWORD *InitialStack; // rdx
  _QWORD *i; // r8
  __int64 v6; // [rsp+30h] [rbp-F8h] BYREF
  _OWORD MemoryInformation[3]; // [rsp+38h] [rbp-F0h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+70h] [rbp-B8h] BYREF

  memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
  memset(MemoryInformation, 0, sizeof(MemoryInformation));
  v6 = 0LL;
  if ( ((unsigned __int8)BaseAddress & 7) != 0 )
    ExRaiseDatatypeMisalignment();
  updated = MmUpdateUserShadowStackValue(
              (unsigned __int64)BaseAddress,
              ((unsigned __int64)BaseAddress + 8) & 0xFFFFFFFFFFFFFFFCuLL | 1);
  if ( updated >= 0 )
  {
    updated = ZwQueryVirtualMemory(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                BaseAddress,
                MemoryRegionInformation,
                MemoryInformation,
                0x30uLL,
                0LL);
    if ( updated >= 0 )
      updated = MmFreeVirtualMemory(
                  0xFFFFFFFFFFFFFFFFuLL,
                  (unsigned __int64 *)MemoryInformation,
                  &v6,
                  0x8000,
                  0,
                  0x40000000);
  }
  if ( updated < 0 )
  {
    ExceptionRecord.ExceptionFlags = 1;
    ExceptionRecord.ExceptionAddress = 0LL;
    ExceptionRecord.ExceptionCode = -1073740791;
    ExceptionRecord.NumberParameters = 1;
    ExceptionRecord.ExceptionRecord = 0LL;
    ExceptionRecord.ExceptionInformation[0] = updated;
    InitialStack = KeGetCurrentThread()->InitialStack;
    for ( i = InitialStack; (i[1] & 1) != 0; i = (_QWORD *)i[5] )
      ;
    if ( (InitialStack[1] & 1LL) != 0 )
    {
      do
        InitialStack = (_QWORD *)InitialStack[5];
      while ( (InitialStack[1] & 1) != 0 );
    }
    KiDispatchException(&ExceptionRecord, (unsigned __int64)(InitialStack - 90), (__int64)(i - 50), 1u, 0);
  }
  return (unsigned int)updated;
}
