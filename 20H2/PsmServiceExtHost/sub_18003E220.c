/*
 * XREFs of sub_18003E220 @ 0x18003E220
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B0F8 @ 0x18002B0F8 (sub_18002B0F8.c)
 *     sub_18003C514 @ 0x18003C514 (sub_18003C514.c)
 */

__int64 __fastcall sub_18003E220(__int64 a1, __int64 a2, int *a3)
{
  int v3; // edi
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a3;
  v4 = a1 - 64;
  if ( !*a3 && *(_DWORD *)(v4 + 88) )
  {
    TpSetTimer(*(_QWORD *)(v4 + 144), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v4 + 144), 1LL);
    sub_18003C514(v4, 0);
    *(_DWORD *)(v4 + 168) = 0;
    *(_OWORD *)(v4 + 152) = 0LL;
    sub_18002B0F8(v4 + 96, 24);
    *(_DWORD *)(v4 + 188) = 0;
    *(_OWORD *)(v4 + 172) = 0LL;
    sub_18002B0F8(v4 + 120, 25);
    v5 = *(_QWORD *)(v4 + 144);
    v7 = -3000000000LL;
    result = TpSetTimer(v5, &v7, 0LL, 2000LL);
  }
  *(_DWORD *)(v4 + 88) = v3;
  return result;
}
