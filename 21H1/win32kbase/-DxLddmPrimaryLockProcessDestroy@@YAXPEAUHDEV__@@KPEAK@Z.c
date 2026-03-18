/*
 * XREFs of ?DxLddmPrimaryLockProcessDestroy@@YAXPEAUHDEV__@@KPEAK@Z @ 0x1C00B51FC
 * Callers:
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C00B4E88 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     DxLddmFindProcessEntry @ 0x1C00B5250 (DxLddmFindProcessEntry.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rdx
  unsigned int v13; // eax

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
      if ( qword_1C0256F00 )
        v11 = qword_1C0256F00();
      else
        v11 = -1073741637;
      if ( v11 >= 0 && qword_1C0256F08 )
        qword_1C0256F08(a1, v6 + 28, 1LL);
    }
    v12 = *a3;
    if ( (int)v12 + *(_DWORD *)(v6 + 24) < (unsigned int)v12 )
      v13 = -1;
    else
      v13 = v12 + *(_DWORD *)(v6 + 24);
    *a3 = v13;
    Win32FreePool(v6, v12, 0xFFFFFFFFLL);
  }
}
