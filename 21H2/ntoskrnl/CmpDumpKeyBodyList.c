/*
 * XREFs of CmpDumpKeyBodyList @ 0x14086EDA8
 * Callers:
 *     CmpSearchForOpenSubKeys @ 0x1405DF4D8 (CmpSearchForOpenSubKeys.c)
 *     CmpFreeAllMemory @ 0x14086BDF8 (CmpFreeAllMemory.c)
 *     CmpSearchAndCountWorker @ 0x14086F2C0 (CmpSearchAndCountWorker.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     CmpConstructNameWithStatus @ 0x1406E2750 (CmpConstructNameWithStatus.c)
 *     CmpDumpOneKeyBody @ 0x14086EEE0 (CmpDumpOneKeyBody.c)
 */

void __fastcall CmpDumpKeyBodyList(_QWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v3; // ebx
  char v7; // r8
  signed __int64 *v8; // r15
  unsigned int v9; // ecx
  _QWORD *v10; // rax
  _QWORD **v11; // rsi
  __int64 v12; // rcx
  _QWORD *i; // r14
  signed __int64 v14; // rsi
  void *v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 1;
  if ( *a1 )
  {
    v8 = a1 + 17;
    v9 = 0;
    v10 = a1 + 17;
    while ( !*v10 )
    {
      ++v9;
      ++v10;
      if ( v9 >= 4 )
        goto LABEL_7;
    }
    v7 = 0;
LABEL_7:
    v11 = (_QWORD **)(a1 + 15);
    if ( *v11 != v11 || v7 != 1 )
    {
      v15 = 0LL;
      CmpConstructNameWithStatus((__int64)a1, &v15);
      if ( v15 )
      {
        for ( i = *v11; i != v11; i = (_QWORD *)*i )
        {
          CmpDumpOneKeyBody(v12, i - 4, v15, a3);
          ++*a2;
        }
        do
        {
          v14 = *v8;
          if ( (unsigned __int64)*v8 >= 3 && v14 == _InterlockedCompareExchange64(&a1[v3 + 17], 1LL, v14) )
          {
            CmpDumpOneKeyBody(v12, v14, v15, a3);
            ++*a2;
            _InterlockedCompareExchange64(&a1[v3 + 17], v14, 1LL);
          }
          ++v3;
          ++v8;
        }
        while ( v3 < 4 );
        CmpFreeTransientPoolWithTag(v15, 0x624E4D43u);
      }
      else if ( a3 )
      {
        *(_DWORD *)(a3 + 20) = -1073741670;
      }
    }
  }
}
