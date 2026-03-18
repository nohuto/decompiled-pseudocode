/*
 * XREFs of ?ipfdDevMaxGet@XDCOBJ@@QEAAJXZ @ 0x1C02BB2A8
 * Callers:
 *     ?ipfdDevMax@XDCOBJ@@QEAAHXZ @ 0x1C02BB280 (-ipfdDevMax@XDCOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C02A6000 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall XDCOBJ::ipfdDevMaxGet(XDCOBJ *this)
{
  int v2; // edi
  __int64 v3; // rbx
  int v4; // eax
  _QWORD *v5; // rcx
  __int64 DeviceHdev; // rax
  __int64 (__fastcall *v7)(_QWORD, __int64, _QWORD); // rax
  struct _RECTL v9; // [rsp+38h] [rbp-9h] BYREF
  __int128 v10; // [rsp+48h] [rbp+7h] BYREF
  __int64 v11; // [rsp+58h] [rbp+17h]
  int v12; // [rsp+60h] [rbp+1Fh]
  _QWORD v13[2]; // [rsp+68h] [rbp+27h] BYREF
  __int16 v14; // [rsp+78h] [rbp+37h]
  __int64 v15; // [rsp+80h] [rbp+3Fh]
  __int64 v16; // [rsp+88h] [rbp+47h]

  v2 = 0;
  v3 = *(_QWORD *)(*(_QWORD *)this + 48LL);
  v13[1] = 0LL;
  v14 = 256;
  v10 = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  v13[0] = 0LL;
  v12 = 1;
  v4 = *(_DWORD *)(v3 + 40);
  if ( (v4 & 1) != 0 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(v3 + 48);
    v11 = v3;
    GreAcquireSemaphore(v10);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v10, 11LL);
    v4 = *(_DWORD *)(v3 + 40);
  }
  if ( (v4 & 0x20000) != 0 )
  {
    v5 = *(_QWORD **)(*(_QWORD *)this + 48LL);
    v9 = *(struct _RECTL *)(*(_QWORD *)this + 1032LL);
    DeviceHdev = hdevFindDeviceHdev(v5, &v9, 0LL);
    if ( DeviceHdev )
      v3 = DeviceHdev;
  }
  v7 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 3128);
  if ( v7 )
  {
    v2 = v7(*(_QWORD *)(v3 + 1800), 1LL, 0LL);
    if ( v2 < 0 )
      v2 = 0;
  }
  *(_WORD *)(*(_QWORD *)this + 2072LL) = v2;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v10);
  if ( v13[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v13);
  return (unsigned int)v2;
}
