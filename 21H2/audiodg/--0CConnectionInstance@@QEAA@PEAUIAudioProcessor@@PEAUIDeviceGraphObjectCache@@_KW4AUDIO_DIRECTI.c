/*
 * XREFs of ??0CConnectionInstance@@QEAA@PEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@_KW4AUDIO_DIRECTION@@PEAVCProcessNode@@4@Z @ 0x140046578
 * Callers:
 *     ?CreateAPOConnectionList@CPipeInstance@@AEAAJXZ @ 0x1400067C0 (-CreateAPOConnectionList@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400072D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 */

__int64 __fastcall CConnectionInstance::CConnectionInstance(
        __int64 a1,
        __int64 a2,
        struct IUnknown *a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  struct IUnknown **v7; // rcx

  v7 = (struct IUnknown **)(a1 + 48);
  *v7 = 0LL;
  *(_DWORD *)(a1 + 16) = a5;
  *(_QWORD *)(a1 + 24) = a6;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = a4;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *v7 != a3 )
    ATL::AtlComPtrAssign(v7, a3);
  return a1;
}
