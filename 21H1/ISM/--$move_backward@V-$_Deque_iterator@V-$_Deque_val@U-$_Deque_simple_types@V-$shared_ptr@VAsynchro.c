/*
 * XREFs of ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800CDFF8
 * Callers:
 *     ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1800D4430 (-erase@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008A690 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 */

_QWORD *__fastcall std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 **a3,
        __int64 **a4)
{
  __int64 *v5; // r12
  __int64 *v7; // r15
  __int64 v8; // rbp
  __int64 *v9; // rsi
  __int64 v10; // r14
  __int64 *v11; // rax
  _QWORD *v12; // rax
  _QWORD *result; // rax

  v5 = *(__int64 **)(a2 + 16);
  v7 = a3[2];
  if ( *a3 )
    v8 = **a3;
  else
    v8 = 0LL;
  v9 = a4[2];
  if ( *a4 )
    v10 = **a4;
  else
    v10 = 0LL;
  while ( v5 != v7 )
  {
    v7 = (__int64 *)((char *)v7 - 1);
    v9 = (__int64 *)((char *)v9 - 1);
    std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
      *(_QWORD **)(*(_QWORD *)(v10 + 8) + 8 * ((unsigned __int64)v9 & (*(_QWORD *)(v10 + 16) - 1LL))),
      *(__int64 **)(*(_QWORD *)(v8 + 8) + 8 * ((unsigned __int64)v7 & (*(_QWORD *)(v8 + 16) - 1LL))));
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  v11 = *a4;
  a4[2] = v9;
  if ( v11 )
  {
    v12 = (_QWORD *)*v11;
    if ( v12 )
      *a1 = *v12;
  }
  result = a1;
  a1[2] = v9;
  return result;
}
