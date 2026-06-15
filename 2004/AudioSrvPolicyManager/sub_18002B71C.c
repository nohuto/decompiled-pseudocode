/*
 * XREFs of sub_18002B71C @ 0x18002B71C
 * Callers:
 *     sub_180024994 @ 0x180024994 (sub_180024994.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     _o_pow @ 0x18003A7A8 (_o_pow.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002B71C(
        LPCRITICAL_SECTION lpCriticalSection,
        unsigned int a2,
        int a3,
        _BYTE *a4,
        float *a5,
        __int64 *a6)
{
  __int64 v8; // rbp
  unsigned int v10; // ebx
  _QWORD *i; // rbx
  __int64 v12; // rdi
  float v13; // xmm1_4
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v8 = a2;
  EnterCriticalSection(lpCriticalSection);
  *a4 = 0;
  *a5 = 1.0;
  *a6 = 0LL;
  if ( (unsigned int)v8 < 0x15 )
  {
    for ( i = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection->DebugInfo + 8 * v8 + (a3 != 0 ? 208LL : 40LL));
          i;
          i = (_QWORD *)*i )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(i[1] + 56LL) + 16LL))(*(_QWORD *)(i[1] + 56LL));
      v13 = 0.0;
      if ( (***(int (__fastcall ****)(_QWORD))(i[1] + 56LL))(*(_QWORD *)(i[1] + 56LL)) != -8388608 )
        v13 = o_pow();
      if ( *a5 > v13 )
        *a5 = v13;
      if ( v12 > *a6 )
        *a6 = v12;
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  else
  {
    v10 = -2147418113;
    sub_180003AB0(
      retaddr,
      39,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\streamclasspolicygains\\streamclasspolicygains.cpp",
      -2147418113);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v10;
}
