/*
 * XREFs of sub_1800CB8B0 @ 0x1800CB8B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CA81C @ 0x1800CA81C (sub_1800CA81C.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_1800CB8B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 *v3; // r9
  __int64 v4; // rcx
  unsigned int v7; // edx
  __int64 v8; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11[6]; // [rsp+30h] [rbp-18h] BYREF

  v3 = (__int64 *)(a1 + 256);
  v4 = *(_QWORD *)(a1 + 256);
  v7 = *(_DWORD *)(*(_QWORD *)a2 + 88LL);
  v8 = *(_QWORD *)(v4 + 8);
  while ( !*(_BYTE *)(v8 + 25) )
  {
    if ( *(_DWORD *)(v8 + 32) >= v7 )
    {
      v4 = v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      v8 = *(_QWORD *)(v8 + 16);
    }
  }
  if ( v4 == *v3 || v7 < *(_DWORD *)(v4 + 32) )
    v4 = *v3;
  if ( v4 == *v3 )
    return 0;
  v11[0] = v7;
  sub_1800CA81C(v3, (__int64)&v10, v11);
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v10 + 40) + 88LL))(
           *(_QWORD *)(v10 + 40),
           a2,
           a3);
}
