/*
 * XREFs of KeyboardClassHandleRead @ 0x1C00026D0
 * Callers:
 *     KeyboardClassRead @ 0x1C00012F0 (KeyboardClassRead.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0001720 (WPP_RECORDER_SF_qq.c)
 *     KeyboardClassReadCopyData @ 0x1C0005168 (KeyboardClassReadCopyData.c)
 */

__int64 __fastcall KeyboardClassHandleRead(__int64 a1, __int64 a2)
{
  unsigned int CopyData; // ebp
  char v5; // r14
  KIRQL v6; // r15
  __int64 **v7; // rdx
  __int64 *v8; // rcx
  __int64 *v10; // rdx
  __int64 **v11; // rax
  __int64 v12; // [rsp+20h] [rbp-38h]

  CopyData = 259;
  v5 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 160));
  if ( *(_DWORD *)(a1 + 84) )
  {
    CopyData = KeyboardClassReadCopyData(a1, a2);
    *(_DWORD *)(a2 + 48) = CopyData;
  }
  else
  {
    v7 = *(__int64 ***)(a1 + 176);
    v8 = (__int64 *)(a2 + 168);
    if ( *v7 != (__int64 *)(a1 + 168) )
      goto LABEL_15;
    *v8 = a1 + 168;
    *(_QWORD *)(a2 + 176) = v7;
    *v7 = v8;
    *(_QWORD *)(a1 + 176) = v8;
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)KeyboardClassCancel);
    if ( !*(_BYTE *)(a2 + 68) )
    {
LABEL_4:
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
      goto LABEL_5;
    }
    if ( !_InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 3u, 3u, 0x2Fu, v12);
      goto LABEL_4;
    }
    v10 = (__int64 *)*v8;
    if ( *(__int64 **)(*v8 + 8) != v8 || (v11 = *(__int64 ***)(a2 + 176), *v11 != v8) )
LABEL_15:
      __fastfail(3u);
    *v11 = v10;
    CopyData = -1073741536;
    v10[1] = (__int64)v11;
    *(_DWORD *)(a2 + 48) = -1073741536;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq((__int64)WPP_GLOBAL_Control->DeviceExtension, 3u, 3u, 0x2Eu, v12);
  }
  v5 = 1;
LABEL_5:
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 160), v6);
  if ( v5 )
  {
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 32), (PVOID)a2, 0x20u);
    IofCompleteRequest((PIRP)a2, 0);
  }
  return CopyData;
}
