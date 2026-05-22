/*
 * XREFs of ?CreateButtonInfo@ConsumerControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x180099260
 * Callers:
 *     ?OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z @ 0x180099600 (-OnDeviceRemoval@ConsumerControlDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z @ 0x180099860 (-OnInputReport@ConsumerControlDeviceCollection@@MEAAJKPEAXK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HIDUsageToButtonMapping@ConsumerControlDeviceCollection@@AEAAJGPEAK@Z @ 0x1800992F8 (-HIDUsageToButtonMapping@ConsumerControlDeviceCollection@@AEAAJGPEAK@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::CreateButtonInfo(
        ConsumerControlDeviceCollection *this,
        int a2,
        int a3,
        union _LARGE_INTEGER a4,
        unsigned __int16 a5,
        bool a6,
        struct InputInfo *a7)
{
  int v10; // eax
  unsigned int v11; // edi
  __int64 result; // rax
  struct InputInfo *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ConsumerControlDeviceCollection *v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = this;
  v10 = ConsumerControlDeviceCollection::HIDUsageToButtonMapping(this, a5, (unsigned int *)&v15);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = a7;
    *((_DWORD *)a7 + 16) = (_DWORD)v15;
    *((_BYTE *)v13 + 68) = a6;
    result = 0LL;
    *((_DWORD *)v13 + 1) = a2;
    *(_DWORD *)v13 = 128;
    *((_DWORD *)v13 + 2) = a3;
    *((union _LARGE_INTEGER *)v13 + 2) = a4;
    *((_BYTE *)v13 + 49) = 1;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\consumercontroldevicecollection.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
  return result;
}
