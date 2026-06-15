/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180036A78
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___::CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a_____lambda_87f555b56693a8b4c492a05e321e535a___ @ 0x180073014 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_87f555b56693a8b4c492a05e321e535a___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_58c08c42a645875e4bfc7c52011cdf6b___ @ 0x1800731D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_58c08c42a645875e4bfc7c52011cdf6b___.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_e0385c1b3dccbc375408929e287d16bb___ @ 0x180073310 (Windows--Internal--ComTaskPool--QueueTask__lambda_e0385c1b3dccbc375408929e287d16bb___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
