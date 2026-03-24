/*
 * XREFs of CmpCallbackFillObjectContext @ 0x1406F39F0
 * Callers:
 *     CmpCallCallBacksEx @ 0x1406F3440 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     CmpGetCallbackObjectContext @ 0x14068AFE4 (CmpGetCallbackObjectContext.c)
 */

void __fastcall CmpCallbackFillObjectContext(int a1, _DWORD **a2, __int64 *a3)
{
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  _QWORD *v7; // r14
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  _QWORD *v10; // r14
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  _QWORD *v13; // r14
  _DWORD *v14; // rax
  _DWORD *v15; // rbx
  _QWORD *v16; // r14
  _DWORD *v17; // rax
  _DWORD *v18; // rbx
  _QWORD *v19; // r14
  _DWORD *v20; // rax
  _QWORD *v21; // r14
  struct _KTHREAD *v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _DWORD *v25; // rax
  _QWORD *v26; // r14
  struct _KTHREAD *v27; // rax
  __int64 v28; // rdx
  struct _KTHREAD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v33; // rax
  __int64 v34; // rdx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rdx
  struct _KTHREAD *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  struct _KTHREAD *v40; // rax
  _QWORD *v41; // rax
  __int64 v42; // rdx

  switch ( a1 )
  {
    case 29:
LABEL_15:
      v9 = 0LL;
LABEL_14:
      a2[5] = v9;
      return;
    case 28:
LABEL_16:
      v11 = a2[1];
      v12 = 0LL;
      if ( v11 )
      {
        if ( *v11 == 1803104306 )
        {
          v13 = v11 + 18;
          if ( (_QWORD *)*v13 != v13 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v33 = (_QWORD *)*v13;
            if ( (_QWORD *)*v13 != v13 )
            {
              v34 = *a3;
              while ( v33[4] != v34 )
              {
                if ( v33[4] >= v34 )
                {
                  v33 = (_QWORD *)*v33;
                  if ( v33 != v13 )
                    continue;
                }
                goto LABEL_61;
              }
              v12 = (_DWORD *)v33[7];
            }
LABEL_61:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[11] = v12;
      break;
    case 23:
LABEL_11:
      v8 = *a2;
      v9 = 0LL;
      if ( *a2 )
      {
        if ( *v8 == 1803104306 )
        {
          v10 = v8 + 18;
          if ( (_QWORD *)*v10 != v10 )
          {
            v29 = KeGetCurrentThread();
            --v29->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v30 = (_QWORD *)*v10;
            if ( (_QWORD *)*v10 != v10 )
            {
              v31 = *a3;
              while ( v30[4] != v31 )
              {
                if ( v30[4] >= v31 )
                {
                  v30 = (_QWORD *)*v30;
                  if ( v30 != v10 )
                    continue;
                }
                goto LABEL_56;
              }
              v9 = (_DWORD *)v30[7];
            }
LABEL_56:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      goto LABEL_14;
    case 8:
      v14 = *a2;
      v15 = 0LL;
      if ( *a2 )
      {
        if ( *v14 == 1803104306 )
        {
          v16 = v14 + 18;
          if ( (_QWORD *)*v16 != v16 )
          {
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v38 = (_QWORD *)*v16;
            if ( (_QWORD *)*v16 != v16 )
            {
              v39 = *a3;
              while ( v38[4] != v39 )
              {
                if ( v38[4] >= v39 )
                {
                  v38 = (_QWORD *)*v38;
                  if ( v38 != v16 )
                    continue;
                }
                goto LABEL_76;
              }
              v15 = (_DWORD *)v38[7];
            }
LABEL_76:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          }
        }
      }
      a2[7] = v15;
      break;
    case 22:
      goto LABEL_11;
    default:
      switch ( a1 )
      {
        case 0:
        case 30:
          a2[2] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 1:
          a2[6] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 2:
        case 4:
        case 34:
          a2[3] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 3:
        case 36:
        case 47:
          a2[5] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 5:
          v25 = *a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_10;
          if ( *v25 != 1803104306 )
            goto LABEL_10;
          v26 = v25 + 18;
          if ( (_QWORD *)*v26 == v26 )
            goto LABEL_10;
          v27 = KeGetCurrentThread();
          --v27->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v23 = (_QWORD *)*v26;
          if ( (_QWORD *)*v26 == v26 )
            goto LABEL_69;
          v28 = *a3;
          while ( v23[4] != v28 )
          {
            if ( v23[4] >= v28 )
            {
              v23 = (_QWORD *)*v23;
              if ( v23 != v26 )
                continue;
            }
            goto LABEL_69;
          }
          goto LABEL_68;
        case 6:
          v20 = *a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_10;
          if ( *v20 != 1803104306 )
            goto LABEL_10;
          v21 = v20 + 18;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_10;
          v22 = KeGetCurrentThread();
          --v22->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v23 = (_QWORD *)*v21;
          if ( (_QWORD *)*v21 == v21 )
            goto LABEL_69;
          v24 = *a3;
          while ( v23[4] != v24 )
          {
            if ( v23[4] >= v24 )
            {
              v23 = (_QWORD *)*v23;
              if ( v23 != v21 )
                continue;
            }
            goto LABEL_69;
          }
          goto LABEL_68;
        case 7:
          v5 = *a2;
          v6 = 0LL;
          if ( !*a2 )
            goto LABEL_10;
          if ( *v5 != 1803104306 )
            goto LABEL_10;
          v7 = v5 + 18;
          if ( (_QWORD *)*v7 == v7 )
            goto LABEL_10;
          v35 = KeGetCurrentThread();
          --v35->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v23 = (_QWORD *)*v7;
          if ( (_QWORD *)*v7 == v7 )
            goto LABEL_69;
          v36 = *a3;
          while ( v23[4] != v36 )
          {
            if ( v23[4] >= v36 )
            {
              v23 = (_QWORD *)*v23;
              if ( v23 != v7 )
                continue;
            }
            goto LABEL_69;
          }
LABEL_68:
          v6 = (_DWORD *)v23[7];
LABEL_69:
          ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_10:
          a2[6] = v6;
          return;
        case 9:
          a2[7] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 14:
          v17 = *a2;
          v18 = 0LL;
          if ( !*a2 )
            goto LABEL_27;
          if ( *v17 != 1803104306 )
            goto LABEL_27;
          v19 = v17 + 18;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_27;
          v40 = KeGetCurrentThread();
          --v40->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v41 = (_QWORD *)*v19;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_81;
          v42 = *a3;
          break;
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 31:
        case 33:
        case 35:
        case 37:
        case 39:
        case 42:
        case 44:
        case 46:
        case 48:
          goto LABEL_11;
        case 25:
        case 27:
          goto LABEL_15;
        case 26:
          goto LABEL_16;
        case 32:
          a2[9] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        case 38:
        case 41:
        case 43:
        case 45:
          a2[4] = (_DWORD *)CmpGetCallbackObjectContext(*a2, a3);
          return;
        default:
          return;
      }
      while ( v41[4] != v42 )
      {
        if ( v41[4] >= v42 )
        {
          v41 = (_QWORD *)*v41;
          if ( v41 != v19 )
            continue;
        }
        goto LABEL_81;
      }
      v18 = (_DWORD *)v41[7];
LABEL_81:
      ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_27:
      a2[2] = v18;
      return;
  }
}
