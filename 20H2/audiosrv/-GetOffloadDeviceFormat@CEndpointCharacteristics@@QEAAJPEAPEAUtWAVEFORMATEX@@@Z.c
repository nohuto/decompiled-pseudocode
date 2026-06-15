/*
 * XREFs of ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18011C7D8
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22KPEAPEAU2@@Z @ 0x1800D661C (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180117940 (CEndpointCharacteristics--GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___ @ 0x180117C38 (CEndpointCharacteristics--GetDefaultFormat__lambda_cc1fbeea7d61a5d688c074f297f6e07b___.c)
 * Callees:
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18004C670 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetOffloadDeviceFormat(
        CEndpointCharacteristics *this,
        struct tWAVEFORMATEX **a2)
{
  int v4; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)this + 2) + 24LL))(
         *((_QWORD *)this + 2),
         &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
         1LL);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct tWAVEFORMATEX **))(MEMORY[0] + 32LL))(
           0LL,
           *((_QWORD *)this + 2),
           1LL,
           a2);
  LogEPCError("CEndpointCharacteristics::GetOffloadDeviceFormat", 5966LL, v4);
  return (unsigned int)v4;
}
