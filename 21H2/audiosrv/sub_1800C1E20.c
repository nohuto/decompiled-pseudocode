/*
 * XREFs of sub_1800C1E20 @ 0x1800C1E20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005C878 @ 0x18005C878 (sub_18005C878.c)
 *     sub_18005D19C @ 0x18005D19C (sub_18005D19C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BF15C @ 0x1800BF15C (sub_1800BF15C.c)
 *     sub_1800C23AC @ 0x1800C23AC (sub_1800C23AC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800C1E20(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rcx
  float *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  float v9; // xmm0_4
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v11 = 0LL;
  sub_1800BF15C(&v11, *(unsigned int *)(a1 + 124));
  v3 = v11;
  if ( v11 )
  {
    if ( *(_QWORD *)(a1 + 96) )
    {
      do
      {
        v6 = (float *)sub_18005D19C((_QWORD *)(a1 + 88), v2);
        v9 = sub_18005C878(v6);
        *(float *)(v3 + 4 * v2) = v9;
        if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
          && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
          && *((_BYTE *)off_18019C348 + 25) >= 4u )
        {
          sub_1800C23AC(*((_QWORD *)off_18019C348 + 2), v7, v8, v2, v9);
        }
        ++v2;
      }
      while ( v2 < *(_QWORD *)(a1 + 96) );
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**(_QWORD **)(a1 + 256) + 64LL))(
           *(_QWORD *)(a1 + 256),
           v3,
           *(unsigned int *)(a1 + 124),
           a1 + 264);
    v5 = v3;
  }
  else
  {
    v4 = -2147024882;
    v5 = 0LL;
  }
  _o_free(v5);
  return v4;
}
