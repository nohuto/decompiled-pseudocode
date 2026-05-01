/*
 * XREFs of sub_18007F818 @ 0x18007F818
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_1800197C0 @ 0x1800197C0 (sub_1800197C0.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002C364 @ 0x18002C364 (sub_18002C364.c)
 */

void sub_18007F818()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  void *v4; // [rsp+50h] [rbp+18h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 )
  {
    if ( sub_180010470((__int64)&dword_1800B3218, 64LL) )
    {
      v3 = *(_QWORD *)(v2 - 32);
      v4 = (void *)(v2 + 24);
      sub_18002C364(v0, (int)&unk_1800A187A, v1, v2, &v4, (__int64)&v3);
    }
  }
}
