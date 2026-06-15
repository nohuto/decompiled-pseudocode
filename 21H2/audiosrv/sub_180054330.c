/*
 * XREFs of sub_180054330 @ 0x180054330
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800543D0 @ 0x1800543D0 (sub_1800543D0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800C2584 @ 0x1800C2584 (sub_1800C2584.c)
 */

__int64 __fastcall sub_180054330(__int64 a1, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned __int64 v5; // rcx
  float v6; // xmm0_4
  unsigned int v7; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( a2 )
  {
    v5 = *(unsigned int *)(a1 + 120);
    if ( v5 >= *(_QWORD *)(a1 + 96) )
      sub_1800B8610(2147942487LL);
    v6 = sub_1800543D0(*(_QWORD *)(a1 + 88) + (v5 << 6));
    *a2 = v6;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800C2584(*((_QWORD *)off_18019C348 + 2), 21LL, &unk_18016DDC0, a1, *(_DWORD *)(a1 + 120), v6);
    }
    v7 = 0;
  }
  else
  {
    v7 = -2147467261;
    sub_18005E8F8("CVolumeControlBase::GetMasterVolumeLevelScalar", 448LL, 2147500035LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v7;
}
