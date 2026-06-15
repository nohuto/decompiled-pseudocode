/*
 * XREFs of sub_18011F31C @ 0x18011F31C
 * Callers:
 *     sub_18011F15C @ 0x18011F15C (sub_18011F15C.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011F31C(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // eax
  int v7; // edx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    v10 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v5 + 24LL))(v5, &unk_180173700, 1LL);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v10 + 40LL))(v10, *(_QWORD *)(a1 + 16), a2);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v4 = 0;
        goto LABEL_9;
      }
      v7 = 7611;
    }
    else
    {
      v7 = 7609;
    }
    sub_18004BD84(
      (int)retaddr,
      v7,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v6);
LABEL_9:
    sub_18000F708(&v10);
    return v4;
  }
  v4 = -2147024809;
  sub_18004BD84(
    (int)retaddr,
    7606,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    -2147024809);
  return v4;
}
