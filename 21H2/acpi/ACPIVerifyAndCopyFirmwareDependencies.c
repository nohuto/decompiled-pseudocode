/*
 * XREFs of ACPIVerifyAndCopyFirmwareDependencies @ 0x1C002EB38
 * Callers:
 *     ACPIBuildProcessPowerResourcePhaseSetupOnOff @ 0x1C00120A0 (ACPIBuildProcessPowerResourcePhaseSetupOnOff.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C00151E0 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C001EFD0 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00300B0 (ACPIBuildProcessThermalZoneCheckType.c)
 * Callees:
 *     WPP_RECORDER_SF_L @ 0x1C0002ACC (WPP_RECORDER_SF_L.c)
 *     WPP_RECORDER_SF_s @ 0x1C0002C50 (WPP_RECORDER_SF_s.c)
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054C98 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIVerifyAndCopyFirmwareDependencies(__int64 *BugCheckParameter2, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  bool v6; // zf
  unsigned int *v8; // r14
  SIZE_T v9; // rsi
  __int64 v10; // r12
  _OWORD *PoolWithTag; // rax
  _OWORD *v12; // rsi
  size_t v13; // r8
  __int64 v14; // r15
  unsigned int *v16; // rdi
  int v17; // ecx
  __int64 v18; // rax
  const void **v19; // rdi
  __int64 v20; // rbp
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned int v23; // [rsp+78h] [rbp+10h]
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  v6 = *(_WORD *)(a2 + 2) == 4;
  v24 = 0LL;
  if ( v6 )
  {
    v8 = *(unsigned int **)(a2 + 32);
    v9 = *(unsigned int *)(a2 + 24) + 40LL;
    v23 = 0;
    v10 = *v8;
    if ( (_DWORD)v10 )
    {
      v16 = v8 + 8;
      do
      {
        v17 = AMLIGetNameSpaceObject(*((_BYTE **)v16 + 1), BugCheckParameter2, (unsigned __int64 *)&v24, 0);
        if ( v17 < 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_L(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x15u,
              0xBu,
              (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
              v17);
          KeBugCheckEx(0xA5u, 0x18uLL, (ULONG_PTR)BugCheckParameter2, *((_QWORD *)v16 + 1), 0LL);
        }
        if ( !v24 || *(_WORD *)(*(_QWORD *)v24 + 66LL) != 6 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_s(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x15u,
              0xCu,
              (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
              *((const char **)v16 + 1));
          KeBugCheckEx(0xA5u, 0x19uLL, (ULONG_PTR)BugCheckParameter2, *((_QWORD *)v16 + 1), 0LL);
        }
        AMLIDereferenceHandleEx(v24);
        v18 = *v16;
        v16 += 10;
        v9 += v18;
        v24 = 0LL;
        ++v23;
      }
      while ( v23 < (unsigned int)v10 );
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x4F706341u);
    v12 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = *(_OWORD *)a2;
      PoolWithTag[1] = *(_OWORD *)(a2 + 16);
      v13 = *((unsigned int *)PoolWithTag + 6);
      *((_QWORD *)PoolWithTag + 4) = (char *)PoolWithTag + 40;
      memmove((char *)PoolWithTag + 40, *(const void **)(a2 + 32), v13);
      v14 = *(unsigned int *)(a2 + 24) + 40LL;
      if ( (_DWORD)v10 )
      {
        v19 = (const void **)(v8 + 8);
        v20 = *((_QWORD *)v12 + 4) - (_QWORD)v8;
        v21 = v10;
        do
        {
          *(const void **)((char *)v19 + v20 + 8) = (char *)v12 + v14;
          memmove((char *)v12 + v14, v19[1], *(unsigned int *)v19);
          v22 = *(unsigned int *)((char *)v19 + v20);
          v19 += 5;
          v14 += v22;
          --v21;
        }
        while ( v21 );
      }
    }
    else
    {
      v3 = -1073741670;
    }
    *a3 = v12;
    return v3;
  }
  else
  {
    ACPIWriteEventLogEntry(3221553169LL, 0LL, 0LL);
    return 3221225485LL;
  }
}
