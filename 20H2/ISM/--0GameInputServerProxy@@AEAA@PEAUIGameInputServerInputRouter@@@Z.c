/*
 * XREFs of ??0GameInputServerProxy@@AEAA@PEAUIGameInputServerInputRouter@@@Z @ 0x180042070
 * Callers:
 *     ?CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z @ 0x180042534 (-CreateSingleton@GameInputServerProxy@@SAJPEAUIGameInputServerInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

GameInputServerProxy *__fastcall GameInputServerProxy::GameInputServerProxy(
        GameInputServerProxy *this,
        struct IGameInputServerInputRouter *a2)
{
  __int64 v3; // rcx

  *((_QWORD *)this + 1) = 0x200000000LL;
  *(_QWORD *)this = &GameInputServerProxy::`vftable'{for `SharedObjectBase'};
  *((_QWORD *)this + 2) = &GameInputServerProxy::`vftable'{for `IGameInputServer'};
  *((_QWORD *)this + 3) = &GameInputServerProxy::`vftable'{for `IAgileObject'};
  *((_QWORD *)this + 4) = &GameInputServerProxy::`vftable'{for `INoMarshal'};
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = a2;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = -1LL;
  *((_QWORD *)this + 12) = 0LL;
  *(_OWORD *)((char *)this + 104) = 0LL;
  *(_OWORD *)((char *)this + 120) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  InitializeCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 26) = (char *)this + 200;
  *((_QWORD *)this + 25) = (char *)this + 200;
  *((_QWORD *)this + 28) = 0LL;
  v3 = *((_QWORD *)this + 7);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return this;
}
