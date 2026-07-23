/*
 * XREFs of HalpInitializeMce @ 0x14099BD5C
 * Callers:
 *     HalpInitializeErrSrc @ 0x14099BD20 (HalpInitializeErrSrc.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     HalpMceInitializeRecovery @ 0x1403C1A90 (HalpMceInitializeRecovery.c)
 *     HalpInitializeGhesRecovery @ 0x1403C1AEC (HalpInitializeGhesRecovery.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HalpMcaExtendedLogInitialize @ 0x1404B4EA0 (HalpMcaExtendedLogInitialize.c)
 *     HalpMceInit @ 0x14099BE5C (HalpMceInit.c)
 *     HalpMceInitProcessor @ 0x14099BF8C (HalpMceInitProcessor.c)
 *     HalpMcaSetFeatureFlags @ 0x14099C374 (HalpMcaSetFeatureFlags.c)
 *     HalpHandlePreviousMcaErrors @ 0x1409A3048 (HalpHandlePreviousMcaErrors.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x1409A3188 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 */

__int64 __fastcall HalpInitializeMce(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG v10; // edi
  ULONG ActiveProcessorCount; // r14d
  int *v12; // rsi
  unsigned int v13; // edx
  _GROUP_AFFINITY *v14; // rdx
  __int64 i; // rbx
  signed __int32 v16[8]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+20h] [rbp-30h]
  _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-28h] BYREF
  __int128 v19; // [rsp+38h] [rbp-18h] BYREF

  v17 = 0LL;
  Affinity = 0LL;
  v19 = 0LL;
  if ( (_DWORD)a1 )
  {
    if ( (_DWORD)a1 == 1 )
    {
      HalpMceErrorSourceId = a2[7];
      HalpMceErrorSource = a2;
      HalpMceInit(a2);
      if ( HalpMcaExtendedLoggingSupported )
        HalpMcaExtendedLogInitialize();
      if ( !PshedIsSystemWheaEnabled() )
      {
        LOBYTE(v7) = HalpMcaBanksValidOnBoot != 0;
        HalpHandlePreviousMcaErrors(v7);
      }
      _InterlockedOr(v16, 0);
      if ( (unsigned __int8)PshedInitAvailable(v7, v6, v8, v9, v17) )
      {
        PshedInitGlobal();
        v10 = 0;
        ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
        if ( ActiveProcessorCount )
        {
          v12 = KiProcessorIndexToNumberMappingTable;
          do
          {
            v13 = *v12;
            Affinity.Reserved[1] = 0;
            Affinity.Reserved[2] = 0;
            *(_DWORD *)&Affinity.Group = (unsigned __int16)(v13 >> 6);
            Affinity.Mask = 1LL << (v13 & 0x3F);
            if ( v10 )
              v14 = 0LL;
            else
              v14 = (_GROUP_AFFINITY *)&v19;
            KeSetSystemGroupAffinityThread(&Affinity, v14);
            for ( i = *(_QWORD *)&KeGetPcr()->HalReserved[6]; i; i = *(_QWORD *)(i + 176) )
              PshedInitProc(*(unsigned int *)(i + 164));
            ++v10;
            ++v12;
          }
          while ( v10 < ActiveProcessorCount );
        }
      }
      HalpMcaWheaReady = 1;
    }
    else
    {
      LODWORD(v17) = KeGetPcr()->Prcb.Number;
      HalpMceInitProcessor(a2, v17);
      HalpHandlePreviousMcaErrorsOnProcessor(0LL, 0LL, v17);
    }
  }
  else
  {
    HalpMceErrorSourceId = a2[7];
    HalpMceErrorSource = a2;
    HalpMcaSetFeatureFlags(a1, a2, a3, a4, v17);
    HalpInitializeGhesRecovery();
    HalpMceInitializeRecovery();
    HalpMceInit(a2);
  }
  return 0LL;
}
