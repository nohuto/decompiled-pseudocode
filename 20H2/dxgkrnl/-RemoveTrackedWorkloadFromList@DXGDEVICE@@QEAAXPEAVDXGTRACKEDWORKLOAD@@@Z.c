/*
 * XREFs of ?RemoveTrackedWorkloadFromList@DXGDEVICE@@QEAAXPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C02BBC84
 * Callers:
 *     ?DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ @ 0x1C02BB258 (-DestroyTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::RemoveTrackedWorkloadFromList(struct _KTHREAD **this, struct DXGTRACKEDWORKLOAD *a2)
{
  struct DXGTRACKEDWORKLOAD **v3; // rcx
  struct DXGTRACKEDWORKLOAD **v4; // rax
  _BYTE v5[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, this + 68, 0);
  DXGPUSHLOCK::AcquireExclusive(v6);
  v3 = *(struct DXGTRACKEDWORKLOAD ***)a2;
  v7 = 2;
  if ( v3[1] != a2 || (v4 = (struct DXGTRACKEDWORKLOAD **)*((_QWORD *)a2 + 1), *v4 != a2) )
    __fastfail(3u);
  *v4 = (struct DXGTRACKEDWORKLOAD *)v3;
  v3[1] = (struct DXGTRACKEDWORKLOAD *)v4;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
