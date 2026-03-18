/*
 * XREFs of sub_1C0033368 @ 0x1C0033368
 * Callers:
 *     sub_1C0056CF0 @ 0x1C0056CF0 (sub_1C0056CF0.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C0031714 @ 0x1C0031714 (sub_1C0031714.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C0031BAC @ 0x1C0031BAC (sub_1C0031BAC.c)
 *     sub_1C0032354 @ 0x1C0032354 (sub_1C0032354.c)
 *     sub_1C003246C @ 0x1C003246C (sub_1C003246C.c)
 *     sub_1C0033138 @ 0x1C0033138 (sub_1C0033138.c)
 */

LONG __fastcall sub_1C0033368(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  unsigned int *v3; // rdi
  _DWORD *v5; // rax
  _DWORD *v6; // r8
  int v7; // eax
  _WORD *PoolWithTag; // rax
  char v9; // r8
  _WORD *v10; // rbx
  __m128 *v11; // rax
  char v12; // r8
  unsigned int v13; // ebp
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF

  v15 = 0;
  v3 = 0LL;
  v5 = sub_1C0011220((__int64)a2);
  v6 = v5;
  if ( (v5[358] & 0x400) != 0 )
  {
    v7 = v5[355];
    if ( (v7 & 0x800) == 0 )
    {
      v6[355] = v7 | 0x800;
      sub_1C0031714(*(_QWORD *)(a1 + 8), a1, 11, 829387629, 1);
      if ( !sub_1C003246C(a2) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PoolType, 0xAuLL, 0x42554855u);
        v10 = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_QWORD *)PoolWithTag = 0LL;
          PoolWithTag[4] = 0;
          if ( (int)sub_1C0033138((__int64)a2, 1, v9, 5, (__int64)PoolWithTag, 10, &v15) >= 0
            && v15 == 10
            && *(_DWORD *)v10 >= 0xAu
            && v10[2] == 256
            && v10[3] == 5 )
          {
            if ( v10[4] )
            {
              v11 = (__m128 *)ExAllocatePoolWithTag(PoolType, *(unsigned int *)v10, 0x42554855u);
              v3 = (unsigned int *)v11;
              if ( v11 )
              {
                sub_1C001D340(v11, 0, *(unsigned int *)v10);
                if ( (int)sub_1C0033138((__int64)a2, 1, v12, 5, (__int64)v3, *(_DWORD *)v10, &v15) >= 0 )
                {
                  v13 = v15;
                  if ( v15 == *(_DWORD *)v10
                    && RtlCompareMemory(v10, v3, 0xAuLL) == 10
                    && (int)sub_1C0032354(v3, v13) >= 0 )
                  {
                    sub_1C0031BAC(a2, (__int64)v3, *v3);
                  }
                }
              }
            }
          }
          ExFreePoolWithTag(v10, 0);
          if ( v3 )
            ExFreePoolWithTag(v3, 0);
        }
      }
    }
  }
  return sub_1C00317D8(*(_QWORD *)(a1 + 8), a1);
}
