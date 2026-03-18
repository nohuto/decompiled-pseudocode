/*
 * XREFs of ??1CInteractionTracker@@UEAA@XZ @ 0x1801CB5AC
 * Callers:
 *     ??_ECInteractionTracker@@UEAAPEAXI@Z @ 0x1801CB8D0 (--_ECInteractionTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18003742C (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180092F04 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801CCDFC (-DestroyDefaultAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ?DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ @ 0x1801CCF34 (-DestroyInteractionAnimations@CInteractionTracker@@AEAAXXZ.c)
 *     ?StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z @ 0x1801D0CF4 (-StopCustomAnimations@CInteractionTracker@@AEAAX_N@Z.c)
 *     ??1InteractionSourceManager@@QEAA@XZ @ 0x18021491C (--1InteractionSourceManager@@QEAA@XZ.c)
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
  v2 = 0LL;
  v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 272LL);
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
  v6 = (void **)((char *)this + 408);
  v7 = 4LL;
  do
  {
    operator delete(*v6);
    *v6++ = 0LL;
    --v7;
  }
  while ( v7 );
  v8 = *((_QWORD *)this + 79);
  if ( v8 )
  {
    *((_QWORD *)this + 79) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 472);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 58);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 57);
  `vector destructor iterator'(
    (char *)this + 376,
    8LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  `vector destructor iterator'(
    (char *)this + 360,
    8LL,
    2LL,
    (void (__fastcall *)(char *))Microsoft::WRL::ComPtr<CConditionalExpression>::~ComPtr<CConditionalExpression>);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 42);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 41);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 40);
  InteractionSourceManager::~InteractionSourceManager((CInteractionTracker *)((char *)this + 192));
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)this + 8);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
