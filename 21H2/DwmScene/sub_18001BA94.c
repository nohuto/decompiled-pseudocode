/*
 * XREFs of sub_18001BA94 @ 0x18001BA94
 * Callers:
 *     sub_180020020 @ 0x180020020 (sub_180020020.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 * Callees:
 *     sub_18001B1F0 @ 0x18001B1F0 (sub_18001B1F0.c)
 *     sub_18001FD3C @ 0x18001FD3C (sub_18001FD3C.c)
 *     sub_180021364 @ 0x180021364 (sub_180021364.c)
 */

bool __fastcall sub_18001BA94(int a1, int a2, unsigned __int8 a3, int a4, __int64 a5)
{
  int v5; // ebp
  volatile __int32 *v7; // rdi
  int v10; // eax
  unsigned int v12; // ebx
  bool v13; // si
  char v14; // dl
  int v15; // [rsp+68h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&unk_18021FA68;
  if ( !a4 )
    v7 = (volatile __int32 *)&unk_18021FA70;
  v10 = *v7 & 2;
  if ( v10 && (*v7 & 1) == 0 )
    return 0;
  if ( qword_18021F848 || v10 )
    return (unsigned int)sub_180021364(a1, a2, a3, a4, 0LL, a5) != 0;
  v12 = dword_18020F03C;
  v15 = 1;
  if ( !dword_18020F03C )
    v12 = sub_18001B1F0((__int64)&byte_18020F020);
  v13 = (unsigned int)sub_180021364(a1, a2, v5, a4, (__int64)&v15, a5) != 0;
  v14 = _InterlockedExchange(v7, (v15 != 0) + 6);
  if ( !v15 && (v14 & 4) == 0 )
    sub_18001FD3C(&byte_18020F020, v7, 0LL, v12);
  return v13;
}
