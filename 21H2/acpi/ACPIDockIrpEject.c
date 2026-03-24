/*
 * XREFs of ACPIDockIrpEject @ 0x1C00AB550
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0002320 (ACPIInternalClearFlags.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C001E288 (WPP_RECORDER_SF_qqss.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIDockIrpEject(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  __int64 *v4; // r14
  __int64 v5; // rbp
  const char *v6; // rax
  const char *v7; // r8
  unsigned __int16 v8; // r9
  int v9; // eax
  int v10; // ebx
  __int64 *v11; // r15
  __int64 v12; // rcx
  __int64 v14; // [rsp+90h] [rbp+18h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v15 = 0LL;
  v14 = 0LL;
  v4 = (__int64 *)(DeviceExtension + 8);
  ACPIInternalClearFlags((void *)(DeviceExtension + 8), 0x400000000LL);
  v5 = *(_QWORD *)(DeviceExtension + 184);
  if ( !v5 )
  {
    v6 = byte_1C00701BA;
    v7 = byte_1C00701BA;
    if ( (*v4 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(DeviceExtension + 568);
      if ( (*v4 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(DeviceExtension + 576);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v8 = 10;
LABEL_24:
    WPP_RECORDER_SF_qqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x12u,
      v8,
      (__int64)&WPP_6625d3923c543510b1fa3235c3eeddfe_Traceguids,
      (char)a2,
      DeviceExtension,
      v6,
      v7);
LABEL_25:
    v10 = -1073741823;
    goto LABEL_26;
  }
  if ( *(_DWORD *)(DeviceExtension + 192) != 4
    || (KdDisableDebugger(), *(_DWORD *)(DeviceExtension + 200) == 1)
    || (v9 = ACPIGet((__int64 *)v5, 1262699615, 277086210, 0LL, 4, 0LL, 0LL, (__int64)&v14, 0LL),
        *(_DWORD *)(DeviceExtension + 200) = 1,
        v10 = v9,
        v9 >= 0) )
  {
    v11 = AMLIGetNamedChild(*(__int64 **)(v5 + 720), 810173791);
    if ( v11 )
    {
      v10 = ACPIGet((__int64 *)v5, 810173791, 277872640, 1LL, 4, 0LL, 0LL, 0LL, 0LL);
      AMLIDereferenceHandleEx((__int64)v11);
    }
    else
    {
      v10 = -1073741772;
    }
    if ( *(_DWORD *)(DeviceExtension + 192) == 4 )
      KdEnableDebugger();
    ACPIInternalClearFlags(v4, 0x400000000LL);
    if ( v10 >= 0 )
    {
      v10 = ACPIGet((__int64 *)DeviceExtension, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v15, 0LL);
      if ( v10 >= 0 )
      {
        v12 = *v4;
        if ( (*v4 & 2) == 0 )
        {
          v6 = byte_1C00701BA;
          v7 = byte_1C00701BA;
          if ( (v12 & 0x200000000000LL) != 0 )
          {
            v6 = *(const char **)(DeviceExtension + 568);
            if ( (v12 & 0x400000000000LL) != 0 )
              v7 = *(const char **)(DeviceExtension + 576);
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_25;
          v8 = 11;
          goto LABEL_24;
        }
      }
    }
  }
  else
  {
    KdEnableDebugger();
  }
LABEL_26:
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
