/*
 * XREFs of sub_1800380E0 @ 0x1800380E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180067F74 @ 0x180067F74 (sub_180067F74.c)
 */

__int64 __fastcall sub_1800380E0(__int64 a1, __int64 a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  unsigned int v10; // [rsp+40h] [rbp-40h] BYREF
  __int64 v11; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v12[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h]
  _DWORD SystemInformation[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD *v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+70h] [rbp-10h]
  int v17; // [rsp+98h] [rbp+18h] BYREF

  v12[1] = 0;
  v13 = a2;
  v12[0] = 257;
  SystemInformation[0] = 1;
  SystemInformation[1] = 20;
  v15 = v12;
  v16 = 16;
  v5 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
  {
    v11 = *(_QWORD *)(a1 + 32);
    v17 = a3;
    v10 = v5;
    sub_180067F74(v6, (unsigned int)&unk_18009EBD5, v7, v8, (__int64)&v10, (__int64)&v17, (__int64)&v11);
  }
  return v5;
}
