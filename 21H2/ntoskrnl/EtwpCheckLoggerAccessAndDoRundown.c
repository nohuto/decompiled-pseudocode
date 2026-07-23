/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x14093DA54
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1406BA12C (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14093D91C (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpStackRundown @ 0x1405ADD58 (EtwpStackRundown.c)
 *     EtwpCheckLoggerControlAccess @ 0x140637BEC (EtwpCheckLoggerControlAccess.c)
 *     EtwpReleaseLoggerContext @ 0x140638848 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140638894 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpLogKernelTraceRundown @ 0x14093DDB0 (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x14093DE88 (EtwpLogPmcCounterRundown.c)
 */

__int64 __fastcall EtwpCheckLoggerAccessAndDoRundown(__int64 a1, unsigned int a2, unsigned int a3, char a4)
{
  unsigned int *v7; // rax
  unsigned int *v8; // rbx
  int v9; // edi
  int v10; // r9d
  unsigned int v11; // eax

  v7 = EtwpAcquireLoggerContextByLoggerId(a1, a2, 1);
  v8 = v7;
  if ( v7 )
  {
    v9 = EtwpCheckLoggerControlAccess(0x80u, (__int64)v7);
    if ( v9 >= 0 )
    {
      if ( (v8[3] & 0x2000000) != 0 )
      {
        LOBYTE(v10) = a4;
        EtwpLogKernelTraceRundown(a1, a3, 32 * *((unsigned __int8 *)v8 + 834) + a1 + 4260, v10, 0LL, 0);
      }
      v11 = v8[208];
      if ( (v11 & 0x800) != 0 )
      {
        EtwpLogPmcCounterRundown(v8, a3);
        v11 = v8[208];
      }
      if ( (v11 & 0x1000000) != 0 )
        EtwpStackRundown(*((_QWORD *)v8 + 124), a1, a3);
    }
    EtwpReleaseLoggerContext(v8, 1);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v9;
}
