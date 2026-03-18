/*
 * XREFs of PopIsSystemIdle @ 0x1408EC7E0
 * Callers:
 *     PopSystemIdleWorker @ 0x1408ECA30 (PopSystemIdleWorker.c)
 * Callees:
 *     PopDiagTraceSystemIdleAssessment @ 0x1408E7174 (PopDiagTraceSystemIdleAssessment.c)
 *     PopDiagTraceSystemIdleEventAssessment @ 0x1408E731C (PopDiagTraceSystemIdleEventAssessment.c)
 */

bool __fastcall PopIsSystemIdle(__int64 a1, unsigned int a2, __int64 a3)
{
  int v3; // ebp
  unsigned __int64 v4; // r14
  unsigned int v5; // esi
  __int64 v6; // rbx
  int v7; // edi
  unsigned __int8 v8; // r9
  unsigned __int64 v9; // rax
  int v10; // ecx
  unsigned __int128 v11; // rax

  v3 = 0;
  v4 = a2;
  v5 = 0;
  v6 = a1 + 16;
  do
  {
    v7 = 0;
    v8 = *(_BYTE *)v6;
    v9 = MEMORY[0xFFFFF78000000008] / 0x989680uLL - *(_QWORD *)(v6 - 8);
    if ( !*(_BYTE *)v6 )
    {
      if ( (_DWORD)v4 )
        v7 = v9 < v4;
      else
        v7 = 2;
    }
    v10 = *(_DWORD *)(v6 - 16);
    *(_QWORD *)(v6 + 8) = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
    *(_QWORD *)(v6 + 16) = v9;
    *(_QWORD *)(v6 + 24) = v4;
    *(_BYTE *)(v6 + 32) = v8;
    *(_DWORD *)(v6 + 36) = v7;
    PopDiagTraceSystemIdleEventAssessment(v10, v9, v4, v8, v7);
    if ( v7 )
      v3 |= 1 << v5;
    ++v5;
    v6 += 56LL;
  }
  while ( v5 < 4 );
  v11 = MEMORY[0xFFFFF78000000008] * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  *(_DWORD *)(a3 + 8) = v4;
  *(_QWORD *)a3 = *((_QWORD *)&v11 + 1) >> 23;
  *(_DWORD *)(a3 + 12) = v3;
  *(_BYTE *)(a3 + 16) = v3 == 0;
  PopDiagTraceSystemIdleAssessment(v4, v3, v3 == 0);
  return v3 == 0;
}
