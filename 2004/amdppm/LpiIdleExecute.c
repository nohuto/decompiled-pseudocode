/*
 * XREFs of LpiIdleExecute @ 0x1C000E7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LpiIdleExecute(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7)
{
  __int64 v8; // rdx
  __int128 *v9; // r9
  void (__fastcall *v10)(__int128 *, __int64, __int128 *); // r10
  void (__fastcall *v11)(__int128 *, _QWORD); // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v8 = 88LL * a3;
  v16 = 0LL;
  v9 = (__int128 *)(v8 + a1 + 96);
  v10 = *(void (__fastcall **)(__int128 *, __int64, __int128 *))(v8 + a1 + 128);
  v11 = *(void (__fastcall **)(__int128 *, _QWORD))(v8 + a1 + 88);
  if ( v10 )
  {
    v12 = *(_QWORD *)(v8 + a1 + 120);
    LODWORD(v13) = a6;
    while ( (_DWORD)v13 )
    {
      v13 = (unsigned int)(v13 - 1);
      v14 = qword_1C00139B0 + 56LL * *(unsigned int *)(a7 + 4 * v13);
      if ( *(_QWORD *)v14 )
      {
        v10 = *(void (__fastcall **)(__int128 *, __int64, __int128 *))(v14 + 40);
        v9 = (__int128 *)(v14 + 8);
        v11 = *(void (__fastcall **)(__int128 *, _QWORD))v14;
        if ( !v10 )
          goto LABEL_9;
        v12 = *(_QWORD *)(v14 + 32);
      }
      else
      {
        v12 += *(_QWORD *)(v14 + 32);
      }
    }
    v10(v9, a2 + v12, &v16);
    v9 = &v16;
  }
LABEL_9:
  v11(v9, a5);
  return 0LL;
}
