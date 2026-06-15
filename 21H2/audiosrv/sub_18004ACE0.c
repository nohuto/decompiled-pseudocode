/*
 * XREFs of sub_18004ACE0 @ 0x18004ACE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004B9F0 @ 0x18004B9F0 (sub_18004B9F0.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     sub_180072420 @ 0x180072420 (sub_180072420.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1801268FC @ 0x1801268FC (sub_1801268FC.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18004ACE0(
        _QWORD *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7,
        _BYTE *a8,
        __int64 a9)
{
  char v13; // bl
  _DWORD *v14; // rdi
  _BYTE *v15; // r12
  __int64 v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, _BYTE *); // rcx
  __int64 v18; // rcx
  int DefaultSpatialRenderingMode; // esi
  __int64 v20; // rcx
  _BYTE v22[56]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v23; // [rsp+88h] [rbp-30h]

  v13 = 0;
  v14 = a7;
  *a7 = 0;
  v15 = a8;
  *a8 = 0;
  sub_18004B9F0();
  v16 = 0LL;
  if ( a1[1] || !byte_18019D9F0 )
  {
    a7 = v22;
    v23 = 0LL;
    v17 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
    if ( v17 )
      v23 = (**v17)(v17, v22);
    v13 = sub_180072420((_DWORD)a1, a2, a3, a4, (__int64)v22, a6, (__int64)v14, (__int64)v15, a9);
    if ( v13 )
    {
      DefaultSpatialRenderingMode = 0;
      *v14 = 0;
      v13 = 1;
      LOBYTE(a7) = 1;
      if ( (unsigned __int8)sub_18006C4AC(v18) )
        DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(a2);
      if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1) )
      {
        *v14 = 1;
LABEL_15:
        *v15 = 1;
        goto LABEL_17;
      }
      if ( DefaultSpatialRenderingMode )
      {
        v13 = 0;
        goto LABEL_17;
      }
      if ( a2 == 1 )
        *v14 = 2;
      if ( *v14 )
        goto LABEL_15;
      sub_1801268FC((_DWORD)a1, a2, 3, 2, (__int64)v14, (__int64)&a7);
      v13 = (char)a7;
    }
  }
LABEL_17:
  v20 = *(_QWORD *)(a5 + 56);
  if ( v20 )
  {
    LOBYTE(v16) = v20 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 32LL))(v20, v16);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v13;
}
