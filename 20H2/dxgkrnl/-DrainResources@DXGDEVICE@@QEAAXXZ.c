/*
 * XREFs of ?DrainResources@DXGDEVICE@@QEAAXXZ @ 0x1C00E37B8
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00E3DD8 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0125D30 (-DestroyResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCA.c)
 */

void __fastcall DXGDEVICE::DrainResources(struct _KTHREAD **this)
{
  struct DXGRESOURCE *v2; // rdx
  __int64 v3; // rax
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, this + 30, 0);
  DXGPUSHLOCK::AcquireExclusive(v5);
  v6 = 2;
  while ( 1 )
  {
    v2 = this[7];
    if ( !v2 )
      break;
    v3 = *((_QWORD *)v2 + 5);
    if ( v3 )
    {
      *(_QWORD *)(v3 + 32) = 0LL;
      v2 = this[7];
    }
    this[7] = (struct _KTHREAD *)*((_QWORD *)v2 + 5);
    DXGDEVICE::DestroyResource((DXGDEVICE *)this, v2, 0LL, 0);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
}
