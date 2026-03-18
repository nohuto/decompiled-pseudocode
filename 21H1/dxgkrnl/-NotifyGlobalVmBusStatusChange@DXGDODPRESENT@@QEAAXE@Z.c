/*
 * XREFs of ?NotifyGlobalVmBusStatusChange@DXGDODPRESENT@@QEAAXE@Z @ 0x1C02F92D8
 * Callers:
 *     ?GlobalVmBusStatChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02365A0 (-GlobalVmBusStatChangeCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IssueCommand@BLTQUEUE@@AEAAJXZ @ 0x1C0152558 (-IssueCommand@BLTQUEUE@@AEAAJXZ.c)
 */

void __fastcall DXGDODPRESENT::NotifyGlobalVmBusStatusChange(DXGDODPRESENT *this, char a2)
{
  unsigned int i; // ebx
  BLTQUEUE *v5; // rcx

  for ( i = 0; i < *(_DWORD *)this; ++i )
  {
    v5 = (BLTQUEUE *)(*((_QWORD *)this + 1) + 2904LL * i);
    *((_BYTE *)v5 + 576) = a2;
    *((_BYTE *)v5 + 568) = 1;
    BLTQUEUE::IssueCommand(v5);
  }
}
