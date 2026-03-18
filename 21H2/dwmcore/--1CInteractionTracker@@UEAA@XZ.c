/*
 * XREFs of ??1CInteractionTracker@@UEAA@XZ @ 0x180218970
 * Callers:
 *     ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x180218CD0 (--_ECInteractionTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180014EBC (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18008EF8C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z @ 0x1802194C8 (-BoostCompositorClock@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021A420 (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x18021A558 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x18021E0BC (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x180263CE4 (--1InteractionSourceManager@@QEAA@XZ.c)
 */

void __fastcall CInteractionTracker::~CInteractionTracker(CInteractionTracker *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r9
  void **v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx

  *(_QWORD *)this = &CInteractionTracker::`vftable';
  CInteractionTracker::DestroyInteractionAnimations(this);
  CInteractionTracker::StopCustomAnimations(this, 0);
  CInteractionTracker::DestroyDefaultAnimations(this, 0);
  CInteractionTracker::BoostCompositorClock(this, 0);
  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 424LL);
  v4 = *(_DWORD *)(v3 + 288);
  v5 = *(_QWORD *)(v3 + 264);
  if ( v4 )
  {
    do
    {
      if ( this == *(CInteractionTracker **)(v5 + 8 * v2) )
        break;
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v4 );
  }
  if ( (unsigned int)v2 < v4 )
  {
    while ( (unsigned int)v2 < v4 - 1 )
    {
      *(_QWORD *)(v5 + 8 * v2) = *(_QWORD *)(v5 + 8LL * (unsigned int)(v2 + 1));
      v2 = (unsigned int)(v2 + 1);
      v4 = *(_DWORD *)(v3 + 288);
    }
    *(_DWORD *)(v3 + 288) = v4 - 1;
  }
  v6 = (void **)((char *)this + 416);
  v7 = 4LL;
  do
  {
    operator delete(*v6);
    *v6++ = 0LL;
    --v7;
  }
  while ( v7 );
  v8 = *((_QWORD *)this + 80);
  if ( v8 )
  {
    *((_QWORD *)this + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 60);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 59);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 58);
  `vector destructor iterator'(
    (char *)this + 384,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>);
  `vector destructor iterator'(
    (char *)this + 368,
    8LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<ID2D1Bitmap1>::~ComPtr<ID2D1Bitmap1>);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 43);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 41);
  InteractionSourceManager::~InteractionSourceManager((CInteractionTracker *)((char *)this + 200));
  wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)this + 9);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
