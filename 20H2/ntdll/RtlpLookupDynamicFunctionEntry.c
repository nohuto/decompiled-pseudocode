/*
 * XREFs of RtlpLookupDynamicFunctionEntry @ 0x18007C460
 * Callers:
 *     RtlLookupFunctionEntry @ 0x180032BE0 (RtlLookupFunctionEntry.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpLookupDynamicFunctionEntry(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  int v5; // ebx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 result; // rax
  unsigned int *v11; // r14
  __int64 v12; // rbp
  unsigned int v13; // edx
  unsigned __int64 v14; // rsi
  __int64 (__fastcall *v15)(unsigned __int64, __int64); // rdi
  __int64 v16; // rbx
  int v17; // edx
  unsigned __int64 v18; // rsi
  unsigned int *v19; // rdi
  unsigned __int64 v20; // rcx
  int v21; // r8d
  int i; // r9d
  int v23; // edx

  RtlAcquireSRWLockShared(&RtlpDynamicFunctionTableLock);
  v4 = (_QWORD *)RtlpDynamicCallbackTableTreeMin;
  v5 = 0;
  while ( v4 )
  {
    if ( a1 < *(v4 - 7) )
    {
      v4 = (_QWORD *)*v4;
    }
    else
    {
      if ( a1 < *(v4 - 6) )
        break;
      v4 = (_QWORD *)v4[1];
    }
  }
  v6 = v4 - 11;
  if ( !v4 )
  {
    v7 = (_QWORD *)RtlpDynamicCallbackTableTreeMax;
    while ( v7 )
    {
      if ( a1 < *(v7 - 10) )
      {
        v7 = (_QWORD *)*v7;
      }
      else
      {
        if ( a1 < *(v7 - 9) )
          break;
        v7 = (_QWORD *)v7[1];
      }
    }
    v6 = v7 - 14;
    if ( !v7 )
    {
      v8 = (_QWORD *)RtlpDynamicFunctionTableTreeMin;
      while ( v8 )
      {
        if ( a1 < *(v8 - 7) )
        {
          v8 = (_QWORD *)*v8;
        }
        else
        {
          if ( a1 < *(v8 - 6) )
            break;
          v8 = (_QWORD *)v8[1];
        }
      }
      v6 = v8 - 11;
      if ( !v8 )
      {
        v9 = (_QWORD *)RtlpDynamicFunctionTableTreeMax;
        while ( v9 )
        {
          if ( a1 < *(v9 - 10) )
          {
            v9 = (_QWORD *)*v9;
          }
          else
          {
            if ( a1 < *(v9 - 9) )
              break;
            v9 = (_QWORD *)v9[1];
          }
        }
        v6 = v9 - 14;
        if ( !v9 )
          goto LABEL_29;
      }
    }
  }
  v11 = (unsigned int *)v6[2];
  v12 = v6[6];
  if ( !*((_DWORD *)v6 + 20) || *((_DWORD *)v6 + 20) == 3 )
  {
    v17 = *((_DWORD *)v6 + 21);
    if ( !v17 )
      goto LABEL_50;
    v18 = a1 - v12;
    v19 = &v11[3 * (v17 - 1)];
    v20 = *v19;
    if ( v18 < v20 )
    {
      v21 = v17 - 2;
      for ( i = 0; v21 >= i; LODWORD(v20) = *v19 )
      {
        v23 = (v21 + i) >> 1;
        v19 = &v11[3 * v23];
        if ( v18 >= *v19 )
        {
          LODWORD(v20) = *v19;
          if ( v18 < v19[3] )
            break;
          i = v23 + 1;
        }
        else
        {
          v21 = v23 - 1;
        }
      }
    }
    if ( v18 < (unsigned int)v20 || v18 >= v19[1] )
LABEL_50:
      v19 = 0LL;
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    if ( v19 )
      *a2 = v12;
    return (__int64)v19;
  }
  else if ( *((_DWORD *)v6 + 20) == 1 )
  {
    v13 = *((_DWORD *)v6 + 21);
    v14 = a1 - v12;
    if ( !v13 )
    {
LABEL_29:
      RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
      return 0LL;
    }
    while ( v14 < *v11 || v14 >= v11[1] )
    {
      v11 += 3;
      if ( ++v5 >= v13 )
        goto LABEL_29;
    }
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    result = (__int64)v11;
    *a2 = v12;
  }
  else
  {
    v15 = (__int64 (__fastcall *)(unsigned __int64, __int64))v6[7];
    v16 = v6[8];
    RtlReleaseSRWLockShared(&RtlpDynamicFunctionTableLock);
    *a2 = v12;
    return v15(a1, v16);
  }
  return result;
}
