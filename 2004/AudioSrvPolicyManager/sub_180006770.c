/*
 * XREFs of sub_180006770 @ 0x180006770
 * Callers:
 *     sub_180007520 @ 0x180007520 (sub_180007520.c)
 *     sub_1800077B0 @ 0x1800077B0 (sub_1800077B0.c)
 *     sub_180007840 @ 0x180007840 (sub_180007840.c)
 *     sub_180008350 @ 0x180008350 (sub_180008350.c)
 *     sub_180008440 @ 0x180008440 (sub_180008440.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800145B0 @ 0x1800145B0 (sub_1800145B0.c)
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180006770(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  __int64 v7; // rdi
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v9[0] = 0LL;
  v4 = sub_18001B7E4(qword_18004FE78, a2, v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = sub_1800145B0(v9[0], &qword_180042820, a3);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 305;
  }
  else
  {
    v6 = 304;
  }
  sub_180003AB0(
    retaddr,
    v6,
    (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\windowspolicymanager.cpp",
    v4);
LABEL_7:
  v7 = v9[0];
  if ( v9[0] && _InterlockedExchangeAdd((volatile signed __int32 *)(v9[0] + 8LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, 1LL);
  }
  return v5;
}
