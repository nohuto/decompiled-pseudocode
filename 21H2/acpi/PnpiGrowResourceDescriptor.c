/*
 * XREFs of PnpiGrowResourceDescriptor @ 0x1C0098224
 * Callers:
 *     PnpiUpdateResourceList @ 0x1C0098B40 (PnpiUpdateResourceList.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C0022E18 (WPP_RECORDER_SF_ddL.c)
 *     ACPIInternalGrowBuffer @ 0x1C0098CDC (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  _WORD *Pool2; // rax
  int v6; // edi
  int v7; // [rsp+20h] [rbp-28h]

  if ( *(_QWORD *)a1 )
  {
    v6 = 32 * *(_DWORD *)(*(_QWORD *)a1 + 4LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, a3, 0x1Eu, v7);
    return ACPIInternalGrowBuffer(a1, (unsigned int)(v6 + 8), (unsigned int)(v6 + 264));
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, a3, 0x1Du, v7);
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 264LL, 1383097153LL);
    *(_QWORD *)a1 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      *(_WORD *)(*(_QWORD *)a1 + 2LL) = 1;
      *(_DWORD *)(*(_QWORD *)a1 + 4LL) = 0;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
