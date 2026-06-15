/*
 * XREFs of sub_1800CDBA8 @ 0x1800CDBA8
 * Callers:
 *     sub_1800CE080 @ 0x1800CE080 (sub_1800CE080.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_18002C4D0 @ 0x18002C4D0 (sub_18002C4D0.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800C28E0 @ 0x1800C28E0 (sub_1800C28E0.c)
 *     sub_1800C2D44 @ 0x1800C2D44 (sub_1800C2D44.c)
 *     sub_1800C7588 @ 0x1800C7588 (sub_1800C7588.c)
 *     sub_1800CD9DC @ 0x1800CD9DC (sub_1800CD9DC.c)
 *     sub_1800CE0BC @ 0x1800CE0BC (sub_1800CE0BC.c)
 *     sub_1800CF544 @ 0x1800CF544 (sub_1800CF544.c)
 *     sub_1800CFC78 @ 0x1800CFC78 (sub_1800CFC78.c)
 *     sub_1800CFD1C @ 0x1800CFD1C (sub_1800CFD1C.c)
 *     sub_1800CFDDC @ 0x1800CFDDC (sub_1800CFDDC.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall sub_1800CDBA8(_QWORD *a1)
{
  _QWORD *v1; // rdi
  _QWORD *v2; // r14
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r12
  int i; // r14d
  __int64 *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // r14
  __int64 *v11; // r15
  __int64 *v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // [rsp+20h] [rbp-68h]
  ATL::CAtlException *v15; // [rsp+28h] [rbp-60h] BYREF
  __int64 v16; // [rsp+30h] [rbp-58h] BYREF
  __int64 v17; // [rsp+38h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-48h]
  int v19; // [rsp+48h] [rbp-40h]
  __int64 v21; // [rsp+98h] [rbp+10h]
  __int64 v22; // [rsp+A0h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  *a1 = &off_180147430;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x30u, (__int64)&unk_18015DFC8);
  }
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v2 = v1 + 2;
  v14 = v1 + 2;
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 2));
  v3 = (struct _RTL_CRITICAL_SECTION *)(v1 + 2);
  v23 = (struct _RTL_CRITICAL_SECTION *)(v1 + 2);
  while ( 1 )
  {
    v4 = sub_18002C4D0((__int64)(v1 + 7));
    v6 = v4;
    if ( !v4 )
      break;
    v21 = *(_QWORD *)sub_1800CF544(v5, v4);
    v22 = v21;
    sub_1800CFDDC(v1 + 7, v6);
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x40) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 0x31u, (__int64)&unk_18015DFC8);
    }
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v21 + 232LL))(v21, v1);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v21 + 232LL))(v21, qword_18019E5F8);
    try
    {
      sub_1800CE0BC(&v16, &v22);
    }
    catch ( ATL::CAtlException *v15 )
    {
      if ( *(_DWORD *)v15 == -1073741571 )
        o__resetstkoflw();
      v1 = a1;
      v3 = v23;
      v2 = v14;
      continue;
    }
  }
  if ( v2 )
    LeaveCriticalSection(v3);
  for ( i = 0; i < (int)v17; ++i )
  {
    v8 = (__int64 *)sub_1800C2D44(&v16, i);
    sub_1800C7588(*v8);
    v9 = (_QWORD *)sub_1800C2D44(&v16, i);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
  }
  sub_1800C28E0(&v16);
  sub_180006A30((volatile signed __int32 *)(v1[37] - 24LL));
  EnterCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
  while ( v1[30] )
    sub_1800CFD1C(v1 + 29, 0LL);
  LeaveCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
  sub_1800C28E0(v1 + 33);
  sub_1800CD9DC(v1 + 29);
  DeleteCriticalSection((LPCRITICAL_SECTION)(v1 + 24));
  v10 = v1[21];
  if ( v10 )
  {
    v11 = (__int64 *)v1[22];
    v12 = (__int64 *)v1[21];
    if ( (__int64 *)v10 != v11 )
    {
      do
      {
        v13 = *v12;
        if ( *v12 )
        {
          *v12 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        }
        ++v12;
      }
      while ( v12 != v11 );
    }
    sub_1800472E0(v10, (v1[23] - v10) & 0xFFFFFFFFFFFFFFF8uLL);
    v1[21] = 0LL;
    v1[22] = 0LL;
    v1[23] = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(v1 + 16));
  sub_1800CFC78(v1 + 7);
  DeleteCriticalSection((LPCRITICAL_SECTION)(v1 + 2));
  *((_DWORD *)v1 + 3) = -1073741823;
}
