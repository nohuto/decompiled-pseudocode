/*
 * XREFs of sub_18004AB00 @ 0x18004AB00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004B9F0 @ 0x18004B9F0 (sub_18004B9F0.c)
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 *     sub_180072420 @ 0x180072420 (sub_180072420.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall sub_18004AB00(
        _QWORD *a1,
        unsigned int a2,
        int a3,
        int a4,
        __int64 a5,
        __int16 a6,
        int *a7,
        _BYTE *a8,
        __int64 a9)
{
  char v13; // di
  __int64 v14; // rdx
  __int64 (__fastcall ***v15)(_QWORD, _BYTE *); // rcx
  int DefaultSpatialRenderingMode; // esi
  int v17; // eax
  int v18; // esi
  __int64 v19; // rcx
  _BYTE v21[56]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v22; // [rsp+88h] [rbp-30h]

  v13 = 0;
  *a7 = 0;
  *a8 = 0;
  sub_18004B9F0();
  v14 = 0LL;
  if ( a1[1] || !byte_18019D9F0 )
  {
    v22 = 0LL;
    v15 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a5 + 56);
    if ( v15 )
      v22 = (**v15)(v15, v21);
    v13 = sub_180072420((_DWORD)a1, a2, a3, a4, (__int64)v21, a6, (__int64)a7, (__int64)a8, a9);
    if ( v13 )
    {
      DefaultSpatialRenderingMode = 0;
      *a7 = 0;
      v13 = 1;
      if ( (unsigned __int8)((__int64 (*)(void))sub_18006C4AC)() )
        DefaultSpatialRenderingMode = GetDefaultSpatialRenderingMode(a2);
      if ( DefaultSpatialRenderingMode == (*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1) )
      {
        *a7 = 1;
LABEL_15:
        *a8 = 1;
        goto LABEL_24;
      }
      if ( DefaultSpatialRenderingMode )
        goto LABEL_21;
      if ( ((a2 - 3) & 0xFFFFFFFD) != 0 )
      {
        v17 = *a7;
      }
      else
      {
        *a7 = 2;
        v17 = 2;
      }
      if ( v17 )
        goto LABEL_15;
      v18 = 0;
      *a7 = 0;
      if ( (unsigned __int8)sub_18006C4AC(2LL) )
        v18 = GetDefaultSpatialRenderingMode(a2);
      if ( v18 == (*(unsigned int (__fastcall **)(_QWORD *))(*a1 + 64LL))(a1) )
      {
        *a7 = 1;
        goto LABEL_24;
      }
      if ( v18 )
      {
LABEL_21:
        v13 = 0;
      }
      else if ( a2 == 1 )
      {
        *a7 = 2;
      }
    }
  }
LABEL_24:
  v19 = *(_QWORD *)(a5 + 56);
  if ( v19 )
  {
    LOBYTE(v14) = v19 != a5;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v14);
    *(_QWORD *)(a5 + 56) = 0LL;
  }
  return v13;
}
