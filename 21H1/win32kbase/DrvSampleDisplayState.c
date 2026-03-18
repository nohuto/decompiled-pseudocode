/*
 * XREFs of DrvSampleDisplayState @ 0x1C00971E0
 * Callers:
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___ @ 0x1C005568C (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_1__lambda_a27ee16dd2d74bc8613ac0553628de9a___.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0094B40 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserQueryDisplayConfig @ 0x1C0095DB0 (NtUserQueryDisplayConfig.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___ @ 0x1C0122900 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_3__lambda_2ffaef142a06e39d44c296ad8819dbf0___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_5__lambda_080e8f3c9a2b96fa8c06ab1b08e75502___ @ 0x1C01229B0 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_5__lambda_080e8f3c9a2b96fa8c06ab1b08e75502___.c)
 *     DispBroker::DispBrokerClient::AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___ @ 0x1C0122A60 (DispBroker--DispBrokerClient--AsyncMessageNoAlloc_6__lambda_12383f500c067e992563f3aceebe145e___.c)
 *     InitDisplayBrokerMessage_DispBroker::AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__&DrvSampleDisplayState_ @ 0x1C0122B38 (InitDisplayBrokerMessage_DispBroker--AlpcRequest_8___lambda_38c6dc7437b728cc1d00ec4d9055c622__-D.c)
 *     ?xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z @ 0x1C0123338 (-xxxDispBrokerChangeDisplaySettings@@YAJPEBU_UNICODE_STRING@@PEAU_devicemodeW@@I_N@Z.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0138C00 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C013DBA0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvSampleDisplayState(_DWORD *a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 3221225485LL;
  *a1 = *((_DWORD *)gpGdiSharedMemory + 393252);
  a1[1] = *((_DWORD *)gpGdiSharedMemory + 393258);
  result = 0LL;
  a1[2] = *((_DWORD *)gpGdiSharedMemory + 393256);
  return result;
}
