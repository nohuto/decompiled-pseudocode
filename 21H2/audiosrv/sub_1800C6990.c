/*
 * XREFs of sub_1800C6990 @ 0x1800C6990
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002E28 @ 0x180002E28 (sub_180002E28.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800C85C8 @ 0x1800C85C8 (sub_1800C85C8.c)
 */

__int64 __fastcall sub_1800C6990(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int128 v5; // [rsp+30h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+60h] [rbp+18h] BYREF

  pv = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x24u, (__int64)&unk_18015DEF0);
  }
  v6 = 0LL;
  v2 = sub_180002E28((__int64 *)(a1 + 656));
  v3 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)::pv + 24LL))(
         ::pv,
         v2,
         0LL,
         0LL,
         &v6);
  if ( v3 < 0
    || (v5 = xmmword_18015B730, v3 = sub_180020090(v6, 0, (__int64 *)&v5, &pv), v3 < 0)
    || (v3 = sub_1800C85C8(a1, 0LL), v3 < 0) )
  {
    sub_18005E8F8((__int64)"CPerEndpointVolumeAudioSession::CompleteConstruction", 1812, v3);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  CoTaskMemFree(pv);
  return (unsigned int)v3;
}
