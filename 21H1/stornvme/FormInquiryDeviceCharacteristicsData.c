/*
 * XREFs of FormInquiryDeviceCharacteristicsData @ 0x1C001083C
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0001254 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C001AFC8 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryDeviceCharacteristicsData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // ecx

  v4 = a2;
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v5 = *(_QWORD *)(a2 + 64);
    v6 = 60LL;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    v6 = 16LL;
  }
  if ( *(_DWORD *)(a2 + v6) >= 8u )
  {
    v7 = 0;
    *(_WORD *)v5 = -20224;
    *(_BYTE *)(v5 + 7) &= 0xF0u;
    *(_WORD *)(v5 + 3) = 60;
    *(_BYTE *)(v5 + 5) = 1;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(a2) = 6;
    NVMeSetSenseData(v4, a2, a3, a4);
    return (unsigned int)-1056964602;
  }
  return v7;
}
