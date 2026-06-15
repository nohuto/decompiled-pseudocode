/*
 * XREFs of sub_180024E60 @ 0x180024E60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180026030 @ 0x180026030 (sub_180026030.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180024E60(__int64 a1, DWORD a2, __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v6; // rbp
  unsigned int v9; // edi
  struct _RTL_CRITICAL_SECTION *v10; // rsi
  _QWORD *i; // rdi
  __int64 v12; // rbp
  __int64 v14; // [rsp+20h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+28h] [rbp-20h]

  v6 = a4;
  v9 = 0;
  v10 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( !(unsigned int)sub_18002880C(a2) && (int)sub_180026030(v14, a3) >= 0 )
  {
    EnterCriticalSection(lpCriticalSection);
    if ( (unsigned int)v6 < 0x15 )
    {
      for ( i = *(PRTL_CRITICAL_SECTION_DEBUG *)((char *)&lpCriticalSection->DebugInfo
                                               + 8 * v6
                                               + (a6 != 0 ? 208LL : 40LL)); i; i = (_QWORD *)*i )
      {
        v12 = i[1];
        if ( (***(float (__fastcall ****)(_QWORD))(v12 + 56))(*(_QWORD *)(v12 + 56)) != 0.0
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v12 + 56) + 8LL))(*(_QWORD *)(v12 + 56)) )
        {
          if ( lpCriticalSection )
            LeaveCriticalSection(lpCriticalSection);
          v9 = 1;
          goto LABEL_15;
        }
      }
    }
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    v9 = 0;
  }
LABEL_15:
  if ( v10 )
    LeaveCriticalSection(v10);
  return v9;
}
