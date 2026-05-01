/*
 * XREFs of sub_180004818 @ 0x180004818
 * Callers:
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 * Callees:
 *     sub_180004934 @ 0x180004934 (sub_180004934.c)
 *     sub_180007DE4 @ 0x180007DE4 (sub_180007DE4.c)
 *     sub_180007E58 @ 0x180007E58 (sub_180007E58.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_180034650 @ 0x180034650 (sub_180034650.c)
 */

void __fastcall sub_180004818(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbx
  __int64 v7; // rsi
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+2Ch] [rbp-1Ch]

  if ( a3 )
  {
    v5 = a4 + 16;
    v7 = a3;
    do
    {
      if ( *(_BYTE *)(v5 + 5) )
      {
        v17 = 0;
        v16 = a2;
        v15 = sub_180007E58(a5, a2, 0LL);
        v8 = 101;
        v9 = sub_180007DE4(&v15);
        if ( v9 )
        {
          v10 = *(int *)(v5 - 16);
          do
          {
            v11 = *(_DWORD *)(v9 + 4 * v10 + 1488);
            if ( v8 < v11 )
              v11 = v8;
            v8 = v11;
            v9 = sub_180007DE4(&v15);
          }
          while ( v9 );
        }
        if ( v8 >= *(_DWORD *)v5 )
          v8 = *(_DWORD *)v5;
        *(_DWORD *)v5 = v8;
        if ( (*(_BYTE *)(a5 + 836) & 1) != 0 )
        {
          sub_180034650(a5 + 64, 0LL);
          if ( (unsigned int)sub_180004934(a5 + 64, *(unsigned int *)(v5 - 16)) )
          {
            v14 = *(_DWORD *)v5;
            if ( *(int *)v5 > 2 )
              v14 = 2;
            *(_DWORD *)v5 = v14;
          }
          sub_18001E830(v13, v12, 1LL);
          RtlReleaseSRWLockShared(a5 + 64);
        }
      }
      v5 += 24LL;
      --v7;
    }
    while ( v7 );
  }
}
