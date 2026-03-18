/*
 * XREFs of ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02C48D8
 * Callers:
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C030AB20 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0009A8C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C0009BB0 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00465E4 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::SignalCrossAdapterSyncObjects(ADAPTER_RENDER *this)
{
  struct DXGGLOBAL *Global; // rax
  __int64 *i; // rbx
  __int64 v4; // rax
  _BYTE v5[16]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v6; // [rsp+70h] [rbp+8h] BYREF
  __int64 v7; // [rsp+78h] [rbp+10h] BYREF

  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    Global = DXGGLOBAL_GetGlobal();
    DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v5, Global, 0);
    DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v5);
    for ( i = (__int64 *)*((_QWORD *)this + 30); i != (__int64 *)((char *)this + 240) && i; i = (__int64 *)*i )
    {
      if ( *((_BYTE *)i + 26) )
      {
        v4 = i[4];
        v6 = -1LL;
        v7 = v4;
        (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 78) + 8LL)
                                                                                                  + 640LL))(
          0LL,
          0LL,
          0LL,
          0LL,
          1,
          &v7,
          0,
          &v6);
      }
    }
    if ( v5[8] )
      DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v5);
  }
}
