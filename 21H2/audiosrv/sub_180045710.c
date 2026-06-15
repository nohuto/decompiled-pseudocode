/*
 * XREFs of sub_180045710 @ 0x180045710
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180045710(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rbp
  _QWORD *i; // rsi
  int v8; // eax
  unsigned int v9; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0;
  I_RpcBindingInqLocalClientPID(0LL, &v12);
  if ( v12 == *(_DWORD *)(a1 + 276) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 736));
    v6 = *(_QWORD **)(a1 + 784);
    for ( i = *(_QWORD **)(a1 + 776); i != v6; ++i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 448LL))(*i);
    if ( a1 != -736 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 736));
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 112LL))(a1, a2, a3);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  sub_18004BD84(retaddr, 760LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v8);
  return v9;
}
