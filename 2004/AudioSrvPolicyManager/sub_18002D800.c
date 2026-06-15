/*
 * XREFs of sub_18002D800 @ 0x18002D800
 * Callers:
 *     sub_180027B9C @ 0x180027B9C (sub_180027B9C.c)
 * Callees:
 *     sub_1800050D0 @ 0x1800050D0 (sub_1800050D0.c)
 */

__int64 __fastcall sub_18002D800(__int64 a1)
{
  _QWORD *v2; // rcx

  *(_DWORD *)(a1 + 496) = 0;
  *(_QWORD *)a1 = off_18003F4D8;
  v2 = (_QWORD *)(a1 + 504);
  *(_QWORD *)(a1 + 512) = 0LL;
  *v2 = 0LL;
  RtlSubscribeWnfStateChangeNotification(v2, 0x28A182CA3BC1075LL, 0LL, sub_18002DC30, a1, 0LL, 0, 0);
  RtlSubscribeWnfStateChangeNotification(a1 + 512, 0x28A182CA3BC0875LL, 0LL, sub_18002DCA0, a1, 0LL, 0, 0);
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 5u )
  {
    sub_1800050D0(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_1800451C8);
  }
  return a1;
}
