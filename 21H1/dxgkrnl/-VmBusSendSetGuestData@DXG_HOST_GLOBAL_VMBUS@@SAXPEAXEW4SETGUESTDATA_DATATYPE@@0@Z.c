/*
 * XREFs of ?VmBusSendSetGuestData@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXEW4SETGUESTDATA_DATATYPE@@0@Z @ 0x1C003FD1C
 * Callers:
 *     ?VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z @ 0x1C003FDE0 (-VmBusSendSetGuestDataDword@DXG_HOST_GLOBAL_VMBUS@@SAXPEAXK@Z.c)
 *     ??1DXGDEVICE@@QEAA@XZ @ 0x1C00DBD38 (--1DXGDEVICE@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C003FA94 (-VmBusSendAsyncMessage@@YAJPEAUVMBCHANNEL__@@PEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusSendSetGuestData(__int64 a1, char a2, __int64 a3, struct _MDL *a4)
{
  __int64 result; // rax
  struct VMBCHANNEL__ *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h]
  int v12; // [rsp+2Ch] [rbp-34h]
  int v13; // [rsp+30h] [rbp-30h]
  int v14; // [rsp+34h] [rbp-2Ch]
  __int64 v15; // [rsp+38h] [rbp-28h]
  int Next; // [rsp+40h] [rbp-20h]
  __int64 v17; // [rsp+44h] [rbp-1Ch]
  int v18; // [rsp+4Ch] [rbp-14h]

  result = *(_QWORD *)(a1 + 8);
  if ( result )
  {
    v17 = 0LL;
    v14 = 0;
    v18 = 0;
    v10 = 0LL;
    v11 = 0;
    v5 = *(struct VMBCHANNEL__ **)a1;
    v12 = 2;
    v13 = 2;
    v15 = result;
    Next = (int)a4->Next;
    HIDWORD(v17) = a2 != 0;
    result = VmBusSendAsyncMessage(v5, (struct DXGKVMB_COMMAND_BASE *)&v10, 48LL, a4);
    v8 = (int)result;
    if ( (int)result < 0 )
    {
      v9 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v9 + 24) = v8;
      return WdLogEvent5_WdError(v9);
    }
  }
  return result;
}
