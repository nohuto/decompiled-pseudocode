/*
 * XREFs of ?DrtTestSignalEventCb@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@@Z @ 0x1C025F474
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F574 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     DxgkSignalEventCB @ 0x1C0041E20 (DxgkSignalEventCB.c)
 *     ?CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z @ 0x1C0043DA8 (-CallDxgkSignalEventCbAtDispatch@@YAJPEBU_DXGKARGCB_SIGNALEVENT@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS@@IPEAE@Z @ 0x1C0247F54 (-VmBusSendEscape@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIIW4_D3DKMT_ESCAPETYPE@@U_D3DDDI_ESCAPEFLAGS.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0285260 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DrtTestSignalEventCb(struct DXGADAPTER *a1, struct _D3DKMT_DRT_ESCAPE_HEAD *a2)
{
  HANDLE *Current; // rax
  UINT v5; // ebx
  unsigned int HostProcess; // eax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rax
  bool v12; // zf
  int v13; // eax
  size_t v15; // [rsp+38h] [rbp-40h]
  _DXGKARGCB_SIGNALEVENT v16; // [rsp+50h] [rbp-28h] BYREF

  if ( *((_DWORD *)a2 + 1) >= 0x20u )
  {
    *(_QWORD *)&v16.0 = 0LL;
    Current = (HANDLE *)DXGPROCESS::GetCurrent((__int64)a1, (__int64)a2);
    if ( a1 )
    {
      if ( Current )
      {
        if ( *((_BYTE *)a1 + 209) )
        {
          v5 = *((_DWORD *)a1 + 1078);
          HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
          LODWORD(v15) = *((_DWORD *)a2 + 1);
          v7 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendEscape(
                 (struct DXGADAPTER *)((char *)a1 + 4240),
                 HostProcess,
                 v5,
                 0,
                 0,
                 D3DKMT_ESCAPE_DRT_TEST,
                 0,
                 v15,
                 (unsigned __int8 *)a2);
          v10 = v7;
          if ( v7 < 0 )
          {
            v11 = WdLogNewEntry5_WdError(v9, v8);
            *(_QWORD *)(v11 + 24) = v10;
            WdLogEvent5_WdError(v11);
          }
          return (unsigned int)v10;
        }
        v16.hDxgkProcess = Current[8];
        if ( v16.hDxgkProcess )
        {
          v12 = *((_BYTE *)a2 + 24) == 0;
          v16.hEvent = (HANDLE)*((_QWORD *)a2 + 2);
          if ( v12 )
            v13 = DxgkSignalEventCB(&v16);
          else
            v13 = CallDxgkSignalEventCbAtDispatch(&v16);
          LODWORD(v10) = v13;
          return (unsigned int)v10;
        }
      }
    }
  }
  return 3221225485LL;
}
