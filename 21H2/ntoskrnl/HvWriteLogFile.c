/*
 * XREFs of HvWriteLogFile @ 0x14068A060
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HvpLogTypeToLogArrayIndex @ 0x140689DAC (HvpLogTypeToLogArrayIndex.c)
 *     CmpTraceHiveFlushWroteLogFile @ 0x14068A1CC (CmpTraceHiveFlushWroteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x14068A23C (CmpFileFlushAndPurge.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
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
  v6 = *(unsigned int *)(a1 + 168);
  if ( !(_DWORD)v6 || !*(_QWORD *)(a1 + 8 * v6 + 1544) )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 1712);
  v8 = *(_DWORD *)(a1 + 1720);
  v9 = *(unsigned int *)(a1 + 1724);
  if ( (_DWORD)v6 == 1 || (_DWORD)v6 == 4 )
  {
    v10 = (_QWORD *)(a1 + 1808);
  }
  else if ( (_DWORD)v6 == 5 )
  {
    v10 = (_QWORD *)(a1 + 1816);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v9 + *(unsigned int *)(a1 + 180) > *v10 )
    CmpDoFileSetSizeEx(a1, v6, v9 + *(unsigned int *)(a1 + 180), 1LL);
  v11 = 0LL;
  if ( !v8 )
  {
LABEL_13:
    result = CmpFileFlushAndPurge(a1, *(unsigned int *)(a1 + 168));
    if ( (int)result < 0 )
      return result;
    ++*(_DWORD *)(a1 + 172);
    v15 = HvpLogTypeToLogArrayIndex(*(_DWORD *)(a1 + 168));
    *(_BYTE *)(v15 + a1 + 192) = 1;
    CmpTraceHiveFlushWroteLogFile(v15, (unsigned int)v9);
    *a4 = v9;
    return 0LL;
  }
  v12 = *(_DWORD *)(a1 + 180);
  while ( 1 )
  {
    v13 = (_DWORD *)(v7 + 24 * v11);
    *v13 = v12;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, _DWORD))(a1 + 40))(
               a1,
               *(unsigned int *)(a1 + 168),
               v13,
               1LL,
               0);
    if ( (int)result < 0 )
      return result;
    v11 = (unsigned int)(v11 + 1);
    *(_DWORD *)(a1 + 180) += v13[4];
    v12 = *(_DWORD *)(a1 + 180);
    if ( (unsigned int)v11 >= v8 )
      goto LABEL_13;
  }
}
