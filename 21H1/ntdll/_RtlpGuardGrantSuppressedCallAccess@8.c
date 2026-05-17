/*
 * XREFs of _RtlpGuardGrantSuppressedCallAccess@8 @ 0x4B363C51
 * Callers:
 *     @RtlpHandleInvalidUserCallTarget@4 @ 0x4B3638A5 (@RtlpHandleInvalidUserCallTarget@4.c)
 *     _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3 (_RtlGuardGrantSuppressedCallAccess@12.c)
 *     _RtlpUnsuppressForwardReferencingCallTarget@4 @ 0x4B363CC9 (_RtlpUnsuppressForwardReferencingCallTarget@4.c)
 * Callees:
 *     _NtSetInformationVirtualMemory@24 @ 0x4B2F4360 (_NtSetInformationVirtualMemory@24.c)
 */

int __fastcall RtlpGuardGrantSuppressedCallAccess(int a1, int a2)
{
  _DWORD v3[9]; // [esp+0h] [ebp-38h] BYREF
  _DWORD v4[2]; // [esp+24h] [ebp-14h] BYREF
  _DWORD v5[2]; // [esp+2Ch] [ebp-Ch] BYREF
  char v6; // [esp+34h] [ebp-4h] BYREF

  v5[1] = a2;
  v4[1] = 4096;
  v4[0] = a1 & 0xFFFFF000;
  v3[2] = &v6;
  v5[0] = a1 & 0xFFF;
  v3[3] = v5;
  v3[0] = 1;
  v3[1] = 0;
  v3[4] = 0;
  v3[6] = 0;
  v3[7] = 0;
  return NtSetInformationVirtualMemory(-1, 2, 1, (int)v4, (int)v3, 32);
}
