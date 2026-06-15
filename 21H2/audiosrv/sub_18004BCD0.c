/*
 * XREFs of sub_18004BCD0 @ 0x18004BCD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18004BCD0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  if ( !*(_QWORD *)(a1 + 16) )
  {
    v10 = 308LL;
LABEL_16:
    v7 = -2147024809;
    goto LABEL_17;
  }
  if ( !a3 || !a2 )
  {
    v10 = 309LL;
    goto LABEL_16;
  }
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
  if ( !v5 )
  {
    v7 = -2004287480;
    v10 = 312LL;
LABEL_17:
    sub_18004BD84(retaddr, v10, "avcore\\audiocore\\server\\lib\\audioengineutil\\apowrapperclient.cpp", v7);
    return v7;
  }
  pv = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, LPVOID *))(**(_QWORD **)(a1 + 16) + 56LL))(
         *(_QWORD *)(a1 + 16),
         v5,
         &pv);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v6 = sub_18001F490((unsigned __int16 *)pv, (unsigned int)*((unsigned __int16 *)pv + 8) + 18, a3, 0.0, 1);
    v7 = v6;
    if ( v6 >= 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    v8 = 318LL;
  }
  else
  {
    v8 = 315LL;
  }
  sub_18004BD84(retaddr, v8, "avcore\\audiocore\\server\\lib\\audioengineutil\\apowrapperclient.cpp", (unsigned int)v6);
LABEL_8:
  CoTaskMemFree(pv);
  pv = 0LL;
  return v7;
}
