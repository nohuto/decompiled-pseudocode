/*
 * XREFs of NtSystemDebugControl @ 0x1407B9F40
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402F85E0 (ExUnlockUserBuffer.c)
 *     KdDisableDebugger @ 0x1403CB6D0 (KdDisableDebugger.c)
 *     DbgBreakPointWithStatus @ 0x1403FDCE0 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     DbgkCaptureLiveKernelDump @ 0x1404E8EB8 (DbgkCaptureLiveKernelDump.c)
 *     KdEnableDebugger @ 0x14050B290 (KdEnableDebugger.c)
 *     KdSetDbgPrintBufferSize @ 0x14050BC34 (KdSetDbgPrintBufferSize.c)
 *     SeSinglePrivilegeCheck @ 0x1405E3050 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x1406BD108 (ExLockUserBuffer.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 *     DbgkCaptureLiveDump @ 0x14088390C (DbgkCaptureLiveDump.c)
 *     ExpKdPullRemoteFileForUser @ 0x140956CBC (ExpKdPullRemoteFileForUser.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall NtSystemDebugControl(
        int a1,
        unsigned int *a2,
        unsigned int a3,
        bool *a4,
        unsigned int Length,
        _DWORD *a6)
{
  __int64 v7; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  int v12; // ebx
  __int64 v13; // r13
  int v14; // eax
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // edi
  unsigned int v22; // eax
  size_t v23; // rsi
  PVOID PoolWithTag; // rdi
  int v25; // edi
  int v26; // edi
  int v27; // edi
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

  v7 = a3;
  LODWORD(NumberOfBytes) = Length;
  LODWORD(Size) = 0;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset(v37, 0, 0x40uLL);
  v31 = 0LL;
  P = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((a1 - 29) & 0xFFFFFFF7) != 0 )
    return 3221226324LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v28 = PreviousMode;
  if ( a1 != 38 && !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return 3221225506LL;
  v12 = 0;
  if ( PreviousMode )
  {
    if ( (_DWORD)v7 )
    {
      if ( ((unsigned __int8)a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a2 + v7 > 0x7FFFFFFF0000LL || (unsigned int *)((char *)a2 + v7) < a2 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v13 = 0x7FFFFFFF0000LL;
    }
    if ( Length )
      ProbeForWrite(a4, Length, 4u);
    if ( a6 )
    {
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a6;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    PreviousMode = v28;
  }
  if ( a1 > 28 )
  {
    if ( a1 <= 34 )
    {
      if ( a1 == 34 )
        goto LABEL_64;
      v18 = a1 - 29;
      if ( !v18 )
      {
        if ( (_DWORD)v7 == 56 && Length >= 0x40000 )
        {
          v33 = *(_OWORD *)a2;
          v34 = *((_OWORD *)a2 + 1);
          v35 = *((_OWORD *)a2 + 2);
          v36 = *((_QWORD *)a2 + 6);
          if ( DWORD2(v35)
            || !HIDWORD(v35)
            || (v33 & 0xFFFFFFFE) != 0
            || 8 * (unsigned __int64)HIDWORD(v35) > 0xFFFFFFFF )
          {
            return 3221225485LL;
          }
          v22 = 0x100000;
          if ( Length <= 0x100000 )
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
                if ( (unsigned int)Size <= Length )
                  memmove(a4, PoolWithTag, (unsigned int)Size);
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
        return 3221225476LL;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        if ( Length == 1 )
        {
          *a4 = KdBlockEnable;
          goto LABEL_105;
        }
        return 3221225476LL;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          KdBlockEnable = *(_BYTE *)a2;
          goto LABEL_105;
        }
        return 3221225476LL;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        KdUmBreakMarker = -618808389;
        goto LABEL_104;
      }
      if ( v21 != 1 )
        goto LABEL_95;
      if ( Length != 4 )
        return 3221225476LL;
      *(_DWORD *)a4 = KdUmBreakPid;
      if ( KdResetUmBreakPid )
LABEL_64:
        KdUmBreakPid = 0;
LABEL_104:
      v12 = 0;
      goto LABEL_105;
    }
    v25 = a1 - 35;
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
          if ( (_DWORD)v7 != 16 || Length )
            return 3221225476LL;
          v14 = ExpKdPullRemoteFileForUser(a2);
        }
        else
        {
          if ( (_DWORD)v7 != 64 || Length )
            return 3221225476LL;
          v37[0] = *(_OWORD *)a2;
          v37[1] = *((_OWORD *)a2 + 1);
          v37[2] = *((_OWORD *)a2 + 2);
          v37[3] = *((_OWORD *)a2 + 3);
          v14 = DbgkCaptureLiveKernelDump((__int64)v37);
        }
        goto LABEL_34;
      }
    }
    else
    {
      if ( Length != 4 )
        return 3221225476LL;
      *(_DWORD *)a4 = KdUmAttachPid;
      if ( !KdResetUmAttachPid )
        goto LABEL_104;
    }
    KdUmAttachPid = 0;
    goto LABEL_104;
  }
  if ( a1 == 28 )
  {
    if ( (_DWORD)v7 == 1 )
    {
      KdIgnoreUmExceptions = *(_BYTE *)a2 == 0;
      goto LABEL_105;
    }
    return 3221225476LL;
  }
  if ( a1 > 23 )
  {
    v15 = a1 - 24;
    if ( !v15 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdAutoEnableOnEvent = *(_BYTE *)a2 != 0;
        goto LABEL_105;
      }
      return 3221225476LL;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( Length == 4 )
      {
        *(_DWORD *)a4 = KdPrintBufferSize;
        goto LABEL_105;
      }
      return 3221225476LL;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        goto LABEL_95;
      if ( Length == 1 )
      {
        *a4 = KdIgnoreUmExceptions == 0;
        goto LABEL_105;
      }
      return 3221225476LL;
    }
    if ( (_DWORD)v7 != 4 )
      return 3221225476LL;
    HIDWORD(Size) = 0;
    v14 = KdSetDbgPrintBufferSize(*a2);
LABEL_34:
    v12 = v14;
    goto LABEL_105;
  }
  if ( a1 == 23 )
  {
    if ( Length == 1 )
    {
      *a4 = KdAutoEnableOnEvent;
      goto LABEL_105;
    }
    return 3221225476LL;
  }
  if ( a1 < 0 )
  {
LABEL_95:
    v12 = -1073741821;
    goto LABEL_105;
  }
  if ( a1 <= 5 )
    return 3221225474LL;
  if ( a1 != 6 )
  {
    if ( a1 > 20 )
    {
      if ( a1 == 21 )
        v14 = KdEnableDebugger();
      else
        v14 = KdDisableDebugger();
      goto LABEL_34;
    }
    return 3221225474LL;
  }
  if ( (_BYTE)KdDebuggerEnabled == 1 )
    DbgBreakPointWithStatus(6u);
  else
    v12 = -1073741823;
LABEL_105:
  if ( a6 )
    *a6 = Size;
  return (unsigned int)v12;
}
