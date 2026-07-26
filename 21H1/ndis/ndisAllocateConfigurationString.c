/*
 * XREFs of ndisAllocateConfigurationString @ 0x1C00278CC
 * Callers:
 *     NdisOpenConfigurationEx @ 0x1C0028100 (NdisOpenConfigurationEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     ?RtlUShortAdd@@YAJGGPEAG@Z @ 0x1C0027A7C (-RtlUShortAdd@@YAJGGPEAG@Z.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 */

__int64 __fastcall ndisAllocateConfigurationString(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        const UNICODE_STRING *a3,
        PUNICODE_STRING Destination)
{
  unsigned __int16 *p_MaximumLength; // r14
  unsigned int v9; // ebx
  unsigned __int16 *v10; // r8
  int v11; // r9d
  unsigned __int16 *v12; // r8
  int v13; // eax
  int v14; // r9d
  unsigned __int16 v15; // ax
  PVOID PoolWithTag; // rax

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      8u,
      0x11u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  p_MaximumLength = &Destination->MaximumLength;
  v9 = 0;
  v11 = RtlUShortAdd(a1->Length, ndisParameterStr.Length, &Destination->MaximumLength);
  if ( a2 )
  {
    RtlUShortAdd(*p_MaximumLength, a3->Length, v10);
    v13 = RtlUShortAdd(*p_MaximumLength, a2->Length, v12);
    v11 = v13 | v14;
  }
  v15 = *p_MaximumLength + 2;
  Destination->Buffer = 0LL;
  *p_MaximumLength = v15;
  Destination->Length = 0;
  if ( v11
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v15, 0x2020444Eu),
        (Destination->Buffer = (wchar_t *)PoolWithTag) == 0LL) )
  {
    v9 = -1073741670;
  }
  else
  {
    memset(PoolWithTag, 0, *p_MaximumLength);
    RtlCopyUnicodeString(Destination, a1);
    RtlAppendUnicodeStringToString(Destination, &ndisParameterStr);
    if ( a2 )
    {
      RtlAppendUnicodeStringToString(Destination, a3);
      RtlAppendUnicodeStringToString(Destination, a2);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x12u,
      (struct _GUID *)&WPP_b81edc0eee5937abc1ca6eb1073cfaac_Traceguids,
      (char)a1,
      (char)a2,
      a3);
  return v9;
}
