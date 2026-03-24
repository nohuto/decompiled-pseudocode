/*
 * XREFs of ?InitializePowerManagement@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0213300
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C01862B0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00081AC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z @ 0x1C02E10D0 (-SetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJII@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::InitializePowerManagement(ADAPTER_DISPLAY *this)
{
  __int64 v1; // r15
  int v2; // ebx
  unsigned int v3; // esi
  unsigned int v5; // r14d
  __int64 v6; // rbp
  __int64 v7; // rax
  VIDPN_MGR *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v3 = 0;
  v5 = *(_DWORD *)(v1 + 2944);
  if ( v5 )
  {
    v6 = 0LL;
    do
    {
      v7 = *(_QWORD *)(v1 + 2800);
      if ( *(_DWORD *)(v7 + v6 + 208) == 1 )
      {
        v8 = (VIDPN_MGR *)*((_QWORD *)this + 11);
        v9 = *(_DWORD *)(v7 + v6 + 212);
        EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v12, (__int64)v8);
        v2 = VIDPN_MGR::SetTargetPowerComponentIndex(v8, v9, v3);
        DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v12 + 40), v10);
        if ( v2 < 0 )
          break;
      }
      ++v3;
      v6 += 520LL;
    }
    while ( v3 < v5 );
  }
  return (unsigned int)v2;
}
