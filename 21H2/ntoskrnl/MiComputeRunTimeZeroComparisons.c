/*
 * XREFs of MiComputeRunTimeZeroComparisons @ 0x1403B01C8
 * Callers:
 *     MiZeroPageCalibrate @ 0x1403AFF94 (MiZeroPageCalibrate.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 */

unsigned __int64 __fastcall MiComputeRunTimeZeroComparisons(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int v2; // ebx
  unsigned int *v3; // rdi
  unsigned __int64 *Pool; // rax
  unsigned __int64 *v5; // r10
  __int64 v6; // r11
  unsigned __int64 v7; // rsi
  __int64 v8; // r15
  unsigned __int64 *v9; // r14
  __int64 v10; // rbp
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 *v15; // r8
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v2 = 0;
  if ( KeNumberNodes )
  {
    v3 = (unsigned int *)(*(_QWORD *)(a1 + 16) + 4360LL);
    do
    {
      if ( *((_QWORD *)v3 + 12) )
      {
        if ( v3[5] )
        {
          Pool = (unsigned __int64 *)MiAllocatePool(64, 8LL * *v3, 0x20206D4Du);
          v5 = Pool;
          if ( Pool )
          {
            v6 = *v3;
            v7 = 0LL;
            v8 = *((_QWORD *)v3 + 3);
            if ( (_DWORD)v6 )
            {
              v9 = &Pool[v6];
              v10 = 16LL * (unsigned int)v6;
              do
              {
                v10 -= 16LL;
                v11 = (unsigned int)v6;
                --v9;
                LODWORD(v6) = v6 - 1;
                v12 = (*(_QWORD *)(v8 + v10 + 8) << 21) / (*((_QWORD *)v3 + 1) * (unsigned __int64)*v3 / v11);
                if ( (_DWORD)v11 != *v3 && v7 < v12 )
                {
                  ++dword_140C2A298;
                  v12 = v7;
                }
                *v9 = v12;
                v7 = v12;
              }
              while ( (_DWORD)v6 );
            }
            v13 = *v5;
            if ( *((_QWORD *)v3 + 12) > *v5 )
            {
              v14 = *v3;
              if ( (_DWORD)v14 )
              {
                v15 = &v5[v14];
                do
                {
                  --v15;
                  *v15 = *((_QWORD *)v3 + 12) * *v15 / v13;
                  LODWORD(v14) = v14 - 1;
                }
                while ( (_DWORD)v14 );
              }
            }
            else
            {
              ++dword_140C2A294;
            }
            *((_QWORD *)v3 + 13) = v5;
          }
        }
      }
      result = (unsigned __int16)KeNumberNodes;
      ++v2;
      v3 += 1136;
    }
    while ( v2 < (unsigned __int16)KeNumberNodes );
  }
  return result;
}
