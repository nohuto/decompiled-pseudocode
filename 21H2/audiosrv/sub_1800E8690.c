/*
 * XREFs of sub_1800E8690 @ 0x1800E8690
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800E7930 @ 0x1800E7930 (sub_1800E7930.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E8690(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int64 v6; // r9
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 result; // rax
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h]

  v13 = a3;
  v12 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v14 = a1 + 24;
  v10[0] = &v12;
  v10[1] = &v13;
  v7 = *(_QWORD **)(a1 + 72);
  v8 = *(_QWORD **)(a1 + 64);
  try
  {
    while ( v8 != v7 )
      sub_1800E7930((__int64)v10, v8++);
    if ( v5 )
      LeaveCriticalSection(v5);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           612,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v6);
  }
  return result;
}
