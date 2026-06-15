/*
 * XREFs of sub_180119090 @ 0x180119090
 * Callers:
 *     sub_18011FED0 @ 0x18011FED0 (sub_18011FED0.c)
 * Callees:
 *     sub_18001F7C0 @ 0x18001F7C0 (sub_18001F7C0.c)
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_180028F24 @ 0x180028F24 (sub_180028F24.c)
 *     sub_180047DDC @ 0x180047DDC (sub_180047DDC.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180119090(int *a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // edi
  void *v8; // rbx
  int v9; // edx
  BOOL v10; // edi
  __int64 *v11; // rax
  int v12; // eax
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF

  pv = 0LL;
  v6 = sub_180047DDC(*(_QWORD **)a1, 0, 0, *(_DWORD *)(a2 + 48), &pv);
  v7 = v6;
  v8 = pv;
  if ( v6 >= 0 )
  {
    v10 = *(_WORD *)pv != 0xFFFE || !sub_18001F7C0((__int16 *)pv);
    v11 = (__int64 *)sub_1800234A0((unsigned __int64 *)(*(_QWORD *)a1 + 152LL), a1[6]);
    v12 = sub_180022EE0(v11, &xmmword_18015B810);
    v6 = sub_180028F24(a2, a3, 1u, (__int64)(a1 + 2), v10, v12 != -1);
    v7 = v6;
    if ( v6 >= 0 )
    {
      *(_DWORD *)(a3 + 16) = 2;
      v7 = 0;
      goto LABEL_11;
    }
    v9 = 1444;
  }
  else
  {
    v9 = 1438;
  }
  sub_18004BD84(
    (int)retaddr,
    v9,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v6);
LABEL_11:
  CoTaskMemFree(v8);
  return v7;
}
