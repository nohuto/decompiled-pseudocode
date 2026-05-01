/*
 * XREFs of sub_180032430 @ 0x180032430
 * Callers:
 *     sub_180031B60 @ 0x180031B60 (sub_180031B60.c)
 *     sub_180031C60 @ 0x180031C60 (sub_180031C60.c)
 *     sub_180031CF0 @ 0x180031CF0 (sub_180031CF0.c)
 * Callees:
 *     sub_18000D490 @ 0x18000D490 (sub_18000D490.c)
 *     sub_180031FC0 @ 0x180031FC0 (sub_180031FC0.c)
 *     sub_180032108 @ 0x180032108 (sub_180032108.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180032430(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // esi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  volatile signed __int64 *v10; // rcx
  __int64 v11; // rcx
  char v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  v14 = 0LL;
  v3 = 0;
  if ( !*(_QWORD *)(a1 + 88) )
  {
    v4 = *(_QWORD *)(a1 + 80);
    if ( v4 )
    {
      v3 = sub_180032108(v4);
      if ( v3 >= 0 )
      {
        v3 = sub_180031FC0(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 80LL) + 16LL, &v14);
        v2 = v14;
        if ( v3 >= 0 )
        {
          v3 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v14 + 56LL))(v14, &v13);
          if ( v3 >= 0 )
          {
            if ( v13 )
            {
              v5 = *(_QWORD *)(a1 + 88);
              *(_QWORD *)(a1 + 88) = v2;
              v2 = v5;
              v14 = v5;
              v6 = *(_QWORD *)(a1 + 80);
              v7 = *(_QWORD *)(v6 + 88);
              if ( v6 != v7 )
              {
                if ( v7 )
                {
                  v8 = *(_QWORD *)(v7 + 64);
                  while ( v8 >= 0 )
                  {
                    v9 = v8;
                    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 64), v8 + 1, v8);
                    if ( v9 == v8 )
                      goto LABEL_13;
                  }
                  _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 16));
LABEL_13:
                  v2 = v14;
                }
                v10 = *(volatile signed __int64 **)(a1 + 80);
                *(_QWORD *)(a1 + 80) = v7;
                if ( v10 )
                  goto LABEL_20;
              }
            }
            else
            {
              v11 = *(_QWORD *)(a1 + 88);
              if ( v11 )
              {
                *(_QWORD *)(a1 + 88) = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
              }
              v10 = *(volatile signed __int64 **)(a1 + 80);
              if ( v10 )
              {
                *(_QWORD *)(a1 + 80) = 0LL;
LABEL_20:
                sub_18000D490(v10);
              }
            }
          }
        }
      }
    }
  }
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v3;
}
