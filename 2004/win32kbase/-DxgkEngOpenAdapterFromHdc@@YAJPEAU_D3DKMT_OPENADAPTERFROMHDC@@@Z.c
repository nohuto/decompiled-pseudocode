/*
 * XREFs of ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C00A4C10
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0023BA0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C0027A20 (EngAcquireSemaphore.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C009D410 (UserIsCurrentProcessDwm.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C00A52B8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngOpenAdapterFromHdc(struct _D3DKMT_OPENADAPTERFROMHDC *a1)
{
  struct _D3DKMT_OPENADAPTERFROMHDC *v2; // rax
  NTSTATUS DeviceObjectPointer; // edi
  int v4; // esi
  __int64 v5; // rbx
  int v6; // r9d
  __int16 v7; // r10
  __int64 v8; // rdx
  int v9; // r8d
  const WCHAR *v10; // rdx
  struct _ERESOURCE *v11; // rcx
  __int64 v12; // rcx
  _DWORD *p_hAdapter; // rdx
  _QWORD *p_AdapterLuid; // rdx
  _DWORD *p_VidPnSourceId; // rdx
  struct _DEVICE_OBJECT *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-58h] BYREF
  int v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+2Ch] [rbp-4Ch]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-48h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h]
  _OWORD v27[3]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v28; // [rsp+88h] [rbp+10h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+18h] BYREF
  PFILE_OBJECT FileObject; // [rsp+98h] [rbp+20h] BYREF

  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (struct _D3DKMT_OPENADAPTERFROMHDC *)MmUserProbeAddress;
  DestinationString = *(struct _UNICODE_STRING *)&v2->hDc;
  v26 = *(_QWORD *)&v2->AdapterLuid.HighPart;
  DeviceObjectPointer = -1073741811;
  v4 = 0;
  FileObject = 0LL;
  DeviceObject = 0LL;
  v23 = 0;
  v24 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v22, *(HDC *)&DestinationString.Length);
  if ( v22 )
  {
    v5 = *(_QWORD *)(v22 + 48);
    v28 = v5;
    if ( !v5 )
    {
LABEL_12:
      XDCOBJ::vUnlockFast((XDCOBJ *)&v22);
      goto LABEL_13;
    }
    EngAcquireSemaphore(*(HSEMAPHORE *)(v5 + 48));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 48), 11);
    v6 = *(_DWORD *)(v5 + 40);
    v7 = 1;
    v8 = v6 & 1;
    v9 = 0x20000;
    if ( (v6 & 1) != 0 && (v6 & 0x20000) == 0 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v28) )
    {
      v4 = *(_DWORD *)(*(_QWORD *)(v5 + 2576) + 256LL);
      DestinationString = 0LL;
      v10 = *(const WCHAR **)(v5 + 2576);
LABEL_9:
      RtlInitUnicodeString(&DestinationString, v10);
      DeviceObjectPointer = IoGetDeviceObjectPointer(&DestinationString, 0, &FileObject, &DeviceObject);
      goto LABEL_10;
    }
    if ( !(_DWORD)v8 )
      goto LABEL_44;
    if ( (v6 & v9) != 0 )
      goto LABEL_10;
    v8 = *(_QWORD *)(v5 + 2576);
    if ( v8 && (v17 = *(struct _DEVICE_OBJECT **)(v8 + 304)) != 0LL && (*(_DWORD *)(v8 + 164) & 4) != 0 )
    {
      v4 = *(_DWORD *)(v8 + 256);
    }
    else
    {
LABEL_44:
      if ( (v6 & v9) != 0 )
        goto LABEL_10;
      v18 = *(_QWORD *)(v5 + 2576);
      if ( !v18
        || (*(_DWORD *)(v18 + 160) & 0x4000000) == 0
        || (unsigned __int16)(gProtocolType - v7) > 0xFFFDu
        || !qword_1C024D240
        || (PVOID)PsGetCurrentProcess(65533LL, v8) == gpepCSRSS
        || UserIsCurrentProcessDwm(v20, v19) )
      {
        goto LABEL_10;
      }
      v21 = *(_QWORD *)(v5 + 2576);
      v4 = *(_DWORD *)(v21 + 256);
      if ( dword_1C024D230 )
      {
        DestinationString = 0LL;
        v10 = &Dest;
        goto LABEL_9;
      }
      v17 = *(struct _DEVICE_OBJECT **)(v21 + 304);
      if ( !v17 )
      {
LABEL_10:
        EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(v5 + 48), v9);
        v11 = *(struct _ERESOURCE **)(v5 + 48);
        if ( v11 )
        {
          ExReleaseResourceAndLeaveCriticalRegion(v11);
          PsLeavePriorityRegion(v12);
        }
        goto LABEL_12;
      }
    }
    DeviceObject = v17;
    ObfReferenceObject(v17);
    DeviceObjectPointer = 0;
    goto LABEL_10;
  }
LABEL_13:
  memset(v27, 0, 24);
  if ( DeviceObjectPointer < 0 )
    goto LABEL_41;
  *(_QWORD *)&v27[0] = DeviceObject;
  if ( FileObject )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    FileObject = 0LL;
  }
  DeviceObjectPointer = ((__int64 (__fastcall *)(_OWORD *))qword_1C024C860)(v27);
  ObfDereferenceObject(DeviceObject);
  DeviceObject = 0LL;
  if ( DeviceObjectPointer < 0 )
  {
LABEL_41:
    *((_QWORD *)&v27[0] + 1) = 0LL;
    LODWORD(v27[1]) = 0;
    v4 = 0;
  }
  p_hAdapter = &a1->hAdapter;
  if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
    p_hAdapter = (_DWORD *)MmUserProbeAddress;
  *p_hAdapter = DWORD2(v27[0]);
  p_AdapterLuid = &a1->AdapterLuid;
  if ( (unsigned __int64)&a1->AdapterLuid >= MmUserProbeAddress )
    p_AdapterLuid = (_QWORD *)MmUserProbeAddress;
  *p_AdapterLuid = *(_QWORD *)((char *)v27 + 12);
  p_VidPnSourceId = &a1->VidPnSourceId;
  if ( (unsigned __int64)&a1->VidPnSourceId >= MmUserProbeAddress )
    p_VidPnSourceId = (_DWORD *)MmUserProbeAddress;
  *p_VidPnSourceId = v4;
  return (unsigned int)DeviceObjectPointer;
}
