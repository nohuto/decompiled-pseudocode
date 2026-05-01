/*
 * XREFs of ??1?$unique_ptr@V_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@U?$default_delete@V_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@@std@@@std@@QEAA@XZ @ 0x180303344
 * Callers:
 *     _Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::_Callback_::_1_::dtor$0 @ 0x180304BEA (_Concurrency--details--_DefaultPPLTaskScheduler--_PPLTaskChore--_Callback_--_1_--dtor$0.c)
 * Callees:
 *     ??_G_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@QEAAPEAXI@Z @ 0x1803040FC (--_G_PPLTaskChore@_DefaultPPLTaskScheduler@details@Concurrency@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::unique_ptr<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore>::~unique_ptr<Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore>(
        Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore **a1,
        unsigned int a2)
{
  Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore *v2; // rcx
  void *result; // rax

  v2 = *a1;
  if ( v2 )
    return Concurrency::details::_DefaultPPLTaskScheduler::_PPLTaskChore::`scalar deleting destructor'(v2, a2);
  return result;
}
