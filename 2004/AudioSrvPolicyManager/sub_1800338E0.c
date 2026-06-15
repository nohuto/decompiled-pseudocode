/*
 * XREFs of sub_1800338E0 @ 0x1800338E0
 * Callers:
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180034200 @ 0x180034200 (sub_180034200.c)
 *     sub_1800360E0 @ 0x1800360E0 (sub_1800360E0.c)
 *     sub_1800361E8 @ 0x1800361E8 (sub_1800361E8.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_1800338E0(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v4; // rcx
  HANDLE ProcessHeap; // rax
  LPVOID v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v11; // [rsp+68h] [rbp+10h]

  v2 = a2;
  v3 = a1;
  if ( !*(_BYTE *)(a2 + 76) || !IsValidSid((PSID)(a2 + 8)) )
    return 0;
  if ( *(_BYTE *)(v3 + 16) )
  {
    v4 = *(_QWORD *)(v3 + 24);
    if ( v4 )
    {
      sub_1800361E8(v4, *(_QWORD *)(v3 + 32));
      _o_free(*(_QWORD *)(v3 + 24));
      *(_QWORD *)(v3 + 24) = 0LL;
    }
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 40) = 0LL;
    _o_free(*(_QWORD *)(v3 + 8));
    *(_QWORD *)(v3 + 8) = 0LL;
    *(_BYTE *)(v3 + 16) = 0;
  }
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
  try
  {
    if ( v6 )
      v7 = sub_180034200((_DWORD)v6, v2, 0x10000000, 0, 1);
    else
      v7 = 0LL;
    v11 = v7;
  }
  catch ( ... )
  {
    v3 = a1;
    v7 = v11;
  }
  if ( !v7
    || (v8 = *(_QWORD *)(v3 + 32), v8 >= *(_QWORD *)(v3 + 40)) && !(unsigned __int8)sub_1800360E0(v3 + 24, v8 + 1) )
  {
    sub_18000A174(-2147024882);
  }
  *(_QWORD *)(*(_QWORD *)(v3 + 24) + 8 * v8) = v7;
  ++*(_QWORD *)(v3 + 32);
  _o_free(*(_QWORD *)(v3 + 8));
  *(_QWORD *)(v3 + 8) = 0LL;
  return 1;
}
