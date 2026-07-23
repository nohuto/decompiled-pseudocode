/*
 * XREFs of HvWriteLogFile @ 0x1406F9FEC
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpTraceHiveFlushWroteLogFile @ 0x1406FA158 (CmpTraceHiveFlushWroteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x1406FA1C8 (CmpFileFlushAndPurge.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1406FC688 (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvWriteLogFile(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // r12
  unsigned int v8; // ebp
  __int64 v9; // rsi
  _QWORD *v10; // r8
  __int64 v11; // rdi
  int v12; // edx
  _DWORD *v13; // r14
  __int64 result; // rax
  unsigned int v15; // eax

  if ( (*(_DWORD *)(a1 + 160) & 0x8001) != 0 )
    return 0LL;
  v6 = *(unsigned int *)(a1 + 164);
  if ( !(_DWORD)v6 || !*(_QWORD *)(a1 + 8 * v6 + 1536) )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 1704);
  v8 = *(_DWORD *)(a1 + 1712);
  v9 = *(unsigned int *)(a1 + 1716);
  if ( (_DWORD)v6 == 1 || (_DWORD)v6 == 4 )
  {
    v10 = (_QWORD *)(a1 + 1800);
  }
  else if ( (_DWORD)v6 == 5 )
  {
    v10 = (_QWORD *)(a1 + 1808);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v9 + *(unsigned int *)(a1 + 176) > *v10 )
    CmpDoFileSetSizeEx(a1, v6, v9 + *(unsigned int *)(a1 + 176), 1LL);
  v11 = 0LL;
  if ( !v8 )
  {
LABEL_13:
    result = CmpFileFlushAndPurge(a1, *(unsigned int *)(a1 + 164));
    if ( (int)result < 0 )
      return result;
    ++*(_DWORD *)(a1 + 168);
    v15 = HvpLogTypeToLogArrayIndex(*(unsigned int *)(a1 + 164));
    *(_BYTE *)(v15 + a1 + 188) = 1;
    CmpTraceHiveFlushWroteLogFile(v15, (unsigned int)v9);
    *a4 = v9;
    return 0LL;
  }
  v12 = *(_DWORD *)(a1 + 176);
  while ( 1 )
  {
    v13 = (_DWORD *)(v7 + 24 * v11);
    *v13 = v12;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, _DWORD))(a1 + 40))(
               a1,
               *(unsigned int *)(a1 + 164),
               v13,
               1LL,
               0);
    if ( (int)result < 0 )
      return result;
    v11 = (unsigned int)(v11 + 1);
    *(_DWORD *)(a1 + 176) += v13[4];
    v12 = *(_DWORD *)(a1 + 176);
    if ( (unsigned int)v11 >= v8 )
      goto LABEL_13;
  }
}
