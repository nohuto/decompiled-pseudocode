/*
 * XREFs of sub_180071410 @ 0x180071410
 * Callers:
 *     <none>
 * Callees:
 *     sub_180023350 @ 0x180023350 (sub_180023350.c)
 *     sub_180023370 @ 0x180023370 (sub_180023370.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

char __fastcall sub_180071410(__int64 a1, __int64 a2)
{
  __int64 *v4; // rbx
  char v5; // bp
  __int64 v6; // rdi
  const WCHAR *v7; // rdi
  const WCHAR *v8; // rax
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rdi
  __int64 v12; // rdi
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+8h] BYREF

  sub_180023370((struct _RTL_CRITICAL_SECTION *)(a1 + 16), &v14);
  v4 = *(__int64 **)(a1 + 56);
  v5 = 0;
  while ( v4 != *(__int64 **)(a1 + 64) )
  {
    v6 = *v4;
    if ( *(_DWORD *)(*v4 + 12) == 1 )
    {
      if ( *(_DWORD *)(v6 + 16) != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2)
        || !*(_DWORD *)(*v4 + 8) )
      {
        goto LABEL_19;
      }
      v12 = *v4;
      v10 = *(_DWORD *)(v12 + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
      goto LABEL_18;
    }
    if ( *(_DWORD *)(*v4 + 12) != 2 )
    {
      if ( *(_DWORD *)(*v4 + 12) == 3 )
      {
        if ( *(_DWORD *)(v6 + 16) != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) )
          goto LABEL_19;
        v11 = *v4;
        if ( *(_DWORD *)(v11 + 8) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2) )
          goto LABEL_19;
        v10 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 384LL))(
                a2,
                *(unsigned int *)(*v4 + 8)) == 0;
      }
      else
      {
        if ( *(_DWORD *)(*v4 + 12) != 4 )
          goto LABEL_19;
        v7 = *(const WCHAR **)v6;
        v8 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
        if ( CompareStringOrdinal(v7, -1, v8, -1, 1) != 2 )
          goto LABEL_19;
        v9 = *v4;
        v10 = *(_DWORD *)(v9 + 16) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
      }
LABEL_18:
      if ( v10 )
        goto LABEL_21;
      goto LABEL_19;
    }
    if ( *(_DWORD *)(v6 + 16) == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2)
      && (*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 384LL))(a2, *(unsigned int *)(*v4 + 8)) )
    {
      goto LABEL_21;
    }
LABEL_19:
    ++v4;
  }
  v5 = 1;
LABEL_21:
  sub_180023350(&v14);
  return v5;
}
