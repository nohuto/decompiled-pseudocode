/*
 * XREFs of RIMValidateAllCollectionUsages @ 0x1C015FF40
 * Callers:
 *     RIMIsParallelDevice @ 0x1C015F238 (RIMIsParallelDevice.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     RIMIsButtonCapsEqual @ 0x1C015EF30 (RIMIsButtonCapsEqual.c)
 *     RIMIsValueCapsEqual @ 0x1C015F4D4 (RIMIsValueCapsEqual.c)
 *     RIMRetrieveAllLinkIndexUsages @ 0x1C015F890 (RIMRetrieveAllLinkIndexUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v14; // r9
  unsigned __int16 v16[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int16 v17; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h] BYREF

  v6 = 0;
  v18 = 0LL;
  v16[0] = 0;
  v19 = 0LL;
  v17 = 0;
  if ( (unsigned int)RIMRetrieveAllLinkIndexUsages(a5, a6, v16, &v18, &v17, &v19) == 1114112 )
  {
    if ( !v16[0] )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
    if ( !v18 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
    if ( !v17 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
    if ( !v19 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
    if ( v16[0] == a2
      && (unsigned int)RIMIsValueCapsEqual(a1, v18, a2)
      && v17 == a4
      && (unsigned int)RIMIsButtonCapsEqual(a3, v19, a4) )
    {
      v6 = 1;
    }
    Win32FreePool(v18);
    Win32FreePool(v19);
  }
  return v6;
}
