/*
 * XREFs of ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C0023B68
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0023A5C (WPP_RECORDER_SF_Sd.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C0024FFC (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_Si @ 0x1C0062264 (WPP_RECORDER_SF_Si.c)
 */

void __fastcall ndisQueryDeviceFlags(const wchar_t *a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  SIZE_T v5; // rbp
  wchar_t *PoolWithTag; // rax
  wchar_t *v7; // rsi
  int v8; // edx
  int DeviceFlags; // ecx
  int v10; // r8d
  int v11; // r9d

  *a2 = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  v5 = 2 * v3 + 12;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x2020444Eu);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlStringCbPrintfW(PoolWithTag, v5, L"%ws:%ws", L"NDIS");
    DeviceFlags = KseQueryDeviceFlags(v7, L"NdisMp", a2);
    if ( DeviceFlags >= 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Si(*((_QWORD *)WPP_GLOBAL_Control + 8), v8, v10, v11, (_DWORD)a1, (__int64)a1, *a2);
    }
    else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x76u,
        (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids,
        a1,
        DeviceFlags);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x74u,
      (struct _GUID *)&WPP_66115b70b0283e09187d30b01541a16f_Traceguids);
  }
}
