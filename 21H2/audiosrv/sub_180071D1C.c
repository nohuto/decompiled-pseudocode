/*
 * XREFs of sub_180071D1C @ 0x180071D1C
 * Callers:
 *     sub_180071FF4 @ 0x180071FF4 (sub_180071FF4.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800DA7C4 @ 0x1800DA7C4 (sub_1800DA7C4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180071D1C(_QWORD *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // edx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_BYTE *)(*a1 + 44LL) )
  {
    v7 = 0LL;
    v2 = sub_1800DA7C4(a1, &v7);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 39;
LABEL_6:
      sub_18004BD84((int)retaddr, v4, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp", v2);
      sub_18000F708(&v7);
      return v3;
    }
    *(_DWORD *)(*(_QWORD *)(*a1 + 48LL) + 36LL) = 1;
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)v7 + 24LL))(
           v7,
           *(_QWORD *)(*a1 + 48LL),
           0LL,
           1LL,
           *a1);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 44;
      goto LABEL_6;
    }
    *(_BYTE *)(*a1 + 44LL) = 1;
    sub_18000F708(&v7);
  }
  return 0LL;
}
