/*
 * XREFs of RtlCalculateUserShadowStackSizes @ 0x1800E182C
 * Callers:
 *     RtlCreateUserFiberShadowStack @ 0x1800E18E0 (RtlCreateUserFiberShadowStack.c)
 * Callees:
 *     RtlULongLongSub @ 0x180057BA0 (RtlULongLongSub.c)
 */

__int64 __fastcall RtlCalculateUserShadowStackSizes(__int64 a1, unsigned __int64 *a2)
{
  __int64 result; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // r10
  unsigned __int64 *v6; // r11
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  result = RtlULongLongSub(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 32), (__int64 *)&v9);
  if ( (int)result >= 0 )
  {
    result = RtlULongLongSub(v4, *(_QWORD *)(v5 + 24), (__int64 *)&v10);
    if ( (int)result >= 0 )
    {
      v7 = v9;
      if ( v9 < 0x1000 || (v9 & 0xFFF) != 0 || v10 < 0x1000 || (v10 & 0xFFF) != 0 || v10 > v9 )
      {
        return 3221225485LL;
      }
      else
      {
        v8 = (v10 / 5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( v9 < v8 + 0x2000 )
          v7 = v8 + 0x2000;
        result = (unsigned int)result;
        *a2 = v7;
        *v6 = v8;
      }
    }
  }
  return result;
}
