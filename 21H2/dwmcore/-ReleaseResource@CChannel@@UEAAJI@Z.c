/*
 * XREFs of ?ReleaseResource@CChannel@@UEAAJI@Z @ 0x180073210
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x18007327C (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall CChannel::ReleaseResource(CChannel *this, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  char *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = (char *)this + 168;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  CChannel::CheckHandle(this, a2, 0LL);
  v4 = CHandleTable::ReleaseOnChannel((CChannel *)((char *)this + 16), this, a2);
  v6 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x328u, 0LL);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v8);
  return v6;
}
