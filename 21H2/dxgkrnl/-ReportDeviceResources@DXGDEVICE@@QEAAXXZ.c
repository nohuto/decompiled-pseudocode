/*
 * XREFs of ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C02563BC
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C02564B8 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C0256334 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::ReportDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *v2; // rbx
  bool v3; // r14
  BOOL v4; // esi
  struct DXGALLOCATION *v5; // rdi
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v7[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, this + 30, 0);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v2 = this[7];
  v9 = 2;
  v3 = (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() != 0;
  while ( v2 )
  {
    v4 = (*((_DWORD *)v2 + 1) & 1) == 0 || (*(_DWORD *)(*((_QWORD *)v2 + 7) + 12LL) & 2) == 0;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct _KTHREAD *)((char *)v2 + 80), 0);
    if ( v3 )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    v5 = (struct DXGALLOCATION *)*((_QWORD *)v2 + 3);
    while ( v5 )
    {
      DXGDEVICE::ReportAllocationState((DXGDEVICE *)this, v5, v4);
      v5 = (struct DXGALLOCATION *)*((_QWORD *)v5 + 8);
      if ( (*((_DWORD *)v2 + 1) & 1) != 0 )
        *(_DWORD *)(*((_QWORD *)v2 + 7) + 12LL) |= 2u;
    }
    v2 = (struct _KTHREAD *)*((_QWORD *)v2 + 5);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
