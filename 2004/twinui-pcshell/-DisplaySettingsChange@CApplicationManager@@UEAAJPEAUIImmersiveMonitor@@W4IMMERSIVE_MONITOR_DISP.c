/*
 * XREFs of ?DisplaySettingsChange@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180149F00
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C8B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___ @ 0x180142A14 (CDelayIAMOperations--AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::DisplaySettingsChange(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // r15
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  int v8; // esi
  _QWORD v10[3]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+60h] [rbp+8h] BYREF

  v6 = a1 - 208;
  v7 = (struct _RTL_CRITICAL_SECTION *)((a1 + 184) & -(__int64)(a1 != 208));
  v10[2] = v7;
  v8 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v7, 1);
  v11 = v8;
  if ( *(_DWORD *)(a1 + 612)
    && (a3 & 0x20) != 0
    && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, &v12) >= 0
    && !v12 )
  {
    v10[0] = v6;
    v10[1] = a2;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    CDelayIAMOperations::AddOperation__lambda_20045b0b3bc9a0c8c612018082f6611c___(*(int **)(a1 + 592), (HWND)v10);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  }
  if ( v8 >= 0 )
    LeaveCriticalSection(v7);
  return 0LL;
}
