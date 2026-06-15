/*
 * XREFs of sub_1800302A0 @ 0x1800302A0
 * Callers:
 *     sub_180016160 @ 0x180016160 (sub_180016160.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800303E8 @ 0x1800303E8 (sub_1800303E8.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     sub_180039E78 @ 0x180039E78 (sub_180039E78.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800302A0(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // r15
  __int64 v6; // r12
  int v7; // ebp
  unsigned int v8; // r13d
  __int64 v9; // rax
  void *v10; // r14
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v3 = *(_QWORD **)(a1 + 64);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    do
    {
      v5 = v4[3];
      v6 = v4[2];
      v7 = sub_1800303E8(a1, *(_QWORD *)v5, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
      if ( **(_DWORD **)(v5 + 24) != v7 )
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 128) + 40LL))(*(_QWORD *)(a1 + 128));
        v9 = sub_180039E78(32LL, &unk_18004FFC8);
        v10 = (void *)v9;
        if ( v9 )
        {
          *(_QWORD *)(v9 + 16) = 0LL;
          *(_DWORD *)v9 = 32;
          *(_DWORD *)(v9 + 4) = 0x80000;
          *(_QWORD *)(v9 + 8) = 0LL;
          *(_QWORD *)(v9 + 24) = v6;
          MMDevAPI_12(v9, v8);
          sub_180039D98(v10);
          **(_DWORD **)(v5 + 24) = v7;
        }
        else
        {
          sub_180003AB0(
            retaddr,
            194,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\audiostatemonitormanager\\audiostatemonitormanager.cpp",
            -2147024882);
        }
      }
      v4 = (_QWORD *)*v4;
    }
    while ( v4 != *(_QWORD **)(a1 + 64) );
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
