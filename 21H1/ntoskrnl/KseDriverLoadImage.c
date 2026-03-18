/*
 * XREFs of KseDriverLoadImage @ 0x140743F4C
 * Callers:
 *     MiFinalizeDriverImage @ 0x140745648 (MiFinalizeDriverImage.c)
 *     IopInitializeBuiltinDriver @ 0x140A576AC (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmIsSessionAddress @ 0x14035ADE0 (MmIsSessionAddress.c)
 *     KsepLogInfo @ 0x14036E538 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x1405213E8 (KsepDebugPrint.c)
 *     KsepEvntLogShimsApplied @ 0x14052142C (KsepEvntLogShimsApplied.c)
 *     KsepGetShimsForDriver @ 0x140741648 (KsepGetShimsForDriver.c)
 *     KsepStringFree @ 0x1407441EC (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x140744220 (KsepStringDuplicateUnicode.c)
 *     KsepApplyShimsToDriver @ 0x1408BB970 (KsepApplyShimsToDriver.c)
 */

__int64 __fastcall KseDriverLoadImage(__int64 a1)
{
  int v2; // eax
  int ShimsForDriver; // ebx
  bool v4; // sf
  __int64 v6; // [rsp+30h] [rbp-20h] BYREF
  __int64 v7; // [rsp+38h] [rbp-18h]
  _QWORD v8[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v9; // [rsp+70h] [rbp+20h] BYREF
  __int64 v10; // [rsp+78h] [rbp+28h] BYREF

  v9 = 0;
  v10 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8[0] = 0LL;
  v8[1] = 0LL;
  if ( !a1 )
    goto LABEL_20;
  LOBYTE(v2) = MmIsSessionAddress(*(_QWORD *)(a1 + 48));
  if ( v2 == 1 || dword_140C50514 != 2 || (KseEngine & 1) != 0 )
    goto LABEL_20;
  ShimsForDriver = KsepStringDuplicateUnicode(&v6, a1 + 88);
  if ( ShimsForDriver >= 0 )
  {
    ShimsForDriver = KsepStringDuplicateUnicode(v8, a1 + 72);
    if ( ShimsForDriver >= 0 )
    {
      ShimsForDriver = KsepGetShimsForDriver(
                         (__int64)&v6,
                         (int)v8,
                         *(_QWORD *)(a1 + 48),
                         *(_DWORD *)(a1 + 64),
                         &v10,
                         &v9);
      if ( ShimsForDriver >= 0 )
      {
        ShimsForDriver = KsepApplyShimsToDriver(a1, &v6, v10, v9);
        if ( ShimsForDriver >= 0 )
          KsepEvntLogShimsApplied((unsigned __int16 *)&v6, v10, v9);
      }
    }
  }
  v4 = ShimsForDriver < 0;
  if ( !ShimsForDriver )
  {
    dword_140C50518 |= 0x800u;
    v4 = 0;
    qword_140C50568 = *(_QWORD *)(a1 + 48);
  }
  if ( v4 )
  {
    if ( ShimsForDriver == -1073740948 )
    {
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458943LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(4LL, "KSE: driver blocked from loading [%ws].\n", v7);
      KsepLogInfo(4LL, (__int64)"KSE: driver blocked from loading [%ws].\n", v7);
      goto LABEL_21;
    }
LABEL_20:
    ShimsForDriver = 0;
    goto LABEL_21;
  }
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458952LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(4LL, "KSE: Applied %d shim(s) to [%ws].\n", v9, v7);
  KsepLogInfo(4LL, (__int64)"KSE: Applied %d shim(s) to [%ws].\n", v9, v7);
LABEL_21:
  KsepStringFree(&v6);
  KsepStringFree(v8);
  return (unsigned int)ShimsForDriver;
}
