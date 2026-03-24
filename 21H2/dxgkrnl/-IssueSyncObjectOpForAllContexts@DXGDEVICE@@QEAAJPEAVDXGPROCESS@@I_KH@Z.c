/*
 * XREFs of ?IssueSyncObjectOpForAllContexts@DXGDEVICE@@QEAAJPEAVDXGPROCESS@@I_KH@Z @ 0x1C0255330
 * Callers:
 *     ?DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z @ 0x1C022C470 (-DxgkCddIssueSyncObjectOpForDevice@@YAJII_KH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EC3B0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00FBD50 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C015D018 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ @ 0x1C026D804 (-GetRenderHwQueueCount@DXGCONTEXT@@QEAAIXZ.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026F14C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0270660 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DXGDEVICE::IssueSyncObjectOpForAllContexts(
        DXGDEVICE *this,
        struct DXGPROCESS *a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  DXGCONTEXT *v5; // r15
  DXGDEVICE *v7; // rsi
  __int64 v8; // rbx
  DXGCONTEXT *v9; // r8
  unsigned int v10; // ebx
  int v11; // r9d
  unsigned int v12; // r12d
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  DXGCONTEXT *v15; // rbx
  unsigned int v16; // esi
  _DWORD *i; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int *v25; // rdi
  DXGCONTEXT *v27; // rdx
  unsigned int v28; // r8d
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  DXGCONTEXT *v33; // rdi
  int v34; // eax
  _DWORD *v35; // rsi
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  unsigned int v44; // [rsp+60h] [rbp-71h] BYREF
  struct DXGPROCESS *v45; // [rsp+68h] [rbp-69h]
  DXGDEVICE *v46; // [rsp+70h] [rbp-61h]
  unsigned __int64 v47; // [rsp+78h] [rbp-59h] BYREF
  unsigned int *v48; // [rsp+80h] [rbp-51h]
  PVOID P; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v50[64]; // [rsp+98h] [rbp-39h] BYREF
  int v51; // [rsp+D8h] [rbp+7h]

  v5 = (DXGDEVICE *)((char *)this + 464);
  v45 = a2;
  v7 = this;
  v46 = this;
  v47 = a4;
  LODWORD(v8) = -1073741823;
  if ( !a5 )
  {
    v33 = *(DXGCONTEXT **)v5;
    while ( v33 != v5 && v33 )
    {
      v34 = *((_DWORD *)v33 + 105);
      v44 = a3;
      if ( (v34 & 0x10) != 0 )
      {
        v35 = (_DWORD *)*((_QWORD *)v33 + 53);
        while ( v35 != (_DWORD *)((char *)v33 + 424) && v35 )
        {
          v36 = SubmitWaitForSyncObjectsFromGpu(1u, &v44, &v47, v35[6], a2, 0, 1);
          v8 = v36;
          if ( v36 < 0 )
          {
            v39 = WdLogNewEntry5_WdEvent(v38, v37);
            v7 = v46;
            *(_QWORD *)(v39 + 24) = v46;
            *(_QWORD *)(v39 + 32) = v8;
            WdLogEvent5_WdEvent(v39);
            goto LABEL_53;
          }
          v35 = *(_DWORD **)v35;
          a2 = v45;
        }
        v7 = v46;
      }
      else
      {
        v40 = WaitForSynchronizationObjectFromGpu(1u, &v44, 0LL, a4, *((_DWORD *)v33 + 6), a2, 0, 1, 0, 0);
        v8 = v40;
        if ( v40 < 0 )
        {
          v43 = WdLogNewEntry5_WdEvent(v42, v41);
          *(_QWORD *)(v43 + 24) = v7;
          *(_QWORD *)(v43 + 32) = v8;
          WdLogEvent5_WdEvent(v43);
          return (unsigned int)v8;
        }
LABEL_53:
        a2 = v45;
      }
      v33 = *(DXGCONTEXT **)v33;
      a4 = v47;
    }
    return (unsigned int)v8;
  }
  v44 = a3;
  v9 = *(DXGCONTEXT **)v5;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  while ( v9 != v5 && v9 )
  {
    if ( (*((_DWORD *)v9 + 105) & 0x10) != 0 )
      v12 += DXGCONTEXT::GetRenderHwQueueCount(v9);
    else
      ++v10;
    v9 = *(DXGCONTEXT **)v9;
  }
  P = 0LL;
  v51 = 0;
  if ( v11 )
  {
    v48 = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v12);
    if ( v48 )
    {
      v15 = *(DXGCONTEXT **)v5;
      v16 = 0;
      while ( v15 != v5 && v15 )
      {
        if ( (*((_DWORD *)v15 + 105) & 0x10) != 0 )
        {
          v13 = v48;
          for ( i = (_DWORD *)*((_QWORD *)v15 + 53); i != (_DWORD *)((char *)v15 + 424) && i; i = *(_DWORD **)i )
          {
            if ( v16 >= v12 )
            {
              v18 = WdLogNewEntry5_WdAssertion(v14, v13);
              *(_QWORD *)(v18 + 24) = 5955LL;
              WdLogEvent5_WdAssertion(v18);
              v13 = v48;
            }
            v14 = v16++;
            v13[v14] = i[6];
          }
        }
        v15 = *(DXGCONTEXT **)v15;
      }
      if ( v12 != v16 )
      {
        v19 = WdLogNewEntry5_WdAssertion(v14, v13);
        *(_QWORD *)(v19 + 24) = 5965LL;
        WdLogEvent5_WdAssertion(v19);
      }
      v20 = SubmitSignalSyncObjectsToHwQueue(1u, &v44, 0, v12, v48, &v47, v45, 0, 1);
      v8 = v20;
      if ( v20 >= 0 )
        goto LABEL_40;
      v23 = WdLogNewEntry5_WdEvent(v22, v21);
      *(_QWORD *)(v23 + 24) = v46;
LABEL_39:
      *(_QWORD *)(v23 + 32) = v8;
      WdLogEvent5_WdEvent(v23);
LABEL_40:
      if ( P != v50 && P )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v8;
    }
  }
  else
  {
    v25 = (unsigned int *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, v10);
    if ( v25 )
    {
      v27 = *(DXGCONTEXT **)v5;
      v28 = 0;
      while ( v27 != v5 && v27 )
      {
        v24 = v28++;
        v25[v24] = *((_DWORD *)v27 + 6);
        v27 = *(DXGCONTEXT **)v27;
      }
      if ( v10 != v28 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v24, v27);
        *(_QWORD *)(v29 + 24) = 6005LL;
        WdLogEvent5_WdAssertion(v29);
      }
      v30 = SignalSynchronizationObjectInternal(1LL, &v44, 0, v10, v25, 0LL, v47, 0LL, v45, 0, 1);
      v8 = v30;
      if ( v30 >= 0 )
        goto LABEL_40;
      v23 = WdLogNewEntry5_WdEvent(v32, v31);
      *(_QWORD *)(v23 + 24) = v7;
      goto LABEL_39;
    }
  }
  if ( P != v50 && P )
    ExFreePoolWithTag(P, 0);
  return 3221225495LL;
}
