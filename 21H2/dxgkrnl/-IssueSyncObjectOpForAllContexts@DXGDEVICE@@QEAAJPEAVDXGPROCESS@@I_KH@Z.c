/*
 * XREFs of ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C02E5B80
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C02DB740 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z @ 0x1C01708C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N4444@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N66@Z @ 0x1C017EED0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C02D5A10 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C030ED78 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0310230 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C03119C0 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DXGDEVICE::IssueSyncObjectOpForAllContexts(
        DXGDEVICE *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  unsigned int v5; // r15d
  char *v6; // r12
  unsigned int v7; // eax
  DXGDEVICE *v8; // r13
  char *v9; // rbx
  unsigned int v10; // edi
  unsigned int v11; // edi
  __int64 v12; // r8
  unsigned int v13; // r14d
  const unsigned int *Elements; // r12
  char *v15; // rax
  char *v16; // rbx
  __int64 *i; // rdi
  __int64 v18; // rcx
  int v19; // eax
  unsigned int *v20; // rbx
  unsigned int v22; // r8d
  _DWORD *j; // rdx
  __int64 v24; // rcx
  __int64 *v25; // r14
  int v26; // eax
  int v27; // eax
  unsigned int v28; // [rsp+60h] [rbp-81h] BYREF
  struct DXGPROCESS *v29; // [rsp+68h] [rbp-79h]
  unsigned __int64 v30; // [rsp+70h] [rbp-71h] BYREF
  char *v31; // [rsp+78h] [rbp-69h]
  DXGDEVICE *v32; // [rsp+80h] [rbp-61h]
  PVOID P; // [rsp+90h] [rbp-51h] BYREF
  _BYTE v34[64]; // [rsp+98h] [rbp-49h] BYREF
  int v35; // [rsp+D8h] [rbp-9h]

  v5 = 0;
  v29 = a2;
  v6 = (char *)this + 464;
  v7 = a3;
  v8 = this;
  v9 = (char *)*((_QWORD *)this + 58);
  v10 = -1073741823;
  LODWORD(v31) = a3;
  v32 = this;
  v30 = a4;
  if ( !a5 )
  {
    while ( v9 != v6 && v9 )
    {
      v28 = v7;
      if ( (*((_DWORD *)v9 + 101) & 0x10) != 0 )
      {
        v25 = (__int64 *)*((_QWORD *)v9 + 51);
        while ( v25 != (__int64 *)(v9 + 408) && v25 )
        {
          v26 = SubmitWaitForSyncObjectsFromGpu(1u, &v28, &v30, *((_DWORD *)v25 + 6), a2, 0, 1);
          v10 = v26;
          if ( v26 < 0 )
          {
            WdLogSingleEntry2(4LL, v8, v26);
            a2 = v29;
            break;
          }
          v25 = (__int64 *)*v25;
          a2 = v29;
        }
      }
      else
      {
        v27 = WaitForSynchronizationObjectFromGpu(1u, &v28, 0LL, a4, *((_DWORD *)v9 + 6), a2, 0, 1, 0, 0, 1);
        v10 = v27;
        if ( v27 < 0 )
        {
          WdLogSingleEntry2(4LL, v8, v27);
          return v10;
        }
        a2 = v29;
      }
      v9 = *(char **)v9;
      a4 = v30;
      v7 = (unsigned int)v31;
    }
    return v10;
  }
  v28 = a3;
  v11 = 0;
  v12 = 0LL;
  v13 = 0;
  while ( v9 != v6 && v9 )
  {
    if ( (*((_DWORD *)v9 + 101) & 0x10) != 0 )
      v13 += DXGCONTEXT::GetRenderHwQueueCount((DXGCONTEXT *)v9);
    else
      ++v11;
    v9 = *(char **)v9;
  }
  P = 0LL;
  v35 = 0;
  if ( (_DWORD)v12 )
  {
    Elements = (const unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(
                                       (__int64 *)&P,
                                       v13,
                                       v12,
                                       a4);
    if ( Elements )
    {
      v15 = (char *)v8 + 464;
      v16 = (char *)*((_QWORD *)v8 + 58);
      v31 = (char *)v8 + 464;
      while ( v16 != v15 && v16 )
      {
        if ( (*((_DWORD *)v16 + 101) & 0x10) != 0 )
        {
          for ( i = (__int64 *)*((_QWORD *)v16 + 51); i != (__int64 *)(v16 + 408) && i; i = (__int64 *)*i )
          {
            if ( v5 >= v13 )
            {
              WdLogSingleEntry1(1LL, 5977LL);
              DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i < NumHwQueues", 5977LL, 0LL, 0LL, 0LL, 0LL);
            }
            v18 = v5++;
            Elements[v18] = *((_DWORD *)i + 6);
          }
        }
        v16 = *(char **)v16;
        v15 = v31;
      }
      v8 = v32;
      if ( v13 != v5 )
      {
        WdLogSingleEntry1(1LL, 5987LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumHwQueues == i", 5987LL, 0LL, 0LL, 0LL, 0LL);
      }
      v19 = SubmitSignalSyncObjectsToHwQueue(1u, &v28, 0, v13, Elements, &v30, v29, 0, 1);
LABEL_37:
      v10 = v19;
      if ( v19 < 0 )
        WdLogSingleEntry2(4LL, v8, v19);
      if ( P != v34 && P )
        ExFreePoolWithTag(P, 0);
      return v10;
    }
  }
  else
  {
    v20 = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements((__int64 *)&P, v11, v12, a4);
    if ( v20 )
    {
      v22 = 0;
      for ( j = (_DWORD *)*((_QWORD *)v8 + 58); j != (_DWORD *)((char *)v8 + 464) && j; j = *(_DWORD **)j )
      {
        v24 = v22++;
        v20[v24] = j[6];
      }
      if ( v11 != v22 )
      {
        WdLogSingleEntry1(1LL, 6027LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumContexts == i", 6027LL, 0LL, 0LL, 0LL, 0LL);
      }
      v19 = SignalSynchronizationObjectInternal(1u, &v28, 0, v11, v20, 0LL, v30, 0LL, v29, 0, 1, 1);
      goto LABEL_37;
    }
  }
  if ( P != v34 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225495LL;
}
