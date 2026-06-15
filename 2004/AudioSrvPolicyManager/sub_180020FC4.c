/*
 * XREFs of sub_180020FC4 @ 0x180020FC4
 * Callers:
 *     _concrt_static_cleanup @ 0x180009830 (_concrt_static_cleanup.c)
 * Callees:
 *     sub_1800018C0 @ 0x1800018C0 (sub_1800018C0.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 */

void __fastcall sub_180020FC4(__int64 a1)
{
  __int64 v1; // rbx
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // [rsp+50h] [rbp-18h] BYREF
  __int64 v9; // [rsp+58h] [rbp-10h] BYREF
  __int64 v10; // [rsp+90h] [rbp+28h] BYREF
  __int64 v11; // [rsp+98h] [rbp+30h] BYREF
  __int64 v12; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+40h] BYREF

  v10 = a1;
  v1 = qword_18004FE78;
  v2 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v3 = *(_QWORD **)(v1 + 72);
  while ( v3 )
  {
    v4 = v3[2];
    v3 = (_QWORD *)*v3;
    v5 = *((_QWORD *)sub_1800055CC() + 1);
    if ( *(_DWORD *)v5 > 4u && (*(_BYTE *)(v5 + 16) & 3) != 0 && (*(_QWORD *)(v5 + 24) & 3LL) == *(_QWORD *)(v5 + 24) )
    {
      LODWORD(v10) = -1;
      LODWORD(v11) = -1;
      LODWORD(v12) = -1;
      LODWORD(v13) = *(_DWORD *)(v4 + 208) != 0;
      v8 = *(_QWORD *)(v4 + 640);
      v9 = *(_QWORD *)(v4 + 24);
      sub_1800018C0(
        v5,
        (unsigned __int8 *)dword_180046305,
        v6,
        v7,
        (void **)&v9,
        (__int64)&v8,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
