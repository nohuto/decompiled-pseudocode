/*
 * XREFs of IoGetDumpStackTransferSizes @ 0x140387BA4
 * Callers:
 *     PopHiberInitializeResources @ 0x140773990 (PopHiberInitializeResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 (*__fastcall IoGetDumpStackTransferSizes(_DWORD *a1, _DWORD *a2))(void)
{
  __int64 (*result)(void); // rax

  if ( CrashdmpImageEntry )
  {
    result = qword_140C50B30;
    if ( qword_140C50B30 )
      return (__int64 (*)(void))qword_140C50B30();
  }
  if ( a1 )
    *a1 = 4096;
  if ( a2 )
    *a2 = 0x10000;
  return result;
}
