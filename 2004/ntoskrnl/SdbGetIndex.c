/*
 * XREFs of SdbGetIndex @ 0x140744C64
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x140743DD8 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbFindFirstStringIndexedTag @ 0x140744250 (SdbFindFirstStringIndexedTag.c)
 *     SdbpSearchDB @ 0x14076BC10 (SdbpSearchDB.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x1406A4800 (RtlRunOnceExecuteOnce.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbGetIndex(_RTL_RUN_ONCE *Parameter, __int16 a2, __int16 a3, _DWORD *a4)
{
  unsigned int v7; // edi
  int v8; // ecx
  __int64 v9; // r8
  _WORD *i; // rax
  __int64 v11; // rcx
  PVOID Context; // [rsp+50h] [rbp+8h] BYREF

  Context = 0LL;
  v7 = 0;
  if ( a4 )
    *a4 = 0;
  if ( RtlRunOnceExecuteOnce(Parameter + 167, (PRTL_RUN_ONCE_INIT_FN)InitOnceScanIndexes, Parameter, &Context) < 0 )
  {
    AslLogCallPrintf(1LL);
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
    for ( i = (char *)Context + 4; *i; i += 20 )
    {
      if ( *i == a2 && i[1] == a3 )
      {
        v11 = 5LL * v8;
        v7 = *((_DWORD *)Context + 2 * v11);
        if ( a4 )
          *a4 = *((_DWORD *)Context + 2 * v11 + 8);
        return v7;
      }
      ++v8;
      if ( ++v9 >= 32 )
        return v7;
    }
  }
  return v7;
}
