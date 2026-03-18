/*
 * XREFs of ?VmBusSendPropagatePresentHistoryToken@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCRefCountedBuffer@@E@Z @ 0x1C0040B90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C004099C (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

void __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendPropagatePresentHistoryToken(
        struct VMBCHANNEL__ *a1,
        struct DXGPRESENTHISTORYTOKENQUEUE *a2,
        struct _D3DKMT_PRESENTHISTORYTOKEN *a3,
        struct CRefCountedBuffer *a4,
        unsigned __int8 a5)
{
  struct _MDL *v6; // r9
  __int64 v7; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+28h] [rbp-38h]
  int v9; // [rsp+2Ch] [rbp-34h]
  __int64 v10; // [rsp+30h] [rbp-30h]
  struct DXGPRESENTHISTORYTOKENQUEUE *v11; // [rsp+38h] [rbp-28h]
  struct _D3DKMT_PRESENTHISTORYTOKEN *v12; // [rsp+40h] [rbp-20h]
  struct CRefCountedBuffer *v13; // [rsp+48h] [rbp-18h]
  unsigned __int64 v14; // [rsp+50h] [rbp-10h]

  v10 = 1LL;
  v14 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 2;
  v13 = a4;
  v12 = a3;
  v11 = a2;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)a1, (__int64)a2) + 408) >= 0x18u )
    v14 ^= ((unsigned __int8)v14 ^ a5) & 1;
  VmBusSendAsyncMessage(a1, (struct DXGKVMB_COMMAND_BASE *)&v7, 56LL, v6);
}
