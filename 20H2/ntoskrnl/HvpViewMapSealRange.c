/*
 * XREFs of HvpViewMapSealRange @ 0x1407043FC
 * Callers:
 *     HvpSetRangeProtection @ 0x14070661C (HvpSetRangeProtection.c)
 * Callees:
 *     CmSiProtectViewOfSection @ 0x140341D98 (CmSiProtectViewOfSection.c)
 */

void __fastcall HvpViewMapSealRange(ULONG_PTR a1, int a2, unsigned int a3)
{
  signed __int64 v3; // rdi
  signed __int64 v4; // r14
  ULONG_PTR v5; // r15
  ULONG_PTR v6; // rsi
  unsigned __int64 v7; // rbx
  signed __int64 v8; // rbp
  void **v9; // rdx
  ULONG_PTR v10; // r8
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v3 = (unsigned int)(a2 + 4096);
  v4 = v3 + a3;
  v5 = a1;
  if ( v3 < (unsigned __int64)v4 )
  {
    v6 = a1 + 40;
    do
    {
      v7 = *(_QWORD *)v6;
      if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && v7 )
        v7 ^= v6;
      while ( v7 )
      {
        if ( v3 >= *(_QWORD *)(v7 + 40) )
        {
          if ( v3 < *(_QWORD *)(v7 + 48) )
            break;
          a1 = *(_QWORD *)(v7 + 8);
        }
        else
        {
          a1 = *(_QWORD *)v7;
        }
        if ( (*(_BYTE *)(v6 + 8) & 1) != 0 && a1 )
          v7 ^= a1;
        else
          v7 = a1;
      }
      v8 = v4;
      v9 = *(void ***)(v5 + 24);
      if ( v4 >= *(_QWORD *)(v7 + 48) )
        v8 = *(_QWORD *)(v7 + 48);
      v10 = *(_QWORD *)(v7 + 56) - *(_QWORD *)(v7 + 24);
      LODWORD(v11) = 0;
      CmSiProtectViewOfSection(a1, v9, (void *)(v3 + v10), v8 - v3, 2u, (ULONG *)&v11);
      while ( v3 < v8 )
      {
        *(_BYTE *)(((unsigned __int64)(v3 - *(_QWORD *)(v7 + 24)) >> 12) + v7 + 72) &= ~8u;
        v3 += 4096LL;
      }
      v3 = v8;
    }
    while ( v8 < v4 );
  }
}
