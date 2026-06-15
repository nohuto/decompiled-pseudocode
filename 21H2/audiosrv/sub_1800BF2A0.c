/*
 * XREFs of sub_1800BF2A0 @ 0x1800BF2A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005C878 @ 0x18005C878 (sub_18005C878.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 */

__int64 __fastcall sub_1800BF2A0(__int64 a1, unsigned int a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rdi
  unsigned __int64 v4; // rbp
  unsigned int v7; // ebx
  float *v8; // rax

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  v4 = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( (unsigned int)v4 >= *(_DWORD *)(a1 + 124) )
  {
    v7 = -2147024809;
LABEL_5:
    sub_18005E8F8((__int64)"CVolumeControlBase::GetChannelVolumeLevel", 514, v7);
    goto LABEL_7;
  }
  if ( !a3 )
  {
    v7 = -2147467261;
    goto LABEL_5;
  }
  v8 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), v4);
  *a3 = sub_18005C878(v8);
  v7 = 0;
LABEL_7:
  if ( v3 )
    LeaveCriticalSection(v3);
  return v7;
}
