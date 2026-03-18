/*
 * XREFs of ACPIReserveDependencies @ 0x1C0021F38
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0006354 (ACPIAddInitializationDependencies.c)
 *     ACPIConvertDependenciesToPnpReservations @ 0x1C0021E88 (ACPIConvertDependenciesToPnpReservations.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C0021FCC (ACPIAmliBuildObjectPathnameUnicode.c)
 *     WPP_RECORDER_SF_sL @ 0x1C004B8F4 (WPP_RECORDER_SF_sL.c)
 */

__int64 __fastcall ACPIReserveDependencies(__int64 a1, volatile signed __int32 *a2)
{
  int v4; // edi
  int v5; // edx
  __int128 v7; // [rsp+40h] [rbp-18h] BYREF

  v7 = 0LL;
  v4 = ACPIAmliBuildObjectPathnameUnicode(a2, &v7, 3LL);
  AMLIDereferenceHandleEx(a2);
  if ( v4 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sL(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        21,
        20,
        (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
        *((__int64 *)&v7 + 1),
        v4);
  }
  else
  {
    v4 = IoReserveDependency(a1, &v7, 1LL);
  }
  if ( *((_QWORD *)&v7 + 1) )
    ExFreePoolWithTag(*((PVOID *)&v7 + 1), 0x53706341u);
  return (unsigned int)v4;
}
