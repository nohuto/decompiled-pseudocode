/*
 * XREFs of ?VmBusSendCreateContextVirtual@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIIIIIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@IPEAX@Z @ 0x1C0245EB8
 * Callers:
 *     ?Initialize@DXGCONTEXT@@QEAAJPEAXI@Z @ 0x1C00E6044 (-Initialize@DXGCONTEXT@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024C01C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateContextVirtual(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        __int64 a2,
        UINT a3,
        UINT a4,
        UINT a5,
        struct _D3DDDI_CREATECONTEXTFLAGS a6,
        enum _D3DKMT_CLIENTHINT a7,
        unsigned int Size,
        void *Src)
{
  UINT v11; // r13d
  __int64 v13; // rax
  struct _D3DDDI_CREATECONTEXTFLAGS *v15; // rbx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F Value; // ebp
  struct _MDL *v23; // [rsp+28h] [rbp-80h]
  unsigned int v24; // [rsp+30h] [rbp-78h] BYREF
  __int64 v25; // [rsp+38h] [rbp-70h] BYREF
  int v26; // [rsp+40h] [rbp-68h]
  int v27; // [rsp+44h] [rbp-64h]
  int v28; // [rsp+48h] [rbp-60h]

  v11 = a2;
  if ( Size > 0x20000 )
  {
    v13 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v13 + 24) = 7263LL;
    WdLogEvent5_WdError(v13);
    return 0LL;
  }
  v25 = 0LL;
  v26 = 0;
  v15 = (struct _D3DDDI_CREATECONTEXTFLAGS *)&v25;
  v27 = 0;
  v16 = (Size + 62) & 0xFFFFFFF8;
  v28 = 6;
  if ( Size )
  {
    v15 = (struct _D3DDDI_CREATECONTEXTFLAGS *)operator new[](v16, 0x4B677844u, (POOL_TYPE)512);
    if ( !v15 )
    {
      v21 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
      *(_QWORD *)(v21 + 24) = 7276LL;
      WdLogEvent5_WdLowResource(v21);
      return 0LL;
    }
  }
  *(_QWORD *)&v15->0 = 0LL;
  v15[3].Value = 0;
  v15[6].Value = 0;
  v15[9].Value = a5;
  v15[10].0 = a6.0;
  v15[11].Value = a7;
  v15[4].Value = 6;
  v15[2].Value = v11;
  v15[7].Value = a3;
  v15[8].Value = a4;
  v15[12].Value = Size;
  if ( Size )
    memmove(&v15[13], Src, Size);
  v24 = (Size + 62) & 0xFFFFFFF8;
  Value = 0;
  if ( DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)v15, v16, v15, &v24, v23) >= 0
    && v24 >= v16 )
  {
    Value = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v15[6].Value;
  }
  if ( Size )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 8) + 1872LL) >= 0x7008u )
      memmove(Src, &v15[13], Size);
    operator delete[](v15);
  }
  return *(unsigned int *)&Value;
}
