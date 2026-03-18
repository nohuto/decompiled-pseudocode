/*
 * XREFs of RootHub_D0Exit @ 0x1C000AF68
 * Callers:
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C000AC00 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     RootHub_HandleResumedPorts @ 0x1C000A534 (RootHub_HandleResumedPorts.c)
 *     WPP_RECORDER_SF_d @ 0x1C000E688 (WPP_RECORDER_SF_d.c)
 *     RootHub_WaitForPendingU3TransitionCompletion @ 0x1C001100C (RootHub_WaitForPendingU3TransitionCompletion.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C0011228 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_DumpPortData @ 0x1C001296C (RootHub_DumpPortData.c)
 *     XilRegister_ReadUlong @ 0x1C0012CD0 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x1C0012CF4 (RootHub_AcquireReadModifyWriteLock.c)
 *     XilRegister_WriteUlong @ 0x1C0012E40 (XilRegister_WriteUlong.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RootHub_D0Exit(__int64 a1, int a2, int a3)
{
  __int64 v6; // r15
  int v7; // r14d
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v10; // r8
  __int16 Ulong; // ax
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int16 v18; // ax
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // edx
  int v24; // [rsp+70h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  RootHub_HandleResumedPorts(a1);
  v7 = 2;
  if ( *(_DWORD *)(a1 + 16) )
  {
    v8 = 0;
    do
    {
      if ( a2 != 5 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = *(_QWORD *)(v9 + 336) >> 26;
        LOBYTE(v10) = (*(_QWORD *)(v9 + 336) & 0x4000000LL) != 0;
        if ( (int)RootHub_WaitForPendingU3TransitionCompletion(a1, v8 + 1, v10) < 0 && a3 == 7 )
          ((void (__fastcall *)(__int64, _QWORD))qword_1C00616D0)(UcxDriverGlobals, *(_QWORD *)a1);
        Ulong = XilRegister_ReadUlong(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL), *(_QWORD *)(a1 + 40) + 16LL * v8);
        if ( (Ulong & 0x201) == 0x201 )
        {
          v12 = Ulong & 0x1E0;
          if ( ((v12 - 128) & 0xFFFFFF3F) != 0 || v12 == 256 )
            v7 = 1;
        }
      }
      v13 = *(_QWORD *)(a1 + 8);
      if ( (*(_QWORD *)(v13 + 336) & 0x40000000LL) != 0 )
      {
        v14 = *(_QWORD *)(a1 + 40) + 16LL * v8;
        RootHub_AcquireReadModifyWriteLock(a1, v8);
        v15 = XilRegister_ReadUlong(v6, v14);
        if ( a3 != 7 || (v15 & 0x20000) == 0 )
          XilRegister_WriteUlong(v6, v14, v15 & 0xE00C200 | 0x20000u);
        RootHub_ReleaseReadModifyWriteLock(a1, v8);
        v13 = *(_QWORD *)(a1 + 8);
      }
      v16 = v13;
      if ( a3 >= 3 && a3 <= 6 && (*(_QWORD *)(v13 + 336) & 0x20000000LL) != 0 )
      {
        v17 = *(_QWORD *)(a1 + 40) + 16LL * v8;
        RootHub_AcquireReadModifyWriteLock(a1, v8);
        v18 = XilRegister_ReadUlong(v6, v17);
        XilRegister_WriteUlong(v6, v17, v18 & 0xC200);
        RootHub_ReleaseReadModifyWriteLock(a1, v8);
        v16 = *(_QWORD *)(a1 + 8);
      }
      v19 = v8;
      RootHub_DumpPortData(*(_QWORD *)(a1 + 40) + 16LL * v8++, v16);
      *(_BYTE *)(104 * v19 + *(_QWORD *)(a1 + 48) + 18) = 0;
    }
    while ( v8 + 1 <= *(_DWORD *)(a1 + 16) );
  }
  v20 = *(_QWORD *)(a1 + 8);
  v24 = v7;
  v21 = *(_QWORD *)(v20 + 520);
  if ( v21 )
  {
    v22 = PoFxPowerControl(v21, &GUID_HC_SUB_DX_STATE, &v24, 4LL, 0LL, 0LL, 0LL);
    if ( v22 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v23) = 4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v20 + 72),
        v23,
        4,
        33,
        (__int64)&WPP_2a10b20b34c83bd3dea18079565cd6d6_Traceguids,
        v22);
    }
  }
}
