/*
 * XREFs of FormInquiryVpdSupportedPagesData @ 0x1C0010EA0
 * Callers:
 *     ScsiInquiryRequest @ 0x1C0001254 (ScsiInquiryRequest.c)
 * Callees:
 *     NVMeSetSenseData @ 0x1C001AFC8 (NVMeSetSenseData.c)
 */

__int64 __fastcall FormInquiryVpdSupportedPagesData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx

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
  if ( *(_DWORD *)(a2 + v6) >= 0xBu )
  {
    *(_DWORD *)(v5 + 3) = -2088763386;
    v7 = 0;
    *(_WORD *)v5 = 0;
    *(_WORD *)(v5 + 7) = -20048;
    *(_BYTE *)(v5 + 9) = -78;
    *(_DWORD *)(a2 + v6) = 11;
    *(_BYTE *)(a2 + 3) = 1;
  }
  else
  {
    LOBYTE(a4) = 36;
    LOBYTE(a3) = 5;
    LOBYTE(v6) = 6;
    NVMeSetSenseData(a2, v6, a3, a4);
    return (unsigned int)-1056964602;
  }
  return v7;
}
