/*
 * XREFs of ?put_VisibilityRevoked@ViewWrapperBase@@UEAAJE@Z @ 0x1802B2C30
 * Callers:
 *     <none>
 * Callees:
 *     ?PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ @ 0x1802AE864 (-PushDesiredNavigationLevelToDerivedClass@ViewWrapperBase@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::put_VisibilityRevoked(ViewWrapperBase *this, char a2)
{
  RTL_SRWLOCK *v4; // rdi
  int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // ebx

  v4 = (RTL_SRWLOCK *)(*((_QWORD *)this + 19) + 280LL);
  AcquireSRWLockExclusive(v4);
  v5 = *((_DWORD *)this + 20);
  if ( (v5 & 0x18) != 0 )
  {
    if ( a2 )
      v6 = v5 & 0xFFFFFFDF;
    else
      v6 = v5 | 0x20;
    *((_DWORD *)this + 20) = v6;
    ViewWrapperBase::PushDesiredNavigationLevelToDerivedClass((ViewWrapperBase *)((char *)this - 16));
    v7 = 0;
  }
  else
  {
    v7 = -2147019873;
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v7;
}
