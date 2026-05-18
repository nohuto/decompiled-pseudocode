/*
 * XREFs of ?dtor$1@?0??set@?$task_completion_event@E@Concurrency@@QEBA_NE@Z@4HA @ 0x180121172
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall `Concurrency::task_completion_event<unsigned char>::set'::`1'::dtor$1(__int64 a1, __int64 a2)
{
  std::string::_Tidy_deallocate((__int64 *)(a2 + 96));
}
