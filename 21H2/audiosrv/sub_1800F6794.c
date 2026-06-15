/*
 * XREFs of sub_1800F6794 @ 0x1800F6794
 * Callers:
 *     sub_180052FF4 @ 0x180052FF4 (sub_180052FF4.c)
 *     sub_1800F61F8 @ 0x1800F61F8 (sub_1800F61F8.c)
 *     sub_1800F6338 @ 0x1800F6338 (sub_1800F6338.c)
 *     sub_1800F6478 @ 0x1800F6478 (sub_1800F6478.c)
 *     sub_1800F665C @ 0x1800F665C (sub_1800F665C.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800F6840 @ 0x1800F6840 (sub_1800F6840.c)
 */

__int64 __fastcall sub_1800F6794(__int64 a1, __int64 a2)
{
  const wchar_t *v2; // rax
  int v3; // r8d
  int v4; // ebx
  int v5; // edx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( a2 == a1 + 232 )
  {
    v2 = L"Render";
    v3 = 600;
  }
  else if ( a2 == a1 + 832 )
  {
    v2 = L"Capture";
    v3 = 400;
  }
  else
  {
    if ( a2 != a1 + 1232 )
    {
      v4 = -2147024809;
      v5 = 493;
      goto LABEL_11;
    }
    v2 = L"UnknownStream";
    v3 = 200;
  }
  v4 = sub_1800F6840(a1, v2, 3LL, a2, v3);
  if ( v4 >= 0 )
    return 0LL;
  v5 = 496;
LABEL_11:
  sub_18004BD84((int)retaddr, v5, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v4);
  return (unsigned int)v4;
}
