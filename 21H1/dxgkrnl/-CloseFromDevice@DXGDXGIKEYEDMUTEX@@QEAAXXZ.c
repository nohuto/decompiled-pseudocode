/*
 * XREFs of ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C02941AC
 * Callers:
 *     _lambda_4dffd96e1fbf85f9617d9335535820ae_::_lambda_invoker_cdecl_ @ 0x1C0103600 (_lambda_4dffd96e1fbf85f9617d9335535820ae_--_lambda_invoker_cdecl_.c)
 *     _lambda_593c7b7db45d2905858a3969fb7431d6_::_lambda_invoker_cdecl_ @ 0x1C011C130 (_lambda_593c7b7db45d2905858a3969fb7431d6_--_lambda_invoker_cdecl_.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C014A414 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ??1DXGDXGIKEYEDMUTEX@@QEAA@XZ @ 0x1C0293B60 (--1DXGDXGIKEYEDMUTEX@@QEAA@XZ.c)
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C02965D8 (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000A30C (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C0116AA0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01207F8 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z @ 0x1C029447C (-CloseLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAXW4_OUTPUTDUPL_MUTEX_TYPE@@H@Z.c)
 */

void __fastcall DXGDXGIKEYEDMUTEX::CloseFromDevice(DXGDXGIKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  struct DXGRESOURCE *v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // r9
  int v26; // edx
  unsigned int v27; // ebx
  unsigned int v28; // eax
  struct DXGSYNCOBJECT *v29; // rsi
  PERESOURCE *Global; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rbx
  __int64 v34; // rdx
  __int64 v35; // rcx
  _BYTE v36[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v5[3] = this;
  v5[4] = *((_QWORD *)this + 1);
  v7 = *((_QWORD *)this + 4);
  v5[5] = v7;
  if ( !*((_QWORD *)this + 1) )
    return;
  if ( *((_QWORD *)this + 4) != PsGetCurrentProcess(v6, v7)
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 16LL)) )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
    v33[3] = PsGetCurrentProcess(v35, v34);
    v33[4] = *((_QWORD *)this + 4);
    v33[5] = *((_QWORD *)this + 1);
    return;
  }
  if ( *((_DWORD *)this + 22) )
  {
    Current = DXGPROCESS::GetCurrent(v9, v8);
    if ( !Current )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13, v12);
      *(_QWORD *)(v15 + 24) = 579LL;
      WdLogEvent5_WdAssertion(v15);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v36,
      (struct _KTHREAD **)Current);
    v17 = *((unsigned int *)this + 22);
    v18 = (*((_DWORD *)this + 22) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v18 < *((_DWORD *)Current + 64) )
    {
      v19 = *((_QWORD *)Current + 30);
      v17 = ((unsigned int)v17 >> 25) & 0x60;
      v16 = *(unsigned int *)(v19 + 16 * v18 + 8);
      if ( (_BYTE)v17 == (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60) && (v16 & 0x2000) == 0 && (v16 & 0x1F) != 0 )
      {
        v16 &= 0x1Fu;
        if ( (_BYTE)v16 == 4 )
        {
          v21 = *(struct DXGRESOURCE **)(v19 + 16LL * (unsigned int)v18);
          if ( v21 )
          {
LABEL_15:
            v23 = *((_DWORD *)this + 22);
            v24 = (v23 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v24 < *((_DWORD *)Current + 64) )
            {
              v25 = *((_QWORD *)Current + 30);
              v26 = *(_DWORD *)(v25 + 16 * v24 + 8);
              if ( ((v23 >> 25) & 0x60) == (*(_BYTE *)(v25 + 16 * v24 + 8) & 0x60)
                && (v26 & 0x2000) == 0
                && (v26 & 0x1F) != 0 )
              {
                *(_DWORD *)(v25 + 16LL * ((v23 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
              }
            }
            DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v36);
            DXGDEVICE::DestroyAllocationInternal(
              *((DXGDEVICE **)this + 1),
              0,
              0LL,
              v21,
              0LL,
              DXGDEVICE::DestroyFlagsDefault);
            *((_DWORD *)this + 22) = 0;
            *((_DWORD *)this + 23) = 0;
            goto LABEL_21;
          }
LABEL_14:
          v22 = WdLogNewEntry5_WdAssertion(v16, v17);
          *(_QWORD *)(v22 + 24) = 585LL;
          WdLogEvent5_WdAssertion(v22);
          goto LABEL_15;
        }
        v20 = WdLogNewEntry5_WdError(v16, v17);
        *(_QWORD *)(v20 + 24) = 267LL;
        WdLogEvent5_WdError(v20);
      }
    }
    v21 = 0LL;
    goto LABEL_14;
  }
LABEL_21:
  v27 = *((_DWORD *)this + 24);
  v28 = v27;
  if ( v27 )
  {
    v29 = (struct DXGSYNCOBJECT *)*((_QWORD *)this + 13);
    if ( v29 )
    {
      Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v9, v8);
      DXGGLOBAL::DestroySyncObject(Global, v29, v27);
      *((_DWORD *)this + 24) = 0;
      *((_QWORD *)this + 13) = 0LL;
      v28 = 0;
    }
  }
  if ( *((_QWORD *)this + 13) )
  {
    v31 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v31 + 24) = 605LL;
    WdLogEvent5_WdAssertion(v31);
    v28 = *((_DWORD *)this + 24);
  }
  if ( v28 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v32 + 24) = 606LL;
    WdLogEvent5_WdAssertion(v32);
  }
  if ( *((_DWORD *)this + 4) )
    DXGDXGIKEYEDMUTEX::CloseLocalMutex(this, 0LL, 1LL);
  *((_QWORD *)this + 1) = 0LL;
}
