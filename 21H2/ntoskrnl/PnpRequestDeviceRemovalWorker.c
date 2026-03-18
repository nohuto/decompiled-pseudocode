/*
 * XREFs of PnpRequestDeviceRemovalWorker @ 0x140765370
 * Callers:
 *     PnpRequestDeviceRemovalWorker @ 0x140765370 (PnpRequestDeviceRemovalWorker.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 * Callees:
 *     PipRestoreDevNodeState @ 0x14025B96C (PipRestoreDevNodeState.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     PipIsDevNodeDNStarted @ 0x1402DEAB0 (PipIsDevNodeDNStarted.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140765370 (PnpRequestDeviceRemovalWorker.c)
 *     PiGetDependentList @ 0x14076BBF4 (PiGetDependentList.c)
 *     PiEnumerateDependentListEntry @ 0x1409426FC (PiEnumerateDependentListEntry.c)
 */

char __fastcall PnpRequestDeviceRemovalWorker(int a1, __int64 a2, char a3, int a4, char a5)
{
  char v9; // r8
  _QWORD **DependentList; // rax
  int v11; // r8d
  _QWORD *i; // rdi
  _QWORD *v13; // rdi
  _QWORD *v14; // rbx
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  char v17; // [rsp+68h] [rbp+20h] BYREF

  v16[0] = 0LL;
  if ( a4 != 2 && !a5 )
  {
    LOBYTE(DependentList) = PipIsDevNodeDNStarted(a2);
    goto LABEL_5;
  }
  v9 = 1;
  if ( *(_DWORD *)(a2 + 300) == 784 )
    goto LABEL_11;
  if ( *(_DWORD *)(a2 + 300) == 785 )
  {
    if ( a3 )
    {
      PipRestoreDevNodeState(a2);
      PipSetDevNodeState(a2, 784);
    }
LABEL_11:
    v9 = 0;
  }
  LOBYTE(DependentList) = v9;
LABEL_5:
  if ( (_BYTE)DependentList )
  {
    PipSetDevNodeState(a2, 785 - (a3 != 0));
    for ( i = *(_QWORD **)(a2 + 8); i; i = (_QWORD *)*i )
    {
      LOBYTE(v11) = 1;
      PnpRequestDeviceRemovalWorker(a1, (_DWORD)i, v11, a4, 1);
    }
    DependentList = (_QWORD **)PiGetDependentList(*(_QWORD *)(a2 + 32));
    v13 = DependentList;
    v14 = *DependentList;
    while ( v14 != v13 )
    {
      PiEnumerateDependentListEntry(v14, v16, &v17);
      LOBYTE(DependentList) = v16[0];
      v14 = (_QWORD *)*v14;
      if ( v16[0] )
        LOBYTE(DependentList) = PnpRequestDeviceRemovalWorker(
                                  a1,
                                  *(_QWORD *)(*(_QWORD *)(v16[0] + 312LL) + 40LL),
                                  0,
                                  1,
                                  0);
    }
  }
  return (char)DependentList;
}
