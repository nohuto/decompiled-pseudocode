/*
 * XREFs of ?dtor$0@?0??set@?$task_completion_event@U?$pair@EPEAV_CancellationTokenState@details@Concurrency@@@std@@@Concurrency@@QEBA_NU?$pair@EPEAV_CancellationTokenState@details@Concurrency@@@std@@@Z@4HA @ 0x180120D42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::task_completion_event<std::pair<unsigned char,Concurrency::details::_CancellationTokenState *>>::set'::`1'::dtor$0(
        __int64 a1,
        __int64 a2)
{
  std::string::_Tidy_deallocate((__int64 *)(a2 + 48));
}
