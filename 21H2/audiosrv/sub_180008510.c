/*
 * XREFs of sub_180008510 @ 0x180008510
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

__int64 __fastcall sub_180008510(volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // rbx
  unsigned __int32 v3; // edi
  _BYTE pv[64]; // [rsp+30h] [rbp-48h] BYREF
  WINBOOL v6; // [rsp+80h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+88h] [rbp+10h] BYREF

  v1 = *a1;
  v7 = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v7 = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  sub_1800085F0(pv);
  v3 = _InterlockedDecrement(v1 + 6);
  if ( !v3 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 104LL))(v1);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v1 + 16LL))(v1);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 40LL, &unk_18015DF00, v3);
  }
  *a1 = 0LL;
  sub_18000F690(pv);
  return 0LL;
}
