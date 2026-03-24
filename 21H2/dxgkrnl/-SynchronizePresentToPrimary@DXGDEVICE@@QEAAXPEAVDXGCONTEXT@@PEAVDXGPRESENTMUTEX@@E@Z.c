/*
 * XREFs of ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C015BBD8
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00FDFA0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C015B24C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028F00 (memset.c)
 *     ?GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z @ 0x1C01165B0 (-GetVidSchSyncObject@DXGSYNCOBJECT@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@PEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall DXGDEVICE::SynchronizePresentToPrimary(
        DXGDEVICE *this,
        struct DXGCONTEXT *a2,
        struct DXGPRESENTMUTEX *a3,
        char a4)
{
  __int64 v4; // r14
  __int64 v7; // rbx
  unsigned __int64 v8; // r15
  __int64 **v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  unsigned int v13; // ebx
  __int64 **v14; // r12
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  int v24; // eax
  struct _VIDSCH_SYNC_OBJECT *VidSchSyncObject; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v26[16]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v28[64]; // [rsp+70h] [rbp-90h] BYREF

  v4 = *((_QWORD *)this + 2);
  v7 = *(_QWORD *)(v4 + 768);
  v8 = *(_QWORD *)(v4 + 776);
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v4 + 808, 0LL);
  *(_QWORD *)(v4 + 816) = KeGetCurrentThread();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (struct DXGFASTMUTEX *const)(v7 + 32), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
  VidSchSyncObject = DXGSYNCOBJECT::GetVidSchSyncObject((DXGSYNCOBJECT *)v7, (struct ADAPTER_RENDER *)v4);
  if ( a4 || !*((_QWORD *)a2 + 20) && *(_DWORD *)(v4 + 800) >= 0x40u )
  {
    v13 = 0;
    memset(v28, 0, sizeof(v28));
    v14 = (__int64 **)(v4 + 784);
    while ( 1 )
    {
      v15 = 0LL;
      if ( *v14 != (__int64 *)v14 )
        v15 = *v14;
      if ( !v15 )
        break;
      v16 = *v15;
      if ( *v15 )
      {
        if ( *(__int64 **)(v16 + 8) != v15 )
          goto LABEL_23;
        v9 = (__int64 **)v15[1];
        if ( *v9 != v15 )
          goto LABEL_23;
        *v9 = (__int64 *)v16;
        *(_QWORD *)(v16 + 8) = v9;
        --*(_DWORD *)(v4 + 800);
      }
      *v15 = 0LL;
      v17 = v15 - 20;
      if ( a2 != (struct DXGCONTEXT *)(v15 - 20)
        && (*((_DWORD *)v17 + 105) & 0x10) == 0
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17[2] + 16) + 616LL) + 8LL)
                                                      + 784LL))(v17[34])
        && v13 < 0x40 )
      {
        v18 = v13++;
        v28[v18] = v17[34];
      }
    }
    if ( v13 )
    {
      v19 = *((_QWORD *)a2 + 2);
      v27 = ++v8;
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD *, int, struct _VIDSCH_SYNC_OBJECT **, _DWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v19 + 16) + 616LL) + 8LL) + 640LL))(
              0LL,
              0LL,
              v13,
              v28,
              1,
              &VidSchSyncObject,
              0,
              &v27);
      v22 = v20;
      if ( v20 < 0 )
      {
LABEL_30:
        v23 = WdLogNewEntry5_WdError(v21, v9);
        *(_QWORD *)(v23 + 24) = v22;
        *(_QWORD *)(v23 + 32) = a2;
        WdLogEvent5_WdError(v23);
        goto LABEL_4;
      }
      *(_QWORD *)(v4 + 776) = v8;
    }
  }
  if ( *((_QWORD *)a2 + 22) >= v8 )
    goto LABEL_4;
  if ( (*((_DWORD *)a2 + 105) & 0x10) == 0 )
  {
    v24 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDSCH_SYNC_OBJECT *, unsigned __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 616LL) + 8LL)
                                                                                            + 624LL))(
            *((_QWORD *)a2 + 34),
            VidSchSyncObject,
            v8);
    v22 = v24;
    if ( v24 < 0 )
      goto LABEL_30;
  }
  *((_QWORD *)a2 + 22) = v8;
LABEL_4:
  v10 = (_QWORD *)((char *)a2 + 160);
  if ( !*v10 )
  {
    v12 = *(_QWORD **)(v4 + 792);
    if ( *v12 != v4 + 784 )
LABEL_23:
      __fastfail(3u);
    *v10 = v4 + 784;
    v10[1] = v12;
    *v12 = v10;
    *(_QWORD *)(v4 + 792) = v10;
    ++*(_DWORD *)(v4 + 800);
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, (__int64)v9);
  *(_QWORD *)(v4 + 816) = 0LL;
  ExReleasePushLockExclusiveEx(v4 + 808, 0LL);
  KeLeaveCriticalRegion();
  if ( v26[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v11);
}
