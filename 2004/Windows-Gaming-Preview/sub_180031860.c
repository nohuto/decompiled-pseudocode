/*
 * XREFs of sub_180031860 @ 0x180031860
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D6B0 @ 0x18000D6B0 (sub_18000D6B0.c)
 *     sub_180032D68 @ 0x180032D68 (sub_180032D68.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031860(__int64 a1, volatile signed __int64 **a2)
{
  unsigned int v2; // edi
  volatile signed __int64 *v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int64 *v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  *a2 = 0LL;
  if ( *(_BYTE *)(a1 + 93) )
  {
    v6 = a1 - 16;
    sub_180032D68(&v7, &v6);
    v4 = v7;
    if ( v7 )
    {
      *a2 = v7;
      (*(void (__fastcall **)(volatile signed __int64 *))(*v4 + 8))(v4);
      sub_18000D6B0(v4);
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    RoOriginateError(2147549183LL, 0LL);
    return (unsigned int)-2147418113;
  }
  return v2;
}
