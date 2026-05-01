/*
 * XREFs of ?add_AppMemoryUsageLimitChanging@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800023E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180002418 (-Add@-$AgileEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003850 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::add_AppMemoryUsageLimitChanging(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  result = Windows::System::CMemoryManager::Init();
  if ( (int)result >= 0 )
    return Microsoft::WRL::AgileEventSource<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::Add(
             v6,
             a2,
             a3);
  return result;
}
