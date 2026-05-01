/*
 * XREFs of ??$CommitImportanceVector@AEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@ViewManagerInteropTraceLogging@@SAXAEBIAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1802A9C2C
 * Callers:
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1802ACE3C (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 * Callees:
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18005CDBC (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     atexit @ 0x18008CE40 (atexit.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x1802ACF28 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1802ADF8C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 */

void __fastcall ViewManagerInteropTraceLogging::CommitImportanceVector<unsigned int const &,_RM_ACTIVITY_IMPORTANCE const &>(
        int *a1,
        const union _RM_ACTIVITY_IMPORTANCE *a2)
{
  ViewManagerInteropTraceLogging *v4; // rcx
  WINBOOL fPending; // [rsp+40h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+20h] BYREF

  if ( ViewManagerInteropTraceLogging::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        Context = &qword_1805A02A8;
        qword_1805A02A8 = &IamTraceLogging::`vftable';
        atexit(_lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
        ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)&qword_1805A02A8);
        InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &qword_1805A02A8);
      }
    }
    ViewManagerInteropTraceLogging::CommitImportanceVector_(v4, *a1, a2);
  }
}
