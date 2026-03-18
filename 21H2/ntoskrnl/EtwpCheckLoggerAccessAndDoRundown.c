/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x1409E9F80
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x14078FCF8 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1409E9E48 (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpStackRundown @ 0x140634044 (EtwpStackRundown.c)
 *     EtwpCheckLoggerControlAccess @ 0x14079435C (EtwpCheckLoggerControlAccess.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 *     EtwpLogKernelTraceRundown @ 0x1409EA2D4 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x1409EA3AC (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  __int64 v7; // rax
  __int64 v8; // rbx
  int v9; // edi
  int v10; // r9d
  int v11; // eax

  v7 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 1);
  v8 = v7;
  if ( v7 )
  {
    v9 = EtwpCheckLoggerControlAccess(0x80u, v7);
    if ( v9 >= 0 )
    {
      if ( (*(_DWORD *)(v8 + 12) & 0x2000000) != 0 )
      {
        LOBYTE(v10) = a4;
        EtwpLogKernelTraceRundown(a1, a3, 32 * *(unsigned __int8 *)(v8 + 818) + a1 + 4284, v10, 0LL, 0);
      }
      v11 = *(_DWORD *)(v8 + 816);
      if ( (v11 & 0x800) != 0 )
      {
        EtwpLogPmcCounterRundown(v8, a3);
        v11 = *(_DWORD *)(v8 + 816);
      }
      if ( (v11 & 0x1000000) != 0 )
        EtwpStackRundown(*(_QWORD *)(v8 + 1008), a1, a3);
    }
    EtwpReleaseLoggerContext((unsigned int *)v8, 1);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v9;
}
