/*
 * XREFs of VidSchiOpenProcessAdapterInfo @ 0x1C0097FF0
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C0098844 (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001904 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00029AC (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     RtlStringCbPrintfW @ 0x1C0013410 (RtlStringCbPrintfW.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEAPEAU_VIDSCH_NODE_STATISTICS@@I@Z @ 0x1C0013530 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_NODE_STATISTICS@@$07$0DCGBGJFG@@@QEAAPEA.c)
 *     ??0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00135AC (--0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ.c)
 *     ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0018D10 (--_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall VidSchiOpenProcessAdapterInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  _DWORD *v6; // rcx
  VIDSCH_PROCESS_ADAPTER_INFO *Pool2; // rax
  NTSTATUS v8; // r13d
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // r11
  unsigned int v16; // r13d
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  int *v22; // r10
  __int64 v23; // rax
  wchar_t *v24; // r10
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  const void **v29; // rax
  unsigned int v30; // r14d
  _QWORD *v31; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned int i; // r14d
  void *v36; // rcx
  unsigned int j; // r14d
  __int64 v38; // rcx
  unsigned int v39; // edx
  PVOID *v40; // rcx
  PVOID *v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // eax
  _QWORD *v44; // rdx
  _QWORD *v45; // rcx
  VIDSCH_PROCESS_ADAPTER_INFO *v46; // rcx
  PPCW_DATA Data; // [rsp+20h] [rbp-88h]
  __int64 v48; // [rsp+28h] [rbp-80h]
  __int64 v49; // [rsp+30h] [rbp-78h]
  __int64 v50; // [rsp+38h] [rbp-70h]
  struct _PCW_DATA v51; // [rsp+50h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-48h] BYREF
  wchar_t *pszDest; // [rsp+B0h] [rbp+8h]
  __int64 v54; // [rsp+B8h] [rbp+10h]

  v2 = *(unsigned int *)(a2 + 4);
  v3 = a1 + 2664;
  ExAcquirePushLockExclusiveEx(a1 + 2664, 0LL);
  v6 = *(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2);
  if ( v6 )
  {
    ++*v6;
    goto LABEL_30;
  }
  Pool2 = (VIDSCH_PROCESS_ADAPTER_INFO *)ExAllocatePool2(64LL, 232LL, 845244758LL);
  if ( Pool2 )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) = VIDSCH_PROCESS_ADAPTER_INFO::VIDSCH_PROCESS_ADAPTER_INFO(Pool2);
    **(_DWORD **)(*(_QWORD *)(a1 + 32) + 8 * v2) = 1;
    if ( NonPagedPoolZeroedArray<_VIDSCH_NODE_STATISTICS *,8,845244758>::AllocateElements(
           (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8LL),
           *(_DWORD *)(a2 + 84)) )
    {
      v8 = 0;
      pszDest = (wchar_t *)operator new[](520LL, 0x4B677844u, 256LL);
      if ( pszDest )
      {
        v9 = 0;
        if ( *(_DWORD *)(a2 + 80) )
        {
          do
          {
            v10 = ExAllocatePool2(64LL, 232LL, 845244758LL);
            v11 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
            v12 = *(__int64 **)(v11 + 8);
            if ( v9 < *(_DWORD *)(v11 + 80) )
              v12 += v9;
            *v12 = v10;
            v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
            v14 = *(_QWORD **)(v13 + 8);
            if ( v9 < *(_DWORD *)(v13 + 80) )
              v14 += v9;
            if ( !*v14 )
              goto LABEL_37;
            v15 = *(_QWORD *)(a2 + 632);
            v16 = *(_DWORD *)(a2 + 704);
            v54 = *(_QWORD *)(a2 + 16);
            v17 = v15 + 8LL * v9;
            v18 = v17;
            if ( v9 >= v16 )
              v18 = *(_QWORD *)(a2 + 632);
            v19 = *(_QWORD *)(344LL * *(unsigned __int16 *)(*(_QWORD *)v18 + 6LL)
                            + *(_QWORD *)(*(_QWORD *)(a2 + 16) + 2680LL)
                            + 32);
            v20 = v15 + 8LL * v9;
            if ( v9 >= v16 )
              v20 = *(_QWORD *)(a2 + 632);
            v21 = *(unsigned __int16 *)(*(_QWORD *)v20 + 8LL);
            DestinationString = 0LL;
            v22 = (int *)(v19 + 74 * v21);
            v23 = *v22;
            if ( (_DWORD)v23 )
              v24 = off_1C0048EF0[v23];
            else
              v24 = (wchar_t *)(v22 + 1);
            v25 = v15 + 8LL * v9;
            if ( v9 >= v16 )
            {
              v25 = v15;
              v17 = v15;
            }
            LODWORD(v50) = *(unsigned __int16 *)(*(_QWORD *)v25 + 8LL);
            LODWORD(v49) = *(unsigned __int16 *)(*(_QWORD *)v17 + 6LL);
            LODWORD(v48) = *(_DWORD *)(v54 + 404);
            LODWORD(Data) = *(_DWORD *)(v54 + 408);
            v8 = RtlStringCbPrintfW(
                   pszDest,
                   0x208uLL,
                   L"pid_%Iu_luid_0x%08X_0x%08X_phys_%u_eng_%u_engtype_%s",
                   *(_QWORD *)(a1 + 2640),
                   Data,
                   v48,
                   v49,
                   v50,
                   v24);
            if ( v8 < 0 )
              goto LABEL_36;
            RtlInitUnicodeString(&DestinationString, pszDest);
            v26 = *(_QWORD *)(a1 + 32);
            v51.Size = 232;
            v27 = *(_QWORD *)(v26 + 8 * v2);
            v28 = *(_QWORD *)(v27 + 8);
            v29 = (const void **)(v28 + 8LL * v9);
            if ( v9 < *(_DWORD *)(v27 + 80) )
              v28 += 8LL * v9;
            else
              v29 = *(const void ***)(v27 + 8);
            v51.Data = *v29;
            v8 = PcwCreateInstance(
                   (PPCW_INSTANCE *)(*(_QWORD *)v28 + 216LL),
                   GpuPerformanceCounterSetEngine,
                   &DestinationString,
                   1u,
                   &v51);
            if ( v8 < 0 )
            {
LABEL_36:
              WdLogSingleEntry0(1LL);
              DxgkLogInternalTriageEvent(v34, 0x40000LL);
              break;
            }
          }
          while ( ++v9 < *(_DWORD *)(a2 + 80) );
        }
        operator delete(pszDest);
        if ( v8 >= 0 )
        {
          v30 = 0;
          if ( *(_DWORD *)(a2 + 40) )
          {
            while ( 1 )
            {
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8LL * v30 + 88) = ExAllocatePool2(
                                                                                           64LL,
                                                                                           12LL,
                                                                                           845244758LL);
              if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8LL * v30 + 88) )
                break;
              if ( ++v30 >= *(_DWORD *)(a2 + 40) )
                goto LABEL_29;
            }
LABEL_37:
            WdLogSingleEntry0(3LL);
            goto LABEL_38;
          }
LABEL_29:
          v31 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 216LL);
          v31[1] = v31;
          *v31 = v31;
LABEL_30:
          ExReleasePushLockExclusiveEx(v3, 0LL);
          return 0LL;
        }
      }
      else
      {
        WdLogSingleEntry0(1LL);
        DxgkLogInternalTriageEvent(v33, 0x40000LL);
      }
    }
    else
    {
      WdLogSingleEntry0(3LL);
    }
LABEL_38:
    for ( i = 0; i < *(_DWORD *)(a2 + 40); ++i )
    {
      v36 = *(void **)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8LL * i + 88);
      if ( v36 )
      {
        ExFreePoolWithTag(v36, 0);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) + 8LL * i + 88) = 0LL;
      }
    }
    for ( j = 0; j < *(_DWORD *)(a2 + 80); ++j )
    {
      v38 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
      v39 = *(_DWORD *)(v38 + 80);
      v40 = *(PVOID **)(v38 + 8);
      v41 = &v40[j];
      if ( j >= v39 )
        v41 = v40;
      if ( *v41 )
      {
        if ( j < v39 )
          v40 += j;
        ExFreePoolWithTag(*v40, 0);
        v42 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2);
        v43 = *(_DWORD *)(v42 + 80);
        v44 = *(_QWORD **)(v42 + 8);
        v45 = &v44[j];
        if ( j >= v43 )
          v45 = v44;
        *v45 = 0LL;
      }
    }
    v46 = *(VIDSCH_PROCESS_ADAPTER_INFO **)(*(_QWORD *)(a1 + 32) + 8 * v2);
    if ( v46 )
    {
      VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(v46);
      ExFreePoolWithTag(*(PVOID *)(*(_QWORD *)(a1 + 32) + 8 * v2), 0);
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2) = 0LL;
    }
    goto LABEL_54;
  }
  WdLogSingleEntry0(3LL);
LABEL_54:
  ExReleasePushLockExclusiveEx(v3, 0LL);
  return 3221225495LL;
}
