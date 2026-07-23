/*
 * XREFs of PfSnPopulateReadList @ 0x1406049E0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     PsSetCurrentThreadPrefetching @ 0x140604ED0 (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x140604F18 (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406052FC (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140605574 (PfSnCleanupPrefetchSectionInfo.c)
 *     NtCreateEvent @ 0x140679490 (NtCreateEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  unsigned __int32 v3; // r13d
  _QWORD *PoolWithTag; // r15
  __int64 v5; // r14
  _KPROCESS *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rax
  int v11; // esi
  int v12; // ebx
  char *v13; // rcx
  char *v14; // rdx
  unsigned int v15; // ebx
  char *v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // r12d
  int v20; // r12d
  bool v21; // zf
  wchar_t *v22; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  int v24; // edx
  bool v25; // r11
  unsigned int v26; // r9d
  BOOL v27; // r10d
  __int64 v28; // rcx
  int v29; // eax
  int v30; // edi
  char *v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rcx
  int v34; // ecx
  int v35; // eax
  char v36; // [rsp+58h] [rbp-B0h] BYREF
  bool v37; // [rsp+59h] [rbp-AFh]
  __int64 v38; // [rsp+60h] [rbp-A8h]
  __int64 v39; // [rsp+68h] [rbp-A0h]
  __int64 v40; // [rsp+70h] [rbp-98h]
  __int64 v41; // [rsp+78h] [rbp-90h]
  __int64 v42; // [rsp+80h] [rbp-88h] BYREF
  __int64 v43; // [rsp+88h] [rbp-80h]
  HANDLE EventHandle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v45; // [rsp+98h] [rbp-70h]
  char *v46; // [rsp+A0h] [rbp-68h]
  __int64 v47; // [rsp+A8h] [rbp-60h]
  char *v48; // [rsp+B0h] [rbp-58h]
  __int64 v49; // [rsp+B8h] [rbp-50h]
  char *v50; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v53[3]; // [rsp+108h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = a1;
  v3 = 0;
  memset(v53, 0, sizeof(v53));
  v49 = a1;
  PoolWithTag = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = *(_KPROCESS **)(v1 + 16);
  v43 = v5;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v40 = v1;
  v36 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v6, 0LL, (__int64)v53);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v8 = NtCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v8 >= 0 )
  {
    v10 = *(unsigned int **)v5;
    v11 = *(_DWORD *)(v2 + 40);
    v42 = 0LL;
    v12 = *(_DWORD *)(v5 + 100) & 7;
    v13 = (char *)v10 + v10[21];
    v14 = (char *)v10 + v10[23];
    v9 = (__int64)v10 + v10[25];
    v48 = v13;
    v47 = *(_QWORD *)(v5 + 64);
    v45 = *(_QWORD *)(v5 + 72);
    v15 = *(_DWORD *)(v5 + 96) & 7 | (8 * (v12 | 8));
    v46 = v14;
    v50 = (char *)v9;
    LODWORD(v38) = v11;
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    if ( v3 >= *(_DWORD *)(v1 + 32) )
      goto LABEL_3;
    while ( 1 )
    {
      v16 = &v13[32 * v3];
      v17 = v3;
      v39 = v3;
      v18 = *((_DWORD *)v16 + 5);
      if ( (v18 & 1) == 0 )
        break;
LABEL_34:
      if ( v36 )
      {
        LOBYTE(v9) = 1;
        PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v5 + 56) + 56 * v17, v5, v9);
        v36 = 0;
      }
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      v1 = v40;
LABEL_39:
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
      if ( v3 >= *(_DWORD *)(v1 + 32) )
        goto LABEL_49;
      v13 = v48;
      v2 = v49;
      v9 = (__int64)v50;
    }
    v19 = *(_DWORD *)(v2 + 44);
    v37 = 0;
    v20 = v19 & 1;
    if ( v20 )
    {
      v21 = ((unsigned __int8)v11 & BYTE1(v18) & 0x7F) == 0;
    }
    else
    {
      LODWORD(v41) = 0;
      v21 = !_BitScanForward((unsigned int *)&v34, (v18 >> 8) & 0x7F);
      if ( v21 )
        v34 = 7;
      v35 = v11 & (1 << v34);
      LODWORD(v41) = v34;
      v37 = v35 != 0;
      if ( ((unsigned __int8)v11 & (unsigned __int8)(v18 >> 1) & 0x7F) != 0 )
        goto LABEL_10;
      v37 = v35 != 0;
      v21 = v35 == 0;
    }
    if ( v21 )
    {
LABEL_33:
      v17 = v39;
      goto LABEL_34;
    }
LABEL_10:
    v22 = (wchar_t *)(v9 + *((unsigned int *)v16 + 3));
    PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v22);
    if ( PrefetchVolumeInfoInList )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v16 + 2) + 24), 0x4C506343u);
      if ( !PoolWithTag )
      {
        v1 = v40;
        v8 = -1073741670;
        v5 = v43;
        goto LABEL_52;
      }
      *((_DWORD *)PoolWithTag + 3) = v20;
      *PoolWithTag = 0LL;
      *((_DWORD *)PoolWithTag + 2) = 0;
      RtlInitUnicodeString(&DestinationString, &v22[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
      v11 = v38;
      v24 = PrefetchVolumeInfoInList;
      v5 = v43;
      if ( (int)PfSnGetSectionObject(
                  v43,
                  v24,
                  (unsigned int)&DestinationString,
                  (_DWORD)v16,
                  v38,
                  v3,
                  v20,
                  (__int64)EventHandle,
                  (__int64)&v42,
                  (__int64)&v36) >= 0 )
      {
        v25 = v37;
        v26 = 0;
        v27 = 1;
        if ( v37 )
        {
          v26 = 1;
          PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = 0LL;
          v27 = *(_QWORD *)(*(_QWORD *)(v42 + 40) + 16LL) != 0LL;
        }
        v28 = *(int *)v16;
        v29 = *((_DWORD *)v16 + 1);
        v30 = 0;
        v9 = (int)v28 + v29;
        if ( v28 < v9 )
        {
          v31 = &v46[8 * v28 + 4];
          for ( v9 -= v28; v9; --v9 )
          {
            v32 = *(_DWORD *)v31;
            if ( (*(_DWORD *)v31 & 1) == 0 )
            {
              if ( (v32 & 8) != 0 && !v27 )
              {
LABEL_22:
                if ( *((_DWORD *)v31 - 1) || !v25 )
                {
                  PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = (unsigned __int64)*((unsigned int *)v31 - 1) << 9;
                  ++v26;
                }
                else
                {
                  v30 = 1;
                }
                goto LABEL_24;
              }
              if ( _bittest(&v11, (v32 >> 4) & 7) )
              {
                if ( v20 )
                {
                  if ( (v32 & 2) != 0 )
                    goto LABEL_22;
                }
                else if ( (v32 & 4) != 0 )
                {
                  goto LABEL_22;
                }
              }
            }
LABEL_24:
            v31 += 8;
          }
        }
        if ( *((_DWORD *)PoolWithTag + 2) != 1 || !v25 || !v27 || v30 )
        {
          v1 = v40;
          PoolWithTag[2] |= v15;
          *PoolWithTag = v42;
          v33 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
          *(_QWORD *)(v47 + 8 * v33) = PoolWithTag;
          PoolWithTag = 0LL;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 36), v26);
          if ( v36 )
          {
            *(_DWORD *)(v45 + 4 * v33) = v3;
            v36 = 0;
          }
          else
          {
            *(_DWORD *)(v45 + 4 * v33) = -1;
          }
          goto LABEL_39;
        }
      }
    }
    else
    {
      v11 = v38;
      v5 = v43;
    }
    goto LABEL_33;
  }
LABEL_52:
  *(_DWORD *)(v1 + 40) = v8;
LABEL_49:
  if ( v36 )
  {
    LOBYTE(v9) = 1;
    PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v5 + 56) + 56LL * v3, v5, v9);
  }
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((__int64)v53, 0LL);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v1);
}
