/*
 * XREFs of ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800A157C
 * Callers:
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800A14C8 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800683B0 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z @ 0x18009FD8C (--4-$ComPtr@VHidLampArrayDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVHidLampArrayDevice@@@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800A0F58 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@.c)
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800A67CC (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall LampArrayDevice::Initialize(LampArrayDevice *this, struct PnpDevice *a2)
{
  char *v3; // r15
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  const char *v12; // r9
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Microsoft::WRL::ComPtr<HidLampArrayDevice>::operator=((RefCountedObject **)this + 2, (volatile signed __int32 *)a2);
  v3 = (char *)this + 24;
  v4 = HidLampArrayDevice::CreateAndInitialize(*((struct PnpDevice **)this + 2), (struct HidLampArrayDevice **)this + 3);
  v5 = v4;
  if ( v4 >= 0 )
  {
    try
    {
      v7 = *(int *)(*(_QWORD *)v3 + 544LL);
      v8 = *((_QWORD *)this + 21);
      v9 = *((_QWORD *)this + 20);
      v10 = (v8 - v9) >> 2;
      if ( v7 >= v10 )
      {
        if ( v7 > v10 )
        {
          if ( v7 <= (*((_QWORD *)this + 22) - v9) >> 2 )
          {
            v11 = v7 - v10;
            if ( v11 )
            {
              memset_0(*((void **)this + 21), 0, 4 * v11);
              v8 += 4 * v11;
            }
            *((_QWORD *)this + 21) = v8;
          }
          else
          {
            std::vector<Windows::UI::Color>::_Resize_reallocate<std::_Value_init_tag>(
              (__int64)this + 160,
              *(int *)(*(_QWORD *)v3 + 544LL));
          }
        }
      }
      else
      {
        *((_QWORD *)this + 21) = v9 + 4 * v7;
      }
      if ( !QueryPerformanceFrequency((LARGE_INTEGER *)this + 23) )
        wil::details::in1diag3::_FailFast_GetLastError(
          retaddr,
          (void *)0x69,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
          v12);
      *((_QWORD *)this + 25) = *((_QWORD *)this + 23) * (*(_DWORD *)(*(_QWORD *)v3 + 564LL) + 1000) / 1000000LL;
      QueryPerformanceCounter((LARGE_INTEGER *)this + 24);
      *((_QWORD *)this + 24) -= *((_QWORD *)this + 25);
      result = 0LL;
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x74,
                             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                             v13);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x65,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  return result;
}
