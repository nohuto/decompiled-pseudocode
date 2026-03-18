/*
 * XREFs of _UmfdDispatchWinLogonEscape@4 @ 0xEB862
 * Callers:
 *     _NtGdiExtEscape@32 @ 0x8B698 (_NtGdiExtEscape@32.c)
 * Callees:
 *     ?TerminateUmfdHost@UmfdHostLifeTimeManager@@SGX_N@Z @ 0xD3DCC (-TerminateUmfdHost@UmfdHostLifeTimeManager@@SGX_N@Z.c)
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SGHPAX@Z @ 0xEA2EA (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SGHPAX@Z.c)
 *     ??0ExclusiveWinlognRequestLock@@QAE@XZ @ 0xF72C3 (--0ExclusiveWinlognRequestLock@@QAE@XZ.c)
 *     ??1ExclusiveWinlognRequestLock@@QAE@XZ @ 0xF72D6 (--1ExclusiveWinlognRequestLock@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

void __fastcall UmfdDispatchWinLogonEscape(unsigned int a1)
{
  int v1; // [esp+10h] [ebp-24h]
  void *v2; // [esp+14h] [ebp-20h]
  _BYTE v3[4]; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  ms_exc.registration.TryLevel = 0;
  if ( (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a1 + 8 > _MmUserProbeAddress || a1 + 8 < a1 )
    *(_BYTE *)_MmUserProbeAddress = 0;
  v1 = *(_DWORD *)a1;
  v2 = *(void **)(a1 + 4);
  ms_exc.registration.TryLevel = -2;
  ExclusiveWinlognRequestLock::ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)v3);
  if ( v1 )
  {
    if ( v1 == 1 )
      UmfdHostLifeTimeManager::TerminateUmfdHost(v2 != 0);
  }
  else
  {
    UmfdHostLifeTimeManager::InitializeUmfdAndRegisterHost(v2);
  }
  ExclusiveWinlognRequestLock::~ExclusiveWinlognRequestLock((ExclusiveWinlognRequestLock *)v3);
}
