/*
 * XREFs of PnpProcessAssignResources @ 0x14074074C
 * Callers:
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x1402FA0B0 (KeAcquireGuardedMutex.c)
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     memset @ 0x140414300 (memset.c)
 *     PipSetDevNodeProblem @ 0x1407396AC (PipSetDevNodeProblem.c)
 *     PnpProcessAssignResourcesWorker @ 0x140740930 (PnpProcessAssignResourcesWorker.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x140749D74 (PipClearDevNodeUserFlags.c)
 *     PnpAssignResourcesToDevices @ 0x14074FD90 (PnpAssignResourcesToDevices.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

char __fastcall PnpProcessAssignResources(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  int v4; // edi
  char v6; // bp
  unsigned int v7; // ebx
  __int64 *PoolWithTag; // rax
  __int64 *v9; // r12
  __int64 v10; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  _QWORD *v14; // rsi
  __int64 *v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rbx
  char *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rbx
  int v21; // r8d
  __int64 v22; // rcx
  int v23; // edx

  v4 = a2;
  v6 = 0;
  v7 = 8 * IopNumberDeviceNodes + 8;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, v7, 0x35706E50u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v7);
    *(_DWORD *)v9 = v4;
    PnpProcessAssignResourcesWorker(a1, v9);
    v10 = *((unsigned int *)v9 + 1);
    if ( (_DWORD)v10 )
    {
      v12 = ExAllocatePoolWithTag(PagedPool, (unsigned int)((_DWORD)v10 << 6), 0x36706E50u);
      v13 = v12;
      if ( v12 )
      {
        memset(v12, 0, (unsigned int)((_DWORD)v10 << 6));
        v14 = v13;
        v15 = v9 + 1;
        v16 = v10;
        do
        {
          v17 = *v15;
          memset(v14, 0, 0x40uLL);
          v14[3] = 0LL;
          ++v15;
          *v14 = v17;
          *((_DWORD *)v14 + 3) = 4;
          v14 += 8;
          --v16;
        }
        while ( v16 );
        v6 = 0;
        PnpAssignResourcesToDevices((unsigned int)v10, v13, a3);
        v18 = (char *)(v13 + 5);
        while ( 1 )
        {
          v19 = *((_QWORD *)v18 - 5);
          if ( v19 )
            v20 = *(_QWORD *)(*(_QWORD *)(v19 + 312) + 40LL);
          else
            v20 = 0LL;
          v21 = *((_DWORD *)v18 + 4);
          if ( v21 >= 0 )
          {
            v6 = 1;
            if ( *(_QWORD *)v18 )
            {
              KeAcquireGuardedMutex(&PiResourceListLock);
              *(_QWORD *)(v20 + 416) = *(_QWORD *)v18;
              *(_QWORD *)(v20 + 424) = *((_QWORD *)v18 + 1);
              KeReleaseGuardedMutex(&PiResourceListLock);
            }
            else
            {
              PipSetDevNodeFlags(v20, 256LL);
            }
            PipSetDevNodeState(v20, 772);
            PipClearDevNodeUserFlags(v20, 4LL);
            goto LABEL_18;
          }
          if ( v21 != -1073741267 )
            break;
LABEL_18:
          v18 += 64;
          if ( !--v10 )
          {
            ExFreePoolWithTag(v13, 0x36706E50u);
            goto LABEL_3;
          }
        }
        switch ( v21 )
        {
          case -1073741686:
            v23 = 17;
            break;
          case -1073741438:
            v23 = 34;
            break;
          case -1073739512:
          case -1073479627:
            v23 = 35;
            break;
          case -1073479626:
            v23 = 33;
            break;
          default:
            v22 = v20;
            if ( v21 == -1073479625 )
              v23 = 36;
            else
              v23 = 12;
            goto LABEL_37;
        }
        v22 = v20;
LABEL_37:
        PipSetDevNodeProblem(v22, v23, v21);
        goto LABEL_18;
      }
    }
LABEL_3:
    ExFreePoolWithTag(v9, 0x35706E50u);
  }
  return v6;
}
