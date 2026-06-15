/*
 * XREFs of sub_180012CC0 @ 0x180012CC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_180018220 @ 0x180018220 (sub_180018220.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

void __fastcall sub_180012CC0(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v5; // rax
  __int64 v6; // rcx
  void *v7; // rbx
  int v8; // edi

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 8uLL);
  v7 = v5;
  if ( v5 )
    *v5 = Context;
  else
    v7 = 0LL;
  if ( v7 )
  {
    v8 = sub_180018220(v6, v7);
    if ( v8 >= 0 )
      v7 = 0LL;
  }
  else
  {
    v8 = -2147024882;
  }
  sub_180039D98(v7);
  if ( v8 < 0 )
  {
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x22u, &stru_180043390, v8);
    }
    sub_180005724("CApplication::BCMStartupGracePeriodExpiredCallback", 2359, v8);
  }
}
