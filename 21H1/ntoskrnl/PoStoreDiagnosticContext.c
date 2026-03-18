/*
 * XREFs of PoStoreDiagnosticContext @ 0x14038741C
 * Callers:
 *     PopTraceThermalRequestPassiveHistogram @ 0x140387008 (PopTraceThermalRequestPassiveHistogram.c)
 *     PopTraceThermalRequestActiveActivity @ 0x1403871F4 (PopTraceThermalRequestActiveActivity.c)
 *     ExGetWakeTimerList @ 0x1405B0498 (ExGetWakeTimerList.c)
 *     PopDiagTraceThermalRequest @ 0x1406EB910 (PopDiagTraceThermalRequest.c)
 *     PopGetPowerRequestDiagnosticBuffer @ 0x1408DCFC0 (PopGetPowerRequestDiagnosticBuffer.c)
 *     PopGetPowerRequestListInfo @ 0x1408DF574 (PopGetPowerRequestListInfo.c)
 *     ExGetNextWakeTime @ 0x1409AF118 (ExGetNextWakeTime.c)
 * Callees:
 *     PoStoreRequester @ 0x14033CA94 (PoStoreRequester.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall PoStoreDiagnosticContext(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r14
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  bool v11; // r8
  _BYTE *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v14 = *a3;
  result = PoStoreRequester(a1, (__int64)a2, &v14, 0);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = v14;
  v10 = result;
  v11 = (int)result >= 0;
  if ( v8 )
  {
    v12 = (_BYTE *)(((unsigned __int64)a2 + v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v13 = v12 - (_BYTE *)a2 + v8;
    *a3 = v13;
    if ( v11 && v3 >= v13 )
    {
      a2[4] = v12 - (_BYTE *)a2;
      *a2 = v13;
      memmove(v12, (const void *)((a1 + 39) & 0xFFFFFFFFFFFFFFF8uLL), *(_QWORD *)(a1 + 24));
      return v10;
    }
    else
    {
      return 3221225507LL;
    }
  }
  else
  {
    if ( (int)result >= 0 )
    {
      a2[4] = 0LL;
      *a2 = v9;
    }
    *a3 = v9;
  }
  return result;
}
