/*
 * XREFs of sub_1800398F4 @ 0x1800398F4
 * Callers:
 *     sub_180039C20 @ 0x180039C20 (sub_180039C20.c)
 *     sub_180039C60 @ 0x180039C60 (sub_180039C60.c)
 *     sub_180039CA0 @ 0x180039CA0 (sub_180039CA0.c)
 *     sub_180039CE0 @ 0x180039CE0 (sub_180039CE0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18003902C @ 0x18003902C (sub_18003902C.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800398F4(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // r9d
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v16[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  signed int v18; // [rsp+48h] [rbp+10h] BYREF

  v16[0] = 0LL;
  if ( a2 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, signed int *))(*(_QWORD *)a2 + 48LL))(a2, &v18);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 452;
LABEL_10:
      v11 = v7;
      goto LABEL_11;
    }
    if ( v18 < 0 )
    {
      v9 = -2147024809;
      v11 = -2147024809;
      v10 = 453;
LABEL_11:
      sub_180003268(
        retaddr,
        v10,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        v11);
      v12 = v16[0];
      goto LABEL_20;
    }
    if ( v18 > a3 )
    {
      v9 = -2147024809;
      v11 = -2147024809;
      v10 = 454;
      goto LABEL_11;
    }
    v7 = sub_18003902C(v8, v16, v18);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = 455;
      goto LABEL_10;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v13 = *a4;
  v12 = v16[0];
  if ( *a4 != v16[0] )
  {
    v14 = v16[0];
    if ( v16[0] )
    {
      (*(void (**)(void))(*(_QWORD *)v16[0] + 8LL))();
      v13 = *a4;
      v12 = v16[0];
    }
    *a4 = v14;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v12 = v16[0];
    }
  }
  if ( a1 != -168 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
    v12 = v16[0];
  }
  v9 = 0;
LABEL_20:
  if ( v12 )
  {
    v16[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v9;
}
