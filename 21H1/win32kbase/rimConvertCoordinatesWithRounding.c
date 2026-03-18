/*
 * XREFs of rimConvertCoordinatesWithRounding @ 0x1C016DD90
 * Callers:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C00227E8 (RIMUpdatePointerDeviceScalingInfo.c)
 *     RIMConvertPointCoordinates @ 0x1C016CE18 (RIMConvertPointCoordinates.c)
 * Callees:
 *     LongLongToLong @ 0x1C0146FD4 (LongLongToLong.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimConvertCoordinatesWithRounding(__int64 a1, int a2, int a3, int a4, int a5, LONG *plResult)
{
  __int64 v6; // rdi
  int v9; // ebp
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  int *v14; // rdx
  unsigned int v15; // r9d

  v6 = a3;
  v9 = a1;
  if ( (int)a1 >= a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (int)v6 >= a4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v10 = a2 - v9;
  v11 = (a4 - (int)v6) * (__int64)(a5 - v9);
  v12 = 2 * v11;
  if ( v11 <= 0 )
    v13 = v12 - v10;
  else
    v13 = v10 + v12;
  if ( !LongLongToLong(v6 + v13 / (2LL * v10), plResult) )
  {
    if ( *v14 >= a4 )
      *v14 = a4 - 1;
    return 1;
  }
  return v15;
}
