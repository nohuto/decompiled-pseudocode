/*
 * XREFs of sub_18009DA2C @ 0x18009DA2C
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAt@?$CAtlArray@VCMasterVolumeNotificationProcess@@V?$CElementTraits@VCMasterVolumeNotificationProcess@@@ATL@@@ATL@@QEAAX_K0@Z @ 0x18005306C (-RemoveAt@-$CAtlArray@VCMasterVolumeNotificationProcess@@V-$CElementTraits@VCMasterVolumeNotific.c)
 */

void __fastcall sub_18009DA2C(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12,
        int a13,
        int a14,
        unsigned __int64 a15)
{
  __int64 *v15; // [rsp+78h] [rbp+20h]

  if ( a14 < 0 )
    ATL::CAtlArray<CMasterVolumeNotificationProcess,ATL::CElementTraits<CMasterVolumeNotificationProcess>>::RemoveAt(
      v15,
      a15);
  JUMPOUT(0x180053ED1LL);
}
