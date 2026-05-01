/*
 * XREFs of ?SetRect@CAppLayoutItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEBUtagRECT@@@Z @ 0x180461120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAppLayoutItem::SetRect(RTL_SRWLOCK *a1, int a2, const RECT *a3)
{
  RTL_SRWLOCK *v6; // rdi
  struct tagRECT *v7; // rcx

  v6 = a1 + 3;
  AcquireSRWLockExclusive(a1 + 3);
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_6;
    v7 = (struct tagRECT *)&a1[8];
  }
  else
  {
    v7 = (struct tagRECT *)&a1[6];
  }
  CopyRect(v7, a3);
LABEL_6:
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
}
