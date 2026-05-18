/*
 * XREFs of sub_18000F280 @ 0x18000F280
 * Callers:
 *     sub_18000F1A0 @ 0x18000F1A0 (sub_18000F1A0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F280(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &ISpectreRenderer::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_180140050;
  if ( qword_18021F678 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18021F678 + 8LL))(qword_18021F678);
  *(_QWORD *)a1 = &off_1801400C8;
  *(_QWORD *)(a1 + 16) = off_180140140;
  result = a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 0;
  return result;
}
