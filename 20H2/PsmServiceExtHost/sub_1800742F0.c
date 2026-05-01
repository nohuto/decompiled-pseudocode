/*
 * XREFs of sub_1800742F0 @ 0x1800742F0
 * Callers:
 *     sub_180017A10 @ 0x180017A10 (sub_180017A10.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180035480 @ 0x180035480 (sub_180035480.c)
 *     sub_18006A72C @ 0x18006A72C (sub_18006A72C.c)
 *     sub_18007427C @ 0x18007427C (sub_18007427C.c)
 */

void __fastcall sub_1800742F0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  --*(_DWORD *)(v1 + 80);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v7 = (unsigned int)v5;
    v8 = *(_QWORD *)(a1 + 32);
    sub_18006A72C(v3, byte_18009DB77, v4, v5, (__int64)&v8, (__int64)&v7);
  }
  v6 = *(_DWORD *)(a1 + 1240);
  if ( (v6 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 1240) = v6 & 0xFFFFFFFE;
    sub_180035480((int *)a1);
  }
  if ( !*(_DWORD *)(v1 + 80) && (*(_BYTE *)(v1 + 92) & 1) != 0 )
    sub_18007427C(v1 + 48);
}
