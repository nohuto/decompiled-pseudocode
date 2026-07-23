/*
 * XREFs of PfSnPopulateReadList @ 0x140639A20
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     NtCreateEvent @ 0x1406013B0 (NtCreateEvent.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     PsSetCurrentThreadPrefetching @ 0x140639F10 (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x140639F58 (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x14063A33C (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x14063A5B4 (PfSnCleanupPrefetchSectionInfo.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  unsigned __int32 v6; // r13d
  _QWORD *PoolWithTag; // r15
  __int64 v8; // r14
  _KPROCESS *v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int *v15; // rax
  int v16; // esi
  int v17; // ebx
  char *v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // r8
  _DWORD *v21; // r9
  char *v22; // rdi
  __int64 v23; // rax
  int v24; // r12d
  int v25; // r12d
  bool v26; // zf
  wchar_t *v27; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  int v29; // edx
  bool v30; // r11
  BOOL v31; // r10d
  __int64 v32; // rcx
  int v33; // eax
  int v34; // edi
  unsigned int *v35; // rax
  __int64 v36; // rcx
  int v37; // ecx
  int v38; // eax
  char v39; // [rsp+58h] [rbp-B0h] BYREF
  bool v40; // [rsp+59h] [rbp-AFh]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  __int64 v42; // [rsp+68h] [rbp-A0h]
  __int64 v43; // [rsp+70h] [rbp-98h]
  __int64 v44; // [rsp+78h] [rbp-90h]
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  __int64 v46; // [rsp+88h] [rbp-80h]
  HANDLE EventHandle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v48; // [rsp+98h] [rbp-70h]
  __int64 v49; // [rsp+A0h] [rbp-68h]
  __int64 v50; // [rsp+A8h] [rbp-60h]
  char *v51; // [rsp+B0h] [rbp-58h]
  __int64 v52; // [rsp+B8h] [rbp-50h]
  __int64 v53; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v56[3]; // [rsp+108h] [rbp+0h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v5 = a1;
  v6 = 0;
  memset(v56, 0, sizeof(v56));
  v52 = a1;
  PoolWithTag = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v8 = *(_QWORD *)(v4 + 8);
  v9 = *(_KPROCESS **)(v4 + 16);
  v46 = v8;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v43 = v4;
  v39 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v9, 0LL, (__int64)v56, a4);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v11 >= 0 )
  {
    v15 = *(unsigned int **)v8;
    v16 = *(_DWORD *)(v5 + 40);
    v45 = 0LL;
    v17 = *(_DWORD *)(v8 + 100) & 7;
    v18 = (char *)v15 + v15[21];
    v12 = (__int64)v15 + v15[23];
    v13 = (__int64)v15 + v15[25];
    v51 = v18;
    v50 = *(_QWORD *)(v8 + 64);
    v48 = *(_QWORD *)(v8 + 72);
    v19 = *(_DWORD *)(v8 + 96) & 7 | (8 * (v17 | 8));
    v49 = v12;
    v53 = v13;
    LODWORD(v41) = v16;
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 28), 1u);
    if ( v6 >= *(_DWORD *)(v4 + 32) )
      goto LABEL_3;
    while ( 1 )
    {
      v14 = 7LL;
      v22 = &v18[32 * v6];
      v23 = v6;
      v42 = v6;
      v12 = *((unsigned int *)v22 + 5);
      if ( (v12 & 1) == 0 )
        break;
LABEL_34:
      if ( v39 )
      {
        LOBYTE(v13) = 1;
        PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v8 + 56) + 56 * v23, v8, v13);
        v39 = 0;
      }
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      v4 = v43;
LABEL_39:
      v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 28), 1u);
      if ( v6 >= *(_DWORD *)(v4 + 32) )
        goto LABEL_49;
      v18 = v51;
      v5 = v52;
      v13 = v53;
    }
    v24 = *(_DWORD *)(v5 + 44);
    v40 = 0;
    v25 = v24 & 1;
    if ( v25 )
    {
      v26 = ((unsigned __int8)v16 & BYTE1(v12) & 0x7F) == 0;
    }
    else
    {
      LODWORD(v44) = 0;
      v26 = !_BitScanForward((unsigned int *)&v37, ((unsigned int)v12 >> 8) & 0x7F);
      if ( v26 )
        v37 = 7;
      v38 = v16 & (1 << v37);
      LODWORD(v44) = v37;
      v12 = v16 & ((unsigned int)v12 >> 1);
      v40 = v38 != 0;
      if ( (v12 & 0x7F) != 0 )
        goto LABEL_10;
      v40 = v38 != 0;
      v26 = v38 == 0;
    }
    if ( v26 )
    {
LABEL_33:
      v23 = v42;
      goto LABEL_34;
    }
LABEL_10:
    v27 = (wchar_t *)(v13 + *((unsigned int *)v22 + 3));
    PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v27);
    if ( PrefetchVolumeInfoInList )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v22 + 2) + 24), 0x4C506343u);
      if ( !PoolWithTag )
      {
        v4 = v43;
        v11 = -1073741670;
        v8 = v46;
        goto LABEL_52;
      }
      *((_DWORD *)PoolWithTag + 3) = v25;
      *PoolWithTag = 0LL;
      *((_DWORD *)PoolWithTag + 2) = 0;
      RtlInitUnicodeString(&DestinationString, &v27[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
      v16 = v41;
      v29 = PrefetchVolumeInfoInList;
      v8 = v46;
      if ( (int)PfSnGetSectionObject(
                  v46,
                  v29,
                  (unsigned int)&DestinationString,
                  (_DWORD)v22,
                  v41,
                  v6,
                  v25,
                  (__int64)EventHandle,
                  (__int64)&v45,
                  (__int64)&v39) >= 0 )
      {
        v30 = v40;
        v12 = 0LL;
        v14 = 0LL;
        v31 = 1;
        if ( v40 )
        {
          v14 = 1LL;
          PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = 0LL;
          v31 = *(_QWORD *)(*(_QWORD *)(v45 + 40) + 16LL) != 0LL;
        }
        v32 = *(int *)v22;
        v33 = *((_DWORD *)v22 + 1);
        v34 = 0;
        v13 = (int)v32 + v33;
        if ( v32 < v13 )
        {
          v35 = (unsigned int *)(v49 + 8 * v32 + 4);
          for ( v13 -= v32; v13; --v13 )
          {
            v12 = *v35;
            if ( (v12 & 1) == 0 )
            {
              if ( (v12 & 8) != 0 && !v31 )
              {
LABEL_22:
                if ( *(v35 - 1) || !v30 )
                {
                  v12 = (unsigned __int64)*(v35 - 1) << 9;
                  PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = v12;
                  v14 = (unsigned int)(v14 + 1);
                }
                else
                {
                  v34 = 1;
                }
                goto LABEL_24;
              }
              if ( _bittest(&v16, ((unsigned int)v12 >> 4) & 7) )
              {
                if ( v25 )
                {
                  if ( (v12 & 2) != 0 )
                    goto LABEL_22;
                }
                else if ( (v12 & 4) != 0 )
                {
                  goto LABEL_22;
                }
              }
            }
LABEL_24:
            v35 += 2;
          }
        }
        if ( *((_DWORD *)PoolWithTag + 2) != 1 || !v30 || !v31 || v34 )
        {
          v4 = v43;
          PoolWithTag[2] |= v19;
          *PoolWithTag = v45;
          v36 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), 1u);
          *(_QWORD *)(v50 + 8 * v36) = PoolWithTag;
          PoolWithTag = 0LL;
          v14 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 36), v14);
          if ( v39 )
          {
            *(_DWORD *)(v48 + 4 * v36) = v6;
            v39 = 0;
          }
          else
          {
            *(_DWORD *)(v48 + 4 * v36) = -1;
          }
          goto LABEL_39;
        }
      }
    }
    else
    {
      v16 = v41;
      v8 = v46;
    }
    goto LABEL_33;
  }
LABEL_52:
  *(_DWORD *)(v4 + 40) = v11;
LABEL_49:
  if ( v39 )
  {
    LOBYTE(v13) = 1;
    PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v8 + 56) + 56LL * v6, v8, v13);
  }
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v12, v13, v14);
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((__int64)v56, 0LL, v20, v21);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v4);
}
