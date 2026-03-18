/*
 * XREFs of ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00426EC
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02960C0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     IsCleanupW32ThreadLocksSupported @ 0x1C00427E4 (IsCleanupW32ThreadLocksSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void EnsureRequiredApiSetExtensions(void)
{
  int v0; // ebx
  int v1; // eax
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax

  v0 = -1073741637;
  if ( qword_1C0251EB8 )
    v1 = qword_1C0251EB8();
  else
    v1 = -1073741637;
  if ( v1 < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PushW32ThreadLock", 0LL, 0LL);
  if ( qword_1C0251EC8 )
    v2 = qword_1C0251EC8();
  else
    v2 = -1073741637;
  if ( v2 < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopW32ThreadLock", 0LL, 0LL);
  if ( qword_1C0251FD0 )
    v3 = qword_1C0251FD0();
  else
    v3 = -1073741637;
  if ( v3 < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeW32ThreadLock", 0LL, 0LL);
  if ( qword_1C0251FE0 )
    v4 = qword_1C0251FE0();
  else
    v4 = -1073741637;
  if ( v4 < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"PopAndFreeAlwaysW32ThreadLock", 0LL, 0LL);
  if ( (int)IsCleanupW32ThreadLocksSupported() < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"CleanupW32ThreadLocks", 0LL, 0LL);
  if ( qword_1C0252110 )
    v5 = qword_1C0252110();
  else
    v5 = -1073741637;
  if ( v5 < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"xxxUnlockMenuState", 0LL, 0LL);
  if ( qword_1C0251EF8 )
    v6 = qword_1C0251EF8();
  else
    v6 = -1073741637;
  if ( v6 < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"HasHidTable", 0LL, 0LL);
  if ( qword_1C0251FF0 )
    v0 = qword_1C0251FF0();
  if ( v0 < 0 )
    KeBugCheckEx(0x164u, 3uLL, (ULONG_PTR)L"LockQCursor", 0LL, 0LL);
}
