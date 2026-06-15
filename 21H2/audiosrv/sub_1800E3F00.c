/*
 * XREFs of sub_1800E3F00 @ 0x1800E3F00
 * Callers:
 *     sub_1800E45D0 @ 0x1800E45D0 (sub_1800E45D0.c)
 *     sub_1800E4790 @ 0x1800E4790 (sub_1800E4790.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180033930 @ 0x180033930 (sub_180033930.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800E3F00(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // rdi
  _BYTE *v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 result; // rax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  v16 = a2;
  v6 = a2;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 152);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 152));
  try
  {
    v9 = *(_BYTE **)(a1 + 200);
    if ( *(_BYTE **)(a1 + 208) == v9 )
    {
      sub_180033930((_QWORD *)(a1 + 192), v9, &v16);
      v6 = v16;
    }
    else
    {
      *(_QWORD *)v9 = v6;
      *(_QWORD *)(a1 + 200) += 8LL;
    }
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v6 + 112LL))(v6, a3, a4);
    if ( v8 )
      LeaveCriticalSection(v8);
    v15 = 0LL;
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 80LL))(a1, &v15);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v15 + 200LL))(
            v15,
            0LL,
            a4,
            0xFFFFFFFFLL);
    v11 = v10;
    if ( v10 >= 0 )
    {
      sub_18000F708(&v15);
      result = 0LL;
    }
    else
    {
      sub_18004BD84((int)retaddr, 580, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v10);
      sub_18000F708(&v15);
      result = v11;
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           584,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v12);
  }
  return result;
}
