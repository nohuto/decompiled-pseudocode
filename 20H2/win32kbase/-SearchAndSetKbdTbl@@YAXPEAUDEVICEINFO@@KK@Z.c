/*
 * XREFs of ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01A58D0
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C019D3DC (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C00555C0 (HMAssignmentLock.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0088FA0 (SetGlobalKeyboardTableInfo.c)
 */

void __fastcall SearchAndSetKbdTbl(struct DEVICEINFO *a1, __int64 a2, int a3)
{
  int v4; // ebx
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // r8d
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a2;
  v5 = *(_QWORD *)(gpKL + 56);
  v6 = *(_QWORD *)(v5 + 32);
  if ( (*(_DWORD *)(v6 + 96) != (_DWORD)a2 || *(_DWORD *)(v6 + 100) != a3) && (*((_DWORD *)a1 + 46) & 0x20) == 0 )
  {
    v7 = *(_DWORD *)(gpKL + 88);
    v8 = 0LL;
    if ( v7 )
    {
      v9 = *(_QWORD *)(gpKL + 96);
      while ( 1 )
      {
        a2 = *(_QWORD *)(v9 + 8 * v8);
        v10 = *(_QWORD *)(a2 + 32);
        if ( *(_DWORD *)(v10 + 96) == v4 && *(_DWORD *)(v10 + 100) == a3 )
          break;
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= v7 )
          goto LABEL_11;
      }
      v5 = *(_QWORD *)(v9 + 8 * v8);
    }
  }
LABEL_11:
  if ( *(_QWORD *)(gpKL + 48) != v5 )
  {
    v11[0] = gpKL + 48;
    v11[1] = v5;
    HMAssignmentLock((__int64)v11, a2);
    SetGlobalKeyboardTableInfo(gpKL);
  }
}
