/*
 * XREFs of ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x180389494
 * Callers:
 *     ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x180387AA0 (-Destroy@CMultitaskingViewManager@@UEAAJXZ.c)
 *     ?ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z @ 0x1803888D0 (-ViewDismissed@CMultitaskingViewManager@@UEAAJPEAUIMultitaskingViewHost@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memmove_0 @ 0x1800F03F3 (memmove_0.c)
 *     ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x1803876A8 (--_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z.c)
 */

void __fastcall CMultitaskingViewManager::_DestroyMTVHost(CMultitaskingViewManager *this, unsigned __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // r8

  v4 = 16 * a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(16 * a2 + *((_QWORD *)this + 35) + 8LL));
  if ( a2 < *((_QWORD *)this + 36) )
  {
    CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'((CMultitaskingViewManager::MULTITASKING_HOST_DATA *)(v4 + *((_QWORD *)this + 35)));
    v5 = *((_QWORD *)this + 36);
    if ( a2 != v5 - 1 )
    {
      memmove_0(
        (void *)(v4 + *((_QWORD *)this + 35)),
        (const void *)(v4 + *((_QWORD *)this + 35) + 16),
        16 * (v5 - a2) - 16);
      v5 = *((_QWORD *)this + 36);
    }
    *((_QWORD *)this + 36) = v5 - 1;
  }
}
