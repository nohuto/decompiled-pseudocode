/*
 * XREFs of ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01AD9B0
 * Callers:
 *     ?ProcessInputNoLock@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_NPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C01A563C (-ProcessInputNoLock@CKeyboardProcessor@@QEAA-AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYB.c)
 * Callees:
 *     SetGlobalKeyboardTableInfo @ 0x1C0058420 (SetGlobalKeyboardTableInfo.c)
 *     HMAssignmentLock @ 0x1C0071980 (HMAssignmentLock.c)
 */

void __fastcall SearchAndSetKbdTbl(struct DEVICEINFO *a1, int a2, int a3)
{
  __int64 *v4; // r9
  __int64 v5; // rax
  unsigned int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 *v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *(__int64 **)(gpKL + 56);
  v5 = v4[4];
  if ( (*(_DWORD *)(v5 + 96) != a2 || *(_DWORD *)(v5 + 100) != a3) && (*((_DWORD *)a1 + 46) & 0x20) == 0 )
  {
    v6 = *(_DWORD *)(gpKL + 88);
    v7 = 0LL;
    if ( v6 )
    {
      v8 = *(_QWORD *)(gpKL + 96);
      while ( 1 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8 * v7) + 32LL);
        if ( *(_DWORD *)(v9 + 96) == a2 && *(_DWORD *)(v9 + 100) == a3 )
          break;
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= v6 )
          goto LABEL_11;
      }
      v4 = *(__int64 **)(v8 + 8 * v7);
    }
  }
LABEL_11:
  if ( *(__int64 **)(gpKL + 48) != v4 )
  {
    v10[0] = (__int64 *)(gpKL + 48);
    v10[1] = v4;
    HMAssignmentLock(v10);
    SetGlobalKeyboardTableInfo(gpKL);
  }
}
