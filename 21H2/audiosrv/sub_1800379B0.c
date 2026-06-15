/*
 * XREFs of sub_1800379B0 @ 0x1800379B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 */

__int64 __fastcall sub_1800379B0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  v8 = -2147023537;
  if ( a4 || !a3 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 24LL, &unk_18016DE00, a1);
    }
    v9 = a1[31];
    if ( v9 )
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v9 + 64LL))(v9, a2, a3, a4);
    v10 = a1[33];
    if ( v10 )
    {
      if ( v8 >= 0 )
        v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v10 + 64LL))(v10, a2, a3, a4);
    }
    v11 = a1[32];
    if ( v11 )
    {
      if ( v8 < 0 )
        goto LABEL_18;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v11 + 88LL))(v11, a2, a3, a4);
    }
    if ( v8 >= 0 )
      return (unsigned int)v8;
LABEL_18:
    sub_18005E8F8("CVolumeStrip::InitializeAPOs", 643LL, (unsigned int)v8);
    return (unsigned int)v8;
  }
  return 2147500035LL;
}
