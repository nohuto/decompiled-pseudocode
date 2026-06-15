/*
 * XREFs of ?GetProcessingPeriod@CPolicyConfig@@UEAAJPEBGHPEA_J1@Z @ 0x180038020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x180021630 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::GetProcessingPeriod(
        CPolicyConfig *this,
        const unsigned __int16 *a2,
        int a3,
        __int64 *a4,
        __int64 *a5)
{
  int ProcessingPeriod; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdx
  CEndpointCharacteristics *v11; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v11 = 0LL;
  ProcessingPeriod = (*(__int64 (__fastcall **)(PVOID, const unsigned __int16 *, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                + 24LL))(
                       g_pEndpointCharacteristicsCache,
                       a2,
                       0LL,
                       0LL);
  v8 = ProcessingPeriod;
  if ( ProcessingPeriod < 0 )
  {
    v10 = 2093LL;
  }
  else
  {
    ProcessingPeriod = CEndpointCharacteristics::GetProcessingPeriod(v11, a3, a4, a5);
    v8 = ProcessingPeriod;
    if ( ProcessingPeriod >= 0 )
    {
      v8 = 0;
      goto LABEL_4;
    }
    v10 = 2095LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)ProcessingPeriod,
    (int)&v11);
LABEL_4:
  if ( v11 )
    (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v11 + 16LL))(v11);
  return v8;
}
