/*
 * XREFs of HUBDTX_GetProductIdStringDescriptorUsingControlTransfer @ 0x1C0028D58
 * Callers:
 *     HUBDSM_QueryingLanguageSpecificProductIdString @ 0x1C001E1C0 (HUBDSM_QueryingLanguageSpecificProductIdString.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     HUBSM_AddEvent @ 0x1C000B3FC (HUBSM_AddEvent.c)
 *     HUBDTX_GetDescriptor @ 0x1C0027CB0 (HUBDTX_GetDescriptor.c)
 */

__int64 __fastcall HUBDTX_GetProductIdStringDescriptorUsingControlTransfer(__int64 a1)
{
  char v1; // di
  int v3; // edx
  void *v4; // rcx
  __int16 v5; // ax
  __int64 result; // rax
  __int64 v7; // [rsp+28h] [rbp-20h]

  v1 = *(_BYTE *)(a1 + 2003);
  v3 = -1073741637;
  if ( !v1 && (*(_DWORD *)(a1 + 1644) & 1) != 0 )
    goto LABEL_6;
  v4 = *(void **)(a1 + 2032);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x64334855u);
  v5 = *(_WORD *)(a1 + 2040);
  *(_QWORD *)(a1 + 2032) = 0LL;
  result = HUBDTX_GetDescriptor(a1, a1 + 1732, 255, 3, v1, v5);
  v3 = result;
  if ( (int)result < 0 )
  {
LABEL_6:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = v3;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x41u,
        (__int64)&WPP_54051f9f773a359161ccd48cdf39bc09_Traceguids,
        v7);
    }
    return HUBSM_AddEvent(a1 + 504, 4004);
  }
  return result;
}
