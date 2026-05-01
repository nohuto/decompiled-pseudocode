/*
 * XREFs of sub_180036450 @ 0x180036450
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B0F8 @ 0x18002B0F8 (sub_18002B0F8.c)
 *     sub_1800368C0 @ 0x1800368C0 (sub_1800368C0.c)
 */

__int64 __fastcall sub_180036450(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 - 64;
  if ( !*a3 )
  {
    TpSetTimer(*(_QWORD *)(v3 + 136), 0LL, 0LL, 0LL);
    TpWaitForTimer(*(_QWORD *)(v3 + 136), 1LL);
    sub_1800368C0(v3, 0LL);
    *(_DWORD *)(v3 + 160) = 0;
    *(_OWORD *)(v3 + 144) = 0LL;
    sub_18002B0F8(v3 + 88, 24);
    *(_DWORD *)(v3 + 180) = 0;
    *(_OWORD *)(v3 + 164) = 0LL;
    sub_18002B0F8(v3 + 112, 25);
    v4 = *(_QWORD *)(v3 + 136);
    v6 = -3000000000LL;
    return TpSetTimer(v4, &v6, 0LL, 2000LL);
  }
  return result;
}
