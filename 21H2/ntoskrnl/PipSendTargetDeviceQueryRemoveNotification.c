/*
 * XREFs of PipSendTargetDeviceQueryRemoveNotification @ 0x140732A2C
 * Callers:
 *     PipProcessQueryRemovalInKernelMode @ 0x14073278C (PipProcessQueryRemovalInKernelMode.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpNotifyTargetDeviceChange @ 0x1406FE380 (PnpNotifyTargetDeviceChange.c)
 *     PiSendTargetDeviceRemoveCanceledNotification @ 0x1408B91A0 (PiSendTargetDeviceRemoveCanceledNotification.c)
 */

__int64 __fastcall PipSendTargetDeviceQueryRemoveNotification(__int64 a1, _QWORD **a2, unsigned int a3, __int64 a4)
{
  unsigned int v8; // esi
  int v9; // ebx
  _QWORD **i; // rdi
  _QWORD *v11; // rdx
  __int64 v12; // rcx
  int v13; // r8d
  __int64 v15; // rdx
  _WORD *v16; // rdi
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF

  v17[0] = 0LL;
  v8 = 0;
  v9 = 0;
  if ( !a3 )
    return v8;
  for ( i = a2; ; ++i )
  {
    v11 = *i;
    if ( *i )
      v12 = *(_QWORD *)(v11[39] + 40LL);
    else
      v12 = 0LL;
    if ( v12 )
    {
      v13 = *(_DWORD *)(v12 + 300);
      if ( ((v13 - 769) & 0xFFFFFFEE) == 0 && v13 != 785 )
        goto LABEL_9;
    }
    if ( *(_BYTE *)(a1 + 72) )
      break;
    v8 = PnpNotifyTargetDeviceChange(&GUID_TARGET_DEVICE_QUERY_REMOVE, v11, 0LL, v17);
    if ( (v8 & 0x80000000) != 0 )
      goto LABEL_15;
LABEL_9:
    if ( ++v9 >= a3 )
      return v8;
  }
  v8 = -1073741536;
LABEL_15:
  v15 = v17[0];
  v16 = (_WORD *)(a4 + 8);
  *(_DWORD *)a4 = 7;
  if ( v15 )
  {
    RtlCopyUnicodeString((PUNICODE_STRING)(a4 + 8), (PCUNICODE_STRING)(v15 + 56));
  }
  else
  {
    memset(*(void **)(a4 + 16), 0, (unsigned __int16)*v16);
    *v16 = 0;
  }
  if ( v9 )
    PiSendTargetDeviceRemoveCanceledNotification(a2, (unsigned int)(v9 - 1));
  return v8;
}
