/*
 * XREFs of sub_18006740C @ 0x18006740C
 * Callers:
 *     sub_1800673C4 @ 0x1800673C4 (sub_1800673C4.c)
 * Callees:
 *     sub_1800674C0 @ 0x1800674C0 (sub_1800674C0.c)
 *     sub_18006D134 @ 0x18006D134 (sub_18006D134.c)
 */

__int64 __fastcall sub_18006740C(unsigned __int64 *a1, unsigned __int8 a2, char a3, char a4, __int64 a5)
{
  int v6; // r14d
  int v8; // ebx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  _BYTE v12[16]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int64 v13; // [rsp+80h] [rbp+20h]

  v6 = a2;
  v8 = (int)a1;
  v13 = *a1;
  if ( (*(_DWORD *)a1 & 4) != 0 )
  {
    v9 = *a1;
  }
  else
  {
    v9 = *(_QWORD *)sub_1800674C0(a1, v12);
    BYTE5(v13) = BYTE5(v9);
  }
  if ( a3 )
    v10 = HIDWORD(v9);
  else
    LODWORD(v10) = 0;
  LODWORD(a5) = 0;
  BYTE4(v13) = 3;
  WORD2(a5) = WORD2(v13);
  return sub_18006D134(v8 + 8, (__int64)&a5, v6, a3, v10, a4);
}
