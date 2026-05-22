/*
 * XREFs of ?Close@?$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x180159D6C
 * Callers:
 *     ??1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ @ 0x1801576AC (--1ChainedThreadpoolWorker@ThreadHelpers@@QEAA@XZ.c)
 *     ?Then@ChainedThreadpoolWorker@ThreadHelpers@@QEAAX$$QEAV?$function@$$A6AXXZ@std@@PEAUIUnknown@@@Z @ 0x180166070 (-Then@ChainedThreadpoolWorker@ThreadHelpers@@QEAAX$$QEAV-$function@$$A6AXXZ@std@@PEAUIUnknown@@@.c)
 *     ??0KeepAliveTimer@ThreadpoolTimerHelpers@@QEAA@_KV?$function@$$A6AXXZ@std@@@Z @ 0x180169438 (--0KeepAliveTimer@ThreadpoolTimerHelpers@@QEAA@_KV-$function@$$A6AXXZ@std@@@Z.c)
 *     ??1?$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180169A84 (--1-$HandleT@VThreadpoolTimerTraitsImpl@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Micro.c)
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180169BF0 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18007F5C0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

void __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::ThreadpoolTimerTraitsImpl>::Close(
        __int64 a1)
{
  signed int LastError; // eax

  if ( *(_QWORD *)(a1 + 8) )
  {
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a1)(a1) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
      __debugbreak();
    }
    *(_QWORD *)(a1 + 8) = 0LL;
  }
}
