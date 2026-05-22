/*
 * XREFs of ?DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEBVSpatialInteractionSourceDevice@234@@Z @ 0x1800CEF40
 * Callers:
 *     ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800CF224 (-DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 * Callees:
 *     ??0?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800CDC50 (--0-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@V-$shared_ptr@VAsynchronousWorkI.c)
 *     ?erase@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@2@0@Z @ 0x1800D3EE0 (-erase@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@Spat.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DeleteWorkItemsForSourceDevice(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v11; // rax
  __int64 v12; // r8
  _QWORD *v13; // rax
  _QWORD **v14; // rax
  _QWORD *v15; // [rsp+28h] [rbp-49h] BYREF
  __int64 v16; // [rsp+30h] [rbp-41h]
  __int64 v17; // [rsp+38h] [rbp-39h]
  _QWORD v18[2]; // [rsp+40h] [rbp-31h] BYREF
  __int64 v19; // [rsp+50h] [rbp-21h]
  _QWORD v20[3]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v21[3]; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v22[3]; // [rsp+88h] [rbp+17h] BYREF
  _QWORD v23[3]; // [rsp+A0h] [rbp+2Fh] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 488);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 488));
  v16 = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 67);
  v6 = *((_QWORD *)this + 70);
  v15 = v5;
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 71) + *((_QWORD *)this + 70);
    v17 = v6;
    if ( v6 == v7 )
      break;
    if ( v5 )
      v8 = *v5;
    else
      v8 = 0LL;
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 8 * (v6 & (*(_QWORD *)(v8 + 16) - 1LL)));
    if ( **(const struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice ***)v9 == a2
      && *(_BYTE *)(*(_QWORD *)v9 + 80LL) )
    {
      v11 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
              v22,
              (__int64)&v15);
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
        v18,
        (__int64)v11);
      ++v19;
      std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
        v21,
        (__int64)v18);
      v13 = std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>>>(
              v23,
              v12);
      std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::erase(
        (char *)this + 536,
        v20,
        v13,
        v21,
        v15,
        v16,
        v17);
      if ( v5 != (_QWORD *)v20[0] && v20[0] )
      {
        v14 = *(_QWORD ***)v20[0];
        if ( *(_QWORD *)v20[0] )
        {
          v5 = *v14;
          v15 = *v14;
        }
      }
      v6 = v20[2];
    }
    else
    {
      ++v6;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
