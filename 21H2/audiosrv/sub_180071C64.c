/*
 * XREFs of sub_180071C64 @ 0x180071C64
 * Callers:
 *     sub_180072014 @ 0x180072014 (sub_180072014.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DA7C4 @ 0x1800DA7C4 (sub_1800DA7C4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180071C64(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_BYTE *)(*(_QWORD *)a1 + 44LL) )
  {
    v6 = 0LL;
    v2 = sub_1800DA7C4(a1, &v6);
    v3 = v2;
    if ( v2 < 0 )
    {
      sub_18004BD84((int)retaddr, 58, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp", v2);
      sub_18000F708(&v6);
      return v3;
    }
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 48LL) + 36LL) = 0;
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v6 + 24LL))(
      v6,
      *(_QWORD *)(*(_QWORD *)a1 + 48LL),
      1LL);
    *(_BYTE *)(*(_QWORD *)a1 + 44LL) = 0;
    sub_18000F708(&v6);
  }
  return 0LL;
}
