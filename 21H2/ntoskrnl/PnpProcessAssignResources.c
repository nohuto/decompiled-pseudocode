/*
 * XREFs of PnpProcessAssignResources @ 0x140749294
 * Callers:
 *     PipProcessDevNodeTree @ 0x140777578 (PipProcessDevNodeTree.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PnpAssignResourcesToDevices @ 0x140747E9C (PnpAssignResourcesToDevices.c)
 *     PnpProcessAssignResourcesWorker @ 0x140749448 (PnpProcessAssignResourcesWorker.c)
 *     PipClearDevNodeUserFlags @ 0x14074A08C (PipClearDevNodeUserFlags.c)
 *     PipSetDevNodeProblem @ 0x140765114 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall PnpProcessAssignResources(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  unsigned int v4; // ebx
  char v6; // bp
  unsigned int *Pool2; // rax
  unsigned int *v8; // r15
  __int64 v9; // rdi
  __int64 v11; // rax
  _DWORD *v12; // r13
  _QWORD *v13; // rsi
  __int64 *v14; // r14
  __int64 v15; // rbp
  __int64 v16; // rbx
  _DWORD *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx

  v4 = a2;
  v6 = 0;
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, (unsigned int)(8 * IopNumberDeviceNodes + 8), 896560720LL);
  v8 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v4;
    PnpProcessAssignResourcesWorker(a1, Pool2);
    v9 = v8[1];
    if ( (_DWORD)v9 )
    {
      v11 = ExAllocatePool2(256LL, (unsigned int)((_DWORD)v9 << 6), 913337936LL);
      v12 = (_DWORD *)v11;
      if ( v11 )
      {
        v13 = (_QWORD *)v11;
        v14 = (__int64 *)(v8 + 2);
        v15 = v9;
        do
        {
          v16 = *v14;
          memset(v13, 0, 0x40uLL);
          v13[3] = 0LL;
          ++v14;
          *v13 = v16;
          *((_DWORD *)v13 + 3) = 4;
          v13 += 8;
          --v15;
        }
        while ( v15 );
        v6 = 0;
        PnpAssignResourcesToDevices(v9, v12, a3);
        v17 = v12 + 10;
        while ( 1 )
        {
          v18 = *((_QWORD *)v17 - 5);
          if ( v18 )
            v19 = *(_QWORD *)(*(_QWORD *)(v18 + 312) + 40LL);
          else
            v19 = 0LL;
          v20 = (unsigned int)v17[4];
          if ( (int)v20 >= 0 )
          {
            v6 = 1;
            if ( *(_QWORD *)v17 )
            {
              ExAcquireFastMutex(&PiResourceListLock);
              *(_QWORD *)(v19 + 416) = *(_QWORD *)v17;
              *(_QWORD *)(v19 + 424) = *((_QWORD *)v17 + 1);
              KeReleaseGuardedMutex(&PiResourceListLock);
            }
            else
            {
              PipSetDevNodeFlags(v19, 256LL);
            }
            PipSetDevNodeState(v19, 774);
            PipClearDevNodeUserFlags(v19, 4LL);
            goto LABEL_15;
          }
          if ( (_DWORD)v20 == -1073741686 )
          {
            v22 = 17LL;
            goto LABEL_32;
          }
          if ( (_DWORD)v20 == -1073741438 )
            break;
          if ( (_DWORD)v20 != -1073741267 )
          {
            if ( (_DWORD)v20 == -1073739512 || (_DWORD)v20 == -1073479627 )
            {
              v22 = 35LL;
            }
            else
            {
              if ( (_DWORD)v20 != -1073479626 )
              {
                v21 = v19;
                if ( (_DWORD)v20 == -1073479625 )
                  v22 = 36LL;
                else
                  v22 = 12LL;
                goto LABEL_33;
              }
              v22 = 33LL;
            }
LABEL_32:
            v21 = v19;
LABEL_33:
            PipSetDevNodeProblem(v21, v22, v20);
          }
LABEL_15:
          v17 += 16;
          if ( !--v9 )
          {
            ExFreePoolWithTag(v12, 0x36706E50u);
            goto LABEL_3;
          }
        }
        v22 = 34LL;
        goto LABEL_32;
      }
    }
LABEL_3:
    ExFreePoolWithTag(v8, 0x35706E50u);
  }
  return v6;
}
