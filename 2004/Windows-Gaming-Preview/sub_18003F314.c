/*
 * XREFs of sub_18003F314 @ 0x18003F314
 * Callers:
 *     sub_18003CC28 @ 0x18003CC28 (sub_18003CC28.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180042BDC @ 0x180042BDC (sub_180042BDC.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003F314(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  int v4; // edx
  int v5; // edi
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = a2;
  v3 = 0LL;
  v8 = 0LL;
  if ( !a1 )
  {
    v4 = 196;
LABEL_5:
    v5 = -2147467261;
    sub_180003268(
      retaddr,
      v4,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      -2147467261);
    goto LABEL_11;
  }
  if ( !a2 )
  {
    v4 = 197;
    goto LABEL_5;
  }
  v5 = sub_180042BDC(&v8, &v9);
  if ( (unsigned int)(v5 + 2147024894) <= 1 )
    goto LABEL_9;
  if ( v5 < 0 )
  {
    sub_180003268(
      retaddr,
      201,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v5);
LABEL_9:
    v3 = v8;
    goto LABEL_11;
  }
  v3 = 0LL;
  *a1 = v8;
  v5 = 0;
LABEL_11:
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return (unsigned int)v5;
}
