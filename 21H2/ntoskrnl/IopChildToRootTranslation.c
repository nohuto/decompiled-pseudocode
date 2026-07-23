/*
 * XREFs of IopChildToRootTranslation @ 0x1407517D4
 * Callers:
 *     PnpBuildCmResourceList @ 0x140751340 (PnpBuildCmResourceList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     IopFindLegacyBusDeviceNode @ 0x14075244C (IopFindLegacyBusDeviceNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopChildToRootTranslation(
        _QWORD *LegacyBusDeviceNode,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned int v6; // ebp
  bool v10; // r14
  _DWORD *PoolWithTag; // rdi
  _DWORD *v12; // rsi
  __int64 v13; // r13
  unsigned int v14; // r11d
  _QWORD *v15; // r9
  __int64 *v16; // rax
  __int64 v17; // rcx
  int v18; // eax
  _DWORD *v19; // rcx
  bool v22; // [rsp+98h] [rbp+20h]

  v6 = 0;
  v10 = 0;
  v22 = a4 == 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v12 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20207050u);
  if ( !v12 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225626LL;
  }
  *(_OWORD *)PoolWithTag = *(_OWORD *)a5;
  PoolWithTag[4] = *(_DWORD *)(a5 + 16);
  if ( LegacyBusDeviceNode )
  {
    v13 = LegacyBusDeviceNode[4];
  }
  else
  {
    LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(a2, a3);
    v13 = 0LL;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !LegacyBusDeviceNode || v10 )
      {
        *a6 = PoolWithTag;
        goto LABEL_20;
      }
      if ( LegacyBusDeviceNode != IopRootDeviceNode || v22 )
        break;
      v22 = 1;
      LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(a2, a3);
      if ( LegacyBusDeviceNode == v15 && !a2 )
        LegacyBusDeviceNode = (_QWORD *)IopFindLegacyBusDeviceNode(v14, 0LL);
    }
    v16 = (__int64 *)LegacyBusDeviceNode[63];
    if ( v16 != LegacyBusDeviceNode + 63 )
    {
      while ( *((_BYTE *)v16 + 16) != *(_BYTE *)a5 )
      {
        v16 = (__int64 *)*v16;
        if ( v16 == LegacyBusDeviceNode + 63 )
          goto LABEL_12;
      }
      v17 = v16[3];
      if ( v17 )
        break;
    }
LABEL_12:
    LegacyBusDeviceNode = (_QWORD *)LegacyBusDeviceNode[2];
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, _QWORD, _QWORD, _QWORD, __int64, _DWORD *))(v17 + 32))(
          *(_QWORD *)(v17 + 8),
          PoolWithTag,
          0LL,
          0LL,
          0LL,
          v13,
          v12);
  v6 = v18;
  v19 = PoolWithTag;
  if ( v18 >= 0 )
  {
    PoolWithTag = v12;
    v10 = v18 == 288;
    v12 = v19;
    goto LABEL_12;
  }
  ExFreePoolWithTag(PoolWithTag, 0);
LABEL_20:
  ExFreePoolWithTag(v12, 0);
  return v6;
}
