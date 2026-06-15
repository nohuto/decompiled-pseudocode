/*
 * XREFs of sub_1800F43B0 @ 0x1800F43B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BC578 @ 0x1800BC578 (sub_1800BC578.c)
 *     sub_1800C5CB0 @ 0x1800C5CB0 (sub_1800C5CB0.c)
 *     sub_1800F2970 @ 0x1800F2970 (sub_1800F2970.c)
 *     sub_1800F479C @ 0x1800F479C (sub_1800F479C.c)
 *     sub_1800F580C @ 0x1800F580C (sub_1800F580C.c)
 *     sub_1800F5864 @ 0x1800F5864 (sub_1800F5864.c)
 *     sub_18013983C @ 0x18013983C (sub_18013983C.c)
 */

__int64 __fastcall sub_1800F43B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  unsigned int v5; // r14d
  _QWORD *v7; // rcx
  __int64 v8; // rcx
  int v9; // r14d
  struct _RTL_CRITICAL_SECTION *v10; // r13
  __int64 v11; // rcx
  __int64 *v12; // r12
  __int64 *v13; // rbx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  _OWORD *v16; // rcx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 *v30; // rax
  _OWORD *v31; // rax
  __int64 v32; // rdx
  _OWORD *v33; // rcx
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int64 v45; // rcx
  __int64 v47; // [rsp+30h] [rbp-D0h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-C8h] BYREF
  char v49; // [rsp+40h] [rbp-C0h]
  LPCRITICAL_SECTION v50; // [rsp+48h] [rbp-B8h] BYREF
  char v51; // [rsp+50h] [rbp-B0h]
  LPCRITICAL_SECTION v52; // [rsp+58h] [rbp-A8h] BYREF
  char v53; // [rsp+60h] [rbp-A0h]
  __int128 v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h]
  __int128 v56; // [rsp+80h] [rbp-80h]
  int v57; // [rsp+90h] [rbp-70h]
  _QWORD v58[160]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v59; // [rsp+5B8h] [rbp+4B8h]
  __int64 *v60; // [rsp+5C0h] [rbp+4C0h] BYREF
  void *v61; // [rsp+5C8h] [rbp+4C8h] BYREF

  v59 = a2;
  v4 = 0;
  v5 = a2;
  v7 = off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800F580C(*((_QWORD *)off_18019C348 + 2), 18LL, a3, (unsigned int)a2, *a3);
    v7 = off_18019C348;
  }
  if ( *a3 )
  {
    sub_180066980((__int64)&v52, (struct _RTL_CRITICAL_SECTION *)(a1 + 24));
    sub_180066980((__int64)&v50, (struct _RTL_CRITICAL_SECTION *)(a1 + 64));
    v8 = *(_QWORD *)(a1 + 16);
    v47 = 0LL;
    LODWORD(v60) = 0;
    v61 = 0LL;
    if ( (int)sub_18013983C(v8, v5 != 0, &v60, &v61) >= 0 && (v9 = (int)v60) != 0 )
    {
      v55 = 0LL;
      v57 = 10;
      v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 120);
      v54 = 0LL;
      v56 = 0LL;
      sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 120));
      v12 = (__int64 *)(a1 + 160);
LABEL_9:
      v13 = (__int64 *)*v12;
      v60 = (__int64 *)*v12;
      while ( v13 )
      {
        v14 = (_OWORD *)sub_1800B8CCC(v11, (__int64)v13);
        v15 = 9LL;
        v16 = v58;
        do
        {
          v17 = v14[1];
          *v16 = *v14;
          v18 = v14[2];
          v16[1] = v17;
          v19 = v14[3];
          v16[2] = v18;
          v20 = v14[4];
          v16[3] = v19;
          v21 = v14[5];
          v16[4] = v20;
          v22 = v14[6];
          v16[5] = v21;
          v23 = v14[7];
          v14 += 8;
          v16[6] = v22;
          v16 += 8;
          *(v16 - 1) = v23;
          --v15;
        }
        while ( v15 );
        v24 = v14[1];
        *v16 = *v14;
        v25 = v14[2];
        v16[1] = v24;
        v26 = v14[3];
        v16[2] = v25;
        v27 = v14[4];
        v16[3] = v26;
        v16[4] = v27;
        if ( *a3 == v58[0] )
        {
          sub_1800F2970((__int64 *)&v54, (__int64)v58, 128LL);
          sub_1800C5CB0((__int64 *)(a1 + 160), v13);
          goto LABEL_9;
        }
        sub_1800B91A0((__int64)v16, &v60);
        v13 = v60;
      }
      if ( v49 )
        LeaveCriticalSection(lpCriticalSection);
      v4 = sub_1800F479C(a1, *a3, (_DWORD)v61, v9, 1, (__int64)&v47);
      if ( v4 >= 0 )
      {
        v28 = v47;
        *a3 = v47;
        sub_180066980((__int64)&lpCriticalSection, v10);
        v30 = (__int64 *)v54;
        v60 = (__int64 *)v54;
        while ( v30 )
        {
          v31 = (_OWORD *)sub_1800B8CCC(v29, (__int64)v30);
          v32 = 9LL;
          v33 = v58;
          do
          {
            v34 = v31[1];
            *v33 = *v31;
            v35 = v31[2];
            v33[1] = v34;
            v36 = v31[3];
            v33[2] = v35;
            v37 = v31[4];
            v33[3] = v36;
            v38 = v31[5];
            v33[4] = v37;
            v39 = v31[6];
            v33[5] = v38;
            v40 = v31[7];
            v31 += 8;
            v33[6] = v39;
            v33 += 8;
            *(v33 - 1) = v40;
            --v32;
          }
          while ( v32 );
          v41 = v31[1];
          *v33 = *v31;
          v42 = v31[2];
          v33[1] = v41;
          v43 = v31[3];
          v33[2] = v42;
          v44 = v31[4];
          v33[3] = v43;
          v33[4] = v44;
          v58[0] = v28;
          sub_1800F2970(v12, (__int64)v58, 128LL);
          sub_1800B91A0(v45, &v60);
          v30 = v60;
        }
        if ( v49 )
          LeaveCriticalSection(lpCriticalSection);
      }
      sub_1800BC578((__int64 *)&v54);
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 80LL))(a1, a3);
    }
    if ( v61 )
      sub_180033A70(v61);
    if ( v51 )
      LeaveCriticalSection(v50);
    if ( v53 )
      LeaveCriticalSection(v52);
    v5 = v59;
    v7 = off_18019C348;
  }
  if ( v7 != &off_18019C348 && (*((_DWORD *)v7 + 7) & 0x100) != 0 && *((_BYTE *)v7 + 25) >= 4u )
    sub_1800F5864(v7[2], a2, a3, v5, *a3, v4);
  return (unsigned int)v4;
}
