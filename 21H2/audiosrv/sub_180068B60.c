/*
 * XREFs of sub_180068B60 @ 0x180068B60
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_180068B60(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 18LL, &unk_18016DA10, a1);
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 48) + 112LL))(
         *(_QWORD *)(a1 + 48),
         &unk_18015C6A8,
         a1);
  v3 = v2;
  if ( v2 < 0 )
    sub_18005E8F8((__int64)"CMuteHardware::RegisterForNotifications", 470, v2);
  else
    *(_DWORD *)(a1 + 64) = 1;
  return v3;
}
