/*
 * XREFs of ?DxgkpRegistryQueryRoutine@@YAJPEAGKPEAXK11@Z @ 0x1C021D950
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026580 (memmove.c)
 */

__int64 __fastcall DxgkpRegistryQueryRoutine(unsigned __int16 *a1, __int64 a2, void *a3, unsigned int a4, _DWORD *a5)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rax

  v5 = a4;
  v6 = (unsigned int)a2;
  if ( (_DWORD)a2 == a5[132] )
  {
    if ( a4 <= a5[134] )
    {
      memmove(a5 + 136, a3, a4);
      result = 0LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v9 + 24) = (unsigned int)a5[134];
      *(_QWORD *)(v9 + 32) = v5;
      WdLogEvent5_WdWarning(v9);
      result = 2147483653LL;
    }
    a5[134] = v5;
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v7 + 24) = (unsigned int)a5[132];
    *(_QWORD *)(v7 + 32) = v6;
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
  return result;
}
