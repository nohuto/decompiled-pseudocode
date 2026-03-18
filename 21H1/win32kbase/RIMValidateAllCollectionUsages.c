/*
 * XREFs of RIMValidateAllCollectionUsages @ 0x1C01687F0
 * Callers:
 *     RIMIsParallelDevice @ 0x1C0167AE8 (RIMIsParallelDevice.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     RIMIsButtonCapsEqual @ 0x1C01677E0 (RIMIsButtonCapsEqual.c)
 *     RIMIsValueCapsEqual @ 0x1C0167D84 (RIMIsValueCapsEqual.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C0168140 (RIMRetrieveAllLinkIndexUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMValidateAllCollectionUsages(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        unsigned __int16 a4,
        unsigned __int16 a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned __int16 v17[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v18; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v19; // [rsp+38h] [rbp-18h] BYREF
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  v19 = 0LL;
  v17[0] = 0;
  v20 = 0LL;
  v18 = 0;
  if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(a5, a6, v17, &v19, &v18, &v20) == 1114112 )
  {
    if ( !v17[0] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    if ( !v19 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    if ( !v18 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    if ( !v20 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12);
    if ( v17[0] == a2
      && (unsigned int)RIMIsValueCapsEqual(a1, v19, a2)
      && v18 == a4
      && (unsigned int)RIMIsButtonCapsEqual(a3, v20, a4) )
    {
      v6 = 1;
    }
    Win32FreePool(v19, v11, v13);
    Win32FreePool(v20, v14, v15);
  }
  return v6;
}
