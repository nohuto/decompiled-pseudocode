/*
 * XREFs of ?IsApplicationVisibleInContactPanel@PeoplePaneViewManager@@UEAAJPEBGPEAH@Z @ 0x18025FFA0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z @ 0x180260244 (-IsWindowVisibleInContactPanel@PeoplePaneViewManager@@AEAAJPEAUHWND__@@PEBGPEAH@Z.c)
 */

__int64 __fastcall PeoplePaneViewManager::IsApplicationVisibleInContactPanel(
        RTL_SRWLOCK *this,
        const unsigned __int16 *a2,
        int *a3)
{
  RTL_SRWLOCK *v3; // rdi
  PeoplePaneViewManager *v6; // rcx
  __int64 *Ptr; // rsi
  __int64 *i; // rbx
  __int64 v9; // rax
  HWND v10; // rdx
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int *v13; // [rsp+50h] [rbp+18h]

  v13 = a3;
  v3 = this + 5;
  AcquireSRWLockShared(this + 5);
  Ptr = (__int64 *)this[7].Ptr;
  for ( i = (__int64 *)this[6].Ptr; i != Ptr; i += 2 )
  {
    v9 = *i;
    v12 = 0;
    v10 = *(HWND *)(v9 + 48);
    if ( v10 && (int)PeoplePaneViewManager::IsWindowVisibleInContactPanel(v6, v10, a2, &v12) >= 0 && v12 )
    {
      *v13 = 1;
      break;
    }
  }
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
