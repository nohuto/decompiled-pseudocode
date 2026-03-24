/*
 * XREFs of ?SyncLegacyVisualCaptureRenderTargetCaptureBits@CChannel@@UEAAJIIMHHHH_KPEAW4DXGI_FORMAT@@PEAPEAX@Z @ 0x1801511C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005D6EC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18005E020 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z @ 0x180151004 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@@Z.c)
 */

__int64 __fastcall CChannel::SyncLegacyVisualCaptureRenderTargetCaptureBits(
        CChannel *this,
        unsigned int a2,
        unsigned int a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int64 a9,
        enum DXGI_FORMAT *a10,
        void **a11)
{
  enum DXGI_FORMAT *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
  void **v18; // rcx
  _BYTE v20[8]; // [rsp+38h] [rbp-41h] BYREF
  void *v21; // [rsp+40h] [rbp-39h]
  enum DXGI_FORMAT v22; // [rsp+4Ch] [rbp-2Dh]
  int v23; // [rsp+50h] [rbp-29h]
  _DWORD v24[8]; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v25; // [rsp+78h] [rbp-1h]
  enum DXGI_FORMAT v26; // [rsp+80h] [rbp+7h]
  int v27; // [rsp+84h] [rbp+Bh]
  struct _RTL_CRITICAL_SECTION *v28; // [rsp+A8h] [rbp+2Fh] BYREF

  v28 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle((__int64)this, a2, 96);
  CChannel::CheckHandle((__int64)this, a3, 195);
  v24[0] = 246;
  v26 = DXGI_FORMAT_UNKNOWN;
  v27 = 0;
  v24[4] = a5;
  v24[5] = a6;
  v24[6] = a7;
  v24[7] = a8;
  v24[2] = a3;
  v14 = a10;
  v25 = a9;
  *(float *)&v24[3] = a4;
  v24[1] = a2;
  v26 = *a10;
  v15 = CChannel::SendSyncCommand(this, v24, 0x30u, (struct MIL_MESSAGE *)v20);
  v17 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x4A8u, 0LL);
  }
  else
  {
    v17 = v23;
    if ( v23 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v23, 0x4AAu, 0LL);
    }
    else
    {
      v18 = a11;
      *v14 = v22;
      *v18 = v21;
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v28);
  return v17;
}
