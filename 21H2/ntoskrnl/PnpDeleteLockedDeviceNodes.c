/*
 * XREFs of PnpDeleteLockedDeviceNodes @ 0x1407383C0
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x140732820 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 *     PipRemoveDevicesInRelationList @ 0x140735EC8 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140736AD4 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14036FCE4 (PoFxIdleDevice.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PipIsDeviceInDeviceObjectList @ 0x140737ABC (PipIsDeviceInDeviceObjectList.c)
 *     IopEnumerateRelations @ 0x1407386B0 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNode @ 0x140738734 (PnpDeleteLockedDeviceNode.c)
 *     PiUpdateGuestAssignedState @ 0x140749E6C (PiUpdateGuestAssignedState.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNodes(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  char v8; // bl
  unsigned int v11; // edi
  __int64 v12; // r13
  ULONG_PTR v13; // rbx
  int v14; // eax
  __int64 v16; // r11
  unsigned int *v17; // rax
  ULONG_PTR v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-10h] BYREF
  __int64 v20; // [rsp+38h] [rbp-8h] BYREF
  int v21; // [rsp+88h] [rbp+48h] BYREF
  char v22; // [rsp+98h] [rbp+58h]

  v22 = a4;
  v8 = a4;
  v11 = 0;
  v20 = 0LL;
  v21 = 0;
  if ( *(_BYTE *)(a2 + 8) )
  {
    v19 = 1LL;
    while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v19, (unsigned int)&v20, (unsigned int)&v21, 0LL) )
    {
      if ( v21 || v8 )
      {
        v12 = v20;
        if ( v20 )
          v13 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
        else
          v13 = 0LL;
        if ( (unsigned int)(a3 - 2) > 1
          || (PiUpdateGuestAssignedState(v13, 0LL), a3 != 2)
          || (*(_DWORD *)(v13 + 704) & 2) == 0 )
        {
          v14 = PnpDeleteLockedDeviceNode(v13, a7, a8);
          v11 = v14;
          if ( !a3 && a5 == 54 && v14 == -1073740537 )
          {
            if ( PipIsDeviceInDeviceObjectList(*(unsigned int **)a2, *(_QWORD *)(*(_QWORD *)(v13 + 16) + 32LL), 0LL) )
              *(_DWORD *)(v16 + 704) |= 2u;
            v11 = 0;
          }
          else if ( v14 < 0 )
          {
            if ( (*(_DWORD *)(v13 + 704) & 4) == 0 )
              KeBugCheckEx(0xCAu, 0xDuLL, v13, 4uLL, 0LL);
            PoFxIdleDevice(*(_QWORD *)(v13 + 32));
            *(_DWORD *)(v13 + 704) &= ~4u;
            if ( (_DWORD)v19 == 1 && HIDWORD(v19) )
            {
              v17 = *(unsigned int **)a2;
              LODWORD(v19) = 2;
              HIDWORD(v19) = *v17 - HIDWORD(v19);
            }
            else
            {
              v19 = 3LL;
            }
            while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v19, (unsigned int)&v20, 0, 0LL) )
            {
              if ( v12 != v20 )
              {
                if ( v20 )
                  v18 = *(_QWORD *)(*(_QWORD *)(v20 + 312) + 40LL);
                else
                  v18 = 0LL;
                PnpDeleteLockedDeviceNode(v18, a7, a8);
              }
            }
            return (unsigned int)-2147483608;
          }
        }
        v8 = v22;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v11;
}
