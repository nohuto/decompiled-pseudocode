/*
 * XREFs of ?SignalCrossAdapterSyncObjects@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0212CA0
 * Callers:
 *     ?NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ @ 0x1C02659C4 (-NotifyAdapterRemoval@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000EB44 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z @ 0x1C000EC88 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0039EB8 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::SignalCrossAdapterSyncObjects(ADAPTER_RENDER *this, __int64 a2)
{
  PERESOURCE *Global; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 *i; // rbx
  __int64 v7; // rax
  _BYTE v8[16]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF

  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)this, a2);
  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v8, Global, 0);
  DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v8, v4);
  for ( i = (__int64 *)*((_QWORD *)this + 29); i != (__int64 *)((char *)this + 232) && i; i = (__int64 *)*i )
  {
    if ( *((_BYTE *)i + 26) )
    {
      v7 = i[4];
      v9 = -1LL;
      v10 = v7;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, __int64 *, _DWORD, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 77) + 8LL)
                                                                                                + 640LL))(
        0LL,
        0LL,
        0LL,
        0LL,
        1,
        &v10,
        0,
        &v9);
    }
  }
  if ( v8[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v8, v5);
}
