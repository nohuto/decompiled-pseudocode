/*
 * XREFs of ?CompletePresentIndirectInternal@BLTQUEUE@@AEAAJPEAVBLTENTRY@@PEAT_LARGE_INTEGER@@H@Z @ 0x1C03BB550
 * Callers:
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C03BC3BC (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAVBLTENTRY@@@Z @ 0x1C03BC67C (-PreparePresentIndirect@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C002F03C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     McTemplateK0xqdid_EtwWriteTransfer @ 0x1C006D3C0 (McTemplateK0xqdid_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z @ 0x1C034CC34 (-SwapChainGetSetMetaDataInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_GETSETSWAPCHAINMETADATA@@ID@Z.c)
 */

__int64 __fastcall BLTQUEUE::CompletePresentIndirectInternal(
        BLTQUEUE *this,
        struct BLTENTRY *a2,
        union _LARGE_INTEGER *a3)
{
  struct DXGSWAPCHAIN **v3; // rax
  __int64 v7; // rdi
  struct DXGSWAPCHAIN *v8; // rcx
  int SetMetaDataInternal; // edi
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
  __int64 v20; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v22; // r9
  int v23; // eax
  int v25; // [rsp+38h] [rbp-61h]
  _D3DKMT_GETSETSWAPCHAINMETADATA v26; // [rsp+50h] [rbp-49h] BYREF
  LONGLONG v27; // [rsp+78h] [rbp-21h] BYREF
  _BYTE v28[8]; // [rsp+80h] [rbp-19h] BYREF
  DXGPUSHLOCK *v29; // [rsp+88h] [rbp-11h]
  int v30; // [rsp+90h] [rbp-9h]
  _OWORD v31[3]; // [rsp+98h] [rbp-1h] BYREF

  v3 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
  LODWORD(v7) = 0;
  if ( !v3 )
  {
    WdLogSingleEntry1(2LL, 1587LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Present to Indirect display does not have a shared swapchain to present to",
      1587LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v7) = -1073741823;
    return (unsigned int)v7;
  }
  v8 = *v3;
  if ( !*((_DWORD *)*v3 + 58) )
  {
    v26.hNtSwapChain = 0LL;
    *(_QWORD *)&v26.DataCopied = 0LL;
    v26.pBuffer = v31;
    *(_QWORD *)&v26.bProducer = 1LL;
    v26.bSetMetaData = 0;
    memset(v31, 0, sizeof(v31));
    v26.BufferSize = 48;
    SetMetaDataInternal = SwapChainGetSetMetaDataInternal(v8, &v26, 0, 0);
    if ( SetMetaDataInternal == -2147483643 )
      SetMetaDataInternal = 0;
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28, (struct _KTHREAD **)this + 51, 0);
    DXGPUSHLOCK::AcquireShared(v29);
    v12 = DWORD2(v31[0]);
    v30 = 1;
    if ( SetMetaDataInternal >= 0 && (v31[0] & 2) != 0 && (v10 = *((_QWORD *)this + 56), DWORD2(v31[0]) > v10) )
    {
      QuadPart = *((_QWORD *)this + 57) + *((_QWORD *)this + 58) * (DWORD2(v31[0]) - v10);
      v27 = QuadPart;
    }
    else
    {
      if ( a3 )
      {
        QuadPart = a3->QuadPart;
      }
      else
      {
        QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
        v12 = DWORD2(v31[0]);
      }
      v27 = QuadPart;
      if ( SetMetaDataInternal < 0 )
      {
        if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
          goto LABEL_20;
        v25 = 0;
        goto LABEL_19;
      }
    }
    if ( !bTracingEnabled || (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
      goto LABEL_20;
    v25 = v12;
LABEL_19:
    McTemplateK0xqdid_EtwWriteTransfer(
      v10,
      v12,
      v11,
      *((_QWORD *)this + 31),
      *((_DWORD *)this + 65),
      HIDWORD(v31[0]),
      QuadPart,
      v25);
LABEL_20:
    v30 = 0;
    ExReleasePushLockSharedEx(v29, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a2 + 17) = DWORD2(v31[0]);
    v14 = (struct DXGSWAPCHAIN **)*((_QWORD *)this + 339);
    v26.hNtSwapChain = 0LL;
    *(_QWORD *)&v26.bProducer = 1LL;
    *(_QWORD *)&v26.DataCopied = 0LL;
    v15 = *v14;
    v26.bSetMetaData = 1;
    v26.pBuffer = &v27;
    v26.BufferSize = 8;
    v16 = SwapChainGetSetMetaDataInternal(v15, &v26, 0x18u, 0);
    if ( v16 < 0 )
      WdLogSingleEntry1(3LL, v16);
    ObfReferenceObject(*((PVOID *)this + 339));
    Current = DXGPROCESS::GetCurrent(v18, v17, v19, v20);
    v23 = DXGWORKQUEUE::QueueWork(
            (PLIST_ENTRY)(*((_QWORD *)Current + 8) + 96LL),
            (void (*)(void *))lambda_33b60cbf84f600ce0ec08d15fd307f89_::_lambda_invoker_cdecl_,
            *((void **)this + 339),
            v22);
    v7 = v23;
    if ( v23 < 0 )
    {
      WdLogSingleEntry1(2LL, v23);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Indirect display present failed to queue the buffer release: 0x%I64x",
        v7,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v28);
  }
  return (unsigned int)v7;
}
