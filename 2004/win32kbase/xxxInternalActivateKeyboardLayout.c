/*
 * XREFs of xxxInternalActivateKeyboardLayout @ 0x1C0018B70
 * Callers:
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0017B30 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0017D48 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxActivateKeyboardLayout @ 0x1C0018AB0 (xxxActivateKeyboardLayout.c)
 * Callees:
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C00181F8 (ApiSetEditionNotifyShellLanguageHook.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C001B6C0 (xxxChangeForegroundKeyboardTable.c)
 *     ApiSetEditionImmActivateLayout @ 0x1C001B7F8 (ApiSetEditionImmActivateLayout.c)
 *     HMAssignmentLock @ 0x1C00748C0 (HMAssignmentLock.c)
 *     ThreadUnlock1 @ 0x1C00899B0 (ThreadUnlock1.c)
 *     HMLockObject @ 0x1C008B310 (HMLockObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionImmActivateThreadsLayout @ 0x1C01C83D4 (ApiSetEditionImmActivateThreadsLayout.c)
 *     ApiSetEditionSendIMENotification @ 0x1C01CA2FC (ApiSetEditionSendIMENotification.c)
 */

__int64 __fastcall xxxInternalActivateKeyboardLayout(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rbx
  int v7; // r12d
  struct tagTHREADINFO *v8; // rsi
  _QWORD *v9; // r14
  __int64 v10; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r14
  __int64 v16; // rdx
  bool v17; // zf
  int v18; // edx
  __int64 v19; // [rsp+30h] [rbp-78h]
  _QWORD *v20; // [rsp+50h] [rbp-58h] BYREF
  __int64 v21; // [rsp+58h] [rbp-50h]
  _QWORD v22[4]; // [rsp+60h] [rbp-48h] BYREF

  v6 = 0LL;
  v22[2] = 0LL;
  v7 = a3 & 0x100;
  v8 = gptiCurrent;
  v9 = (_QWORD *)((char *)gptiCurrent + 432);
  v10 = *((_QWORD *)gptiCurrent + 54);
  if ( v10 )
  {
    v19 = *(_QWORD *)(v10 + 40);
  }
  else
  {
    v10 = 0LL;
    v19 = 0LL;
  }
  if ( (a3 & 0x40000000) != 0 )
    gdwKeyboardAttributes = (a3 >> 15) & 2;
  if ( (a3 & 0x100) != 0 || a2 != *v9 )
  {
    *(_WORD *)(a2 + 74) = 0;
    v22[0] = *((_QWORD *)v8 + 51);
    *((_QWORD *)v8 + 51) = v22;
    v22[1] = v10;
    if ( v10 )
      HMLockObject(v10);
    if ( (*((_DWORD *)v8 + 120) & 8) != 0 )
    {
      v20 = v9;
      v21 = a2;
      HMAssignmentLock(&v20);
      *(_WORD *)(*((_QWORD *)v8 + 59) + 152LL) = *(_WORD *)(a2 + 72);
    }
    else if ( v7 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)v8 + 52) + 320LL);
      v16 = *(unsigned int *)gpsi;
      if ( (v16 & 4) != 0 )
      {
        v17 = (unsigned int)ApiSetEditionImmActivateThreadsLayout(*(_QWORD *)(*((_QWORD *)v8 + 52) + 320LL), v16, a2) == 0;
      }
      else
      {
        v18 = 0;
        while ( v15 )
        {
          if ( *(_QWORD *)(v15 + 432) != a2 && (*(_DWORD *)(v15 + 480) & 1) == 0 )
          {
            v20 = (_QWORD *)(v15 + 432);
            v21 = a2;
            HMAssignmentLock(&v20);
            *(_WORD *)(*(_QWORD *)(v15 + 472) + 152LL) = *(_WORD *)(a2 + 72);
            *(_QWORD *)(*(_QWORD *)(v15 + 472) + 144LL) = *(_QWORD *)(a2 + 40);
            v18 = 1;
          }
          v15 = *(_QWORD *)(v15 + 656);
        }
        v17 = v18 == 0;
      }
      if ( v17 )
        goto LABEL_26;
    }
    else
    {
      if ( (*(_DWORD *)gpsi & 4) != 0 )
      {
        ApiSetEditionImmActivateLayout(v8, a2);
      }
      else
      {
        v20 = v9;
        v21 = a2;
        HMAssignmentLock(&v20);
      }
      if ( (*((_DWORD *)v8 + 120) & 1) == 0 )
      {
        *(_WORD *)(*((_QWORD *)v8 + 59) + 152LL) = *(_WORD *)(a2 + 72);
        *(_QWORD *)(*((_QWORD *)v8 + 59) + 144LL) = *(_QWORD *)(a2 + 40);
      }
    }
    if ( gptiForeground && *((_QWORD *)gptiForeground + 52) == *((_QWORD *)v8 + 52) )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
      if ( qword_1C0252028 )
        qword_1C0252028(2147483649LL, 0LL, *(unsigned int *)(a2 + 40), 0LL, 0);
      ApiSetEditionNotifyShellLanguageHook((__int64)v8, *(_QWORD *)(a2 + 40), 1u);
    }
    else if ( !a1 )
    {
      xxxChangeForegroundKeyboardTable((struct tagKL *)v10, (struct tagKL *)a2);
    }
    v12 = *((_QWORD *)v8 + 53);
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 112);
      if ( v13 )
        goto LABEL_44;
      v13 = *(_QWORD *)(v12 + 120);
      if ( !v13 )
        v13 = a4;
      if ( v13 )
LABEL_44:
        ApiSetEditionSendIMENotification((_DWORD)v8, v13, 81, *(_DWORD *)(a2 + 68), *(_QWORD *)(a2 + 40));
    }
    v14 = *((_QWORD *)v8 + 97);
    if ( v14
      && (*((_DWORD *)v8 + 120) & 8) == 0
      && ((*(_WORD *)(a2 + 42) & 0xF000) == 0xE000 || (*(_DWORD *)gpsi & 4) != 0) )
    {
      LOBYTE(v6) = v7 != 0;
      ApiSetEditionSendIMENotification((_DWORD)v8, v14, 647, 31, v6);
    }
LABEL_26:
    ThreadUnlock1();
  }
  return v19;
}
