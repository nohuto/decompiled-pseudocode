/*
 * XREFs of PipEnumerateCompleted @ 0x140725850
 * Callers:
 *     PipProcessDevNodeTree @ 0x140726FC0 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14036B438 (PipSetDevNodeState.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     PipProcessEnumeratedChildDevice @ 0x140725A2C (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x140725AEC (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140726510 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x140726F44 (PipClearDevNodeFlags.c)
 *     PiSwFindChildren @ 0x1407329D8 (PiSwFindChildren.c)
 *     PnpRequestDeviceRemoval @ 0x140733408 (PnpRequestDeviceRemoval.c)
 *     PiSwUnlock @ 0x140737DA4 (PiSwUnlock.c)
 *     PiSwLock @ 0x140737DD0 (PiSwLock.c)
 *     PiSwGetChildPdo @ 0x14075DFAC (PiSwGetChildPdo.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipEnumerateCompleted(__int64 a1)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rcx
  __int64 i; // rbx
  _QWORD **Children; // rax
  _QWORD *v6; // rsi
  __int64 *v7; // rbx
  char v8; // bp
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  _QWORD *j; // rbx
  __int64 ChildPdo; // rax
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_QWORD **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 528) )
  {
    while ( v2 )
    {
      PipClearDevNodeFlags(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  else
  {
    while ( v2 )
    {
      if ( *(PDRIVER_OBJECT *)(v2[4] + 8LL) == PiSwDeviceDriverObject )
        PipClearDevNodeFlags(v2, 16LL);
      v2 = (_QWORD *)*v2;
    }
  }
  v3 = *(_DWORD **)(a1 + 528);
  if ( v3 )
  {
    for ( i = 0LL; (unsigned int)i < *v3; i = (unsigned int)(i + 1) )
    {
      PipProcessEnumeratedChildDevice(a1, *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * i + 8));
      v3 = *(_DWORD **)(a1 + 528);
    }
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 528) = 0LL;
  }
  PiSwLock();
  Children = (_QWORD **)PiSwFindChildren(a1 + 40);
  v6 = Children;
  if ( Children )
  {
    for ( j = *Children; j != v6; j = (_QWORD *)*j )
    {
      ChildPdo = PiSwGetChildPdo(*(PDEVICE_OBJECT *)(a1 + 32));
      if ( ChildPdo )
        PipProcessEnumeratedChildDevice(a1, ChildPdo);
    }
  }
  PiSwUnlock();
  v7 = *(__int64 **)(a1 + 8);
  v8 = 0;
  if ( v7 )
  {
    do
    {
      v13 = (__int64 *)*v7;
      if ( (*((_DWORD *)v7 + 99) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v7, 0x10000LL);
        LOBYTE(v14) = 1;
        PnpRequestDeviceRemoval(v7, v14, 24LL);
        v8 = 1;
      }
      v7 = v13;
    }
    while ( v13 );
  }
  PipSetDevNodeState(a1, 776);
  if ( !v8 || (PVOID)a1 == IopRootDeviceNode )
    v9 = 0;
  else
    v9 = -1073741106;
  PiPnpRtlBeginOperation(&P);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v10, *((_QWORD *)IopRootDeviceNode + 6), 15LL);
  PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v11, *((_QWORD *)IopRootDeviceNode + 6), 20LL);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return v9;
}
