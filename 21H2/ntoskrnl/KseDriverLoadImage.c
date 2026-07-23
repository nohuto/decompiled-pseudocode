/*
 * XREFs of KseDriverLoadImage @ 0x14075B720
 * Callers:
 *     MiFinalizeDriverImage @ 0x14075BC48 (MiFinalizeDriverImage.c)
 *     IopInitializeBuiltinDriver @ 0x140A5F618 (IopInitializeBuiltinDriver.c)
 * Callees:
 *     MmIsSessionAddress @ 0x140353E60 (MmIsSessionAddress.c)
 *     KsepLogInfo @ 0x1403712F8 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x140527128 (KsepDebugPrint.c)
 *     KsepEvntLogShimsApplied @ 0x14052716C (KsepEvntLogShimsApplied.c)
 *     KsepGetShimsForDriver @ 0x140758D38 (KsepGetShimsForDriver.c)
 *     KsepStringFree @ 0x14075B9C0 (KsepStringFree.c)
 *     KsepStringDuplicateUnicode @ 0x14075B9F4 (KsepStringDuplicateUnicode.c)
 *     KsepApplyShimsToDriver @ 0x1408C0310 (KsepApplyShimsToDriver.c)
 */

__int64 __fastcall KseDriverLoadImage(__int64 a1)
{
  int ShimsForDriver; // ebx
  bool v3; // sf
  __int64 v5; // [rsp+30h] [rbp-20h] BYREF
  __int64 v6; // [rsp+38h] [rbp-18h]
  _QWORD v7[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v8; // [rsp+70h] [rbp+20h] BYREF
  __int64 v9; // [rsp+78h] [rbp+28h] BYREF

  v8 = 0;
  v9 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7[0] = 0LL;
  v7[1] = 0LL;
  if ( !a1 || MmIsSessionAddress(*(_QWORD *)(a1 + 48)) || dword_140C50624 != 2 || (KseEngine & 1) != 0 )
    goto LABEL_20;
  ShimsForDriver = KsepStringDuplicateUnicode(&v5, a1 + 88);
  if ( ShimsForDriver >= 0 )
  {
    ShimsForDriver = KsepStringDuplicateUnicode(v7, a1 + 72);
    if ( ShimsForDriver >= 0 )
    {
      ShimsForDriver = KsepGetShimsForDriver(
                         (__int64)&v5,
                         (int)v7,
                         *(_QWORD *)(a1 + 48),
                         *(_DWORD *)(a1 + 64),
                         &v9,
                         &v8);
      if ( ShimsForDriver >= 0 )
      {
        ShimsForDriver = KsepApplyShimsToDriver(a1, &v5, v9, v8);
        if ( ShimsForDriver >= 0 )
          KsepEvntLogShimsApplied((unsigned __int16 *)&v5, v9, v8);
      }
    }
  }
  v3 = ShimsForDriver < 0;
  if ( !ShimsForDriver )
  {
    dword_140C50628 |= 0x800u;
    v3 = 0;
    qword_140C50678 = *(_QWORD *)(a1 + 48);
  }
  if ( v3 )
  {
    if ( ShimsForDriver == -1073740948 )
    {
      KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458943LL;
      if ( (KsepDebugFlag & 1) != 0 )
        KsepDebugPrint(4LL, "KSE: driver blocked from loading [%ws].\n", v6);
      KsepLogInfo(4LL, (__int64)"KSE: driver blocked from loading [%ws].\n", v6);
      goto LABEL_21;
    }
LABEL_20:
    ShimsForDriver = 0;
    goto LABEL_21;
  }
  KsepHistoryMessages[((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryMessagesIndex, 1u) + 1) & 0x3F] = 458952LL;
  if ( (KsepDebugFlag & 1) != 0 )
    KsepDebugPrint(4LL, "KSE: Applied %d shim(s) to [%ws].\n", v8, v6);
  KsepLogInfo(4LL, (__int64)"KSE: Applied %d shim(s) to [%ws].\n", v8, v6);
LABEL_21:
  KsepStringFree(&v5);
  KsepStringFree(v7);
  return (unsigned int)ShimsForDriver;
}
