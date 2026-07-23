/*
 * XREFs of ExpStringCapture @ 0x14094B850
 * Callers:
 *     ExpGetDeviceDataInformation @ 0x14094A348 (ExpGetDeviceDataInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpStringCapture(_QWORD *a1, unsigned __int16 *a2)
{
  __int64 v4; // rax
  size_t v5; // rsi
  PVOID PoolWithQuotaTag; // rdi
  size_t v8; // rax

  v4 = *a2;
  if ( (v4 & 1) != 0 || !(_WORD)v4 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = *a2;
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v4 + 2, 0x50535845u);
    if ( PoolWithQuotaTag )
    {
      if ( v5 )
      {
        v8 = *((_QWORD *)a2 + 1);
        if ( (v8 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v8 + v5 > 0x7FFFFFFF0000LL || v8 + v5 < v8 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(PoolWithQuotaTag, *((const void **)a2 + 1), v5);
      *((_WORD *)PoolWithQuotaTag + (v5 >> 1)) = 0;
      *a1 = PoolWithQuotaTag;
      return 0;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
}
