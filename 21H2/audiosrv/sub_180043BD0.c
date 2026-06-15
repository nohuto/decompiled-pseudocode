/*
 * XREFs of sub_180043BD0 @ 0x180043BD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB5A0 @ 0x1800CB5A0 (sub_1800CB5A0.c)
 *     sub_1800CD21C @ 0x1800CD21C (sub_1800CD21C.c)
 *     sub_1800CD434 @ 0x1800CD434 (sub_1800CD434.c)
 */

__int64 __fastcall sub_180043BD0(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // esi
  __int64 v11; // rcx
  __int64 v13; // rcx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CD21C(*((_QWORD *)off_18019C348 + 2), 11, (unsigned int)&unk_18015DF00, 0, 0LL);
  }
  *(_DWORD *)(a1 + 80) = a2;
  *(_QWORD *)(a1 + 72) = a4;
  v8 = a4;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800CD434(*((_QWORD *)off_18019C348 + 2), 12, a3, a1, a4, 0LL);
    v8 = *(_QWORD *)(a1 + 72);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 72) + 224LL))(*(_QWORD *)(a1 + 72), a1);
  if ( v10 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800CB5A0(*((_QWORD *)off_18019C348 + 2), 13LL, &unk_18015DF00, a1, a4);
    }
    v13 = *(_QWORD *)(a1 + 72);
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      *(_QWORD *)(a1 + 72) = 0LL;
    }
  }
  else
  {
    v11 = *(_QWORD *)(a1 + 72);
    LOBYTE(v9) = a3;
    *(_BYTE *)(a1 + 84) = a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 320LL))(v11, v9);
  }
  if ( v10 < 0 )
    sub_18005E8F8("CServerAudioSessionControl::FinishConstruction", 125LL, (unsigned int)v10);
  return (unsigned int)v10;
}
