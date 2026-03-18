/*
 * XREFs of EtwpCheckLoggerAccessAndDoRundown @ 0x14093A280
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140636190 (EtwpEnableDisableSpecialGuids.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x14093A148 (EtwpCheckGuidAccessAndDoRundown.c)
 * Callees:
 *     EtwpStackRundown @ 0x1405A85C8 (EtwpStackRundown.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14066BA28 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14066BAFC (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1406C6E08 (EtwpCheckLoggerControlAccess.c)
 *     EtwpLogKernelTraceRundown @ 0x14093A5DC (EtwpLogKernelTraceRundown.c)
 *     EtwpLogPmcCounterRundown @ 0x14093A6B4 (EtwpLogPmcCounterRundown.c)
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
        EtwpLogKernelTraceRundown(a1, a3, 32 * *(unsigned __int8 *)(v8 + 834) + a1 + 4260, v10, 0LL, 0);
      }
      v11 = *(_DWORD *)(v8 + 832);
      if ( (v11 & 0x800) != 0 )
      {
        EtwpLogPmcCounterRundown(v8, a3);
        v11 = *(_DWORD *)(v8 + 832);
      }
      if ( (v11 & 0x1000000) != 0 )
        EtwpStackRundown(*(_QWORD *)(v8 + 992), a1, a3);
    }
    EtwpReleaseLoggerContext((unsigned int *)v8, 1);
  }
  else
  {
    return (unsigned int)-1073741162;
  }
  return (unsigned int)v9;
}
