/*
 * XREFs of sub_1800BFDE0 @ 0x1800BFDE0
 * Callers:
 *     sub_1800BF4C0 @ 0x1800BF4C0 (sub_1800BF4C0.c)
 * Callees:
 *     sub_18005C8A4 @ 0x18005C8A4 (sub_18005C8A4.c)
 *     sub_18005CB34 @ 0x18005CB34 (sub_18005CB34.c)
 *     sub_18005D370 @ 0x18005D370 (sub_18005D370.c)
 *     sub_18005D45C @ 0x18005D45C (sub_18005D45C.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD7DC @ 0x1800BD7DC (sub_1800BD7DC.c)
 *     sub_1800BD820 @ 0x1800BD820 (sub_1800BD820.c)
 *     sub_1800C26D8 @ 0x1800C26D8 (sub_1800C26D8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800BFDE0(__int64 a1)
{
  __int64 v1; // rdi
  int v2; // ebx
  __int64 *v3; // rdx
  __int64 v4; // r8
  int v5; // r9d
  float v6; // xmm6_4
  unsigned int i; // esi
  __int64 v8; // rdx
  float v9; // xmm3_4
  ATL::CAtlException *v11; // rbx
  __int64 v12; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+38h] [rbp-A0h] BYREF
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v16; // [rsp+50h] [rbp-88h]
  ATL::CAtlException *v17; // [rsp+58h] [rbp-80h] BYREF
  float v18[16]; // [rsp+60h] [rbp-78h] BYREF
  int v20; // [rsp+F0h] [rbp+18h]
  float v21; // [rsp+F8h] [rbp+20h]

  v1 = a1;
  v14 = 0LL;
  v13 = 0LL;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BD820(*((_QWORD *)off_18019C348 + 2), 0x31u, (__int64)&unk_18016DDC0, a1, *(_QWORD *)(a1 + 64));
  }
  *(_OWORD *)pvar = 0LL;
  v16 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         *(_QWORD *)(v1 + 64),
         &v14);
  if ( v2 >= 0 )
  {
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, 0LL, &v13);
    if ( v2 >= 0 )
    {
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800BD7DC(*((_QWORD *)off_18019C348 + 2), 0x32u, (__int64)&unk_18016DDC0, v1);
      }
      v2 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v13 + 40LL))(
             v13,
             &unk_180172E50,
             pvar);
      if ( v2 >= 0 )
      {
        if ( LOWORD(pvar[0]) == 19 )
        {
          v6 = (float)SLODWORD(pvar[1]) * 0.000015258789;
          v21 = v6;
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            sub_1800C26D8(*((_QWORD *)off_18019C348 + 2), v3, v4, v1, v6);
          }
          for ( i = 0; i < *(_DWORD *)(v1 + 124); ++i )
          {
            sub_18005D370((__int64)v18, (int)v3, v4, v5);
            if ( *(_DWORD *)(v1 + 296) == 4 )
              v9 = 30.0;
            else
              v9 = 0.0;
            sub_18005D45C((__int64)v18, v8, -96.0, v9, 1069547520, 0x3FFC000000000000LL);
            sub_18005C8A4(v18, v6);
            v2 = 0;
            try
            {
              sub_18005CB34((_QWORD *)(v1 + 88), i, (__int64)v18);
            }
            catch ( ATL::CAtlException *v17 )
            {
              v3 = &v12;
              v11 = v17;
              if ( *(_DWORD *)v17 == -1073741571 )
                o__resetstkoflw();
              v20 = *(_DWORD *)v11;
              v2 = *(_DWORD *)v11;
              if ( v20 < 0 )
                break;
              v1 = a1;
              v6 = v21;
            }
          }
        }
        else
        {
          v2 = -2147023728;
        }
      }
    }
  }
  PropVariantClear(pvar);
  if ( v2 < 0 )
    sub_18005E8F8((__int64)"CVolumeSoftware::LoadDefaultVolumeForEndpoint", 1852, v2);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v2;
}
