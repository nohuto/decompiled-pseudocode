/*
 * XREFs of sub_18013DB38 @ 0x18013DB38
 * Callers:
 *     sub_18013DA50 @ 0x18013DA50 (sub_18013DA50.c)
 *     sub_18013DCA0 @ 0x18013DCA0 (sub_18013DCA0.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013D38C @ 0x18013D38C (sub_18013D38C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18013DB38(struct _RTL_CRITICAL_SECTION *a1, __int64 a2)
{
  unsigned int v4; // esi
  int v5; // eax
  __int64 v6; // rbx
  ULONG_PTR SpinCount; // rcx
  int v8; // eax
  ULONG_PTR v9; // rcx
  ULONG_PTR v10; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-10h] BYREF
  char v13; // [rsp+28h] [rbp-8h]
  int v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  v4 = 0;
  v15 = 0LL;
  v16 = 0LL;
  v14 = 0;
  sub_180066980((__int64)&lpCriticalSection, a1 + 2);
  v5 = sub_18013D38C((__int64)a1, a2, (__int64)&v15, &v16);
  v6 = v16;
  if ( v5 < 0 || (v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 40LL))(v16, v15), v5 < 0) )
  {
    v4 = v5;
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
  }
  else
  {
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    SpinCount = a1[1].SpinCount;
    if ( SpinCount )
    {
      v8 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(*(_QWORD *)SpinCount + 128LL))(SpinCount, v15, &v14);
      if ( v8 < 0 )
      {
        v4 = v8;
        goto LABEL_15;
      }
      if ( v14 )
      {
        v9 = a1[1].SpinCount;
        if ( v9 )
        {
          a1[1].SpinCount = 0LL;
          (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
    }
    v10 = a1->SpinCount;
    if ( v10 )
      (*(void (__fastcall **)(ULONG_PTR, __int64))(*(_QWORD *)v10 + 32LL))(v10, v15);
  }
LABEL_15:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v4;
}
