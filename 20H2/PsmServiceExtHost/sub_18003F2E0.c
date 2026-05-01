/*
 * XREFs of sub_18003F2E0 @ 0x18003F2E0
 * Callers:
 *     sub_18003F1A0 @ 0x18003F1A0 (sub_18003F1A0.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180078B40 @ 0x180078B40 (sub_180078B40.c)
 */

__int64 __fastcall sub_18003F2E0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  unsigned int v7; // ebx
  unsigned int v9; // r8d
  __int64 v10; // r10
  int v11; // edi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  _BYTE v16[4]; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-24h] BYREF
  int v18[8]; // [rsp+48h] [rbp-20h] BYREF

  v7 = 0;
  v9 = *(_DWORD *)(a4 + 216);
  if ( !v9 )
    goto LABEL_6;
  while ( 1 )
  {
    v10 = 32LL * v7;
    if ( *(_QWORD *)(v10 + a4 + 24) == a1 )
      break;
    if ( ++v7 >= v9 )
      goto LABEL_6;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, int))(v10 + a4 + 32))(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6);
  if ( v11 >= 0 )
LABEL_6:
    v11 = 0;
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v17 = a2;
    v16[0] = v7;
    v18[0] = v11;
    sub_180078B40(v13, (unsigned int)&unk_1800A3586, v14, v15, (__int64)v18, (__int64)v16, (__int64)&v17);
  }
  return (unsigned int)v11;
}
