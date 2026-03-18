/*
 * XREFs of IoGetDumpStack @ 0x140762D84
 * Callers:
 *     PopAllocateHiberContext @ 0x140763244 (PopAllocateHiberContext.c)
 * Callees:
 *     IopLoadCrashdumpDriver @ 0x1403A4048 (IopLoadCrashdumpDriver.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IoGetDumpStack(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 result; // rax

  result = IopLoadCrashdumpDriver();
  if ( (int)result >= 0 )
    return ((__int64 (__fastcall *)(const wchar_t *, __int64, __int64, _QWORD, _QWORD))qword_140C50BA0)(
             L"hiber_",
             a2,
             2LL,
             a4,
             0LL);
  return result;
}
