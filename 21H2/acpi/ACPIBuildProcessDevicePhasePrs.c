/*
 * XREFs of ACPIBuildProcessDevicePhasePrs @ 0x1C004A840
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C00095D8 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C00298D0 (PnpBiosSetFlagsForNotableInterrupts.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrs(__int64 a1)
{
  bool v1; // zf
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  char v5; // r8
  void *v6; // rax
  void *v7; // rdx
  __int64 v8; // rcx
  signed __int32 v9; // edx

  v1 = *(_QWORD *)(a1 + 56) == 0LL;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 16;
  if ( !v1 && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(a1 + 82) == 3 )
    {
      PnpBiosSetFlagsForNotableInterrupts((__int64)v3, *(char **)(a1 + 112), *(_DWORD *)(a1 + 104));
      v4 = a1 + 80;
    }
    else
    {
      v4 = a1 + 80;
    }
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    FreeDataBuffs(v4, 1u);
  }
  v5 = 0;
  v6 = &unk_1C006FB8B;
  v7 = &unk_1C006FB8B;
  if ( v3 )
  {
    v8 = v3[1];
    v5 = (char)v3;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = (void *)v3[76];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (void *)v3[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x24u,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      0,
      v5,
      (__int64)v6,
      (__int64)v7);
  v9 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v9);
  return 0LL;
}
