/*
 * XREFs of AcpiFunctionLevelDeviceReset @ 0x1C00AD168
 * Callers:
 *     AcpiDeviceBusSpecificReset @ 0x1C00AD010 (AcpiDeviceBusSpecificReset.c)
 *     AcpiDeviceReset @ 0x1C00AD0C0 (AcpiDeviceReset.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     AcpiFunctionLevelDeviceResetComplete @ 0x1C00AD250 (AcpiFunctionLevelDeviceResetComplete.c)
 */

__int64 __fastcall AcpiFunctionLevelDeviceReset(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned int v6; // ebx
  __int64 *v7; // rcx
  __int64 Pool2; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  if ( !*(_QWORD *)(v3 + 768) )
  {
    v6 = -1073741810;
LABEL_12:
    AcpiFunctionLevelDeviceResetComplete(0LL, 0LL, 0LL, v4);
    return v6;
  }
  v7 = *(__int64 **)(v3 + 496);
  if ( !v7 )
  {
    v6 = -1073741637;
    goto LABEL_12;
  }
  if ( a3 )
  {
    if ( *(_DWORD *)a3 < 0x18u )
    {
      v6 = -1073741811;
      goto LABEL_12;
    }
    Pool2 = ExAllocatePool2(256LL, 24LL, 1366319937LL);
    v4 = Pool2;
    if ( !Pool2 )
    {
      v6 = -1073741670;
      goto LABEL_12;
    }
    *(_OWORD *)Pool2 = *(_OWORD *)a3;
    *(_QWORD *)(Pool2 + 16) = *(_QWORD *)(a3 + 16);
    v7 = *(__int64 **)(v3 + 496);
  }
  v6 = AMLIAsyncEvalObject(v7, 0LL, 0, 0LL, AcpiFunctionLevelDeviceResetComplete, v4);
  if ( v6 != 259 )
    goto LABEL_12;
  return v6;
}
