/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C02F8358
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C02F9000 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C02F9330 (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C00495D4 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     McTemplateK0did_EtwWriteTransfer @ 0x1C005D5E0 (McTemplateK0did_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C02A7FA0 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rax
  __int64 v7; // rbx
  struct DXGSWAPCHAIN *v8; // rcx
  int SetMetaDataInternal; // ebx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  LONGLONG QuadPart; // rax
  struct DXGSWAPCHAIN **v14; // rcx
  struct DXGSWAPCHAIN *v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGPROCESS *Current; // rax
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  LONGLONG v31; // [rsp+30h] [rbp-39h] BYREF
  _D3DKMT_GETSETSWAPCHAINMETADATA v32; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v33[8]; // [rsp+60h] [rbp-9h] BYREF
  DXGPUSHLOCK *v34; // [rsp+68h] [rbp-1h]
  int v35; // [rsp+70h] [rbp+7h]
  __int128 v36; // [rsp+78h] [rbp+Fh] BYREF
  __int64 v37; // [rsp+88h] [rbp+1Fh]
  int v38; // [rsp+90h] [rbp+27h]

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 337);
  LODWORD(v7) = 0;
  if ( v3 )
  {
    v8 = *v3;
    if ( !*((_DWORD *)*v3 + 56) )
    {
      v32.hNtSwapChain = 0LL;
      v37 = 0LL;
      v38 = 0;
      *(_QWORD *)&v32.DataCopied = 0LL;
      v32.pBuffer = &v36;
      *(_QWORD *)&v32.bProducer = 1LL;
      v36 = 0LL;
      v32.bSetMetaData = 0;
      v32.BufferSize = 28;
      SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v8, &v32, 0, 0);
      if ( SetMetaDataInternal == -2147483643 )
        SetMetaDataInternal = 0;
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)this + 50, 0);
      DXGPUSHLOCK::AcquireShared(v34);
      v12 = DWORD1(v36);
      v35 = 1;
      if ( SetMetaDataInternal >= 0 && (v36 & 2) != 0 && (v10 = *((_QWORD *)this + 55), DWORD1(v36) > v10) )
      {
        QuadPart = *((_QWORD *)this + 56) + *((_QWORD *)this + 57) * (DWORD1(v36) - v10);
      }
      else if ( a3 )
      {
        QuadPart = a3->QuadPart;
      }
      else
      {
        QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
        v12 = DWORD1(v36);
      }
      v31 = QuadPart;
      if ( SetMetaDataInternal < 0 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0did_EtwWriteTransfer(v10, v12, v11, SDWORD2(v36), QuadPart, 0);
      }
      else if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0did_EtwWriteTransfer(v10, v12, v11, SDWORD2(v36), QuadPart, v12);
      }
      v35 = 0;
      ExReleasePushLockSharedEx(v34, 0LL);
      KeLeaveCriticalRegion();
      *((_DWORD *)a2 + 17) = DWORD1(v36);
      v14 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 337);
      v32.hNtSwapChain = 0LL;
      *(_QWORD *)&v32.bProducer = 1LL;
      *(_QWORD *)&v32.DataCopied = 0LL;
      v15 = *v14;
      v32.bSetMetaData = 1;
      v32.pBuffer = &v31;
      v32.BufferSize = 8;
      v16 = SwapChainGetSetMetaDataInternal(v15, &v32, 0x14u, 0);
      v20 = v16;
      if ( v16 < 0 )
      {
        v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
        *(_QWORD *)(v21 + 24) = v20;
        WdLogEvent5_WdWarning(v21);
      }
      ObfReferenceObject(*((PVOID *)this + 337));
      Current = DXGPROCESS::GetCurrent(v23, v22);
      v25 = DXGWORKQUEUE::QueueWork(
              (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 88LL),
              (struct _LIST_ENTRY *)lambda_8e631c23aebb5c5c759a7e2e825fab1c_::_lambda_invoker_cdecl_,
              *((struct _LIST_ENTRY **)this + 337));
      v7 = v25;
      if ( v25 < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v27, v26);
        *(_QWORD *)(v28 + 24) = v7;
        WdLogEvent5_WdError(v28);
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
    }
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v29 + 24) = 1568LL;
    WdLogEvent5_WdError(v29);
    LODWORD(v7) = -1073741823;
  }
  return (unsigned int)v7;
}
