/*
 * XREFs of sub_1801060DC @ 0x1801060DC
 * Callers:
 *     sub_180047720 @ 0x180047720 (sub_180047720.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180105D90 @ 0x180105D90 (sub_180105D90.c)
 *     sub_180107BC8 @ 0x180107BC8 (sub_180107BC8.c)
 *     sub_1801083B4 @ 0x1801083B4 (sub_1801083B4.c)
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010B268 @ 0x18010B268 (sub_18010B268.c)
 *     sub_18010B9A0 @ 0x18010B9A0 (sub_18010B9A0.c)
 */

__int64 __fastcall sub_1801060DC(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  int v11; // ebx
  int v12; // edx
  __int64 v14; // rsi
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v16; // [rsp+70h] [rbp+8h] BYREF

  sub_18010A130("Sarm::CSpatialAudioResourceManager::AddStream", 103LL);
  v10 = sub_180105D90(a1 + 232, a2, &v16);
  if ( !v10 )
  {
    v11 = -2147024882;
    v12 = 107;
LABEL_3:
    sub_18004BD84(
      (int)retaddr,
      v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
      v11);
    return (unsigned int)v11;
  }
  v14 = v16;
  v11 = sub_18010B268(v10, a2, a3, a4, v16, a5, a6);
  if ( v11 < 0 )
  {
    v12 = 109;
    goto LABEL_3;
  }
  v11 = sub_180107BC8(a1, v10);
  if ( v11 < 0 )
  {
    sub_18010B9A0(v10);
    if ( v14 )
      sub_1801083B4(a1 + 232, v14);
    v12 = 116;
    goto LABEL_3;
  }
  return 0LL;
}
