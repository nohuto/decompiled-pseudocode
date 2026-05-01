/*
 * XREFs of ?get@?$static_lazy@VChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@@details@wil@@QEAAPEAVChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@P6AXXZ@Z @ 0x180183998
 * Callers:
 *     ??$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x1801780D4 (--$ChainLinkEventStart@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTy.c)
 *     ??$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventType@2345@@ChainLinkTraceLogging@Chaining@Shell@Internal@Windows@@SAX$$QEAPEBD$$QEAPEAUIChainLink@1234@AEAW4ChainLinkEventType@1234@@Z @ 0x180178158 (--$ChainLinkEventStop@PEBDPEAUIChainLink@Chaining@Shell@Internal@Windows@@AEAW4ChainLinkEventTyp.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1800844C4 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_tlgProvider_t@@P6AXPEBU_GUID@@KE_K2PEAU_EVENT_FILT.c)
 *     atexit @ 0x18008D254 (atexit.c)
 */

_QWORD *__fastcall wil::details::static_lazy<Windows::Internal::Shell::Chaining::ChainLinkTraceLogging>::get(
        __int64 a1,
        void (__cdecl *a2)())
{
  void (*v3)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(
         &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
         0,
         (PBOOL)&v5,
         (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_1805CC1F0;
    qword_1805CC1F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805CC208 = (struct _tlgProvider_t *)&`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805CC1F0, qword_1805CC208, v3);
    InitOnceComplete(
      &`Windows::Internal::Shell::Chaining::ChainLinkTraceLogging::Instance'::`2'::wrapper,
      0,
      qword_1805CC1F0);
  }
  return v6;
}
