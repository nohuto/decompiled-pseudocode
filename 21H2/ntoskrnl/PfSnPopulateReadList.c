/*
 * XREFs of PfSnPopulateReadList @ 0x140677260
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PsSetCurrentThreadPrefetching @ 0x140677750 (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x140677798 (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x140677B7C (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x140677D14 (PfSnCleanupPrefetchSectionInfo.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     NtCreateEvent @ 0x14071B0B0 (NtCreateEvent.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // r12
  unsigned int v3; // r13d
  _QWORD *PoolWithTag; // r15
  __int64 v5; // r14
  _KPROCESS *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int *v12; // rax
  int v13; // esi
  int v14; // ebx
  char *v15; // rcx
  unsigned int v16; // ebx
  char *v17; // rdi
  __int64 v18; // rax
  int v19; // r12d
  int v20; // r12d
  bool v21; // zf
  wchar_t *v22; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  bool v24; // r11
  BOOL v25; // r10d
  __int64 v26; // rcx
  int v27; // eax
  int v28; // edi
  unsigned int *v29; // rax
  __int64 v30; // rcx
  int v31; // ecx
  int v32; // eax
  char v33; // [rsp+58h] [rbp-B0h] BYREF
  bool v34; // [rsp+59h] [rbp-AFh]
  int v35[2]; // [rsp+60h] [rbp-A8h]
  __int64 v36; // [rsp+68h] [rbp-A0h]
  __int64 v37; // [rsp+70h] [rbp-98h]
  __int64 v38; // [rsp+78h] [rbp-90h]
  __int64 v39; // [rsp+80h] [rbp-88h] BYREF
  int v40[2]; // [rsp+88h] [rbp-80h]
  HANDLE EventHandle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v42; // [rsp+98h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp-68h]
  __int64 v44; // [rsp+A8h] [rbp-60h]
  char *v45; // [rsp+B0h] [rbp-58h]
  __int64 v46; // [rsp+B8h] [rbp-50h]
  __int64 v47; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  _OWORD v50[3]; // [rsp+108h] [rbp+0h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  v2 = a1;
  v3 = 0;
  memset(v50, 0, sizeof(v50));
  v46 = a1;
  PoolWithTag = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(v1 + 8);
  v6 = *(_KPROCESS **)(v1 + 16);
  *(_QWORD *)v40 = v5;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v37 = v1;
  v33 = 0;
  EventHandle = 0LL;
  KiStackAttachProcess(v6, 0, (__int64)v50);
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
    v12 = *(unsigned int **)v5;
    v13 = *(_DWORD *)(v2 + 40);
    v39 = 0LL;
    v14 = *(_DWORD *)(v5 + 100) & 7;
    v15 = (char *)v12 + v12[21];
    v9 = (__int64)v12 + v12[23];
    v10 = (__int64)v12 + v12[25];
    v45 = v15;
    v44 = *(_QWORD *)(v5 + 64);
    v42 = *(_QWORD *)(v5 + 72);
    v16 = *(_DWORD *)(v5 + 96) & 7 | (8 * (v14 | 8));
    v43 = v9;
    v47 = v10;
    v35[0] = v13;
    v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
    if ( v3 >= *(_DWORD *)(v1 + 32) )
      goto LABEL_3;
    while ( 1 )
    {
      v11 = 7LL;
      v17 = &v15[32 * v3];
      v18 = v3;
      v36 = v3;
      v9 = *((unsigned int *)v17 + 5);
      if ( (v9 & 1) == 0 )
        break;
LABEL_34:
      if ( v33 )
      {
        LOBYTE(v10) = 1;
        PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v5 + 56) + 56 * v18, v5, v10);
        v33 = 0;
      }
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      v1 = v37;
LABEL_39:
      v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 28), 1u);
      if ( v3 >= *(_DWORD *)(v1 + 32) )
        goto LABEL_49;
      v15 = v45;
      v2 = v46;
      v10 = v47;
    }
    v19 = *(_DWORD *)(v2 + 44);
    v34 = 0;
    v20 = v19 & 1;
    if ( v20 )
    {
      v21 = ((unsigned __int8)v13 & BYTE1(v9) & 0x7F) == 0;
    }
    else
    {
      LODWORD(v38) = 0;
      v21 = !_BitScanForward((unsigned int *)&v31, ((unsigned int)v9 >> 8) & 0x7F);
      if ( v21 )
        v31 = 7;
      v32 = v13 & (1 << v31);
      LODWORD(v38) = v31;
      v9 = v13 & ((unsigned int)v9 >> 1);
      v34 = v32 != 0;
      if ( (v9 & 0x7F) != 0 )
        goto LABEL_10;
      v34 = v32 != 0;
      v21 = v32 == 0;
    }
    if ( v21 )
    {
LABEL_33:
      v18 = v36;
      goto LABEL_34;
    }
LABEL_10:
    v22 = (wchar_t *)(v10 + *((unsigned int *)v17 + 3));
    PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v22);
    if ( PrefetchVolumeInfoInList )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v17 + 2) + 24), 0x4C506343u);
      if ( !PoolWithTag )
      {
        v1 = v37;
        v8 = -1073741670;
        v5 = *(_QWORD *)v40;
        goto LABEL_52;
      }
      *((_DWORD *)PoolWithTag + 3) = v20;
      *PoolWithTag = 0LL;
      *((_DWORD *)PoolWithTag + 2) = 0;
      RtlInitUnicodeString(&DestinationString, &v22[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
      v13 = v35[0];
      v5 = *(_QWORD *)v40;
      if ( (int)PfSnGetSectionObject(v40[0], v35[0], v3, v20, EventHandle, (__int64)&v39, (__int64)&v33) >= 0 )
      {
        v24 = v34;
        v9 = 0LL;
        v11 = 0LL;
        v25 = 1;
        if ( v34 )
        {
          v11 = 1LL;
          PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = 0LL;
          v25 = *(_QWORD *)(*(_QWORD *)(v39 + 40) + 16LL) != 0LL;
        }
        v26 = *(int *)v17;
        v27 = *((_DWORD *)v17 + 1);
        v28 = 0;
        v10 = (int)v26 + v27;
        if ( v26 < v10 )
        {
          v29 = (unsigned int *)(v43 + 8 * v26 + 4);
          for ( v10 -= v26; v10; --v10 )
          {
            v9 = *v29;
            if ( (v9 & 1) == 0 )
            {
              if ( (v9 & 8) != 0 && !v25 )
              {
LABEL_22:
                if ( *(v29 - 1) || !v24 )
                {
                  v9 = (unsigned __int64)*(v29 - 1) << 9;
                  PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = v9;
                  v11 = (unsigned int)(v11 + 1);
                }
                else
                {
                  v28 = 1;
                }
                goto LABEL_24;
              }
              if ( _bittest(&v13, ((unsigned int)v9 >> 4) & 7) )
              {
                if ( v20 )
                {
                  if ( (v9 & 2) != 0 )
                    goto LABEL_22;
                }
                else if ( (v9 & 4) != 0 )
                {
                  goto LABEL_22;
                }
              }
            }
LABEL_24:
            v29 += 2;
          }
        }
        if ( *((_DWORD *)PoolWithTag + 2) != 1 || !v24 || !v25 || v28 )
        {
          v1 = v37;
          PoolWithTag[2] |= v16;
          *PoolWithTag = v39;
          v30 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 24), 1u);
          *(_QWORD *)(v44 + 8 * v30) = PoolWithTag;
          PoolWithTag = 0LL;
          v11 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 36), v11);
          if ( v33 )
          {
            *(_DWORD *)(v42 + 4 * v30) = v3;
            v33 = 0;
          }
          else
          {
            *(_DWORD *)(v42 + 4 * v30) = -1;
          }
          goto LABEL_39;
        }
      }
    }
    else
    {
      v13 = v35[0];
      v5 = *(_QWORD *)v40;
    }
    goto LABEL_33;
  }
LABEL_52:
  *(_DWORD *)(v1 + 40) = v8;
LABEL_49:
  if ( v33 )
  {
    LOBYTE(v10) = 1;
    PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v5 + 56) + 56LL * v3, v5, v10);
  }
LABEL_3:
  if ( EventHandle )
    NtClose(EventHandle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((__int64)v50, 0LL);
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)v1);
}
