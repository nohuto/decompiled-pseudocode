/*
 * XREFs of ?Create@DXGCHANNELENDPOINTPROXY@@SAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAVDXGVMBUSCHANNEL@@PEAPEAV1@@Z @ 0x1C02AE1B0
 * Callers:
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C02AF05C (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::Create(
        int a1,
        struct IDXGCHANNELSUBSCRIBER *a2,
        struct DXGVMBUSCHANNEL *a3,
        struct DXGCHANNELENDPOINTPROXY **a4)
{
  unsigned int v8; // ebx
  _DWORD *v9; // rax
  _DWORD *v10; // rcx

  v8 = -1073741823;
  v9 = operator new[](0x90uLL, 0x4B677844u, PagedPool);
  v10 = v9;
  if ( v9 )
  {
    v9[8] = 1;
    *(_QWORD *)v9 = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGCHANNEL'};
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 1) = &DXGCHANNELENDPOINTPROXY::`vftable'{for `IDXGEXPANDHANDLETABLECALLBACK'};
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_QWORD *)v9 + 11) = 0LL;
    v9[24] = 0;
    v9[25] = 82;
    v9[26] = 53;
    v9[28] = 0x2000;
    *((_QWORD *)v9 + 15) = 0LL;
    *((_QWORD *)v9 + 16) = 0LL;
    *((_QWORD *)v9 + 17) = 0LL;
    *((_QWORD *)v9 + 3) = v9 + 4;
    *((_QWORD *)v9 + 2) = v9 + 4;
  }
  else
  {
    v10 = 0LL;
  }
  if ( a2 )
  {
    v10[9] = a1;
    v8 = 0;
    *((_QWORD *)v10 + 16) = a2;
    *((_QWORD *)v10 + 15) = a3;
    *a4 = (struct DXGCHANNELENDPOINTPROXY *)v10;
  }
  else if ( v10 )
  {
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  return v8;
}
