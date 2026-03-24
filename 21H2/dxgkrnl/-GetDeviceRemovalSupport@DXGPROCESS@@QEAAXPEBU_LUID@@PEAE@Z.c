/*
 * XREFs of ?GetDeviceRemovalSupport@DXGPROCESS@@QEAAXPEBU_LUID@@PEAE@Z @ 0x1C02850F8
 * Callers:
 *     DxgkGetProcessDeviceRemovalSupport @ 0x1C0286600 (DxgkGetProcessDeviceRemovalSupport.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C00072DC (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 */

void __fastcall DXGPROCESS::GetDeviceRemovalSupport(DXGPROCESS *this, const struct _LUID *a2, bool *a3)
{
  __int64 v6; // rax
  char *v7; // rbp
  __int16 v8; // ax
  bool v9; // al
  char *v10; // rax
  _QWORD *v11; // rbx
  __int64 Current; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rax
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 13) + 16LL) != KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 5053LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (char *)this + 176;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 176, 0LL);
  *((_QWORD *)this + 23) = KeGetCurrentThread();
  v8 = *((_WORD *)this + 232);
  if ( v8 )
    v9 = v8 == 1;
  else
    v9 = 0;
  *a3 = v9;
  if ( !v9 )
  {
    v10 = (char *)this + 280;
    *a3 = 1;
    v11 = (_QWORD *)*((_QWORD *)this + 35);
    v17[0] = v10;
    while ( 1 )
    {
      v17[1] = v11;
      Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v17);
      if ( !Current )
        break;
      if ( *(_DWORD *)(Current + 432) != 2 )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(Current + 16) + 16LL);
        if ( !v15 )
        {
          v16 = WdLogNewEntry5_WdAssertion(v14, v13);
          *(_QWORD *)(v16 + 24) = 5096LL;
          WdLogEvent5_WdAssertion(v16);
        }
        if ( *(_DWORD *)(v15 + 316) == a2->LowPart && *(_DWORD *)(v15 + 320) == a2->HighPart )
        {
          *a3 = 0;
          break;
        }
      }
      v11 = (_QWORD *)*v11;
    }
  }
  *((_QWORD *)v7 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
}
