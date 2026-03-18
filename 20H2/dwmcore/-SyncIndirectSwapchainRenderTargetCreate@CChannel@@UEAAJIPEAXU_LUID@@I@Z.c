/*
 * XREFs of ?SyncIndirectSwapchainRenderTargetCreate@CChannel@@UEAAJIPEAXU_LUID@@I@Z @ 0x1801509E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x1800691E0 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x180150924 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CChannel::SyncIndirectSwapchainRenderTargetCreate(
        CChannel *this,
        unsigned int a2,
        void *a3,
        struct _LUID a4,
        unsigned int a5)
{
  unsigned int v9; // edi
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  _BYTE v14[8]; // [rsp+30h] [rbp-40h] BYREF
  int v15; // [rsp+38h] [rbp-38h]
  _DWORD v16[2]; // [rsp+50h] [rbp-20h] BYREF
  void *v17; // [rsp+58h] [rbp-18h]
  struct _LUID v18; // [rsp+60h] [rbp-10h]
  unsigned int v19; // [rsp+68h] [rbp-8h]
  int v20; // [rsp+6Ch] [rbp-4h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+90h] [rbp+20h] BYREF

  v21 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 84);
  v9 = a5;
  CChannel::CheckHandle((__int64)this, a5, 195);
  v16[0] = 189;
  v20 = 0;
  v16[1] = a2;
  v17 = a3;
  v18 = a4;
  v19 = v9;
  v10 = CChannel::SendSyncCommand(this, v16, 0x20u, (struct MIL_MESSAGE *)v14);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x829u, 0LL);
  }
  else
  {
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v15, 0x82Bu, 0LL);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v21);
  return v12;
}
