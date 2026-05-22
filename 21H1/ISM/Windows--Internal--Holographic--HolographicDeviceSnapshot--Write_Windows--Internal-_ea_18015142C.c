/*
 * XREFs of Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8___ @ 0x18015142C
 * Callers:
 *     ?GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z @ 0x18015D0A0 (-GetForwardOnly@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEA_N@Z.c)
 * Callees:
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_4f2ec4d072da510feb5622880d58a28d___ @ 0x18014F3B4 (Windows--Internal--Holographic--HolographicDeviceSnapshot--LockExclusive__lambda_4f2ec4d072da510.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialGraphSnapshot__lambda_879c2317d6bf6f0b2a32d99bde7a5ca8___(
        __int64 a1,
        __int64 a2)
{
  const char *v2; // r9
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3[0] = a1;
  v3[1] = a2;
  try
  {
    Windows::Internal::Holographic::HolographicDeviceSnapshot::LockExclusive__lambda_4f2ec4d072da510feb5622880d58a28d___(v3);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x13D,
      (__int64)"onecoreuap\\analog\\Input\\Common\\inc\\HolographicDeviceSnapshot.h",
      v2);
  }
}
