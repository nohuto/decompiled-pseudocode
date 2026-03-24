/*
 * XREFs of ?VmBusSendGetDriverStoreFile@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJQEAGPEAKPEAEPEAU_FILE_BASIC_INFORMATION@@@Z @ 0x1C02488D4
 * Callers:
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C0261B50 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000B1D8 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C024CF2C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetDriverStoreFile(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        unsigned __int16 *const a2,
        unsigned int *a3,
        unsigned __int8 *a4,
        struct _FILE_BASIC_INFORMATION *a5)
{
  char v8; // di
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // rax
  struct _MDL *v15; // [rsp+28h] [rbp-D8h]
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-C8h] BYREF
  int v18; // [rsp+48h] [rbp-B8h]
  char v19; // [rsp+50h] [rbp-B0h]
  unsigned __int8 v20[8]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+68h] [rbp-98h]
  int v22; // [rsp+70h] [rbp-90h]
  LARGE_INTEGER v23; // [rsp+78h] [rbp-88h]
  LARGE_INTEGER v24; // [rsp+80h] [rbp-80h]
  LARGE_INTEGER v25; // [rsp+88h] [rbp-78h]
  LARGE_INTEGER v26; // [rsp+90h] [rbp-70h]
  ULONG v27; // [rsp+98h] [rbp-68h]
  unsigned __int16 v28[266]; // [rsp+9Ch] [rbp-64h] BYREF

  if ( !a3 || !a4 || (v8 = 0, !a5) )
    v8 = 1;
  v17[0] = 0LL;
  v17[1] = 0LL;
  v18 = 53;
  v19 = v8;
  v16 = 584;
  v11 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(this, (struct DXGKVMB_COMMAND_BASE *)v17, 0x20u, v20, &v16, v15);
  if ( v11 < 0 )
    goto LABEL_10;
  v11 = -1073741823;
  if ( v16 < 0x248 )
    goto LABEL_11;
  v11 = v22;
  if ( v22 < 0 )
  {
LABEL_10:
    if ( v11 == -2147483642 )
      return (unsigned int)v11;
LABEL_11:
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v12);
    *(_QWORD *)(v13 + 24) = v11;
    WdLogEvent5_WdWarning(v13);
    return (unsigned int)v11;
  }
  if ( !v8 )
  {
    *a4 = v20[0];
    *a3 = v21;
    a5->ChangeTime = v26;
    a5->CreationTime = v23;
    a5->FileAttributes = v27;
    a5->LastAccessTime = v24;
    a5->LastWriteTime = v25;
    v28[259] = 0;
    RtlStringCbCopyW(a2, 0x208uLL, (size_t *)v28);
  }
  return (unsigned int)v11;
}
