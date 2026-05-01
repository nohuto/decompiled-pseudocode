/*
 * XREFs of sub_18007E664 @ 0x18007E664
 * Callers:
 *     sub_18007D9F0 @ 0x18007D9F0 (sub_18007D9F0.c)
 * Callees:
 *     sub_18000366C @ 0x18000366C (sub_18000366C.c)
 *     sub_1800334FC @ 0x1800334FC (sub_1800334FC.c)
 *     sub_18007E4D4 @ 0x18007E4D4 (sub_18007E4D4.c)
 *     sub_18007E630 @ 0x18007E630 (sub_18007E630.c)
 *     sub_18007F16C @ 0x18007F16C (sub_18007F16C.c)
 *     sub_180081A40 @ 0x180081A40 (sub_180081A40.c)
 */

__int64 __fastcall sub_18007E664(__int64 a1, __int64 a2)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 i; // rax
  __int64 v10; // r8
  __int64 v11; // r15
  int v12; // eax
  unsigned int v13; // eax
  unsigned __int64 v14; // rbx
  unsigned int v15; // r14d
  int v16; // esi
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v20; // [rsp+20h] [rbp-10h] BYREF
  __int64 v21; // [rsp+28h] [rbp-8h]

  v20 = 0LL;
  v21 = 0LL;
  RtlRbInsertNodeEx(&v20, 0LL, 0LL, a2 + 744);
  *(_DWORD *)(a2 + 768) |= 2u;
  v4 = 0LL;
  while ( 1 )
  {
    v5 = v20;
    if ( (v21 & 1) != 0 )
    {
      if ( !v20 )
        return v4;
      v5 = (unsigned __int64)&v20 ^ v20;
    }
    if ( !v5 )
      return v4;
    v6 = sub_18007F16C(&v20);
    v4 |= sub_18000366C(v6, v7);
    for ( i = (__int64)sub_18007E4D4(a1, v8); ; i = sub_18007E630(v18) )
    {
      v18 = i;
      if ( !i )
        break;
      if ( *(_BYTE *)(i + 40) == 3 && !(unsigned int)sub_180081A40(i) )
      {
        v11 = *(_QWORD *)(v18 + 56);
        v12 = *(_DWORD *)(v11 + 768);
        if ( (v12 & 2) == 0 )
        {
          v13 = v12 | 2;
          *(_DWORD *)(v11 + 768) = v13;
          v14 = v20;
          v15 = (v13 >> 2) & 3;
          if ( (v21 & 1) != 0 )
          {
            if ( v20 )
              v14 = (unsigned __int64)&v20 ^ v20;
          }
          LOBYTE(v10) = 0;
          v16 = v21 & 1;
          if ( v14 )
          {
            while ( 1 )
            {
              if ( (int)sub_1800334FC(v15, v14) < 0 )
              {
                v17 = *(_QWORD *)v14;
                if ( v16 )
                {
                  if ( !v17 )
                    goto LABEL_25;
                  v17 ^= v14;
                }
                if ( !v17 )
                {
LABEL_25:
                  LOBYTE(v10) = 0;
                  break;
                }
              }
              else
              {
                v17 = *(_QWORD *)(v14 + 8);
                if ( v16 )
                {
                  if ( !v17 )
                    goto LABEL_19;
                  v17 ^= v14;
                }
                if ( !v17 )
                {
LABEL_19:
                  LOBYTE(v10) = 1;
                  break;
                }
              }
              v14 = v17;
            }
          }
          RtlRbInsertNodeEx(&v20, v14, v10, v11 + 744);
        }
      }
    }
  }
}
