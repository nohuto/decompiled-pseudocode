/*
 * XREFs of RmgrSrv_RmSetMemoryUsageLimit @ 0x180062C30
 * Callers:
 *     <none>
 * Callees:
 *     CempRpcQueryClientInformation @ 0x180008820 (CempRpcQueryClientInformation.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x1800699BC (-RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z.c)
 */

__int64 __fastcall RmgrSrv_RmSetMemoryUsageLimit(void *a1, unsigned __int64 a2, BOOL *a3)
{
  BOOL v5; // eax
  unsigned int v6; // ebx
  struct _RM_SERVICE_GLOBALS *v7; // rcx
  signed int v8; // ebx
  __int64 v9; // rcx
  unsigned int v11; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+40h] [rbp-58h] BYREF
  unsigned int *v14; // [rsp+60h] [rbp-38h]
  int v15; // [rsp+68h] [rbp-30h]
  int v16; // [rsp+6Ch] [rbp-2Ch]

  if ( a3 )
  {
    v8 = CempRpcQueryClientInformation(a1, 0LL, 0LL, &v11, (__int64)&v12, 0LL);
    if ( v8 >= 0 )
    {
      v5 = RmSrvHostTrySetCommitTargetForPple(v7, v12, v11, a2) >= 0;
      v6 = 0;
    }
    else
    {
      if ( (unsigned int)dword_1800B31E0 > 4 && tlgKeywordOn((__int64)&dword_1800B31E0, 9LL) )
      {
        v16 = 0;
        v14 = &v11;
        v11 = v8;
        v15 = 4;
        tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_18009A83D, 0LL, 0LL, 3u, &v13);
      }
      v5 = 0;
      v6 = v8 | 0x10000000;
    }
  }
  else
  {
    v5 = 0;
    v6 = -2147024809;
  }
  *a3 = v5;
  return v6;
}
