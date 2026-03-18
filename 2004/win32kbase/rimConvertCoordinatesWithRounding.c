/*
 * XREFs of rimConvertCoordinatesWithRounding @ 0x1C0167A40
 * Callers:
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1C000FBD0 (RIMUpdatePointerDeviceScalingInfo.c)
 *     RIMConvertPointCoordinates @ 0x1C0166AC8 (RIMConvertPointCoordinates.c)
 * Callees:
 *     LongLongToLong @ 0x1C0140C84 (LongLongToLong.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimConvertCoordinatesWithRounding(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        LONG *plResult)
{
  __int64 v6; // rdi
  int v7; // ebx
  int v8; // esi
  int v9; // ebp
  int v10; // esi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  int *v14; // rdx
  unsigned int v15; // r9d

  v6 = (int)a3;
  v7 = a4;
  v8 = a2;
  v9 = a1;
  if ( (int)a1 >= (int)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  if ( (int)v6 >= v7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3, a4);
  v10 = v8 - v9;
  v11 = (v7 - (int)v6) * (__int64)(a5 - v9);
  v12 = 2 * v11;
  if ( v11 <= 0 )
    v13 = v12 - v10;
  else
    v13 = v10 + v12;
  if ( !LongLongToLong(v6 + v13 / (2LL * v10), plResult) )
  {
    if ( *v14 >= v7 )
      *v14 = v7 - 1;
    return 1;
  }
  return v15;
}
