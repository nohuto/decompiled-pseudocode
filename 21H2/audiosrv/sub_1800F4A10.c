/*
 * XREFs of sub_1800F4A10 @ 0x1800F4A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_1800B8CCC @ 0x1800B8CCC (sub_1800B8CCC.c)
 *     sub_1800B91A0 @ 0x1800B91A0 (sub_1800B91A0.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800C5CB0 @ 0x1800C5CB0 (sub_1800C5CB0.c)
 *     sub_1800F5578 @ 0x1800F5578 (sub_1800F5578.c)
 */

__int64 __fastcall sub_1800F4A10(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *i; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int128 *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+30h] [rbp-D8h]
  LPCRITICAL_SECTION v29; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C8h]
  __int64 v31; // [rsp+48h] [rbp-C0h] BYREF
  int v32; // [rsp+50h] [rbp-B8h]
  _QWORD *v33; // [rsp+528h] [rbp+420h] BYREF

  v4 = 0;
  sub_180066980((__int64)&v29, (struct _RTL_CRITICAL_SECTION *)(a1 + 64));
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 232));
  for ( i = *(_QWORD **)(a1 + 272); i; i = (_QWORD *)*i )
  {
    v8 = i[2];
    if ( a2 == *(_QWORD **)(v8 + 8) )
      *(_DWORD *)(v8 + 16) = 1;
  }
  if ( (_BYTE)v28 )
    LeaveCriticalSection(lpCriticalSection);
  if ( !*a2 )
    goto LABEL_27;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 120));
LABEL_10:
  v10 = *(_QWORD **)(a1 + 160);
  v33 = v10;
  while ( v10 )
  {
    v11 = (__int128 *)sub_1800B8CCC(v9, (__int64)v10);
    v12 = &v31;
    v13 = 9LL;
    do
    {
      v14 = *v11;
      v15 = v11[1];
      v11 += 8;
      *(_OWORD *)v12 = v14;
      v16 = *(v11 - 6);
      *((_OWORD *)v12 + 1) = v15;
      v17 = *(v11 - 5);
      *((_OWORD *)v12 + 2) = v16;
      v18 = *(v11 - 4);
      *((_OWORD *)v12 + 3) = v17;
      v19 = *(v11 - 3);
      *((_OWORD *)v12 + 4) = v18;
      v20 = *(v11 - 2);
      *((_OWORD *)v12 + 5) = v19;
      v21 = *(v11 - 1);
      *((_OWORD *)v12 + 6) = v20;
      v12 += 16;
      *((_OWORD *)v12 - 1) = v21;
      --v13;
    }
    while ( v13 );
    v22 = v11[1];
    *(_OWORD *)v12 = *v11;
    v23 = v11[2];
    *((_OWORD *)v12 + 1) = v22;
    v24 = v11[3];
    *((_OWORD *)v12 + 2) = v23;
    v25 = v11[4];
    *((_OWORD *)v12 + 3) = v24;
    *((_OWORD *)v12 + 4) = v25;
    if ( *a2 == v31 )
    {
      sub_1800C5CB0((__int64 *)(a1 + 160), v10);
      if ( v32 != 1 )
        break;
      goto LABEL_10;
    }
    sub_1800B91A0((__int64)v12, &v33);
    v10 = v33;
  }
  v4 = RmReleaseResources(*a2);
  if ( (_BYTE)v28 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v4 < 0 )
  {
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0x19u, (__int64)&unk_180171BD8, v4);
    }
  }
  else
  {
LABEL_27:
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800F5578(*((_QWORD *)off_18019C348 + 2), v5, v6, *a2);
    }
  }
  if ( (_BYTE)v30 )
    LeaveCriticalSection(v29);
  return (unsigned int)v4;
}
