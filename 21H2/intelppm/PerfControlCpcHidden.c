/*
 * XREFs of PerfControlCpcHidden @ 0x1C0009460
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrHiddenEx @ 0x1C0008B84 (WriteGenAddrHiddenEx.c)
 *     PerformanceFromPercentage @ 0x1C0009AC0 (PerformanceFromPercentage.c)
 */

void __fastcall PerfControlCpcHidden(_BYTE *a1, __int64 a2, char a3, char a4)
{
  bool v6; // zf
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  _BYTE *v9; // rsi
  unsigned int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax

  if ( a3 || a4 )
  {
    v6 = a1[93] == 0;
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(_DWORD *)(a2 + 16);
    v9 = (_BYTE *)*((_QWORD *)a1 + 14);
    *((_QWORD *)a1 + 6) = *(_QWORD *)a2;
    if ( !v6 )
    {
      v10 = *(_DWORD *)(*(_QWORD *)a1 + 84LL);
      if ( *(_BYTE *)(a2 + 36) )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)a2;
      WriteGenAddrHiddenEx(v10, v9 + 128, v11);
    }
    if ( a1[94] )
    {
      v12 = PerformanceFromPercentage(a1, v8);
      WriteGenAddrHiddenEx(*(_DWORD *)(*(_QWORD *)a1 + 84LL), v9 + 152, v12);
    }
    if ( a1[95] )
    {
      v13 = PerformanceFromPercentage(a1, v7);
      WriteGenAddrHiddenEx(*(_DWORD *)(*(_QWORD *)a1 + 84LL), v9 + 176, v13);
    }
    if ( a1[98] )
    {
      v14 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      WriteGenAddrHiddenEx(*(_DWORD *)(*(_QWORD *)a1 + 84LL), v9 + 200, v14);
    }
    if ( a1[96] )
      WriteGenAddrHiddenEx(*(_DWORD *)(*(_QWORD *)a1 + 84LL), v9 + 416, 255 * *(_DWORD *)(a2 + 28) / 0x64u);
  }
}
