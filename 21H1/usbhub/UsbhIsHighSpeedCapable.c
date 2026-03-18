/*
 * XREFs of UsbhIsHighSpeedCapable @ 0x1C002CF78
 * Callers:
 *     UsbhInitialize @ 0x1C002CA30 (UsbhInitialize.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C000A740 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E0B4 (WPP_RECORDER_SF_.c)
 */

bool __fastcall UsbhIsHighSpeedCapable(__int64 a1)
{
  _DWORD *v2; // rbx
  _QWORD *PoolWithTag; // rax
  void *v4; // rdi
  int v5; // ebx
  int v7; // [rsp+20h] [rbp-28h]
  __int16 v8; // [rsp+58h] [rbp+10h] BYREF
  int v9; // [rsp+60h] [rbp+18h] BYREF
  __int16 v10; // [rsp+68h] [rbp+20h] BYREF
  int v11; // [rsp+6Ah] [rbp+22h]
  __int16 v12; // [rsp+6Eh] [rbp+26h]

  v2 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      25,
      (__int64)&WPP_17d2bee9f04934815023b5c023c5576c_Traceguids);
  if ( v2[633] != 1 )
    return 0;
  if ( v2[634] == 2 )
    return 1;
  PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, 0xAuLL, 0x42554855u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    return 0;
  v8 = 10;
  *PoolWithTag = 0LL;
  *((_WORD *)PoolWithTag + 4) = 0;
  v10 = 1664;
  v11 = 1536;
  v12 = 10;
  v5 = UsbhSyncSendCommand(a1, (__int64)&v10, (__int64)PoolWithTag, &v8, v7, &v9);
  ExFreePoolWithTag(v4, 0);
  return v5 >= 0;
}
