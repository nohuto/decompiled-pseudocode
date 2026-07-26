/*
 * XREFs of ?netsetupBuildObjectPath@@YAXW4_NETSETUP_OBJECT_TYPE@@AEBU_GUID@@W4NetSetupStoreType@@W4NetSetupSubkeyType@@PEA_W@Z @ 0x1C01020D8
 * Callers:
 *     _lambda_86c1c4c730e7c498c85e738815d56adf_::operator() @ 0x1C0100B38 (_lambda_86c1c4c730e7c498c85e738815d56adf_--operator().c)
 *     ?ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C01014F8 (-ndisBindReadProtocolDriverFromV3Registry@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z @ 0x1C010972C (-ReadV2InterfaceBindings@BindStack@Ndis@@AEAA_NPEBU_GUID@@@Z.c)
 *     ndisBindReadFilterDriverFromV3Registry @ 0x1C010A2AC (ndisBindReadFilterDriverFromV3Registry.c)
 *     ndisIfOpenInterfaceRegistryKey @ 0x1C010B4B8 (ndisIfOpenInterfaceRegistryKey.c)
 *     ?ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C0122AE0 (-ndisBindReadFilterDriverFromV2Registry@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?ndisReadLwfById@@YAJAEBU_GUID@@@Z @ 0x1C01250B0 (-ndisReadLwfById@@YAJAEBU_GUID@@@Z.c)
 *     ndisReadNicBindProperties @ 0x1C0125298 (ndisReadNicBindProperties.c)
 *     ?ndisReadProtocolById@@YAJAEBU_GUID@@@Z @ 0x1C0125420 (-ndisReadProtocolById@@YAJAEBU_GUID@@@Z.c)
 * Callees:
 *     netsetupGetPathForObjectType @ 0x1C0102220 (netsetupGetPathForObjectType.c)
 */

void __fastcall netsetupBuildObjectPath(
        __int64 a1,
        const struct _GUID *a2,
        int a3,
        enum NetSetupSubkeyType a4,
        wchar_t *Dst)
{
  int v6; // r9d
  const wchar_t *v7; // r12
  int v8; // ebx
  int v9; // edi
  int v10; // esi
  int v11; // ebp
  int Data3; // r14d
  int Data2; // r15d
  __int64 PathForObjectType; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // r10d
  int v18; // r11d
  int v19; // r9d
  int v20; // r9d

  if ( *((_BYTE *)qword_1C00E45D8 + 96) && a4 == Writeback )
    a3 = 1;
  if ( a4 )
  {
    v6 = a4 - 1;
    if ( v6 )
    {
      v19 = v6 - 1;
      if ( v19 )
      {
        v20 = v19 - 1;
        if ( v20 )
        {
          if ( v20 == 1 )
            v7 = L"\\Keywords";
          else
            v7 = 0LL;
        }
        else
        {
          v7 = L"\\Kernel";
          if ( a3 )
            v7 = L"\\CachedRuntimeProperties";
        }
      }
      else
      {
        v7 = L"\\Kernel";
      }
    }
    else
    {
      v7 = L"\\Properties";
    }
  }
  else
  {
    v7 = (const wchar_t *)&unk_1C00C9700;
  }
  if ( a3 )
  {
    if ( a3 == 1 )
      swprintf_s(
        Dst,
        0x100uLL,
        L"\\Registry\\Machine\\DEVICES\\Networking\\NetAdapters\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}%ws",
        a2->Data1,
        a2->Data2,
        a2->Data3,
        a2->Data4[0],
        a2->Data4[1],
        a2->Data4[2],
        a2->Data4[3],
        a2->Data4[4],
        a2->Data4[5],
        a2->Data4[6],
        a2->Data4[7],
        v7);
  }
  else
  {
    v8 = a2->Data4[3];
    v9 = a2->Data4[2];
    v10 = a2->Data4[1];
    v11 = a2->Data4[0];
    Data3 = a2->Data3;
    Data2 = a2->Data2;
    PathForObjectType = netsetupGetPathForObjectType(a1, a2->Data4[7], a2->Data4[6]);
    swprintf_s(
      Dst,
      0x100uLL,
      L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NetworkSetup2\\%ws\\{%08x-%04x-%04x-%02x%02x-%02x%02x%02x"
       "%02x%02x%02x}%ws",
      PathForObjectType,
      a2->Data1,
      Data2,
      Data3,
      v11,
      v10,
      v9,
      v8,
      v18,
      v17,
      v16,
      v15,
      v7);
  }
}
