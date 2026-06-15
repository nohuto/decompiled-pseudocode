/*
 * XREFs of _lambda_370e4a00b6cb03b6fca683a12302c177_::operator() @ 0x18006FA04
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_370e4a00b6cb03b6fca683a12302c177___ @ 0x18006F234 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_18006F234.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800BB3CC (WPP_SF_d.c)
 */

__int64 __fastcall lambda_370e4a00b6cb03b6fca683a12302c177_::operator()(_QWORD *a1, _QWORD *a2)
{
  char v4; // al
  __int64 result; // rax

  v4 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 208LL))(*a2);
  result = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)g_DeviceGraphManager
                                                                                                 + 32LL))(
             g_DeviceGraphManager,
             *a2,
             *a1,
             v4 == 0,
             0LL);
  if ( (int)result < 0
    && WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    return WPP_SF_d(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             40LL,
             &WPP_276a5657edfd3c3fe0681675fccda4ef_Traceguids,
             (unsigned int)result);
  }
  return result;
}
