/*
 * XREFs of ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C025524C
 * Callers:
 *     ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C02552D4 (-ReportDeviceResources@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C0255390 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::ReportAllocationState(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  __int64 v6; // r8
  __int64 v7; // rax

  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    v6 = 0LL;
    if ( a3 )
    {
      v7 = *((_QWORD *)a2 + 5);
      if ( v7 )
        v6 = *(_QWORD *)(v7 + 56);
      (*(void (__fastcall **)(DXGDEVICE *, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                           + 592LL))(
        this,
        *((_QWORD *)a2 + 6),
        v6);
    }
    (*(void (__fastcall **)(DXGDEVICE *, struct DXGALLOCATION *, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                 + 640LL)
                                                                                     + 8LL)
                                                                         + 600LL))(
      this,
      a2,
      v6);
  }
}
