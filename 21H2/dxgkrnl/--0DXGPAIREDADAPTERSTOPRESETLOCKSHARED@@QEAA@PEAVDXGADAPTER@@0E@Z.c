/*
 * XREFs of ??0DXGPAIREDADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@0E@Z @ 0x1C002B5A4
 * Callers:
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1C0177070 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0178000 (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018C4C0 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 */

DXGPAIREDADAPTERSTOPRESETLOCKSHARED *__fastcall DXGPAIREDADAPTERSTOPRESETLOCKSHARED::DXGPAIREDADAPTERSTOPRESETLOCKSHARED(
        DXGPAIREDADAPTERSTOPRESETLOCKSHARED *this,
        struct DXGADAPTER *a2,
        struct DXGADAPTER *a3)
{
  char *v4; // rcx
  struct DXGADAPTER *v5; // rax
  char v6; // al
  DXGPAIREDADAPTERSTOPRESETLOCKSHARED *result; // rax

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
  v4 = (char *)this + 24;
  v5 = a2;
  if ( a3 )
    v5 = a3;
  v4[16] = 0;
  *((_QWORD *)v4 + 1) = v5;
  if ( !a3 || (v6 = 0, a3 == a2) )
    v6 = 1;
  *((_BYTE *)this + 48) = v6;
  *((_BYTE *)this + 49) = 0;
  if ( !v6 )
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v4);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire(this);
  result = this;
  *((_BYTE *)this + 49) = 1;
  return result;
}
