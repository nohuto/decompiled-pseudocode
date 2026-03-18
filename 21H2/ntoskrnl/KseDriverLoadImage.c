/*
 * XREFs of KseDriverLoadImage @ 0x14075CCC8
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075FC44 (MmLoadSystemImageEx.c)
 *     IopInitializeBuiltinDriver @ 0x140B11EBC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140359DE0 (MmIsSessionAddress.c)
 *     KsepLogInfo @ 0x1403C09C8 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14057D738 (KsepDebugPrint.c)
 *     KsepEvntLogShimsApplied @ 0x14057D77C (KsepEvntLogShimsApplied.c)
 *     KsepGetShimsForDriver @ 0x14075C7BC (KsepGetShimsForDriver.c)
 *     KsepStringFree @ 0x14075CDC4 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14075CDF8 (KsepStringDuplicateUnicode.c)
 *     KsepApplyShimsToDriver @ 0x140964230 (KsepApplyShimsToDriver.c)
 */

__int64 __fastcall KseDriverLoadImage(__int64 a1)
{
  int ShimsForDriver; // ebx
  __int64 v4; // [rsp+30h] [rbp-20h] BYREF
  __int64 v5; // [rsp+38h] [rbp-18h]
  _QWORD v6[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v7; // [rsp+70h] [rbp+20h] BYREF
  __int64 v8; // [rsp+78h] [rbp+28h] BYREF

  v7 = 0;
  v8 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6[0] = 0LL;
  v6[1] = 0LL;
  if ( !a1 || MmIsSessionAddress(*(_QWORD *)(a1 + 48)) || dword_140C54EF4 != 2 || (KseEngine & 1) != 0 )
    goto LABEL_11;
  ShimsForDriver = KsepStringDuplicateUnicode(&v4, a1 + 88);
  if ( ShimsForDriver >= 0 )
  {
    ShimsForDriver = KsepStringDuplicateUnicode(v6, a1 + 72);
    if ( ShimsForDriver >= 0 )
    {
      ShimsForDriver = KsepGetShimsForDriver(
                         (__int64)&v4,
                         (__int64)v6,
                         *(_QWORD *)(a1 + 48),
                         *(_DWORD *)(a1 + 64),
                         &v8,
                         &v7);
      if ( ShimsForDriver >= 0 )
      {
        ShimsForDriver = KsepApplyShimsToDriver(a1, &v4, v8, v7);
        if ( ShimsForDriver >= 0 )
          KsepEvntLogShimsApplied((unsigned __int16 *)&v4, v8, v7);
      }
    }
  }
  if ( !ShimsForDriver )
  {
    dword_140C54EF8 |= 0x800u;
    qword_140C54F48 = *(_QWORD *)(a1 + 48);
    goto LABEL_16;
  }
  if ( ShimsForDriver >= 0 )
  {
LABEL_16:
    KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458952LL;
    if ( (KsepDebugFlag & 1) != 0 )
      KsepDebugPrint(4LL, "KSE: Applied %d shim(s) to [%ws].\n", v7, v5);
    KsepLogInfo(4, "KSE: Applied %d shim(s) to [%ws].\n", v7, v5);
    goto LABEL_12;
  }
  if ( ShimsForDriver != -1073740948 )
  {
LABEL_11:
    ShimsForDriver = 0;
    goto LABEL_12;
  }
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458943LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(4LL, "KSE: driver blocked from loading [%ws].\n", v5);
  KsepLogInfo(4, "KSE: driver blocked from loading [%ws].\n", v5);
LABEL_12:
  KsepStringFree(&v4);
  KsepStringFree(v6);
  return (unsigned int)ShimsForDriver;
}
