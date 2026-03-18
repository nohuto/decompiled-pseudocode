/*
 * XREFs of ?TelemetrySetApplicationId@CChannelContext@@QEAAJPEBG_K@Z @ 0x18009635C
 * Callers:
 *     ?Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_TELEMETRYSETAPPLICATIONID@@PEBXI@Z @ 0x1800962E4 (-Partition_TelemetrySetApplicationId@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800466E8 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?StringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x180095F80 (-StringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800966B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x1800972A8 (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 */

__int64 __fastcall CChannelContext::TelemetrySetApplicationId(CChannelContext *this, char *a2, unsigned __int64 a3)
{
  __int64 v3; // rsi
  int v7; // edi
  char *v8; // rbx
  __int64 v9; // rdi
  char *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v3 = -1LL;
  v7 = 0;
  v8 = 0LL;
  if ( !*((_QWORD *)this + 6) )
  {
    v9 = a3 + 1;
    v10 = (char *)operator new(saturated_mul(a3 + 1, 2uLL));
    v8 = v10;
    if ( !v10 )
    {
      v7 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0xE6u, 0LL);
      goto LABEL_9;
    }
    v7 = StringCchCopyNW(v10, v9, a2, a3);
    if ( v7 >= 0 )
    {
      *((_QWORD *)this + 6) = v8;
      v8 = 0LL;
    }
  }
  v12 = *((_QWORD *)this + 5);
  if ( v12 )
  {
    std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
      &v14,
      *(_QWORD *)lpMem,
      *((_QWORD *)lpMem + 1),
      v12 + 16);
    do
      ++v3;
    while ( *(_WORD *)&a2[2 * v3] );
    std::wstring::assign((void *)(*(_QWORD *)v14 + 128LL));
  }
LABEL_9:
  operator delete(v8);
  return (unsigned int)v7;
}
