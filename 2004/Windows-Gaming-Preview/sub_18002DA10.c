/*
 * XREFs of sub_18002DA10 @ 0x18002DA10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D958 @ 0x18000D958 (sub_18000D958.c)
 *     sub_18000DA2C @ 0x18000DA2C (sub_18000DA2C.c)
 *     sub_18002FF60 @ 0x18002FF60 (sub_18002FF60.c)
 *     sub_1800300B8 @ 0x1800300B8 (sub_1800300B8.c)
 *     sub_1800301C4 @ 0x1800301C4 (sub_1800301C4.c)
 *     sub_180032A0C @ 0x180032A0C (sub_180032A0C.c)
 */

__int64 __fastcall sub_18002DA10(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v4; // ebx
  RTL_SRWLOCK *v6; // rcx
  __int64 v7; // rbp
  RTL_SRWLOCK *v8; // rcx
  _BYTE v10[80]; // [rsp+40h] [rbp-58h] BYREF
  char v11; // [rsp+A0h] [rbp+8h] BYREF

  v4 = 0;
  if ( *(_BYTE *)(a1 + 184) )
  {
    sub_1800301C4((unsigned int)v10, a1, a3, a4, 1048576000, 1074790400);
    v6 = (RTL_SRWLOCK *)(a1 + 168);
    if ( *(_DWORD *)(a1 + 160) == 1 )
    {
      if ( !LODWORD(v6->Ptr) )
        LODWORD(v6->Ptr) = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive(v6);
    }
    sub_18000DA2C((__int64)&v11);
    v7 = *(_QWORD *)(a1 + 88);
    sub_18002FF60(a1, v10);
    if ( a1 != -160 )
    {
      v8 = (RTL_SRWLOCK *)(a1 + 168);
      if ( *(_DWORD *)(a1 + 160) == 1 )
        LODWORD(v8->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v8);
    }
    sub_1800300B8(v10);
    sub_180032A0C(v10);
    if ( v7 )
      return (unsigned int)sub_18000D958();
  }
  else
  {
    v4 = -2147418113;
    RoOriginateError(2147549183LL, 0LL);
  }
  return v4;
}
