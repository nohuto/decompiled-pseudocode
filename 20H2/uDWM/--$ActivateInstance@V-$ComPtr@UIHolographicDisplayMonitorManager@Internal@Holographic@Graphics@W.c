/*
 * XREFs of ??$ActivateInstance@V?$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIHolographicDisplayMonitorManager@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18007FFEC
 * Callers:
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x18008048C (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F0C4 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayMonitorManager>>(
        __int64 a1,
        __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rcx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a2);
  *a2 = 0LL;
  v4 = RoActivateInstance(a1, &v7);
  if ( v4 >= 0 )
  {
    v5 = *(_QWORD *)&GUID_529814a0_b7b4_43d3_a819_132b7f63d656.Data1
       - *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1;
    if ( *(_QWORD *)&GUID_529814a0_b7b4_43d3_a819_132b7f63d656.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1 )
      v5 = *(_QWORD *)GUID_529814a0_b7b4_43d3_a819_132b7f63d656.Data4
         - *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4;
    if ( v5 )
    {
      v4 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
             v7,
             &GUID_529814a0_b7b4_43d3_a819_132b7f63d656,
             a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    else
    {
      *a2 = v7;
    }
  }
  return (unsigned int)v4;
}
