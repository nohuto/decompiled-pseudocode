/*
 * XREFs of ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C00A7F6C
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00A67B0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     DxLddmFindProcessEntry @ 0x1C00A7FC0 (DxLddmFindProcessEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxLddmPrimaryLockProcessDestroy(_DWORD *a1, __int64 a2, unsigned int *a3)
{
  __int64 *ProcessEntry; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  _QWORD *v8; // rcx
  int v9; // eax
  void (__fastcall *v10)(_QWORD, __int64); // rax
  int v11; // eax
  unsigned int v12; // eax

  ProcessEntry = (__int64 *)DxLddmFindProcessEntry(a1 + 656);
  v6 = (__int64)ProcessEntry;
  if ( ProcessEntry )
  {
    v7 = *ProcessEntry;
    if ( *(_QWORD *)(v7 + 8) != v6 || (v8 = *(_QWORD **)(v6 + 8), *v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    v9 = *(_DWORD *)(v6 + 20);
    if ( v9 )
    {
      a1[660] -= v9;
      v10 = (void (__fastcall *)(_QWORD, __int64))*((_QWORD *)a1 + 331);
      if ( v10 )
        v10(*((_QWORD *)a1 + 225), v6 + 28);
      if ( qword_1C0250F40 )
        v11 = qword_1C0250F40();
      else
        v11 = -1073741637;
      if ( v11 >= 0 && qword_1C0250F48 )
        qword_1C0250F48(a1, v6 + 28, 1LL);
    }
    if ( *a3 + *(_DWORD *)(v6 + 24) < *a3 )
      v12 = -1;
    else
      v12 = *a3 + *(_DWORD *)(v6 + 24);
    *a3 = v12;
    Win32FreePool(v6);
  }
}
