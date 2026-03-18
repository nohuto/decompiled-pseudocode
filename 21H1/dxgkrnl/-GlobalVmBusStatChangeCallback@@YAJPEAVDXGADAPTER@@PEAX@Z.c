/*
 * XREFs of ?GlobalVmBusStatChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02365A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x1C02F92D8 (-NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z.c)
 */

__int64 __fastcall GlobalVmBusStatChangeCallback(struct DXGADAPTER *a1, unsigned __int8 *a2)
{
  __int64 v4; // rax
  DXGDODPRESENT *v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  struct DXGADAPTER *v8; // [rsp+28h] [rbp-20h]
  char v9; // [rsp+30h] [rbp-18h]

  if ( !a1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v4 + 24) = 11083LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v8 = a1;
  v9 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  if ( *((_DWORD *)a1 + 50) == 1 && !*((_QWORD *)a1 + 335) )
  {
    v5 = *(DXGDODPRESENT **)(*((_QWORD *)a1 + 334) + 384LL);
    if ( v5 )
      DXGDODPRESENT::NotifyGlobalVmBusStatusChange(v5, *a2);
  }
  if ( v9 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v7);
  return 0LL;
}
