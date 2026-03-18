/*
 * XREFs of ?Present@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801989BC
 * Callers:
 *     ?Present@CDDARenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z @ 0x1800F0000 (-Present@CDDARenderTarget@@$4PPPPPPPM@A@EAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z @ 0x1800D3E74 (-ScheduleCompositionPass@@YAXKW4CompositionReason@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDARenderTarget::Present(CDDARenderTarget *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this - 224);
  if ( v3 && *(int *)(*((_QWORD *)this - 241) + 952LL) < 6 && *((_BYTE *)this - 56) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v3 + 48LL))(
           v3,
           1LL,
           *((_BYTE *)this - 55) != 0 ? 0x80 : 0);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x12Eu, 0LL);
    else
      *((_BYTE *)this - 56) = 0;
    if ( v2 == 142213130 )
    {
      ScheduleCompositionPass(0, 0x2000u);
      v2 = 0;
      *((_BYTE *)this - 56) = 1;
    }
  }
  return v2;
}
