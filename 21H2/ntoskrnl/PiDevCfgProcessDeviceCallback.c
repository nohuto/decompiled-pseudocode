/*
 * XREFs of PiDevCfgProcessDeviceCallback @ 0x1407BE4A0
 * Callers:
 *     <none>
 * Callees:
 *     PipAreDriversLoaded @ 0x1402532B4 (PipAreDriversLoaded.c)
 *     PnpDuplicateUnicodeString @ 0x14036F050 (PnpDuplicateUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memset @ 0x140414300 (memset.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x140636980 (_CmOpenDeviceRegKey.c)
 *     PnpSetTargetDeviceRemove @ 0x140739194 (PnpSetTargetDeviceRemove.c)
 *     PiDevCfgSetDeviceRegProp @ 0x140739E10 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgFreeDeviceContext @ 0x14073A554 (PiDevCfgFreeDeviceContext.c)
 *     PiDevCfgInitDeviceContext @ 0x14073BBF0 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1408A507C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgProcessDeviceCallback(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  bool v5; // zf
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r8d
  _OWORD *PoolWithTag; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  HANDLE Handle[2]; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v18[16]; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v19; // [rsp+110h] [rbp+67h] BYREF
  int v20; // [rsp+118h] [rbp+6Fh] BYREF
  int v21; // [rsp+120h] [rbp+77h] BYREF
  int v22; // [rsp+128h] [rbp+7Fh] BYREF

  v4 = 0LL;
  memset(v18, 0, 0x48uLL);
  v5 = (*(_DWORD *)(a1 + 704) & 0x1000) == 0;
  Handle[0] = 0LL;
  v19 = 0;
  v22 = 0;
  v21 = 1;
  v20 = 0;
  if ( v5
    || !*(_QWORD *)(a1 + 48)
    || (int)CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), 16, 0, 983103, 0, (__int64)Handle, 0LL) < 0 )
  {
    goto LABEL_11;
  }
  v6 = *(_QWORD *)(a1 + 48);
  v20 = 4;
  if ( (int)CmGetDeviceRegProp(
              *(__int64 *)&PiPnpRtlCtx,
              v6,
              (__int64)Handle[0],
              11,
              (__int64)&v21,
              (__int64)&v19,
              (__int64)&v20,
              0) >= 0
    && v21 == 4
    && v20 == 4 )
  {
    v7 = v19;
  }
  else
  {
    v7 = 0;
    v19 = 0;
  }
  if ( (v7 & 0x40000) != 0 )
  {
    if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), (__int64)Handle[0], v18) < 0 )
      goto LABEL_11;
    LOBYTE(v9) = (PiDevCfgFlags & 2) != 0;
    if ( ((unsigned __int8)v9 & ((v19 & 0x400) != 0)) != 0 )
    {
      v10 = v19 & 0xFFFFFFDF;
    }
    else
    {
      v11 = PiDevCfgCheckDeviceNeedsUpdate(v18, &v22);
      v10 = v19;
      if ( v11 >= 0 )
        v10 = v22 | v19;
    }
    v19 = v10 & 0xFFFBFFFF;
    PiDevCfgSetDeviceRegProp(v9, (__int64)v18, 0xBu, 4, (__int64)&v19, 4);
    LOBYTE(v7) = v19;
  }
  if ( (v7 & 2) == 0 )
  {
    if ( (v7 & 0x20) == 0 )
      goto LABEL_11;
    v16 = *(_QWORD **)(a1 + 32);
    if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
    {
      PnpRequestDeviceAction(v16, 1, 1, 0LL, 0LL, 0LL, 0LL);
      PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_11;
    }
    PnpSetTargetDeviceRemove(v16, 0, 0, 0, 0, 18, -1073740651, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_31;
  }
  if ( (unsigned int)PipAreDriversLoaded(a1) )
  {
    v19 = v13 & 0xFFFFFFFD;
    PiDevCfgSetDeviceRegProp(v12, (__int64)v18, 0xBu, 4, (__int64)&v19, 4);
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x63647050u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    if ( !PnpDuplicateUnicodeString((__int64)(PoolWithTag + 1), a1 + 40) )
    {
LABEL_31:
      if ( v4 )
        ExFreePoolWithTag(v4, 0);
      goto LABEL_11;
    }
    v15 = *(_QWORD **)(a2 + 8);
    if ( *v15 != a2 )
      __fastfail(3u);
    *v4 = a2;
    v4[1] = v15;
    *v15 = v4;
    *(_QWORD *)(a2 + 8) = v4;
  }
LABEL_11:
  PiDevCfgFreeDeviceContext((__int64)v18);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 0LL;
}
