/*
 * XREFs of PiDevCfgProcessDeviceCallback @ 0x14084F060
 * Callers:
 *     <none>
 * Callees:
 *     PnpDuplicateUnicodeString @ 0x1402D1DA4 (PnpDuplicateUnicodeString.c)
 *     PnpRequestDeviceAction @ 0x1402DCF44 (PnpRequestDeviceAction.c)
 *     PipAreDriversLoaded @ 0x1402DEADC (PipAreDriversLoaded.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PiDevCfgSetDeviceRegProp @ 0x1406E5528 (PiDevCfgSetDeviceRegProp.c)
 *     PiDevCfgInitDeviceContext @ 0x1407448BC (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgFreeDeviceContext @ 0x1407476FC (PiDevCfgFreeDeviceContext.c)
 *     PnpSetTargetDeviceRemove @ 0x14076729C (PnpSetTargetDeviceRemove.c)
 *     _CmGetDeviceRegProp @ 0x14077CD90 (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x14077F2EC (_CmOpenDeviceRegKey.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14094AA64 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDevCfgProcessDeviceCallback(__int64 a1, __int64 a2)
{
  bool v4; // zf
  __int64 v5; // rsi
  __int64 v6; // rdx
  unsigned int v7; // r8d
  __int64 v9; // rcx
  unsigned int v10; // edx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // r8d
  __int64 Pool2; // rax
  _QWORD *v15; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  int v18; // [rsp+40h] [rbp-69h]
  int v19; // [rsp+48h] [rbp-61h]
  HANDLE Handle[2]; // [rsp+70h] [rbp-39h] BYREF
  _QWORD v21[16]; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v22; // [rsp+110h] [rbp+67h] BYREF
  int v23; // [rsp+118h] [rbp+6Fh] BYREF
  int v24; // [rsp+120h] [rbp+77h] BYREF
  int v25; // [rsp+128h] [rbp+7Fh] BYREF

  memset(v21, 0, 0x48uLL);
  v24 = 1;
  v4 = (*(_DWORD *)(a1 + 704) & 0x1000) == 0;
  Handle[0] = 0LL;
  v22 = 0;
  v25 = 0;
  v23 = 0;
  if ( !v4 )
  {
    if ( *(_QWORD *)(a1 + 48) )
    {
      v5 = a1 + 40;
      if ( (int)CmOpenDeviceRegKey(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 48),
                  16,
                  0,
                  983103,
                  0,
                  (__int64)Handle,
                  0LL) >= 0 )
      {
        v6 = *(_QWORD *)(a1 + 48);
        v23 = 4;
        if ( (int)CmGetDeviceRegProp(
                    *(__int64 *)&PiPnpRtlCtx,
                    v6,
                    (__int64)Handle[0],
                    11,
                    (__int64)&v24,
                    (__int64)&v22,
                    (__int64)&v23,
                    0) >= 0
          && v24 == 4
          && v23 == 4 )
        {
          v7 = v22;
        }
        else
        {
          v7 = 0;
          v22 = 0;
        }
        if ( (v7 & 0x40000) != 0 )
        {
          if ( (int)PiDevCfgInitDeviceContext(*(_QWORD *)(a1 + 48), (__int64)Handle[0], v21) < 0 )
            goto LABEL_11;
          LOBYTE(v9) = (PiDevCfgFlags & 2) != 0;
          if ( ((unsigned __int8)v9 & ((v22 & 0x400) != 0)) != 0 )
          {
            v10 = v22 & 0xFFFFFFDF;
          }
          else
          {
            v11 = PiDevCfgCheckDeviceNeedsUpdate(v21, &v25);
            v10 = v22;
            if ( v11 >= 0 )
              v10 = v25 | v22;
          }
          v22 = v10 & 0xFFFBFFFF;
          PiDevCfgSetDeviceRegProp(v9, (__int64)v21, 0xBu, 4, (__int64)&v22, 4);
          LOBYTE(v7) = v22;
        }
        if ( (v7 & 2) != 0 )
        {
          if ( (unsigned int)PipAreDriversLoaded(a1) )
          {
            v22 = v13 & 0xFFFFFFFD;
            PiDevCfgSetDeviceRegProp(v12, (__int64)v21, 0xBu, 4, (__int64)&v22, 4);
          }
          else
          {
            Pool2 = ExAllocatePool2(256LL, 32LL, 1667526736LL);
            v15 = (_QWORD *)Pool2;
            if ( Pool2 )
            {
              if ( PnpDuplicateUnicodeString(Pool2 + 16, v5) )
              {
                v16 = *(_QWORD **)(a2 + 8);
                if ( *v16 != a2 )
                  __fastfail(3u);
                *v15 = a2;
                v15[1] = v16;
                *v16 = v15;
                *(_QWORD *)(a2 + 8) = v15;
              }
              else
              {
                ExFreePoolWithTag(v15, 0);
              }
            }
          }
        }
        else if ( (v7 & 0x20) != 0 )
        {
          v17 = *(_QWORD **)(a1 + 32);
          if ( (*(_DWORD *)(a1 + 396) & 0x6000) != 0 )
          {
            PnpRequestDeviceAction(v17, 1, 1, 0LL, 0LL, 0LL, 0LL);
            PnpRequestDeviceAction(*(PVOID *)(a1 + 32), 16, 1, 0LL, 0LL, 0LL, 0LL);
          }
          else
          {
            PnpSetTargetDeviceRemove(v17, 0, 0, 0, 0, 18, -1073740651, 0LL, v18, v19, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
    }
  }
LABEL_11:
  PiDevCfgFreeDeviceContext((__int64)v21);
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return 0LL;
}
