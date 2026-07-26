/*
 * XREFs of NdisTerminateWrapper @ 0x1C00C1620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0138DC0 (-ndisMUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 */

void __stdcall NdisTerminateWrapper(NDIS_HANDLE NdisWrapperHandle, PVOID SystemSpecific)
{
  _WORD *DriverObjectExtension; // rax
  _WORD *v4; // rbx
  __int16 v5; // cx
  unsigned __int16 v6; // r9

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xCu,
      (struct _GUID *)&WPP_0fef68400514361fc2e9d0d9865d24cd_Traceguids,
      NdisWrapperHandle);
  if ( NdisWrapperHandle && *(_QWORD *)NdisWrapperHandle )
  {
    DriverObjectExtension = IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)NdisWrapperHandle, (PVOID)0x4E4D4944);
    v4 = DriverObjectExtension;
    if ( DriverObjectExtension )
    {
      v5 = DriverObjectExtension[13] | 4;
      DriverObjectExtension[13] = v5;
      if ( *((_QWORD *)DriverObjectExtension + 2) || v5 < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          return;
        v6 = 13;
        goto LABEL_16;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          1u,
          0xEu,
          (struct _GUID *)&WPP_0fef68400514361fc2e9d0d9865d24cd_Traceguids,
          DriverObjectExtension);
        v5 = v4[13];
      }
      *((_QWORD *)v4 + 13) = 0LL;
      v4[13] = v5 | 0x10;
      ndisMUnload(*(struct _DRIVER_OBJECT **)NdisWrapperHandle);
    }
    else
    {
      ExFreePoolWithTag(NdisWrapperHandle, 0);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
    return;
  v6 = 15;
LABEL_16:
  WPP_RECORDER_SF_(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    4u,
    1u,
    v6,
    (struct _GUID *)&WPP_0fef68400514361fc2e9d0d9865d24cd_Traceguids);
}
