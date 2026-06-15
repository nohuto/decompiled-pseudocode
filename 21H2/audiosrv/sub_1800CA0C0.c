/*
 * XREFs of sub_1800CA0C0 @ 0x1800CA0C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 */

__int64 __fastcall sub_1800CA0C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD820(*((_QWORD *)off_18019C348 + 2), 0x62u, (__int64)&unk_18015DEF0, a1, 0LL);
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 488) + 40LL))(
         *(_QWORD *)(a1 + 488),
         a2,
         a3);
  v7 = v6;
  if ( v6 < 0 )
    sub_18005E8F8((__int64)"CAudioSession::PropertyStoreGetValue", 5173, v6);
  return v7;
}
