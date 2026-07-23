/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x18010F3C4
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x180004F04 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     RtlpHpQueryVA @ 0x180003794 (RtlpHpQueryVA.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(_RTL_SRWLOCK *a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // rbp
  unsigned __int16 *v7; // rbx
  unsigned __int64 v8; // rdi
  _RTL_SRWLOCK *v9; // r9
  int v10; // eax
  unsigned __int64 v11; // r8
  unsigned __int16 *Value; // rcx
  unsigned __int64 *v13; // rcx
  _RTL_SRWLOCK *v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFE00000uLL;
  v7 = 0LL;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v15, 0LL);
  v8 = (a2 - v5) / *a3;
  RtlAcquireSRWLockExclusive(a1 + 14);
  v9 = v15;
  v10 = WORD1(v15->Value) ^ (1 << v8);
  WORD1(v15->Value) = v10;
  v11 = (unsigned __int64)LOWORD(v9->Value) >> 15;
  if ( (unsigned __int16)v10 == (1 << (0x200000uLL / *a3)) - 1 )
  {
    if ( v9[1].Value != -1LL )
    {
      while ( 1 )
      {
        Value = (unsigned __int16 *)a1[v11 + 15].Value;
        if ( !Value )
          NT_ASSERT("Link != ((void *)0)");
        a1[v11 + 15] = *(_RTL_SRWLOCK *)Value;
        if ( Value == (unsigned __int16 *)&v9[1] )
          break;
        *(_QWORD *)Value = v7;
        v7 = Value;
      }
      while ( 1 )
      {
        v13 = (unsigned __int64 *)v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *v13 = a1[v11 + 15].Value;
        a1[v11 + 15].Value = (unsigned __int64)v13;
      }
    }
  }
  else
  {
    if ( (((unsigned __int16)v10 - 1) & (unsigned __int16)v10) == 0 )
    {
      v9[1].0 = ($2F38BEDF952D5DA5F266621B11247D04)a1[v11 + 15];
      a1[v11 + 15].Value = (unsigned __int64)&v9[1];
    }
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive(a1 + 14);
  if ( v5 )
    *a3 = 0x200000LL;
  return v5;
}
