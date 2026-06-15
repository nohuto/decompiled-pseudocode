/*
 * XREFs of sub_180052690 @ 0x180052690
 * Callers:
 *     sub_180052650 @ 0x180052650 (sub_180052650.c)
 *     sub_1800D6FD0 @ 0x1800D6FD0 (sub_1800D6FD0.c)
 *     sub_1800D7040 @ 0x1800D7040 (sub_1800D7040.c)
 * Callees:
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180052690(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        LPVOID *a5,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // edx
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v10 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
          pv,
          a2,
          0LL,
          0LL,
          &v15);
  v11 = v10;
  if ( v10 < 0 )
  {
    v13 = 1941;
  }
  else
  {
    v10 = sub_180028AD0(v15, a3, a4, a5, a6, a7, a8);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v11 = 0;
      goto LABEL_4;
    }
    v13 = 1943;
  }
  sub_18004BD84((int)retaddr, v13, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v10);
LABEL_4:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v11;
}
