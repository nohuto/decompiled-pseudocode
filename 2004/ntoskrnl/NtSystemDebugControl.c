/*
 * XREFs of NtSystemDebugControl @ 0x1407BD0B0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x140335610 (ExUnlockUserBuffer.c)
 *     KdDisableDebugger @ 0x1403CC490 (KdDisableDebugger.c)
 *     DbgBreakPointWithStatus @ 0x1403FEF70 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404E94E8 (DbgkCaptureLiveKernelDump.c)
 *     KdEnableDebugger @ 0x14050B8E0 (KdEnableDebugger.c)
 *     KdSetDbgPrintBufferSize @ 0x14050C284 (KdSetDbgPrintBufferSize.c)
 *     SeSinglePrivilegeCheck @ 0x140667BA0 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x1406DE498 (ExLockUserBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x140769830 (ExRaiseDatatypeMisalignment.c)
 *     DbgkCaptureLiveDump @ 0x140884C2C (DbgkCaptureLiveDump.c)
 *     ExpKdPullRemoteFileForUser @ 0x14095838C (ExpKdPullRemoteFileForUser.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtSystemDebugControl(
        SYSDBG_COMMAND Command,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  __int64 v7; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v12; // ebx
  __int64 v13; // r13
  NTSTATUS v14; // eax
  __int32 v15; // edi
  __int32 v16; // edi
  __int32 v17; // edi
  __int32 v18; // edi
  __int32 v19; // edi
  __int32 v20; // edi
  __int32 v21; // edi
  unsigned int v22; // eax
  size_t v23; // rsi
  PVOID PoolWithTag; // rdi
  __int32 v25; // edi
  __int32 v26; // edi
  __int32 v27; // edi
  KPROCESSOR_MODE v28; // [rsp+34h] [rbp-D4h]
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+68h] [rbp-A0h]
  __int128 v35; // [rsp+78h] [rbp-90h]
  unsigned __int64 v36; // [rsp+88h] [rbp-80h]
  _OWORD v37[7]; // [rsp+90h] [rbp-78h] BYREF

  v7 = InputBufferLength;
  LODWORD(NumberOfBytes) = OutputBufferLength;
  LODWORD(Size) = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset(v37, 0, 0x40uLL);
  v31 = 0LL;
  P = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((Command - 29) & 0xFFFFFFF7) != 0 )
    return -1073740972;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = PreviousMode;
  if ( Command != SysDbgKdPullRemoteFile && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741790;
  v12 = 0;
  if ( PreviousMode )
  {
    if ( (_DWORD)v7 )
    {
      if ( ((unsigned __int8)InputBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)InputBuffer + v7 > 0x7FFFFFFF0000LL || (char *)InputBuffer + v7 < InputBuffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v13 = 0x7FFFFFFF0000LL;
    }
    if ( OutputBufferLength )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 4u);
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v13 = (__int64)ReturnLength;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    PreviousMode = v28;
  }
  if ( Command > SysDbgSetKdUmExceptionEnable )
  {
    if ( Command <= SysDbgClearUmBreakPid )
    {
      if ( Command == SysDbgClearUmBreakPid )
        goto LABEL_64;
      v18 = Command - 29;
      if ( !v18 )
      {
        if ( (_DWORD)v7 == 56 && OutputBufferLength >= 0x40000 )
        {
          v33 = *(_OWORD *)InputBuffer;
          v34 = *((_OWORD *)InputBuffer + 1);
          v35 = *((_OWORD *)InputBuffer + 2);
          v36 = *((_QWORD *)InputBuffer + 6);
          if ( DWORD2(v35)
            || !HIDWORD(v35)
            || (v33 & 0xFFFFFFFE) != 0
            || 8 * (unsigned __int64)HIDWORD(v35) > 0xFFFFFFFF )
          {
            return -1073741811;
          }
          v22 = 0x100000;
          if ( OutputBufferLength <= 0x100000 )
            v22 = NumberOfBytes;
          v23 = v22;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v22, 0x704E534Bu);
          NumberOfBytes = (SIZE_T)PoolWithTag;
          if ( PoolWithTag )
          {
            v12 = ExLockUserBuffer(v36, 8 * HIDWORD(v35), PreviousMode, IoReadAccess, &v31, (struct _MDL **)&P);
            if ( v12 >= 0 )
            {
              memset(PoolWithTag, 0, v23);
              v36 = v31;
              v12 = DbgkCaptureLiveDump(&v33, PoolWithTag, (unsigned int)v23, &Size);
              if ( v12 >= 0 )
              {
                if ( (unsigned int)Size <= OutputBufferLength )
                  memmove(OutputBuffer, PoolWithTag, (unsigned int)Size);
                else
                  v12 = -1073741823;
              }
              ExFreePoolWithTag(PoolWithTag, 0);
              ExUnlockUserBuffer((struct _MDL *)P);
            }
            else
            {
              ExFreePoolWithTag(PoolWithTag, 0);
            }
          }
          else
          {
            v12 = -1073741801;
          }
          goto LABEL_105;
        }
        return -1073741820;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( OutputBufferLength == 1 )
        {
          *(_BYTE *)OutputBuffer = KdBlockEnable;
          goto LABEL_105;
        }
        return -1073741820;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          KdBlockEnable = *(_BYTE *)InputBuffer;
          goto LABEL_105;
        }
        return -1073741820;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        KdUmBreakMarker = -618808389;
        goto LABEL_104;
      }
      if ( v21 != 1 )
        goto LABEL_95;
      if ( OutputBufferLength != 4 )
        return -1073741820;
      *(_DWORD *)OutputBuffer = KdUmBreakPid;
      if ( KdResetUmBreakPid )
LABEL_64:
        KdUmBreakPid = 0;
LABEL_104:
      v12 = 0;
      goto LABEL_105;
    }
    v25 = Command - 35;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = v26 - 1;
        if ( v27 )
        {
          if ( v27 != 1 )
            goto LABEL_95;
          if ( (_DWORD)v7 != 16 || OutputBufferLength )
            return -1073741820;
          v14 = ExpKdPullRemoteFileForUser(InputBuffer);
        }
        else
        {
          if ( (_DWORD)v7 != 64 || OutputBufferLength )
            return -1073741820;
          v37[0] = *(_OWORD *)InputBuffer;
          v37[1] = *((_OWORD *)InputBuffer + 1);
          v37[2] = *((_OWORD *)InputBuffer + 2);
          v37[3] = *((_OWORD *)InputBuffer + 3);
          v14 = DbgkCaptureLiveKernelDump((__int64)v37);
        }
        goto LABEL_34;
      }
    }
    else
    {
      if ( OutputBufferLength != 4 )
        return -1073741820;
      *(_DWORD *)OutputBuffer = KdUmAttachPid;
      if ( !KdResetUmAttachPid )
        goto LABEL_104;
    }
    KdUmAttachPid = 0;
    goto LABEL_104;
  }
  if ( Command == SysDbgSetKdUmExceptionEnable )
  {
    if ( (_DWORD)v7 == 1 )
    {
      KdIgnoreUmExceptions = *(_BYTE *)InputBuffer == 0;
      goto LABEL_105;
    }
    return -1073741820;
  }
  if ( Command > SysDbgGetAutoKdEnable )
  {
    v15 = Command - 24;
    if ( !v15 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdAutoEnableOnEvent = *(_BYTE *)InputBuffer != 0;
        goto LABEL_105;
      }
      return -1073741820;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( OutputBufferLength == 4 )
      {
        *(_DWORD *)OutputBuffer = KdPrintBufferSize;
        goto LABEL_105;
      }
      return -1073741820;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        goto LABEL_95;
      if ( OutputBufferLength == 1 )
      {
        *(_BYTE *)OutputBuffer = KdIgnoreUmExceptions == 0;
        goto LABEL_105;
      }
      return -1073741820;
    }
    if ( (_DWORD)v7 != 4 )
      return -1073741820;
    HIDWORD(Size) = 0;
    v14 = KdSetDbgPrintBufferSize(*(unsigned int *)InputBuffer);
LABEL_34:
    v12 = v14;
    goto LABEL_105;
  }
  if ( Command == SysDbgGetAutoKdEnable )
  {
    if ( OutputBufferLength == 1 )
    {
      *(_BYTE *)OutputBuffer = KdAutoEnableOnEvent;
      goto LABEL_105;
    }
    return -1073741820;
  }
  if ( Command < SysDbgQueryModuleInformation )
  {
LABEL_95:
    v12 = -1073741821;
    goto LABEL_105;
  }
  if ( Command <= SysDbgQuerySpecialCalls )
    return -1073741822;
  if ( Command != SysDbgBreakPoint )
  {
    if ( Command > SysDbgCheckLowMemory )
    {
      if ( Command == SysDbgEnableKernelDebugger )
        v14 = KdEnableDebugger();
      else
        v14 = KdDisableDebugger();
      goto LABEL_34;
    }
    return -1073741822;
  }
  if ( (_BYTE)KdDebuggerEnabled == 1 )
    DbgBreakPointWithStatus(6u);
  else
    v12 = -1073741823;
LABEL_105:
  if ( ReturnLength )
    *ReturnLength = Size;
  return v12;
}
