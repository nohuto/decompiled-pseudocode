/*
 * XREFs of IopConstructInMemoryDumpHeader @ 0x1404FE160
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x1403C58E8 (IopInitializeOfflineCrashDump.c)
 *     IoUpdateDumpPhysicalRanges @ 0x1404FD1AC (IoUpdateDumpPhysicalRanges.c)
 * Callees:
 *     IoFillDumpHeader @ 0x1404FC058 (IoFillDumpHeader.c)
 */

__int64 IopConstructInMemoryDumpHeader()
{
  __int64 result; // rax
  _DWORD *v1; // r14
  __int64 v2; // rsi

  result = (unsigned int)_InterlockedExchange(InMemData, 1);
  if ( (_DWORD)result != 1 )
  {
    dword_140C50B38 = 0;
    if ( dword_140C50B04
      && (result = qword_140C50B20 & 1, (v1 = *(_DWORD **)&InMemData[2 * result + 2]) != 0LL)
      && (v2 = *(_QWORD *)&InMemData[2 * (((_BYTE)qword_140C50B20 - 1) & 1) + 2]) != 0 )
    {
      IoFillDumpHeader((_NT_PRODUCT_TYPE *)(v2 + 24), 1, 332, 0LL, 0LL, 0LL, 0LL, (__int64)KeGetCurrentThread());
      *(_QWORD *)(v2 + 4040) = qword_140C50B28;
      *(_QWORD *)(v2 + 40) = PsInitialSystemProcess->DirectoryTableBase & 0xFFFFFFFFFFFFF000uLL;
      result = (unsigned int)_InterlockedExchange((volatile __int32 *)v2, 1397967163);
      *v1 = result;
      LODWORD(qword_140C50B20) = qword_140C50B20 + 1;
    }
    else
    {
      dword_140C50B38 = -1073741823;
    }
    _InterlockedExchange(InMemData, 0);
  }
  return result;
}
