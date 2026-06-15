/*
 * XREFs of sub_180011940 @ 0x180011940
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_180011940(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rbx
  int v6; // edi

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
  if ( v5 )
  {
    v5[1] = Context;
    *v5 = off_18003F448;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = v5 == 0LL ? 0x8007000E : 0;
  if ( v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    if ( v6 >= 0 )
      v5 = 0LL;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  }
  else
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Bu, &stru_180045198, v6);
    }
    sub_180005724("CGoodFaithPLMExemptionExpiredWorkItem::CreateInstance", 738, v6);
  }
  if ( v6 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x16u, &stru_180043390, v6);
    }
    sub_180005724("CApplication::GoodFaithPLMExemptionTimerExpiredCallback", 1389, v6);
  }
}
