/*
 * XREFs of sub_18003FB20 @ 0x18003FB20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_180042604 @ 0x180042604 (sub_180042604.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003FB20(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  int v5; // r9d
  int v6; // edx
  int v7; // eax
  __int64 v8; // rcx
  __int64 retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  if ( !a3 )
  {
    v4 = -2147467261;
    v5 = -2147467261;
    v6 = 344;
LABEL_6:
    sub_180003268(
      retaddr,
      v6,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      v5);
    goto LABEL_8;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, a2, &v11);
  if ( v4 < 0 )
    goto LABEL_8;
  v7 = sub_180042604(v11, a3);
  v4 = v7;
  if ( v7 < 0 )
  {
    v5 = v7;
    v6 = 350;
    goto LABEL_6;
  }
  v4 = 0;
LABEL_8:
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  return (unsigned int)v4;
}
