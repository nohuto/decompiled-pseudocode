/*
 * XREFs of ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180028EF4
 * Callers:
 *     ?DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180029318 (-DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffec.c)
 *     _lambda_1cae16f642e2019a980ae53ef80da94f_::operator() @ 0x180118F80 (_lambda_1cae16f642e2019a980ae53ef80da94f_--operator().c)
 *     _lambda_1ddcc36e30584de0b30e6aa0e02df019_::operator() @ 0x180119094 (_lambda_1ddcc36e30584de0b30e6aa0e02df019_--operator().c)
 * Callees:
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180028D7C (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18002900C (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x1800291A4 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        SystemEffectDescriptor *a1,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  struct _GUID *v12; // rdi
  __int64 v14; // rax
  const struct _GUID *v15; // rcx
  unsigned int v16; // r9d
  int v17; // eax
  int v18; // [rsp+20h] [rbp-50h]
  int v19; // [rsp+20h] [rbp-50h]
  void *Block; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v21[2]; // [rsp+38h] [rbp-38h]
  struct _GUID *v22; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v23[2]; // [rsp+48h] [rbp-28h]
  void *v24; // [rsp+50h] [rbp-20h] BYREF
  __int64 v25; // [rsp+58h] [rbp-18h]
  void *v26; // [rsp+60h] [rbp-10h] BYREF
  __int64 v27; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v26 = 0LL;
  v27 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  SystemEffectDescriptor::SeparateStreamingModes(
    a1,
    a2,
    (struct CAudioSignalProcessingModeArray *)&v26,
    (struct CAudioSignalProcessingModeArray *)&v24);
  v22 = 0LL;
  *(_QWORD *)v23 = 0LL;
  Block = 0LL;
  *(_QWORD *)v21 = 0LL;
  SystemEffectDescriptor::CreateOverrideChainLists((__int64)a1, a3, a4, a5, (__int64)&v22, (__int64)&Block);
  if ( (int)v27 > 0
    && (v10 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v21[0], (const struct _GUID *)Block, 0, 0LL),
        v11 = v10,
        v10 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x189,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v10,
      v18);
    v12 = v22;
  }
  else
  {
    v12 = v22;
    if ( (int)v25 <= 0
      || (a6 != 1 || (v14 = *((_QWORD *)a1 + 2)) == 0
        ? (v15 = 0LL, v16 = 0)
        : (v15 = *(const struct _GUID **)(v14 + 56), v16 = *(_DWORD *)(v14 + 64)),
          v17 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v23[0], v22, v16, v15),
          v11 = v17,
          v17 >= 0) )
    {
      v11 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x190,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v17,
        v19);
    }
  }
  if ( Block )
    free(Block);
  if ( v12 )
    free(v12);
  if ( v24 )
    free(v24);
  if ( v26 )
    free(v26);
  return v11;
}
