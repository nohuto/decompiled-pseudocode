/*
 * XREFs of REMOTEVSYNCMAPPING::IterateList__lambda_3d79675884e940cafd73bf406652b69f___ @ 0x1C004D030
 * Callers:
 *     ?TriggerRemoteVsync@REMOTEVSYNCMAPPING@@QEAAXU_LUID@@I@Z @ 0x1C004D878 (-TriggerRemoteVsync@REMOTEVSYNCMAPPING@@QEAAXU_LUID@@I@Z.c)
 * Callees:
 *     ?VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z @ 0x1C003FE00 (-VmBusSendSignalGuestEvent@DXG_HOST_GLOBAL_VMBUS@@SAXPEAX@Z.c)
 *     McTemplateK0xqpp_EtwWriteTransfer @ 0x1C004D920 (McTemplateK0xqpp_EtwWriteTransfer.c)
 */

void __fastcall REMOTEVSYNCMAPPING::IterateList__lambda_3d79675884e940cafd73bf406652b69f___(
        _QWORD **a1,
        _DWORD **a2,
        __int64 a3,
        struct _MDL *a4)
{
  _QWORD *v4; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rax
  int v9; // ecx
  _QWORD P[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  v4 = *a1;
  while ( v4 != a1 )
  {
    v7 = v4;
    v4 = (_QWORD *)*v4;
    if ( *((_DWORD *)v7 + 4) == **a2 && *((_DWORD *)v7 + 5) == (*a2)[1] && *((_DWORD *)v7 + 6) == *a2[1] )
    {
      v11 = 0LL;
      v8 = v7[5];
      P[0] = 0LL;
      P[1] = v8;
      P[0] = v7[4];
      *(_WORD *)((char *)&v11 + 1) = 257;
      DXG_HOST_GLOBAL_VMBUS::VmBusSendSignalGuestEvent(P, (__int64)a2, a3, a4);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
        McTemplateK0xqpp_EtwWriteTransfer(
          v9,
          (unsigned int)&RemoteVSyncTrigger,
          a3,
          v7[2],
          *((_DWORD *)v7 + 6),
          v7[5],
          v7[4]);
    }
  }
}
