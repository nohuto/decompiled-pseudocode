/*
 * XREFs of PipEnumerateCompleted @ 0x140745540
 * Callers:
 *     PipProcessDevNodeTree @ 0x1407413C4 (PipProcessDevNodeTree.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14036FB98 (PipSetDevNodeState.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PnpRequestDeviceRemoval @ 0x140736848 (PnpRequestDeviceRemoval.c)
 *     PipProcessEnumeratedChildDevice @ 0x14074571C (PipProcessEnumeratedChildDevice.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746200 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x140746C34 (PipClearDevNodeFlags.c)
 *     PiSwUnlock @ 0x1407471F0 (PiSwUnlock.c)
 *     PiSwFindChildren @ 0x14074721C (PiSwFindChildren.c)
 *     PiSwLock @ 0x140747284 (PiSwLock.c)
 *     PiSwGetChildPdo @ 0x140770AFC (PiSwGetChildPdo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PipEnumerateCompleted(__int64 a1)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rcx
  __int64 i; // rbx
  _QWORD **Children; // rax
  _QWORD *v6; // rsi
  __int64 v7; // rbx
  char v8; // bp
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // rsi
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
  v7 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  if ( v7 )
  {
    do
    {
      v13 = *(_QWORD *)v7;
      if ( (*(_DWORD *)(v7 + 396) & 0x10010) == 0 )
      {
        PipSetDevNodeFlags(v7, 0x10000LL);
        PnpRequestDeviceRemoval(v7, 1, 24, 0);
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
