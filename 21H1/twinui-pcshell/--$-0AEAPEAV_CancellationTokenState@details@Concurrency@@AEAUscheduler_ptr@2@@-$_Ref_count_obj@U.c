/*
 * XREFs of ??$?0AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@2@@?$_Ref_count_obj@U?$_Task_impl@E@details@Concurrency@@@std@@QEAA@AEAPEAV_CancellationTokenState@details@Concurrency@@AEAUscheduler_ptr@4@@Z @ 0x180300F48
 * Callers:
 *     ?_CreateImpl@?$task@E@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@Z @ 0x1803054A8 (-_CreateImpl@-$task@E@Concurrency@@QEAAXPEAV_CancellationTokenState@details@2@Uscheduler_ptr@2@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0_Task_impl_base@details@Concurrency@@QEAA@PEAV_CancellationTokenState@12@Uscheduler_ptr@2@@Z @ 0x180302E68 (--0_Task_impl_base@details@Concurrency@@QEAA@PEAV_CancellationTokenState@12@Uscheduler_ptr@2@@Z.c)
 */

__int64 __fastcall std::_Ref_count_obj<Concurrency::details::_Task_impl<unsigned char>>::_Ref_count_obj<Concurrency::details::_Task_impl<unsigned char>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  volatile signed __int32 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Concurrency::details::_Task_impl<unsigned char>>::`vftable';
  v4 = (volatile signed __int32 *)a3[1];
  if ( v4 )
  {
    _InterlockedAdd(v4 + 2, 1u);
    v4 = (volatile signed __int32 *)a3[1];
  }
  v5 = *a3;
  v6 = a3[2];
  v7 = *a2;
  if ( v4 )
    _InterlockedAdd(v4 + 2, 1u);
  v9[2] = v6;
  v9[0] = v5;
  v9[1] = v4;
  Concurrency::details::_Task_impl_base::_Task_impl_base(a1 + 16, v7, v9);
  *(_QWORD *)(a1 + 16) = &Concurrency::details::_Task_impl<unsigned char>::`vftable';
  *(_QWORD *)(a1 + 448) = 0LL;
  if ( v4 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
  return a1;
}
