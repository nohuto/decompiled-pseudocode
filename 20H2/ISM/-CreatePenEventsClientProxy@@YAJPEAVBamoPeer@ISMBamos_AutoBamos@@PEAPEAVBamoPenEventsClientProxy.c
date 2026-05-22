/*
 * XREFs of ?CreatePenEventsClientProxy@@YAJPEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoPenEventsClientProxy@@@Z @ 0x1801328F0
 * Callers:
 *     ?CreatePenEventsClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISMBamos_AutoBamos@@PEAPEAVBamoProxy@Bamo@3@@Z @ 0x1800E4204 (-CreatePenEventsClientProxy@BamoImpl@@YAXPEAVBaseBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@ISM.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180019010 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CAF8 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall CreatePenEventsClientProxy(
        struct ISMBamos_AutoBamos::BamoPeer *a1,
        struct BamoPenEventsClientProxy **a2)
{
  LPVOID v3; // rax
  __int64 v4; // r10
  _QWORD *v5; // rbx
  __int64 result; // rax
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-30h] BYREF

  v3 = wil::details::static_lazy<InputTraceLogging>::get(
         (__int64)a1,
         _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v3 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v3 + 1), 512LL) )
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1801CE22E, 0LL, 0LL, 2u, &v7);
  v5 = operator new(0x40uLL);
  memset_0(v5, 0, 0x40uLL);
  *((_DWORD *)v5 + 6) = 0;
  v5[4] = 0LL;
  v5[2] = &BamoImpl::BamoPenEventsClientProxyImpl::`vftable';
  v5[5] = 0LL;
  *((_DWORD *)v5 + 12) = 0;
  *((_WORD *)v5 + 26) = 0;
  *v5 = &PenEventsClientCustomProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  v5[1] = &PenEventsClientCustomProxy::`vftable'{for `IPenEventsClientProxy'};
  result = 0LL;
  *a2 = (struct BamoPenEventsClientProxy *)v5;
  return result;
}
