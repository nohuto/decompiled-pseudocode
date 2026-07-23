/*
 * XREFs of HalpTimerSavePerformanceCounter @ 0x140386D44
 * Callers:
 *     HalpAcpiPreSleep @ 0x140996EFC (HalpAcpiPreSleep.c)
 * Callees:
 *     HalpTimerGetInternalData @ 0x1402CF2E0 (HalpTimerGetInternalData.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 HalpTimerSavePerformanceCounter()
{
  __int64 v0; // rdi
  __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 InternalData; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  signed __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // r10
  signed __int64 v12; // rax
  int v13; // r8d
  unsigned __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rcx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  signed __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned __int64 v25; // r9
  signed __int64 v26; // rax
  int v27; // r8d
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rbp
  __int64 v30; // rdx
  signed __int32 v31[10]; // [rsp+0h] [rbp-28h] BYREF

  v0 = HalpPerformanceCounter;
  v1 = -1LL;
  v2 = 1LL;
  if ( *(_DWORD *)(HalpPerformanceCounter + 220) == 64 )
  {
    InternalData = HalpTimerGetInternalData(HalpPerformanceCounter);
    v4 = (*(__int64 (__fastcall **)(__int64))(v0 + 112))(InternalData);
    v5 = *(_QWORD *)(v0 + 208);
    v6 = v4;
  }
  else
  {
    do
    {
      v5 = *(_QWORD *)(v0 + 208);
      do
      {
        v9 = *(_QWORD *)(v0 + 200);
        v10 = HalpTimerGetInternalData(v0);
        v11 = (*(__int64 (__fastcall **)(__int64))(v0 + 112))(v10);
        _InterlockedOr(v31, 0);
        v12 = *(_QWORD *)(v0 + 200);
      }
      while ( v9 != v12 );
    }
    while ( v5 != *(_QWORD *)(v0 + 208) );
    v13 = *(_DWORD *)(v0 + 220);
    v14 = v9 ^ v11;
    if ( _bittest64((const __int64 *)&v14, (unsigned __int8)(v13 - 1)) )
    {
      if ( v13 == 64 )
        v15 = -1LL;
      else
        v15 = (1LL << v13) - 1;
      v16 = 1LL;
      if ( v13 != 64 )
        v16 = 1LL << v13;
      v17 = v9 & v15;
      v6 = v11 | v9 ^ v17;
      if ( v11 < v17 )
        v6 += v16;
      _InterlockedCompareExchange64((volatile signed __int64 *)(v0 + 200), v6, v12);
    }
    else
    {
      if ( v13 == 64 )
        v18 = -1LL;
      else
        v18 = (1LL << v13) - 1;
      v6 = v11 | v9 & ~v18;
    }
  }
  result = v5 + v6;
  *(_QWORD *)(v0 + 16) = v5 + v6;
  v8 = HalpAlwaysOnCounter;
  if ( HalpAlwaysOnCounter )
  {
    if ( *(_DWORD *)(HalpAlwaysOnCounter + 220) == 64 )
    {
      v19 = HalpTimerGetInternalData(HalpAlwaysOnCounter);
      v20 = (*(__int64 (__fastcall **)(__int64))(v8 + 112))(v19);
      v21 = *(_QWORD *)(v8 + 208);
      v22 = v20;
    }
    else
    {
      do
      {
        v21 = *(_QWORD *)(v8 + 208);
        do
        {
          v23 = *(_QWORD *)(v8 + 200);
          v24 = HalpTimerGetInternalData(v8);
          v25 = (*(__int64 (__fastcall **)(__int64))(v8 + 112))(v24);
          _InterlockedOr(v31, 0);
          v26 = *(_QWORD *)(v8 + 200);
        }
        while ( v23 != v26 );
      }
      while ( v21 != *(_QWORD *)(v8 + 208) );
      v27 = *(_DWORD *)(v8 + 220);
      v28 = v23 ^ v25;
      if ( _bittest64((const __int64 *)&v28, (unsigned __int8)(v27 - 1)) )
      {
        if ( v27 != 64 )
        {
          v1 = (1LL << v27) - 1;
          v2 = 1LL << v27;
        }
        v29 = v23 & v1;
        v22 = v25 | v23 ^ v29;
        if ( v25 < v29 )
          v22 += v2;
        _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 200), v22, v26);
      }
      else
      {
        if ( v27 == 64 )
          v30 = -1LL;
        else
          v30 = (1LL << v27) - 1;
        v22 = v25 | v23 & ~v30;
      }
    }
    result = v21 + v22;
    *(_QWORD *)(v8 + 16) = v21 + v22;
  }
  return result;
}
