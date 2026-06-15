/*
 * XREFs of sub_180036724 @ 0x180036724
 * Callers:
 *     sub_180036510 @ 0x180036510 (sub_180036510.c)
 * Callees:
 *     sub_180046620 @ 0x180046620 (sub_180046620.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_180036724(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax

  *a1 = 0LL;
  v4 = sub_18006A18C(56LL, &unk_18019F848);
  v5 = v4;
  if ( v4 )
  {
    v6 = qword_18019E418;
    *(_DWORD *)(v4 + 12) = 1;
    *(_QWORD *)v4 = &off_180148158;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v7 = *a2;
    *a2 = 0LL;
    *(_QWORD *)(v5 + 16) = v7;
    *(_QWORD *)(v5 + 24) = a2[1];
    *(_QWORD *)(v5 + 32) = a2[2];
    *(_QWORD *)(v5 + 40) = a2[3];
    *(_BYTE *)(v5 + 48) = *((_BYTE *)a2 + 32);
    *(_QWORD *)v5 = &off_180148130;
    if ( *a1 )
      sub_180046620();
    *a1 = v5;
  }
  return a1;
}
