/*
 * XREFs of ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180083138
 * Callers:
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$0 @ 0x180083402 (_ISMTracing--GetVector3AsString_--_1_--dtor$0.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$1 @ 0x18008340E (_ISMTracing--GetVector3AsString_--_1_--dtor$1.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$2 @ 0x18008341A (_ISMTracing--GetVector3AsString_--_1_--dtor$2.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$3 @ 0x180083426 (_ISMTracing--GetVector3AsString_--_1_--dtor$3.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$4 @ 0x180083432 (_ISMTracing--GetVector3AsString_--_1_--dtor$4.c)
 *     _ISMTracing::GetVector3AsString_::_1_::dtor$5 @ 0x18008343E (_ISMTracing--GetVector3AsString_--_1_--dtor$5.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$0 @ 0x180083C48 (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$0.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$1 @ 0x180083C54 (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$1.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$3 @ 0x180083C60 (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$3.c)
 *     _ISMTracing::LogMPCHandInputReport_::_1_::dtor$4 @ 0x180083C6C (_ISMTracing--LogMPCHandInputReport_--_1_--dtor$4.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::string::~string(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 0x10 )
    std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(v1 + 1));
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
}
