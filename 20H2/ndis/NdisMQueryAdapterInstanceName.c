/*
 * XREFs of NdisMQueryAdapterInstanceName @ 0x1C003D000
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     memset @ 0x1C003FE40 (memset.c)
 */

NDIS_STATUS __stdcall NdisMQueryAdapterInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE MiniportHandle)
{
  NDIS_STATUS v4; // ebx
  unsigned int v5; // ebp
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rdi

  v4 = -1073741823;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_420890ab0fee3194af5139e684bd4f64_Traceguids,
      MiniportHandle);
  v5 = *(unsigned __int16 *)(*((_QWORD *)MiniportHandle + 482) + 2LL);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(
                             NonPagedPoolNx,
                             *(unsigned __int16 *)(*((_QWORD *)MiniportHandle + 482) + 2LL),
                             0x6E61444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5);
    pAdapterInstanceName->Buffer = v7;
    pAdapterInstanceName->Length = 0;
    pAdapterInstanceName->MaximumLength = v5;
    if ( RtlAppendUnicodeStringToString(pAdapterInstanceName, *((PCUNICODE_STRING *)MiniportHandle + 482)) >= 0 )
    {
      v4 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v4 = -1073741670;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_6:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xBu,
      (struct _GUID *)&WPP_420890ab0fee3194af5139e684bd4f64_Traceguids,
      (char)MiniportHandle,
      v4);
  return v4;
}
