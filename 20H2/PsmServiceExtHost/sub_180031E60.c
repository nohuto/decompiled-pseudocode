/*
 * XREFs of sub_180031E60 @ 0x180031E60
 * Callers:
 *     sub_180016100 @ 0x180016100 (sub_180016100.c)
 *     sub_18003E350 @ 0x18003E350 (sub_18003E350.c)
 *     sub_180072E80 @ 0x180072E80 (sub_180072E80.c)
 * Callees:
 *     sub_180008938 @ 0x180008938 (sub_180008938.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_1800705E0 @ 0x1800705E0 (sub_1800705E0.c)
 */

__int64 __fastcall sub_180031E60(__int64 a1, __int64 a2, void (__fastcall *a3)(_QWORD, __int64), __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v8; // rdx
  __int64 i; // rbx
  volatile signed __int64 *v10; // r8
  signed __int64 *v11; // rsi
  signed __int64 v12; // rax
  signed __int64 v13; // rcx
  bool v14; // zf
  signed __int64 v15; // rtt
  signed __int64 v17; // rbp
  signed __int64 v18; // rax
  bool v19; // cc
  signed __int64 v20; // rax

  v4 = *(_QWORD **)(a1 + 64);
  memset(v4, 0, 8LL * *(unsigned int *)(a1 + 72));
  RtlAcquireSRWLockShared(a1);
  v8 = *(_QWORD **)(a1 + 16);
  for ( i = 0LL; v8 != (_QWORD *)(a1 + 16); v8 = (_QWORD *)*v8 )
  {
    v10 = v8 - 1;
    if ( (v8[27] & 3) == 1 )
    {
      if ( _InterlockedIncrement64(v10) <= 1 )
        __fastfail(0xEu);
      v4[i] = v10;
      i = (unsigned int)(i + 1);
    }
  }
  RtlReleaseSRWLockShared(a1);
  if ( (_DWORD)i )
  {
    do
    {
      v11 = (signed __int64 *)*v4;
      a3(*v4, a4);
      _m_prefetchw(v11);
      v12 = *v11;
      v13 = *v11 - 1;
      v14 = *v11 == 1;
      if ( v13 <= 0 )
      {
LABEL_13:
        if ( !v14 )
          __fastfail(0xEu);
        v17 = v11[3];
        RtlAcquireSRWLockExclusive(v17 + 312);
        *(_DWORD *)(v17 + 320) = GetCurrentThreadId();
        v18 = _InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL);
        v19 = v18 <= 1;
        v20 = v18 - 1;
        if ( v19 )
        {
          if ( v20 )
            __fastfail(0xEu);
          if ( (unsigned int)sub_180008938(v11 + 1) )
          {
            sub_1800705E0(v11);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v11);
          }
          else
          {
            *((_DWORD *)v11 + 56) &= ~1u;
            *((_DWORD *)v11 + 56) |= 2u;
            SetEvent((HANDLE)v11[8]);
          }
        }
        *(_DWORD *)(v17 + 320) = 0;
        RtlReleaseSRWLockExclusive(v17 + 312);
      }
      else
      {
        while ( 1 )
        {
          v15 = v12;
          v12 = _InterlockedCompareExchange64(v11, v13, v12);
          if ( v15 == v12 )
            break;
          v13 = v12 - 1;
          v14 = v12 == 1;
          if ( v12 - 1 <= 0 )
            goto LABEL_13;
        }
      }
      ++v4;
      --i;
    }
    while ( i );
  }
  return 0LL;
}
