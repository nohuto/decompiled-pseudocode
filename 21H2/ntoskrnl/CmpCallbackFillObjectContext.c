/*
 * XREFs of CmpCallbackFillObjectContext @ 0x14070ADD0
 * Callers:
 *     CmpCallCallBacksEx @ 0x14070A820 (CmpCallCallBacksEx.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CmpGetCallbackObjectContext @ 0x1405EAE54 (CmpGetCallbackObjectContext.c)
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
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _KTHREAD *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _KTHREAD *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  struct _KTHREAD *v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9

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
            v36 = (_QWORD *)*v13;
            if ( (_QWORD *)*v13 != v13 )
            {
              v37 = *a3;
              while ( v36[4] != v37 )
              {
                if ( v36[4] >= v37 )
                {
                  v36 = (_QWORD *)*v36;
                  if ( v36 != v13 )
                    continue;
                }
                goto LABEL_61;
              }
              v12 = (_DWORD *)v36[7];
            }
LABEL_61:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v38, v39, v40);
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
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v32, v33, v34);
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
            v46 = KeGetCurrentThread();
            --v46->KernelApcDisable;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
            v47 = (_QWORD *)*v16;
            if ( (_QWORD *)*v16 != v16 )
            {
              v48 = *a3;
              while ( v47[4] != v48 )
              {
                if ( v47[4] >= v48 )
                {
                  v47 = (_QWORD *)*v47;
                  if ( v47 != v16 )
                    continue;
                }
                goto LABEL_76;
              }
              v15 = (_DWORD *)v47[7];
            }
LABEL_76:
            ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v49, v50, v51);
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
          v41 = KeGetCurrentThread();
          --v41->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v23 = (_QWORD *)*v7;
          if ( (_QWORD *)*v7 == v7 )
            goto LABEL_69;
          v42 = *a3;
          while ( v23[4] != v42 )
          {
            if ( v23[4] >= v42 )
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
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v43, v44, v45);
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
          v52 = KeGetCurrentThread();
          --v52->KernelApcDisable;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CmpContextListLock, 0LL);
          v53 = (_QWORD *)*v19;
          if ( (_QWORD *)*v19 == v19 )
            goto LABEL_81;
          v54 = *a3;
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
      while ( v53[4] != v54 )
      {
        if ( v53[4] >= v54 )
        {
          v53 = (_QWORD *)*v53;
          if ( v53 != v19 )
            continue;
        }
        goto LABEL_81;
      }
      v18 = (_DWORD *)v53[7];
LABEL_81:
      ExReleasePushLockEx((ULONG_PTR)&CmpContextListLock, 0LL);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v55, v56, v57);
LABEL_27:
      a2[2] = v18;
      return;
  }
}
