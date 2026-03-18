/*
 * XREFs of ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C037522C
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C016AE0C (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        unsigned int a2,
        UINT a3,
        UINT a4,
        UINT a5,
        struct _D3DDDI_CREATECONTEXTFLAGS a6,
        enum _D3DKMT_CLIENTHINT a7,
        unsigned int Size,
        void *Src)
{
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v13; // ebx
  struct _D3DDDI_CREATECONTEXTFLAGS *v14; // rdi
  size_t v15; // r14
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // r15d
  unsigned int v17; // [rsp+50h] [rbp-168h] BYREF
  void *v18; // [rsp+58h] [rbp-160h]
  void *v19[2]; // [rsp+60h] [rbp-158h] BYREF
  int v20; // [rsp+70h] [rbp-148h]

  v17 = a2;
  v18 = Src;
  if ( Size <= 0x20000 )
  {
    v13 = 0;
    *(_OWORD *)v19 = 0LL;
    v20 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v19, this, (Size + 62) & 0xFFFFFFF8, 0LL, 0LL, 0LL);
    v14 = (struct _D3DDDI_CREATECONTEXTFLAGS *)v19[0];
    if ( v19[0] )
    {
      *((_DWORD *)v19[0] + 2) = v17;
      v14[9].Value = a5;
      *(_BYTE *)&v14[3].0 = 0;
      v14[3].Value &= 0x1FFu;
      v14[10].0 = a6.0;
      v14[8].Value = a4;
      v14[11].Value = a7;
      *(_QWORD *)&v14->0 = 0LL;
      *(_QWORD *)&v14[4].0 = 6LL;
      v14[6].Value = 0;
      v14[7].Value = a3;
      v14[12].Value = Size;
      if ( Size )
      {
        v15 = Size;
        memmove(&v14[13], Src, Size);
      }
      else
      {
        v15 = 0LL;
      }
      v17 = (Size + 62) & 0xFFFFFFF8;
      Value = 0;
      if ( DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)v19, v14, &v17) >= 0
        && v17 >= ((Size + 62) & 0xFFFFFFF8) )
      {
        Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v14[6].Value;
      }
      if ( Size )
      {
        if ( *(_DWORD *)(*((_QWORD *)this + 9) + 1968LL) >= 0x7008u )
          memmove(v18, &v14[13], v15);
      }
      v13 = Value;
    }
    else
    {
      WdLogSingleEntry1(6LL, 8448LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for DXGKVMB_COMMAND_CREATECONTEXTVIRTUAL",
        8448LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v19);
    return *(unsigned int *)&v13;
  }
  else
  {
    WdLogSingleEntry1(2LL, 8435LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"PrivateDriverDataSize is invalid",
      8435LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0LL;
  }
}
