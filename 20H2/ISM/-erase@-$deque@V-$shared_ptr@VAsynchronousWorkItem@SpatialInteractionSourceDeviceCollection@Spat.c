/*
 * XREFs of ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1800D3EE0
 * Callers:
 *     ?DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEBVSpatialInteractionSourceDevice@234@@Z @ 0x1800CEF40 (-DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Int.c)
 * Callees:
 *     ??$move@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800CD9D4 (--$move@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$shared_ptr@VAsynchronousWorkI.c)
 *     ??$move_backward@V?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@V12@@std@@YA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@0@V10@00@Z @ 0x1800CDAA8 (--$move_backward@V-$_Deque_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$shared_ptr@VAsynchro.c)
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800CDC50 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$shared_ptr@VAsynchronousWorkI.c)
 *     ?pop_back@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x1800D4214 (-pop_back@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@S.c)
 *     ?pop_front@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAAXXZ @ 0x1800D4270 (-pop_front@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@.c)
 */

_QWORD *__fastcall std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::erase(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  __int64 v7; // r10
  unsigned __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  __int128 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+30h] [rbp-50h]
  __int128 v18; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v19; // [rsp+48h] [rbp-38h]
  __int64 *v20[3]; // [rsp+50h] [rbp-30h] BYREF
  __int64 *v21[3]; // [rsp+68h] [rbp-18h] BYREF

  v16 = 0LL;
  v17 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
          v21,
          a3)[2];
  if ( a1 )
    *(_QWORD *)&v16 = *a1;
  v18 = 0LL;
  v6 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
         v21,
         v5)[2];
  v19 = v6;
  if ( a1 )
    *(_QWORD *)&v18 = *a1;
  v8 = a1[3];
  v9 = v7 - v8;
  v10 = v6 - v7;
  if ( v7 - v8 >= v8 + a1[4] - v6 )
  {
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
      v21,
      (__int64)&v16);
    v16 = *a1;
    v17 = v13;
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
      v20,
      (__int64)&v18);
    std::move<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>>(
      &v18,
      v20,
      (__int64)&v16,
      v21);
    for ( ; v10; --v10 )
      std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::pop_back(a1);
  }
  else
  {
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
      v20,
      (__int64)&v18);
    std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
      v21,
      (__int64)&v16);
    v11 = *a1;
    v19 = v12;
    v18 = v11;
    std::move_backward<std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>,std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>>(
      &v16,
      (__int64)&v18,
      v21,
      v20);
    for ( ; v10; --v10 )
      std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::pop_front(a1);
  }
  v14 = a1[3];
  *((_QWORD *)&v18 + 1) = 0LL;
  v19 = v14;
  *(_QWORD *)&v18 = *a1;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
    &v16,
    (__int64)&v18);
  v17 += v9;
  std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
    a2,
    (__int64)&v16);
  return a2;
}
