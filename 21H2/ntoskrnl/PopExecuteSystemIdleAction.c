/*
 * XREFs of PopExecuteSystemIdleAction @ 0x1408F0F54
 * Callers:
 *     PopSystemIdleWorker @ 0x1408F1260 (PopSystemIdleWorker.c)
 * Callees:
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 *     PopDiagTraceSystemIdleAction @ 0x1408EB89C (PopDiagTraceSystemIdleAction.c)
 *     PopUpdatePdcSystemIdleState @ 0x1408F1378 (PopUpdatePdcSystemIdleState.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopExecuteSystemIdleAction(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  int v5; // edi
  unsigned __int64 v6; // rbp
  unsigned int updated; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h]
  __int128 v13; // [rsp+40h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v5 = a1;
  v6 = MEMORY[0xFFFFF78000000008] / 0x989680uLL;
  if ( (_DWORD)a1 == 1 )
  {
    LOBYTE(a1) = a2;
    goto LABEL_10;
  }
  if ( (int)a1 <= 2 )
    goto LABEL_8;
  if ( (int)a1 > 4 )
  {
    if ( (_DWORD)a1 == 5 )
    {
      a1 = 0LL;
LABEL_10:
      updated = PopUpdatePdcSystemIdleState(a1);
      goto LABEL_11;
    }
LABEL_8:
    updated = -1073741811;
    goto LABEL_11;
  }
  updated = 0;
  if ( a2 )
  {
    *(_QWORD *)&v13 = 0x8000000007LL;
    v12 = 0;
    v11 = 0x8000002400000003uLL;
    PopAcquirePolicyLock(a1);
    PopExecutePowerAction((__int64)&v13, 0, &v11, 5, 1u);
    PopReleasePolicyLock(v9, v8);
  }
LABEL_11:
  *(_QWORD *)a3 = v6;
  *(_DWORD *)(a3 + 8) = v5;
  *(_BYTE *)(a3 + 12) = a2;
  *(_DWORD *)(a3 + 16) = updated;
  PopDiagTraceSystemIdleAction(v5, a2, updated);
  return updated;
}
