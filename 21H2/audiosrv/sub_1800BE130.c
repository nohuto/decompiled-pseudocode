/*
 * XREFs of sub_1800BE130 @ 0x1800BE130
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800686F8 @ 0x1800686F8 (sub_1800686F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BD8FC @ 0x1800BD8FC (sub_1800BD8FC.c)
 *     sub_1800BEB08 @ 0x1800BEB08 (sub_1800BEB08.c)
 */

__int64 __fastcall sub_1800BE130(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v6; // rax
  int *v7; // rsi
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rax
  __vcrt_trace_logging_provider *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ebx
  void *v18; // [rsp+40h] [rbp-28h] BYREF
  void *v19; // [rsp+48h] [rbp-20h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  int v21; // [rsp+70h] [rbp+8h] BYREF
  int v22; // [rsp+88h] [rbp+20h] BYREF

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x10000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BEB08(*((_QWORD *)off_18019C348 + 2), 20, (unsigned int)&unk_18016DA10, a1, (__int64)a3);
  }
  v6 = *a3 - *(_QWORD *)(a1 + 68);
  if ( *a3 == *(_QWORD *)(a1 + 68) )
    v6 = a3[1] - *(_QWORD *)(a1 + 76);
  if ( !v6 )
    return 0LL;
  v7 = (int *)(a1 + 24);
  v8 = *(_DWORD *)(a1 + 24);
  sub_1800686F8(a1);
  if ( !a2 )
  {
    v10 = 0x4E60C5060DE6C1AFLL - *a3;
    if ( *a3 == 0x4E60C5060DE6C1AFLL )
      v10 = 0x2ADE9700B0F38CBDLL - a3[1];
    if ( !v10 && v8 != *v7 )
    {
      v11 = (__vcrt_trace_logging_provider *)sub_180008448(v9, sub_1800B6240)[1];
      if ( *(_DWORD *)v11 > 4u )
      {
        if ( __vcrt_trace_logging_provider::_TlgKeywordOn(v11, 0x400000000000uLL) )
        {
          v21 = *v7;
          v18 = *(void **)(a1 + 40);
          v19 = *(void **)(a1 + 32);
          v22 = v8;
          sub_1800BD8FC(v12, byte_18016640E, v13, v14, &v19, &v18, (__int64)&v22, (__int64)&v21);
        }
      }
    }
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**(_QWORD **)(a1 + 16) + 40LL))(
          *(_QWORD *)(a1 + 16),
          a2,
          a3);
  v16 = v15;
  if ( v15 >= 0 )
    return 0LL;
  sub_18004BD84((int)retaddr, 579, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\mutecontrol.cpp", v15);
  return v16;
}
