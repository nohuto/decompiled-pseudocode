/*
 * XREFs of ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x180004A28
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x1800052A0 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x180004C08 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180010380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002E148 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

__int64 __fastcall HampProcessBoostPriority(void *a1, int a2, int a3)
{
  HANDLE v5; // rdi
  NTSTATUS v6; // ebx
  unsigned __int8 v7; // si
  int NextThread; // eax
  char ProcessInformation; // [rsp+30h] [rbp-39h] BYREF
  unsigned __int8 v11; // [rsp+31h] [rbp-38h]
  unsigned __int8 v12; // [rsp+34h] [rbp-35h] BYREF
  int v13; // [rsp+38h] [rbp-31h] BYREF
  NTSTATUS v14; // [rsp+3Ch] [rbp-2Dh] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-29h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR ThreadInformation; // [rsp+50h] [rbp-19h] BYREF
  NTSTATUS v18; // [rsp+68h] [rbp-1h]
  NTSTATUS *v19; // [rsp+70h] [rbp+7h]
  __int64 v20; // [rsp+78h] [rbp+Fh]
  unsigned __int8 *v21; // [rsp+80h] [rbp+17h]
  __int64 v22; // [rsp+88h] [rbp+1Fh]

  ProcessHandle = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  if ( a3 < 1 )
    return 0;
  v6 = RmpSystemDuplicateHandle(a1, 0x600u, &ProcessHandle);
  if ( v6 < 0 )
  {
LABEL_27:
    if ( (unsigned int)dword_1800B3218 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
    {
      v14 = v6;
      v19 = &v14;
      v20 = 4LL;
      tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B3218, (int)&dword_1800A0867, 0, 0, 3u, &ThreadInformation);
    }
    goto LABEL_16;
  }
  if ( a3 < 2 )
  {
    v7 = 2;
    goto LABEL_5;
  }
  if ( a3 < 3 )
  {
    v7 = 6;
LABEL_5:
    v6 = NtQueryInformationProcess(ProcessHandle, ProcessPriorityClass, &ProcessInformation, 2u, 0LL);
    if ( v6 >= 0 )
    {
      if ( v11 < v7 )
      {
        v11 = v7;
        NtSetInformationProcess(ProcessHandle, ProcessPriorityClass, &ProcessInformation, 2u);
        if ( (unsigned int)dword_1800B3218 > 4 )
        {
          if ( (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
          {
            v12 = v11;
            v13 = a2;
            v21 = &v12;
            v22 = 1LL;
            v19 = &v13;
            v20 = 4LL;
            tlgWriteTransfer_EventWriteTransfer(
              (int)&dword_1800B3218,
              (int)&dword_1800A0828,
              0,
              0,
              4u,
              &ThreadInformation);
          }
        }
      }
      while ( 1 )
      {
        v5 = Handle;
        NextThread = NtGetNextThread(ProcessHandle, Handle, 3072LL, 0LL, 0, &Handle);
        v6 = NextThread;
        if ( NextThread == -2147483622 )
          break;
        if ( NextThread < 0 )
          goto LABEL_27;
        if ( v5 )
          NtClose(v5);
        NtQueryInformationThread(Handle, ThreadBasicInformation, &ThreadInformation, 0x30u, 0LL);
        if ( v20 < 0 )
        {
          v13 = 0;
          NtSetInformationThread(Handle, ThreadBasePriority, &v13, 4u);
          if ( (unsigned int)dword_1800B3218 > 4 )
          {
            if ( (unsigned __int8)tlgKeywordOn(&dword_1800B3218, 64LL) )
            {
              NtQueryInformationThread(Handle, ThreadBasicInformation, &ThreadInformation, 0x30u, 0LL);
              v14 = v18;
              v20 = 4LL;
              v19 = &v14;
              tlgWriteTransfer_EventWriteTransfer(
                (int)&dword_1800B3218,
                (int)&dword_1800A0892,
                0,
                0,
                3u,
                &ThreadInformation);
            }
          }
        }
      }
      v6 = 0;
      goto LABEL_16;
    }
    goto LABEL_27;
  }
LABEL_16:
  if ( v5 )
    NtClose(v5);
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  return (unsigned int)v6;
}
