/*
 * XREFs of ??_G?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C010A65C
 * Callers:
 *     ?reserve@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z @ 0x1C010A568 (-reserve@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@QEAA_N_K@Z.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116624 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

volatile signed __int32 **__fastcall KRef<NDIS_BIND_FILTER_DRIVER>::`scalar deleting destructor'(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v2; // rcx

  v2 = *a1;
  if ( v2 && _InterlockedExchangeAdd(v2 + 16, 0xFFFFFFFF) == 1 )
    KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v2);
  return a1;
}
