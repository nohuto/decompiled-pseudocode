/*
 * XREFs of sub_1800C14A0 @ 0x1800C14A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800457EC @ 0x1800457EC (sub_1800457EC.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18005C878 @ 0x18005C878 (sub_18005C878.c)
 *     sub_18005C8A4 @ 0x18005C8A4 (sub_18005C8A4.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C2734 @ 0x1800C2734 (sub_1800C2734.c)
 */

__int64 __fastcall sub_1800C14A0(__int64 a1, float a2, __int64 a3, int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // r15
  __int64 v8; // rax
  float v9; // xmm10_4
  float v10; // xmm8_4
  int v11; // xmm11_4
  float *v12; // rax
  int v13; // r8d
  float v14; // xmm9_4
  int v15; // r14d
  float *v16; // rax
  float v17; // xmm0_4
  float *v18; // rax
  float v19; // xmm6_4
  __int64 v20; // rax
  float *v21; // rax
  float *v22; // rax
  unsigned int v23; // esi
  float i; // xmm8_4
  float *v25; // rax
  float v26; // xmm0_4
  float *v27; // rax
  int v28; // eax
  unsigned int v29; // ebx
  int v30; // r9d
  int v31; // edx
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v8 = sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
  v9 = *(float *)(v8 + 8);
  v10 = *(float *)(v8 + 12);
  v11 = *(_DWORD *)(v8 + 16);
  if ( v9 > a2 || a2 > v10 )
  {
    v31 = 544;
    goto LABEL_24;
  }
  v12 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
  v14 = sub_18005C878(v12);
  v15 = 1;
  if ( v14 == a2 )
    goto LABEL_17;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800C2734(*((_QWORD *)off_18019C348 + 2), 22, v13, a1, COERCE_UNSIGNED_INT64(a2), a3);
  }
  v16 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
  v17 = sub_18005C878(v16);
  sub_1800457EC(a1 + 144);
  *(float *)(a1 + 216) = v17;
  *(float *)(a1 + 220) = v9;
  *(float *)(a1 + 224) = v10;
  *(_DWORD *)(a1 + 228) = v11;
  v18 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
  v19 = sub_18005C878(v18);
  v20 = sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
  if ( *(float *)(v20 + 8) > a2 || a2 > *(float *)(v20 + 12) )
  {
    v31 = 561;
LABEL_24:
    v29 = -2147024809;
    v30 = -2147024809;
    goto LABEL_25;
  }
  v21 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
  sub_18005C8A4(v21, a2);
  v22 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
  v23 = 0;
  for ( i = sub_18005C878(v22) - v19; v23 < *(_DWORD *)(a1 + 124); ++v23 )
  {
    if ( v23 != *(_DWORD *)(a1 + 120) )
    {
      v25 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), v23);
      v26 = sub_18005C878(v25);
      v27 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), v23);
      sub_18005C8A4(v27, v26 + i);
    }
  }
  v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
  v29 = v28;
  if ( v28 < 0 )
  {
    v30 = v28;
    v31 = 578;
LABEL_25:
    sub_18004BD84((int)retaddr, v31, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v30);
    goto LABEL_26;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(a1 + 136) + 40LL))(*(_QWORD *)(a1 + 136), 0LL, a3);
LABEL_17:
  if ( a4 )
  {
    if ( v14 != a2 )
      v15 = 0;
    *a4 = v15;
  }
  v29 = 0;
LABEL_26:
  if ( v4 )
    LeaveCriticalSection(v4);
  return v29;
}
