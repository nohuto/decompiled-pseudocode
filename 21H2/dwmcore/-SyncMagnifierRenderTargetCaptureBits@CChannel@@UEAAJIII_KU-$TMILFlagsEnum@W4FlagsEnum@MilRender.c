/*
 * XREFs of ?SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@AEBUMAGN_UPDATE_TEXTURES_PARAM@@@Z @ 0x1801AC6D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x1801AC3B4 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CChannel::SyncMagnifierRenderTargetCaptureBits(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        int a6,
        __int128 *a7)
{
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _BYTE v17[8]; // [rsp+30h] [rbp-41h] BYREF
  int v18; // [rsp+38h] [rbp-39h]
  _DWORD v19[2]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v20; // [rsp+58h] [rbp-19h]
  __int64 v21; // [rsp+60h] [rbp-11h]
  int v22; // [rsp+68h] [rbp-9h]
  _BYTE v23[44]; // [rsp+6Ch] [rbp-5h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+C0h] [rbp+4Fh] BYREF

  v24 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 102);
  v19[0] = 242;
  *(_QWORD *)&v23[32] = 0LL;
  v21 = a5;
  *(_OWORD *)&v23[16] = 0LL;
  v22 = a6;
  *(_OWORD *)v23 = 0LL;
  v19[1] = a2;
  v20 = a3;
  v11 = *a7;
  HIDWORD(v20) = a4;
  v12 = a7[1];
  *(_OWORD *)&v23[4] = v11;
  *(_QWORD *)&v23[36] = *((_QWORD *)a7 + 4);
  *(_OWORD *)&v23[20] = v12;
  v13 = CChannel::SendSyncCommand(this, v19, 0x48u, (struct MIL_MESSAGE *)v17);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0x7D9u);
  }
  else
  {
    v15 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v18, 0x7DBu);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v24);
  return v15;
}
