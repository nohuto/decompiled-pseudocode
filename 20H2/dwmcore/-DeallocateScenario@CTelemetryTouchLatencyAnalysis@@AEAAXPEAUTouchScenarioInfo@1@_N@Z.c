/*
 * XREFs of ?DeallocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N@Z @ 0x1800043C8
 * Callers:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800041CC (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 * Callees:
 *     ??4TouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z @ 0x180004774 (--4TouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180041D34 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::DeallocateScenario(
        CTelemetryTouchLatencyAnalysis *this,
        struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a2,
        char a3)
{
  __int128 v5; // [rsp+20h] [rbp-E0h] BYREF
  _WORD v6[8]; // [rsp+30h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+40h] [rbp-C0h]
  _WORD v8[8]; // [rsp+50h] [rbp-B0h] BYREF
  __m128i v9; // [rsp+60h] [rbp-A0h]
  _BYTE v10[136]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v11; // [rsp+F8h] [rbp-8h]
  __int128 v12; // [rsp+108h] [rbp+8h]
  __int64 v13; // [rsp+118h] [rbp+18h]
  __int64 v14; // [rsp+120h] [rbp+20h]
  __int128 v15; // [rsp+128h] [rbp+28h]
  __int128 v16; // [rsp+138h] [rbp+38h]
  __int64 v17; // [rsp+148h] [rbp+48h]
  int v18; // [rsp+150h] [rbp+50h]
  __int128 v19; // [rsp+154h] [rbp+54h]
  __int128 v20; // [rsp+164h] [rbp+64h]
  __int64 v21; // [rsp+174h] [rbp+74h]
  int v22; // [rsp+17Ch] [rbp+7Ch]
  __int128 v23; // [rsp+180h] [rbp+80h]
  __int128 v24; // [rsp+190h] [rbp+90h]
  __int128 v25; // [rsp+1A0h] [rbp+A0h]
  __int64 v26; // [rsp+1B0h] [rbp+B0h]

  *((_DWORD *)a2 + 39) = 0;
  if ( a3 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v23 = 0LL;
    v24 = 0LL;
    v26 = 0LL;
    v25 = 0LL;
    v6[0] = 0;
    v5 = 0LL;
    v8[0] = 0;
    v9 = si128;
    memset_0(v10, 0, sizeof(v10));
    v11 = 0LL;
    v13 = 0LL;
    v12 = 0LL;
    v14 = 0LL;
    v15 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    v18 = 0;
    v19 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    v22 = 0;
    CTelemetryTouchLatencyAnalysis::TouchScenarioInfo::operator=(a2, &v5);
    std::wstring::_Tidy_deallocate(v8);
    std::wstring::_Tidy_deallocate(v6);
    if ( *(_DWORD *)this )
      --*(_DWORD *)this;
  }
}
