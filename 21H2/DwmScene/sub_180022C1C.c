/*
 * XREFs of sub_180022C1C @ 0x180022C1C
 * Callers:
 *     sub_18001A470 @ 0x18001A470 (sub_18001A470.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000BE50 (_guard_check_icall_nop.c)
 *     sub_18001D3D4 @ 0x18001D3D4 (sub_18001D3D4.c)
 *     sub_180020ED0 @ 0x180020ED0 (sub_180020ED0.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180022C1C(__int64 a1)
{
  signed __int32 v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rdi

  *(_QWORD *)a1 = &off_180140FB8;
  LOBYTE(v2) = sub_180020ED0(dword_18021FA78);
  if ( (_BYTE)v2 )
    LOBYTE(v2) = (unsigned __int8)sub_18001D3D4(qword_18021F908, a1);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    LOBYTE(v2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    LOBYTE(v2) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(volatile signed __int32 **)(a1 + 24);
  if ( v5 )
  {
    v2 = _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF);
    if ( v2 == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      v2 = _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
      if ( v2 == 1 )
        LOBYTE(v2) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return v2;
}
