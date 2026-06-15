/*
 * XREFs of sub_18005C7D0 @ 0x18005C7D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005C878 @ 0x18005C878 (sub_18005C878.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800C2584 @ 0x1800C2584 (sub_1800C2584.c)
 */

__int64 __fastcall sub_18005C7D0(__int64 a1, float *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  float v7; // xmm0_4

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v5 = -2147467261;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( a2 )
  {
    v6 = sub_18005D19C(a1 + 88, *(unsigned int *)(a1 + 120));
    v7 = sub_18005C878(v6);
    *a2 = v7;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800C2584(*((_QWORD *)off_18019C348 + 2), 20LL, &unk_18016DDC0, a1, *(_DWORD *)(a1 + 120), v7);
    }
    v5 = 0;
  }
  else
  {
    sub_18005E8F8("CVolumeControlBase::GetMasterVolumeLevel", 414LL, 2147500035LL);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
