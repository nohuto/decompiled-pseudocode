/*
 * XREFs of PopAssessSystemIdleEvent @ 0x1408F0EC0
 * Callers:
 *     PopIsSystemIdle @ 0x1408F1064 (PopIsSystemIdle.c)
 * Callees:
 *     PopDiagTraceSystemIdleEventAssessment @ 0x1408EBB0C (PopDiagTraceSystemIdleEventAssessment.c)
 */

__int64 __fastcall PopAssessSystemIdleEvent(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  unsigned __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned __int8 v7; // r9
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  int v10; // ecx

  v5 = a2;
  v6 = 0;
  v7 = *(_BYTE *)(a1 + 16);
  v8 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  v9 = MEMORY[0xFFFFF78000000008] / 0x989680uLL - *(_QWORD *)(a1 + 8);
  if ( v7 )
  {
    *a3 = -1LL;
  }
  else
  {
    *a3 = v9;
    if ( (_DWORD)v5 )
      v6 = v9 < v5;
    else
      v6 = 2;
  }
  *(_QWORD *)(a1 + 24) = v8;
  v10 = *(_DWORD *)a1;
  *(_QWORD *)(a1 + 32) = v9;
  *(_QWORD *)(a1 + 40) = v5;
  *(_BYTE *)(a1 + 48) = v7;
  *(_DWORD *)(a1 + 52) = v6;
  PopDiagTraceSystemIdleEventAssessment(v10, v9, v5, v7, v6);
  return v6;
}
