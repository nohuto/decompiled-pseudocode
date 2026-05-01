/*
 * XREFs of ??_GINIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAAPEAXI@Z @ 0x18037DEEC
 * Callers:
 *     ?_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ @ 0x18037EEC4 (-_StartMTVThread@CMultitaskingViewServiceProvider@@AEAAJXZ.c)
 *     ?s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z @ 0x1803804C0 (-s_RunMTVThread@CMultitaskingViewServiceProvider@@CAKPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18008DC44 (--3@YAXPEAX@Z.c)
 *     ??1INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ @ 0x18037DC08 (--1INIT_THREAD_DATA@CMultitaskingViewServiceProvider@@QEAA@XZ.c)
 */

CMultitaskingViewServiceProvider::INIT_THREAD_DATA *__fastcall CMultitaskingViewServiceProvider::INIT_THREAD_DATA::`scalar deleting destructor'(
        CMultitaskingViewServiceProvider::INIT_THREAD_DATA *this)
{
  CMultitaskingViewServiceProvider::INIT_THREAD_DATA::~INIT_THREAD_DATA(this);
  operator delete(this);
  return this;
}
