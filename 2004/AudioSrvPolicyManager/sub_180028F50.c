/*
 * XREFs of sub_180028F50 @ 0x180028F50
 * Callers:
 *     sub_18001F4C8 @ 0x18001F4C8 (sub_18001F4C8.c)
 * Callees:
 *     sub_1800212B4 @ 0x1800212B4 (sub_1800212B4.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_180028E74 @ 0x180028E74 (sub_180028E74.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180028F50(DWORD SessionId, __int64 a2)
{
  unsigned int v4; // edi
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  int v6; // eax
  _QWORD *v7; // rbp
  __int64 **v8; // rbx
  _QWORD *i; // rax
  __int64 *v10; // rax
  __int64 **v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  _QWORD *v14; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h]

  v13 = a2;
  v4 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v15 = v5;
  v6 = sub_18002880C(SessionId, 0, 0LL, &v14);
  if ( v6 )
  {
    v4 = (unsigned __int16)v6 | 0x80070000;
    if ( v6 <= 0 )
      v4 = v6;
  }
  else
  {
    v7 = v14;
    v8 = (__int64 **)(v14 + 13);
    for ( i = (_QWORD *)v14[13]; i && i[2] != a2; i = (_QWORD *)*i )
      ;
    if ( !i )
    {
      v10 = sub_1800212B4((__int64)(v14 + 13), &v13, v14[14], 0LL);
      v11 = (__int64 **)v8[1];
      if ( v11 )
        *v11 = v10;
      else
        *v8 = v10;
      v8[1] = v10;
    }
    sub_180028E74(v7);
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return v4;
}
