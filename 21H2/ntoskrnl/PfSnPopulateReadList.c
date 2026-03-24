/*
 * XREFs of PfSnPopulateReadList @ 0x1406C8970
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PsSetCurrentThreadPrefetching @ 0x1406C8E60 (PsSetCurrentThreadPrefetching.c)
 *     PfSnGetSectionObject @ 0x1406C8EA8 (PfSnGetSectionObject.c)
 *     PfSnFindPrefetchVolumeInfoInList @ 0x1406C928C (PfSnFindPrefetchVolumeInfoInList.c)
 *     PfSnCleanupPrefetchSectionInfo @ 0x1406C9424 (PfSnCleanupPrefetchSectionInfo.c)
 *     NtClose @ 0x1406F0980 (NtClose.c)
 *     NtCreateEvent @ 0x140703CD0 (NtCreateEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PfSnPopulateReadList(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rdi
  __int64 v5; // r12
  unsigned int v6; // r13d
  _QWORD *PoolWithTag; // r15
  __int64 v8; // r14
  _KPROCESS *v9; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  __int64 v12; // r8
  unsigned int *v13; // rax
  int v14; // esi
  int v15; // ebx
  char *v16; // rcx
  char *v17; // rdx
  unsigned int v18; // ebx
  char *v19; // rdi
  __int64 v20; // rax
  unsigned int v21; // edx
  int v22; // r12d
  int v23; // r12d
  bool v24; // zf
  wchar_t *v25; // rsi
  __int64 PrefetchVolumeInfoInList; // r14
  bool v27; // r11
  unsigned int v28; // r9d
  BOOL v29; // r10d
  __int64 v30; // rcx
  int v31; // eax
  int v32; // edi
  char *v33; // rax
  unsigned int v34; // edx
  __int64 v35; // rcx
  int v36; // ecx
  int v37; // eax
  char v38; // [rsp+58h] [rbp-B0h] BYREF
  bool v39; // [rsp+59h] [rbp-AFh]
  int v40[2]; // [rsp+60h] [rbp-A8h]
  __int64 v41; // [rsp+68h] [rbp-A0h]
  __int64 v42; // [rsp+70h] [rbp-98h]
  __int64 v43; // [rsp+78h] [rbp-90h]
  __int64 v44; // [rsp+80h] [rbp-88h] BYREF
  int v45[2]; // [rsp+88h] [rbp-80h]
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  __int64 v47; // [rsp+98h] [rbp-70h]
  char *v48; // [rsp+A0h] [rbp-68h]
  __int64 v49; // [rsp+A8h] [rbp-60h]
  char *v50; // [rsp+B0h] [rbp-58h]
  __int64 v51; // [rsp+B8h] [rbp-50h]
  char *v52; // [rsp+C0h] [rbp-48h]
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v54[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-28h]
  __int64 v56; // [rsp+E8h] [rbp-20h]
  int v57; // [rsp+F0h] [rbp-18h]
  int v58; // [rsp+F4h] [rbp-14h]
  __int128 v59; // [rsp+F8h] [rbp-10h]
  _OWORD v60[3]; // [rsp+108h] [rbp+0h] BYREF

  v4 = *(_QWORD *)(a1 + 32);
  v5 = a1;
  v6 = 0;
  memset(v60, 0, sizeof(v60));
  v51 = a1;
  PoolWithTag = 0LL;
  v54[1] = 0;
  DestinationString = 0LL;
  v8 = *(_QWORD *)(v4 + 8);
  v9 = *(_KPROCESS **)(v4 + 16);
  *(_QWORD *)v45 = v8;
  v58 = 0;
  v42 = v4;
  v38 = 0;
  Handle = 0LL;
  KiStackAttachProcess(v9, 0LL, (__int64)v60, a4);
  PsSetCurrentThreadPrefetching(1u);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v54[0] = 48;
  v55 = 0LL;
  v57 = 512;
  v56 = 0LL;
  v59 = 0LL;
  v11 = NtCreateEvent(&Handle, 2031619LL, v54, 0LL, 0);
  if ( v11 >= 0 )
  {
    v13 = *(unsigned int **)v8;
    v14 = *(_DWORD *)(v5 + 40);
    v44 = 0LL;
    v15 = *(_DWORD *)(v8 + 100) & 7;
    v16 = (char *)v13 + v13[21];
    v17 = (char *)v13 + v13[23];
    v12 = (__int64)v13 + v13[25];
    v50 = v16;
    v49 = *(_QWORD *)(v8 + 64);
    v47 = *(_QWORD *)(v8 + 72);
    v18 = *(_DWORD *)(v8 + 96) & 7 | (8 * (v15 | 8));
    v48 = v17;
    v52 = (char *)v12;
    v40[0] = v14;
    v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 28), 1u);
    if ( v6 >= *(_DWORD *)(v4 + 32) )
      goto LABEL_3;
    while ( 1 )
    {
      v19 = &v16[32 * v6];
      v20 = v6;
      v41 = v6;
      v21 = *((_DWORD *)v19 + 5);
      if ( (v21 & 1) == 0 )
        break;
LABEL_34:
      if ( v38 )
      {
        LOBYTE(v12) = 1;
        PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v8 + 56) + 56 * v20, v8, v12);
        v38 = 0;
      }
      if ( PoolWithTag )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
      }
      v4 = v42;
LABEL_39:
      v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 28), 1u);
      if ( v6 >= *(_DWORD *)(v4 + 32) )
        goto LABEL_49;
      v16 = v50;
      v5 = v51;
      v12 = (__int64)v52;
    }
    v22 = *(_DWORD *)(v5 + 44);
    v39 = 0;
    v23 = v22 & 1;
    if ( v23 )
    {
      v24 = ((unsigned __int8)v14 & BYTE1(v21) & 0x7F) == 0;
    }
    else
    {
      LODWORD(v43) = 0;
      v24 = !_BitScanForward((unsigned int *)&v36, (v21 >> 8) & 0x7F);
      if ( v24 )
        v36 = 7;
      v37 = v14 & (1 << v36);
      LODWORD(v43) = v36;
      v39 = v37 != 0;
      if ( ((unsigned __int8)v14 & (unsigned __int8)(v21 >> 1) & 0x7F) != 0 )
        goto LABEL_10;
      v39 = v37 != 0;
      v24 = v37 == 0;
    }
    if ( v24 )
    {
LABEL_33:
      v20 = v41;
      goto LABEL_34;
    }
LABEL_10:
    v25 = (wchar_t *)(v12 + *((unsigned int *)v19 + 3));
    PrefetchVolumeInfoInList = PfSnFindPrefetchVolumeInfoInList(v25);
    if ( PrefetchVolumeInfoInList )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(8 * *((_DWORD *)v19 + 2) + 24), 0x4C506343u);
      if ( !PoolWithTag )
      {
        v4 = v42;
        v11 = -1073741670;
        v8 = *(_QWORD *)v45;
        goto LABEL_52;
      }
      *((_DWORD *)PoolWithTag + 3) = v23;
      *PoolWithTag = 0LL;
      *((_DWORD *)PoolWithTag + 2) = 0;
      RtlInitUnicodeString(&DestinationString, &v25[*(unsigned int *)(PrefetchVolumeInfoInList + 24) + 1]);
      v14 = v40[0];
      v8 = *(_QWORD *)v45;
      if ( (int)PfSnGetSectionObject(v45[0], v40[0], v6, v23, Handle, (__int64)&v44, (__int64)&v38) >= 0 )
      {
        v27 = v39;
        v28 = 0;
        v29 = 1;
        if ( v39 )
        {
          v28 = 1;
          PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = 0LL;
          v29 = *(_QWORD *)(*(_QWORD *)(v44 + 40) + 16LL) != 0LL;
        }
        v30 = *(int *)v19;
        v31 = *((_DWORD *)v19 + 1);
        v32 = 0;
        v12 = (int)v30 + v31;
        if ( v30 < v12 )
        {
          v33 = &v48[8 * v30 + 4];
          for ( v12 -= v30; v12; --v12 )
          {
            v34 = *(_DWORD *)v33;
            if ( (*(_DWORD *)v33 & 1) == 0 )
            {
              if ( (v34 & 8) != 0 && !v29 )
              {
LABEL_22:
                if ( *((_DWORD *)v33 - 1) || !v27 )
                {
                  PoolWithTag[(unsigned int)(*((_DWORD *)PoolWithTag + 2))++ + 2] = (unsigned __int64)*((unsigned int *)v33 - 1) << 9;
                  ++v28;
                }
                else
                {
                  v32 = 1;
                }
                goto LABEL_24;
              }
              if ( _bittest(&v14, (v34 >> 4) & 7) )
              {
                if ( v23 )
                {
                  if ( (v34 & 2) != 0 )
                    goto LABEL_22;
                }
                else if ( (v34 & 4) != 0 )
                {
                  goto LABEL_22;
                }
              }
            }
LABEL_24:
            v33 += 8;
          }
        }
        if ( *((_DWORD *)PoolWithTag + 2) != 1 || !v27 || !v29 || v32 )
        {
          v4 = v42;
          PoolWithTag[2] |= v18;
          *PoolWithTag = v44;
          v35 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), 1u);
          *(_QWORD *)(v49 + 8 * v35) = PoolWithTag;
          PoolWithTag = 0LL;
          _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 36), v28);
          if ( v38 )
          {
            *(_DWORD *)(v47 + 4 * v35) = v6;
            v38 = 0;
          }
          else
          {
            *(_DWORD *)(v47 + 4 * v35) = -1;
          }
          goto LABEL_39;
        }
      }
    }
    else
    {
      v14 = v40[0];
      v8 = *(_QWORD *)v45;
    }
    goto LABEL_33;
  }
LABEL_52:
  *(_DWORD *)(v4 + 40) = v11;
LABEL_49:
  if ( v38 )
  {
    LOBYTE(v12) = 1;
    PfSnCleanupPrefetchSectionInfo(*(_QWORD *)(v8 + 56) + 56LL * v6, v8, v12);
  }
LABEL_3:
  if ( Handle )
    NtClose(Handle);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PsSetCurrentThreadPrefetching(0);
  KiUnstackDetachProcess((__int64)v60, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)v4);
}
