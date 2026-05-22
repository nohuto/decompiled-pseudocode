/*
 * XREFs of SpatialInteractionDevices::ReadLocalOrientation @ 0x1800CA38C
 * Callers:
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800C9A4C (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 * Callees:
 *     ?XMQuaternionMultiply@DirectX@@YQ?AT__m128@@T2@0@Z @ 0x180086B2C (-XMQuaternionMultiply@DirectX@@YQ-AT__m128@@T2@0@Z.c)
 *     SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT4_4_ @ 0x1800C8010 (SpatialInteractionDevices--ReadKnownFloats_DirectX--XMFLOAT4_4_.c)
 */

void __fastcall SpatialInteractionDevices::ReadLocalOrientation(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  float *v4; // rdi
  union __m128 *v7; // rdx
  union __m128 *v8; // r8
  char v9; // al
  __int64 v10; // rcx

  v4 = (float *)(a4 + 76);
  if ( *(_BYTE *)(a2 + 140)
    && (int)SpatialInteractionDevices::ReadKnownFloats_DirectX::XMFLOAT4_4_(a1, a3, a3, (USAGE **)(a2 + 48), v4) >= 0 )
  {
    v9 = 1;
    v10 = 65280LL;
    *(_BYTE *)(a4 + 92) = 1;
    if ( *(_WORD *)(a1 + 46) != 0xFF00 || (v10 = 255LL, *(_WORD *)(a1 + 44) != 255) || *(_WORD *)(a1 + 48) != 2 )
      v9 = 0;
    if ( !*(_BYTE *)(a1 + 232) && !v9 )
    {
      if ( *(_BYTE *)(a1 + 237) )
        *(union __m128 *)v4 = DirectX::XMQuaternionMultiply((DirectX *)v10, v7, v8);
    }
  }
}
