/*
 * XREFs of sub_1800BF670 @ 0x1800BF670
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     floorf @ 0x180074403 (floorf.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C249C @ 0x1800C249C (sub_1800C249C.c)
 *     sub_1800C2540 @ 0x1800C2540 (sub_1800C2540.c)
 */

__int64 __fastcall sub_1800BF670(_DWORD *a1, unsigned int *a2, _DWORD *a3)
{
  int v5; // edi
  int v7; // ebx
  unsigned int v8; // r9d
  float v9; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
  {
    v5 = -2147467261;
LABEL_3:
    sub_18005E8F8((__int64)"CVolumeControlBase::GetVolumeStepInfo", 250, v5);
    return (unsigned int)v5;
  }
  *a2 = 0;
  *a3 = a1[14];
  v5 = (*(__int64 (__fastcall **)(_DWORD *, float *))(*(_QWORD *)a1 + 112LL))(a1, &v9);
  if ( v5 < 0 )
    goto LABEL_3;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800C2540(*((_QWORD *)off_18019C348 + 2), 12LL, &unk_18016DDC0);
  }
  v7 = a1[14] - 1;
  v8 = (int)floorf((float)((float)v7 * v9) + 0.5);
  if ( v8 >= v7 )
    v8 = v7;
  *a2 = v8;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800C249C(*((_QWORD *)off_18019C348 + 2), 13LL, &unk_18016DDC0);
  }
  return (unsigned int)v5;
}
