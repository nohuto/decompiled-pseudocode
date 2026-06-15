/*
 * XREFs of sub_180052CE0 @ 0x180052CE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_180052BFC @ 0x180052BFC (sub_180052BFC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180052CE0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v6; // ebx
  __int64 (__fastcall ***v8)(_QWORD, __int64, _QWORD *); // [rsp+38h] [rbp+10h] BYREF

  *a4 = 0LL;
  if ( a2 )
  {
    v6 = -2147221232;
    RoOriginateError(2147746064LL, 0LL);
  }
  else
  {
    v8 = 0LL;
    v6 = sub_180052BFC(&v8);
    if ( v6 >= 0 )
      v6 = (**v8)(v8, a3, a4);
    sub_1800461B8((__int64 *)&v8);
  }
  return (unsigned int)v6;
}
