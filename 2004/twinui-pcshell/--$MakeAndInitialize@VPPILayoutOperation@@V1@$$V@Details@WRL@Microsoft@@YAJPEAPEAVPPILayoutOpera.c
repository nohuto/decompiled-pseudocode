/*
 * XREFs of ??$MakeAndInitialize@VPPILayoutOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPPILayoutOperation@@@Z @ 0x18040BB88
 * Callers:
 *     ?PPILayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18040C1C4 (-PPILayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180092F7C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180136EC0 (--1-$ComPtr@UITabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x18014D4A4 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??0PPILayoutOperation@@QEAA@XZ @ 0x18040BCE4 (--0PPILayoutOperation@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PPILayoutOperation,PPILayoutOperation,>(
        PPILayoutOperation **a1)
{
  void *v2; // rax
  int inited; // edi
  PPILayoutOperation *v4; // rbx
  void *v6; // [rsp+30h] [rbp+8h] BYREF
  PPILayoutOperation *v7; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = PPILayoutOperation::PPILayoutOperation((PPILayoutOperation *)v2);
    v7 = v4;
    v6 = 0LL;
    inited = CObjectWithThreadUseDetection::InitApartmentId((PPILayoutOperation *)((char *)v4 + 192));
    if ( inited >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(PPILayoutOperation *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      inited = 0;
    }
    Microsoft::WRL::ComPtr<ITabletModeCoverWindow>::~ComPtr<ITabletModeCoverWindow>((__int64 *)&v7);
  }
  else
  {
    inited = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v6);
  return (unsigned int)inited;
}
