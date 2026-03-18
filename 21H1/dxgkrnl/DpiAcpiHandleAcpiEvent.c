/*
 * XREFs of DpiAcpiHandleAcpiEvent @ 0x1C02D1604
 * Callers:
 *     DpiAcpiHandleAcpiEventWork @ 0x1C02D1AF0 (DpiAcpiHandleAcpiEventWork.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00188E0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C001F6D4 (DpiCheckForOutstandingD3Requests.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00E444C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C012726C (DxgkReleaseAdapterCoreSync.c)
 *     DxgkAcquireAdapterCoreSync @ 0x1C01275D0 (DxgkAcquireAdapterCoreSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C0161AF0 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C0161B70 (DxgkReleaseAdapterDdiSync.c)
 *     DpiAcpiProcessEventRequests @ 0x1C02D1C2C (DpiAcpiProcessEventRequests.c)
 *     DpiDxgkDdiNotifyAcpiEvent @ 0x1C02D3EE8 (DpiDxgkDdiNotifyAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEvent(char *P)
{
  int v2; // ebx
  bool v3; // zf
  int v4; // eax
  char v5; // r13
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r12
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // r15d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // [rsp+30h] [rbp-98h] BYREF
  __int64 v26; // [rsp+38h] [rbp-90h]
  _QWORD v27[10]; // [rsp+40h] [rbp-88h] BYREF

  v25 = 0;
  AcquireMiniportListMutex();
  v2 = *((_DWORD *)P + 6);
  if ( v2 == 1 )
  {
    v2 = 1;
    if ( (_BYTE)word_1C00AFA1D )
    {
      if ( HIBYTE(word_1C00AFA1D) && qword_1C00AFA28 == *((_QWORD *)P + 2) )
      {
        *((_DWORD *)P + 6) = 4;
        v2 = 4;
        *((_QWORD *)P + 2) = qword_1C00AFA20;
      }
    }
  }
  memset(v27, 0, 0x48uLL);
  v27[0] = 0x4000000006LL;
  v3 = *((_QWORD *)P + 4) == 0LL;
  LODWORD(v27[7]) = *((_DWORD *)P + 7);
  HIDWORD(v27[7]) = !v3;
  memset(&v27[1], 0, 36);
  LODWORD(v27[6]) = 25;
  HIDWORD(v27[6]) = v2;
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v27, 0x200000000LL);
  v4 = *((_DWORD *)P + 6);
  do
  {
    v5 = 0;
    v6 = qword_1C00AFA40;
    if ( *(_QWORD *)v6 != v6 )
    {
      while ( 1 )
      {
        KeWaitForSingleObject((PVOID)(v6 + 72), Executive, 0, 0, 0LL);
        v7 = *(_QWORD *)(v6 + 56);
        if ( *(_QWORD *)v7 != v7 )
          break;
LABEL_45:
        KeReleaseMutex((PRKMUTEX)(v6 + 72), 0);
        v6 = *(_QWORD *)v6;
        if ( *(_QWORD *)v6 == qword_1C00AFA40 )
        {
          v4 = *((_DWORD *)P + 6);
          v5 = 0;
          goto LABEL_47;
        }
      }
      while ( 1 )
      {
        if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
        {
          v8 = *((_DWORD *)P + 6);
          if ( v8 != 1 && v8 != 4 )
            break;
          if ( *((_QWORD *)P + 2) == *(_QWORD *)(v7 + 24) )
            break;
        }
LABEL_44:
        v7 = *(_QWORD *)v7;
        if ( *(_QWORD *)v7 == *(_QWORD *)(v6 + 56) )
          goto LABEL_45;
      }
      KeEnterCriticalRegion();
      if ( *(_BYTE *)(v7 + 484) )
        DpiCheckForOutstandingD3Requests(v7);
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v7 + 168), 1u);
      if ( *(_BYTE *)(v7 + 1157) != 1 || !*(_QWORD *)(v6 + 232) || *(_DWORD *)(v7 + 236) != 2 )
      {
LABEL_41:
        if ( *(_BYTE *)(v7 + 484) )
          DpiEnableD3Requests(*(_QWORD *)(v7 + 24));
        ExReleaseResourceLite(*(PERESOURCE *)(v7 + 168));
        KeLeaveCriticalRegion();
        goto LABEL_44;
      }
      v25 = 0;
      if ( *(_DWORD *)(v7 + 3976) == 1 || *(_DWORD *)(v7 + 284) != 1 )
      {
        v10 = 2LL;
      }
      else
      {
        DxgkAcquireAdapterCoreSync(*(_QWORD *)(v7 + 3896), 2, v9);
        v10 = 1LL;
      }
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v7 + 3896), v10);
      v12 = (int)DpiDxgkDdiNotifyAcpiEvent(
                   v6,
                   *(_QWORD *)(v7 + 48),
                   *((_DWORD *)P + 6),
                   *((_DWORD *)P + 7),
                   *((_QWORD *)P + 4),
                   (__int64)&v25);
      if ( *(_DWORD *)(v7 + 3976) == 1 || *(_DWORD *)(v7 + 284) != 1 )
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3896), v11);
      }
      else
      {
        DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v7 + 3896), v11);
        DxgkReleaseAdapterCoreSync(*(_QWORD *)(v7 + 3896), 2u, v13);
      }
      v14 = *(_QWORD *)(v7 + 3896);
      v15 = 0;
      if ( v14 )
      {
        v26 = *(_QWORD *)(v14 + 316);
        v15 = v26;
      }
      memset(v27, 0, 0x48uLL);
      v16 = *(_QWORD *)(v7 + 2672);
      v27[7] = __PAIR64__(v12, v25);
      v27[0] = 0x480000001ELL;
      memset(&v27[1], 0, 36);
      LODWORD(v27[6]) = 42;
      HIDWORD(v27[6]) = v15;
      v27[8] = v16;
      DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v27, 0x200000000LL);
      if ( (int)v12 >= 0 )
      {
        v21 = v25;
        if ( *((_DWORD *)P + 6) == 4 )
        {
          v18 = (unsigned int)(-((v25 & 8) != 0) - 8);
          if ( ((unsigned int)v18 & v25) != 0 )
          {
            v22 = WdLogNewEntry5_WdError(v18, v25);
            *(_QWORD *)(v22 + 24) = v25;
            WdLogEvent5_WdError(v22);
            v21 = 0LL;
            v25 = 0;
          }
        }
        LOBYTE(v18) = (*(_BYTE *)(v7 + 3904) & 1) == 0;
        LOBYTE(v21) = -(v21 & 7);
        if ( ((unsigned __int8)-((_BYTE)v21 != 0) & (unsigned __int8)v18) == 0 )
          goto LABEL_37;
        v23 = WdLogNewEntry5_WdError(v18, v21);
        *(_QWORD *)(v23 + 24) = -1073741823LL;
        WdLogEvent5_WdError(v23);
      }
      else
      {
        v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v20 + 24) = v12;
        WdLogEvent5_WdWarning(v20);
      }
      v25 = 0;
LABEL_37:
      v24 = WdLogNewEntry5_WdEvent(v18, v21);
      *(_QWORD *)(v24 + 24) = v25;
      WdLogEvent5_WdEvent(v24);
      if ( *(_DWORD *)(v7 + 3976) != 1 && *(_DWORD *)(v7 + 284) == 1 && (v25 & 7) != 0 )
        DpiAcpiProcessEventRequests(*(_QWORD *)(v7 + 24), v25, P, P + 40);
      goto LABEL_41;
    }
LABEL_47:
    if ( v4 == 4 && (v25 & 8) != 0 )
    {
      *((_DWORD *)P + 6) = 1;
      v5 = 1;
      *((_QWORD *)P + 2) = qword_1C00AFA28;
      v4 = 1;
    }
  }
  while ( v5 );
  _InterlockedExchange64(&qword_1C00AFA50, 0LL);
  KeReleaseMutex(Mutex, 0);
  ExFreePoolWithTag(P, 0);
}
