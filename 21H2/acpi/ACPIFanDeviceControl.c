/*
 * XREFs of ACPIFanDeviceControl @ 0x1C000D400
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIFanLoop @ 0x1C000D58C (ACPIFanLoop.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 */

__int64 __fastcall ACPIFanDeviceControl(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // rsi
  char v4; // r8
  void *v5; // rax
  void *v6; // rdx
  __int64 v7; // rcx
  KIRQL v8; // dl
  __int64 v9; // rax
  unsigned int v10; // edi
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-18h]

  if ( *(_BYTE *)(a2 + 64) )
  {
    v10 = -1073741822;
    *(_DWORD *)(a2 + 48) = -1073741822;
LABEL_22:
    IofCompleteRequest((PIRP)a2, 0);
    return v10;
  }
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 24LL) != 2703936 )
  {
    v10 = -1073741637;
LABEL_21:
    *(_QWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 48) = v10;
    goto LABEL_22;
  }
  v4 = 0;
  v5 = &unk_1C00701BA;
  v6 = &unk_1C00701BA;
  if ( DeviceExtension )
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v4 = DeviceExtension;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v5 = *(void **)(DeviceExtension + 568);
      if ( (v7 & 0x400000000000LL) != 0 )
        v6 = *(void **)(DeviceExtension + 576);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      16,
      22,
      (__int64)&WPP_3f41a75ade0b3c322354d339e206c4ba_Traceguids,
      a2,
      v4,
      (__int64)v5,
      v14);
  }
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(DeviceExtension + 184));
  if ( *(char *)(DeviceExtension + 8) < 0 || (*(_DWORD *)(DeviceExtension + 192) & 0x10000000) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 184), v8);
    v10 = -1073741810;
    goto LABEL_21;
  }
  _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)&ACPIFanCancelRequest);
  if ( *(_BYTE *)(a2 + 68) && _InterlockedExchange64((volatile __int64 *)(a2 + 104), 0LL) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 184), v8);
    v10 = -1073741536;
    goto LABEL_21;
  }
  v9 = *(_QWORD *)(a2 + 184);
  v10 = 259;
  v11 = (_QWORD *)(a2 + 168);
  *(_BYTE *)(v9 + 3) |= 1u;
  v12 = *(_QWORD **)(DeviceExtension + 224);
  if ( *v12 != DeviceExtension + 216 )
    __fastfail(3u);
  v11[1] = v12;
  *v11 = DeviceExtension + 216;
  *v12 = v11;
  *(_QWORD *)(DeviceExtension + 224) = v11;
  KeReleaseSpinLock((PKSPIN_LOCK)(DeviceExtension + 184), v8);
  ACPIFanLoop(DeviceExtension, 0LL);
  return v10;
}
