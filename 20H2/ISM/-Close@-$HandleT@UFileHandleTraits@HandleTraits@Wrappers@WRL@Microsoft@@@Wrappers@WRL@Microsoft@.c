/*
 * XREFs of ?Close@?$HandleT@UFileHandleTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Wrappers@WRL@Microsoft@@QEAAXXZ @ 0x18009CC24
 * Callers:
 *     ?WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z @ 0x18009D150 (-WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18007F520 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

void __fastcall Microsoft::WRL::Wrappers::HandleT<Microsoft::WRL::Wrappers::HandleTraits::FileHandleTraits>::Close(
        __int64 a1)
{
  signed int LastError; // eax

  if ( *(_QWORD *)(a1 + 8) != -1LL )
  {
    if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a1)(a1) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        LastError = (unsigned __int16)LastError | 0x80070000;
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)LastError);
      __debugbreak();
    }
    *(_QWORD *)(a1 + 8) = -1LL;
  }
}
