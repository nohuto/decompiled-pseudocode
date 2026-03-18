/*
 * XREFs of ACPIBuildProcessDevicePhaseCid @ 0x1C0025920
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C00095D8 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIConvertStringDelimitation @ 0x1C0025CF4 (ACPIConvertStringDelimitation.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCid(__int64 a1)
{
  char *v1; // rdi
  __int64 v3; // rbx
  const char *v4; // rax
  unsigned int v5; // r14d
  __int64 v6; // rbp
  __int64 v7; // rax
  const char *v8; // rdx
  int v9; // ebp
  __int64 v10; // r14
  signed __int32 v11; // edx
  void *v12; // rax
  void *v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rbp

  v1 = *(char **)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 40);
  ACPIConvertStringDelimitation(v1);
  if ( v1 )
  {
    v4 = AcpiInternalDeviceFlagTable;
    v5 = 0;
    if ( AcpiInternalDeviceFlagTable )
    {
      v6 = 0LL;
      while ( !strstr(v1, v4) )
      {
        v6 = ++v5;
        v4 = (&AcpiInternalDeviceFlagTable)[4 * v5];
        if ( !v4 )
          goto LABEL_6;
      }
      v16 = 4 * v6;
      _InterlockedOr64((volatile signed __int64 *)(v3 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v16 + 1]);
      _InterlockedOr64(
        (volatile signed __int64 *)(v3 + 1000),
        (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v16 + 2]);
    }
  }
LABEL_6:
  v7 = *(_QWORD *)(v3 + 8);
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    if ( *(_QWORD *)(v3 + 608) )
    {
      v8 = AcpiInternalDeviceFlagTable;
      v9 = 0;
      if ( AcpiInternalDeviceFlagTable )
      {
        v10 = 0LL;
        do
        {
          if ( strstr(*(const char **)(v3 + 608), v8) )
            _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), ~(__int64)(&AcpiInternalDeviceFlagTable)[v10 + 3]);
          v10 = 4LL * (unsigned int)++v9;
          v8 = (&AcpiInternalDeviceFlagTable)[v10];
        }
        while ( v8 );
        v7 = *(_QWORD *)(v3 + 8);
      }
    }
  }
  if ( ((v7 & 0x2000000) == 0
     || _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), (signed __int64)v1, 0LL))
    && v1 )
  {
    ExFreePoolWithTag(v1, 0);
  }
  v11 = 10;
  v12 = &unk_1C006FB8B;
  *(_DWORD *)(a1 + 32) = 10;
  v13 = &unk_1C006FB8B;
  v14 = *(_QWORD *)(v3 + 8);
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v12 = *(void **)(v3 + 608);
    if ( (v14 & 0x400000000000LL) != 0 )
      v13 = *(void **)(v3 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x22u,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      0,
      v3,
      (__int64)v12,
      (__int64)v13);
    v11 = *(_DWORD *)(a1 + 32);
  }
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v11);
  return 0LL;
}
