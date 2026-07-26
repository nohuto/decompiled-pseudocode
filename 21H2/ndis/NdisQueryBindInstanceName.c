/*
 * XREFs of NdisQueryBindInstanceName @ 0x1C00986E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     memset @ 0x1C00403C0 (memset.c)
 */

NDIS_STATUS __stdcall NdisQueryBindInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE BindingContext)
{
  NDIS_STATUS v4; // ebx
  __int64 v5; // r14
  const UNICODE_STRING *v6; // rbp
  unsigned int MaximumLength; // r12d
  wchar_t *PoolWithTag; // rax
  wchar_t *v9; // rdi

  v4 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x32u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      BindingContext);
  v5 = *((_QWORD *)BindingContext + 3);
  v6 = *(const UNICODE_STRING **)(v5 + 3856);
  if ( v6 )
  {
    MaximumLength = v6->MaximumLength;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v6->MaximumLength, 0x6E61444Eu);
    v9 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, MaximumLength);
      pAdapterInstanceName->Buffer = v9;
      pAdapterInstanceName->Length = 0;
      pAdapterInstanceName->MaximumLength = MaximumLength;
      if ( RtlAppendUnicodeStringToString(pAdapterInstanceName, v6) >= 0 )
      {
        v4 = 0;
        goto LABEL_10;
      }
    }
    else
    {
      v4 = -1073741670;
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
LABEL_10:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      6u,
      0x33u,
      (struct _GUID *)&WPP_3ecb09451b79381299710a0782e8cc63_Traceguids,
      (char)BindingContext,
      v5,
      v4);
  return v4;
}
