/*
 * XREFs of ?CachedVisualImageSnapshot@CChannel@@UEAAJIAEBUtagRECT@@@Z @ 0x1800F1B20
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x18007333C (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x1800BD4F0 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 */

__int64 __fastcall CChannel::CachedVisualImageSnapshot(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct tagRECT *a3)
{
  __int128 v6; // xmm0
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v11; // [rsp+30h] [rbp-28h] BYREF
  _OWORD v12[2]; // [rsp+34h] [rbp-24h]
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = (struct _RTL_CRITICAL_SECTION *)(this + 21);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 21));
  CChannel::CheckHandle((__int64)this, a2, 16);
  v11 = 30;
  v12[0] = 0LL;
  v6 = (__int128)*a3;
  LODWORD(v12[0]) = a2;
  *(_OWORD *)((char *)v12 + 4) = v6;
  v7 = CChannel::SendCommand(this, &v11, 0x18u);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x990u);
  else
    *((_BYTE *)this + 211) = 1;
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v13);
  return v9;
}
