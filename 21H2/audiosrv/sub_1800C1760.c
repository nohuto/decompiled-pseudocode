/*
 * XREFs of sub_1800C1760 @ 0x1800C1760
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800457EC @ 0x1800457EC (sub_1800457EC.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800543D0 @ 0x1800543D0 (sub_1800543D0.c)
 *     sub_18005C878 @ 0x18005C878 (sub_18005C878.c)
 *     sub_18005C8A4 @ 0x18005C8A4 (sub_18005C8A4.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     sub_18005D3C0 @ 0x18005D3C0 (sub_18005D3C0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C2584 @ 0x1800C2584 (sub_1800C2584.c)
 *     sub_1800C25E4 @ 0x1800C25E4 (sub_1800C25E4.c)
 *     sub_1800C2734 @ 0x1800C2734 (sub_1800C2734.c)
 *     sub_1800C2808 @ 0x1800C2808 (sub_1800C2808.c)
 */

__int64 __fastcall sub_1800C1760(__int64 a1, float a2, _QWORD *a3, int *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // r12
  __int64 v8; // rax
  int v9; // r8d
  float v10; // xmm12_4
  int v11; // r14d
  float *v12; // rax
  float v13; // xmm11_4
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  int v17; // edx
  _DWORD *v18; // rax
  int v19; // xmm9_4
  int v20; // xmm8_4
  int v21; // xmm7_4
  float *v22; // rax
  float v23; // xmm0_4
  float *v24; // rax
  float v25; // xmm8_4
  float *v26; // rax
  double v27; // xmm2_8
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned int v30; // ebx
  float *v31; // rax
  float v32; // xmm7_4
  float *v33; // rax
  double v34; // xmm2_8
  float *v35; // rax
  __int64 v36; // rax
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h]

  if ( a2 < 0.0 || a2 > 1.0 )
  {
    v16 = -2147024809;
    sub_18004BD84((int)retaddr, 672, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", -2147024809);
    return v16;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v8 = sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
  v10 = sub_1800543D0(v8);
  v11 = 1;
  if ( a2 == v10 )
    goto LABEL_35;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800C2734(*((_QWORD *)off_18019C348 + 2), 23, v9, a1, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
  }
  v12 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
  v13 = sub_18005C878(v12);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800C2584(*((_QWORD *)off_18019C348 + 2), 24LL, &unk_18016DDC0, a1, *(_DWORD *)(a1 + 120), a2);
  }
  v14 = sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
  v15 = sub_18005D3C0(v14, a2);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v18 = (_DWORD *)sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
    v19 = v18[4];
    v20 = v18[3];
    v21 = v18[2];
    v22 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
    v23 = sub_18005C878(v22);
    sub_1800457EC(a1 + 144);
    *(float *)(a1 + 216) = v23;
    *(_DWORD *)(a1 + 220) = v21;
    *(_DWORD *)(a1 + 224) = v20;
    *(_DWORD *)(a1 + 228) = v19;
    v24 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
    v25 = sub_18005C878(v24) - v13;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      v26 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), *(unsigned int *)(a1 + 120));
      v27 = sub_18005C878(v26);
      sub_1800C2808(*((_QWORD *)off_18019C348 + 2), v28, v29, a1, v25, *(_QWORD *)&v27, v13);
    }
    v30 = 0;
    if ( *(_DWORD *)(a1 + 124) )
    {
      do
      {
        if ( v30 != *(_DWORD *)(a1 + 120) )
        {
          v31 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), v30);
          v32 = sub_18005C878(v31) + v25;
          if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
            && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
            && *((_BYTE *)off_18019C348 + 25) >= 4u )
          {
            v33 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), v30);
            v34 = sub_18005C878(v33);
            sub_1800C25E4(*((_QWORD *)off_18019C348 + 2), 26LL, &unk_18016DDC0, a1, v30, *(_QWORD *)&v34, v32);
          }
          v35 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), v30);
          sub_18005C8A4(v35, v32);
        }
        ++v30;
      }
      while ( v30 < *(_DWORD *)(a1 + 124) );
      v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    }
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 216LL))(a1);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = 720;
      goto LABEL_29;
    }
    if ( !a3 )
      goto LABEL_34;
    v36 = 0x4E8B67CC68F64C3DLL - *a3;
    if ( *a3 == 0x4E8B67CC68F64C3DLL )
      v36 = 0x6147AA4EA63F7FA1LL - a3[1];
    if ( v36 )
LABEL_34:
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(a1 + 136) + 40LL))(
        *(_QWORD *)(a1 + 136),
        0LL,
        a3);
LABEL_35:
    if ( a4 )
    {
      if ( v10 != a2 )
        v11 = 0;
      *a4 = v11;
    }
    v16 = 0;
    goto LABEL_40;
  }
  v17 = 691;
LABEL_29:
  sub_18004BD84((int)retaddr, v17, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp", v15);
LABEL_40:
  if ( v7 )
    LeaveCriticalSection(v7);
  return v16;
}
