/*
 * XREFs of PnpQueryRebalanceWorker @ 0x1408B86D8
 * Callers:
 *     PnpQueryRebalance @ 0x1408B8620 (PnpQueryRebalance.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14075028C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpCancelStopDeviceNode @ 0x1408B8444 (PnpCancelStopDeviceNode.c)
 *     PnpQueryStopDeviceNode @ 0x1408B8874 (PnpQueryStopDeviceNode.c)
 */

__int64 __fastcall PnpQueryRebalanceWorker(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        char a6)
{
  int v6; // r15d
  int v7; // eax
  _DWORD *v9; // r14
  __int64 v11; // r13
  int StopDeviceNode; // eax
  unsigned int v14; // edi
  __int64 v15; // rbx
  _DWORD *v16; // rsi
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // ecx
  int v21; // [rsp+60h] [rbp+8h] BYREF
  _DWORD *v22; // [rsp+70h] [rbp+18h]

  v22 = a3;
  v21 = 0;
  v6 = 0;
  v7 = *(_DWORD *)(BugCheckParameter2 + 300);
  v9 = a5;
  v11 = a2;
  if ( v7 == 776 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000) == 0 )
    {
      LOBYTE(a2) = a6;
      StopDeviceNode = PnpQueryStopDeviceNode(BugCheckParameter2, a2);
      v6 = StopDeviceNode;
      if ( StopDeviceNode < 0 )
      {
        PnpCancelStopDeviceNode(BugCheckParameter2);
        if ( v9 )
          *v9 = 1;
      }
      else
      {
        if ( StopDeviceNode == 281 )
          PipSetDevNodeFlags(BugCheckParameter2, 1024);
        v14 = *a3;
        v15 = *(_QWORD *)(BugCheckParameter2 + 32);
        v16 = (_DWORD *)(v11 + ((unsigned __int64)v14 << 6));
        memset(v16, 0, 0x40uLL);
        *(_QWORD *)v16 = v15;
        v16[3] = 4;
        PnpGetResourceRequirementsForAssignTable((unsigned __int64)v16, v11 + ((unsigned __int64)(v14 + 1) << 6), &v21);
        v17 = (unsigned __int64)(unsigned int)*v22 << 6;
        if ( *(int *)(v17 + v11 + 56) < 0 )
        {
          v6 = *(_DWORD *)(v17 + v11 + 56);
          PnpCancelStopDeviceNode(BugCheckParameter2);
          if ( v9 )
            *v9 = 2;
        }
        else if ( (*(_DWORD *)(v17 + v11 + 8) & 0x20) == 0 )
        {
          ++*v22;
        }
      }
      goto LABEL_20;
    }
    goto LABEL_15;
  }
  v18 = v7 - 769;
  if ( v18 > 0x11 || (v19 = 196871, !_bittest(&v19, v18)) )
  {
LABEL_15:
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x40000) == 0 )
    {
      v6 = -1073741823;
      if ( a5 )
        *a5 = 3;
      goto LABEL_21;
    }
  }
  if ( !a5 )
    goto LABEL_23;
  *a5 = 4;
LABEL_20:
  if ( v6 < 0 )
  {
LABEL_21:
    if ( a4 )
      *a4 = BugCheckParameter2;
    return (unsigned int)v6;
  }
LABEL_23:
  if ( a4 )
    *a4 = 0LL;
  if ( v9 )
    *v9 = 0;
  return (unsigned int)v6;
}
