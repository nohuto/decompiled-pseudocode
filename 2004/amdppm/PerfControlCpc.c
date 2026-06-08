/*
 * XREFs of PerfControlCpc @ 0x1C0004100
 * Callers:
 *     <none>
 * Callees:
 *     WriteGenAddrEx @ 0x1C00030D4 (WriteGenAddrEx.c)
 *     PerformanceFromPercentage @ 0x1C0004870 (PerformanceFromPercentage.c)
 */

void __fastcall PerfControlCpc(__int64 a1, __int64 a2, char a3, char a4)
{
  bool v6; // zf
  unsigned int v7; // r14d
  unsigned int v8; // ebp
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( a3 || a4 )
  {
    v6 = *(_BYTE *)(a1 + 93) == 0;
    v7 = *(_DWORD *)(a2 + 20);
    v8 = *(_DWORD *)(a2 + 16);
    v9 = *(_BYTE **)(a1 + 112);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)a2;
    if ( !v6 )
    {
      if ( *(_BYTE *)(a2 + 36) )
        v10 = 0LL;
      else
        v10 = *(_QWORD *)a2;
      WriteGenAddrEx(v9 + 128, v10);
    }
    if ( *(_BYTE *)(a1 + 94) )
    {
      v11 = PerformanceFromPercentage(a1, v8);
      WriteGenAddrEx(v9 + 152, v11);
    }
    if ( *(_BYTE *)(a1 + 95) )
    {
      v12 = PerformanceFromPercentage(a1, v7);
      WriteGenAddrEx(v9 + 176, v12);
    }
    if ( *(_BYTE *)(a1 + 98) )
    {
      v13 = PerformanceFromPercentage(a1, *(unsigned int *)(a2 + 24));
      WriteGenAddrEx(v9 + 200, v13);
    }
    if ( *(_BYTE *)(a1 + 96) )
      WriteGenAddrEx(v9 + 416, 255 * *(_DWORD *)(a2 + 28) / 0x64u);
  }
}
