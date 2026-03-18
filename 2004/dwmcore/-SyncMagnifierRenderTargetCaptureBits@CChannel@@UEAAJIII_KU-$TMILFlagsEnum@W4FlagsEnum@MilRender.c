/*
 * XREFs of ?SyncMagnifierRenderTargetCaptureBits@CChannel@@UEAAJIII_KU?$TMILFlagsEnum@W4FlagsEnum@MilRenderPassFlags@@@@IAEBUMAGN_UPDATE_TEXTURES_PARAM@@PEAI@Z @ 0x180152B40
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F4B0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x180152834 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CChannel::SyncMagnifierRenderTargetCaptureBits(
        CChannel *this,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        int a6,
        int a7,
        __int64 a8,
        _DWORD *a9)
{
  __int128 v13; // xmm1
  int v14; // eax
  unsigned int v15; // ebx
  _BYTE v17[8]; // [rsp+30h] [rbp-51h] BYREF
  int v18; // [rsp+38h] [rbp-49h]
  _DWORD v19[4]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v20; // [rsp+60h] [rbp-21h]
  int v21; // [rsp+68h] [rbp-19h]
  _BYTE v22[36]; // [rsp+6Ch] [rbp-15h] BYREF
  __int64 v23; // [rsp+90h] [rbp+Fh]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+C0h] [rbp+3Fh] BYREF

  v24 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 102);
  v19[0] = 251;
  v20 = a5;
  memset(v22, 0, sizeof(v22));
  v21 = a6;
  *(_DWORD *)v22 = a7;
  v19[1] = a2;
  v19[2] = a3;
  v19[3] = a4;
  v13 = *(_OWORD *)(a8 + 16);
  *(_OWORD *)&v22[4] = *(_OWORD *)a8;
  v23 = *(_QWORD *)(a8 + 32);
  *(_OWORD *)&v22[20] = v13;
  v14 = CChannel::SendSyncCommand(this, v19, 0x48u, (struct MIL_MESSAGE *)v17);
  v15 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v14, 0x7B5u, 0LL);
  }
  else
  {
    v15 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v18, 0x7B7u, 0LL);
    else
      *a9 = 0;
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v24);
  return v15;
}
