/*
 * XREFs of sub_18001CA70 @ 0x18001CA70
 * Callers:
 *     sub_18001B0A0 @ 0x18001B0A0 (sub_18001B0A0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001E7F8 @ 0x18001E7F8 (sub_18001E7F8.c)
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001CA70(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  int v8; // edx
  __int64 v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  int v18; // ebp
  _DWORD v19[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v21; // [rsp+38h] [rbp-20h]
  __int64 v22; // [rsp+40h] [rbp-18h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
  {
    v8 = 493;
LABEL_3:
    sub_180003268(retaddr, v8, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", -2147024809);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v8 = 494;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v8 = 495;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
  (*(void (__fastcall **)(__int64 *))(*a3 + 8))(a3);
  v10 = a1 - 16;
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 32);
    while ( v11 >= 0 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 32), v11 + 1, v11);
      if ( v12 == v11 )
        goto LABEL_13;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
  }
LABEL_13:
  v13 = *a2;
  v20 = a2;
  (*(void (__fastcall **)(__int64 *))(v13 + 8))(a2);
  v14 = *a3;
  v21 = a3;
  (*(void (__fastcall **)(__int64 *))(v14 + 8))(a3);
  v22 = v10;
  if ( v10 )
  {
    v16 = *(_QWORD *)(v10 + 32);
    while ( v16 >= 0 )
    {
      v17 = v16;
      v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 32), v16 + 1, v16);
      if ( v17 == v16 )
        goto LABEL_18;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v16 + 16));
  }
LABEL_18:
  v19[2] = 0;
  v19[0] = 3;
  v19[1] = 128;
  v18 = ((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __int64 **))sub_18001E7F8)(v19, a4, v15, &v20);
  if ( v22 )
    sub_1800266E0(v22);
  if ( v21 )
    (*(void (__fastcall **)(__int64 *))(*v21 + 16))(v21);
  if ( v20 )
    (*(void (__fastcall **)(__int64 *))(*v20 + 16))(v20);
  if ( v18 < 0 )
    sub_180003268(retaddr, 561, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v18);
  if ( v10 )
    sub_1800266E0(v10);
  (*(void (__fastcall **)(__int64 *))(*a3 + 16))(a3);
  (*(void (__fastcall **)(__int64 *))(*a2 + 16))(a2);
  return (unsigned int)v18;
}
