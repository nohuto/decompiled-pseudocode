/*
 * XREFs of sub_1800D2240 @ 0x1800D2240
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 */

__int64 __fastcall sub_1800D2240(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, void *, __int64))
{
  __int64 v2; // rbx
  int v5; // eax
  int v6; // ebx
  int v7; // edx
  int v9; // eax
  int v10; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1 + 176;
  *(_DWORD *)(a1 + 132) = 2;
  sub_1800CB144((__int64 *)(a1 + 176));
  v5 = (**a2)(a2, &unk_18015DEA8, v2);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_18004BD84((int)retaddr, 1249, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h", v5);
    v7 = 719;
LABEL_3:
    sub_18004BD84((int)retaddr, v7, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", v6);
    return (unsigned int)v6;
  }
  sub_1800CB144((__int64 *)(a1 + 184));
  v9 = (**a2)(a2, &unk_18015DE98, a1 + 184);
  v6 = v9;
  if ( v9 < 0 )
  {
    sub_18004BD84((int)retaddr, 1249, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h", v9);
    v7 = 720;
    goto LABEL_3;
  }
  sub_1800CB144((__int64 *)(a1 + 192));
  v10 = (**a2)(a2, &unk_18015DE88, a1 + 192);
  v6 = v10;
  if ( v10 < 0 )
  {
    sub_18004BD84((int)retaddr, 1249, (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h", v10);
    v7 = 721;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 192) + 32LL))(*(_QWORD *)(a1 + 192), a1 + 96);
  if ( v6 < 0 )
  {
    v7 = 723;
    goto LABEL_3;
  }
  return 0LL;
}
