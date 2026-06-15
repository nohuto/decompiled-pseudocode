/*
 * XREFs of sub_1800C0E5C @ 0x1800C0E5C
 * Callers:
 *     sub_1800C07F0 @ 0x1800C07F0 (sub_1800C07F0.c)
 * Callees:
 *     sub_18005C8A4 @ 0x18005C8A4 (sub_18005C8A4.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005D1C0 @ 0x18005D1C0 (sub_18005D1C0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BD8A8 @ 0x1800BD8A8 (sub_1800BD8A8.c)
 *     sub_1800C24EC @ 0x1800C24EC (sub_1800C24EC.c)
 */

__int64 __fastcall sub_1800C0E5C(__int64 a1)
{
  int v1; // edi
  unsigned int v3; // esi
  float *v4; // rax
  int v6; // [rsp+20h] [rbp-18h]
  float v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 256) )
  {
    v1 = -2147418113;
LABEL_15:
    sub_18005E8F8((__int64)"CVolumeHardware::ReadChannelLevelsFromHardware", 1489, v1);
    return (unsigned int)v1;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    v6 = *(_DWORD *)(a1 + 124);
    sub_1800BD8A8(*((_QWORD *)off_18019C348 + 2), 0x28u, (__int64)&unk_18016DDC0, a1, v6);
  }
  v3 = 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    do
    {
      v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, float *))(**(_QWORD **)(a1 + 256) + 40LL))(
             *(_QWORD *)(a1 + 256),
             v3,
             &v7);
      if ( v1 < 0 )
        goto LABEL_15;
      if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
        && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
        && *((_BYTE *)off_18019C348 + 25) >= 4u )
      {
        sub_1800C24EC(*((_QWORD *)off_18019C348 + 2), 41LL, &unk_18016DDC0, v3, v7);
      }
      v4 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), v3);
      sub_18005C8A4(v4, v7);
    }
    while ( ++v3 < *(_DWORD *)(a1 + 124) );
  }
  sub_18005D1C0(a1);
  return (unsigned int)v1;
}
