/*
 * XREFs of ??1GameInputServerProxy@@EEAA@XZ @ 0x1800427F4
 * Callers:
 *     ??_GGameInputServerProxy@@EEAAPEAXI@Z @ 0x180042A20 (--_GGameInputServerProxy@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GDevice@GameInputServerProxy@@QEAAPEAXI@Z @ 0x180042968 (--_GDevice@GameInputServerProxy@@QEAAPEAXI@Z.c)
 *     ?StopWatching@GameInputWatcher@@QEAAXXZ @ 0x180043788 (-StopWatching@GameInputWatcher@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GameInputServerProxy::~GameInputServerProxy(GameInputServerProxy *this, unsigned int a2)
{
  __int64 v3; // rcx
  GameInputServerProxy::Device **v4; // rbx
  GameInputServerProxy::Device *v5; // rax
  GameInputServerProxy::Device **v6; // rcx
  const struct std::nothrow_t *v7; // rdx
  void *v8; // rcx

  *(_QWORD *)this = &GameInputServerProxy::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &GameInputServerProxy::`vftable'{for `IGameInputServer'};
  *((_QWORD *)this + 3) = &GameInputServerProxy::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 4) = &GameInputServerProxy::`vftable'{for `INoMarshal'};
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = (GameInputServerProxy::Device **)((char *)this + 200);
  while ( 1 )
  {
    v5 = *v4;
    v6 = *(GameInputServerProxy::Device ***)*v4;
    if ( *((GameInputServerProxy::Device ***)*v4 + 1) != v4 || v6[1] != v5 )
      __fastfail(3u);
    *v4 = (GameInputServerProxy::Device *)v6;
    v6[1] = (GameInputServerProxy::Device *)v4;
    if ( v5 == (GameInputServerProxy::Device *)v4 )
      break;
    GameInputServerProxy::Device::`scalar deleting destructor'(v5, a2);
    --*((_QWORD *)this + 27);
  }
  GameInputWatcher::StopWatching((GameInputServerProxy *)((char *)this + 72));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  v8 = (void *)*((_QWORD *)this + 17);
  if ( v8 )
    operator delete(v8, v7);
  *(_QWORD *)this = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IGameInputServer'};
  *((_QWORD *)this + 3) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 4) = &SharedUnknownBase<IGameInputServer,IAgileObject,INoMarshal>::`vftable'{for `INoMarshal'};
  SharedObjectBase::~SharedObjectBase(this);
}
