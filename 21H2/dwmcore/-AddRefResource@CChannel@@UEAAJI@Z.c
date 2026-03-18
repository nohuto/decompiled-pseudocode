/*
 * XREFs of ?AddRefResource@CChannel@@UEAAJI@Z @ 0x1800E58A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800BD8BC (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 */

__int64 __fastcall CChannel::AddRefResource(CDataStreamWriter **this, unsigned int a2)
{
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  v9 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  if ( a2 )
  {
    v5 = CHandleTable::CreateOrAddRefOnChannel((__int64)(this + 2), this, 0, &v10);
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x2BBu);
  }
  else
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, -2147024809, 0x2B8u);
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v7;
}
