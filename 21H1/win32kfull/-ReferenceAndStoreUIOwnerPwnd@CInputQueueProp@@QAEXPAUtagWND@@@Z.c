/*
 * XREFs of ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QAEXPAUtagWND@@@Z @ 0x11B5A
 * Callers:
 *     ?SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z @ 0x11AF6 (-SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(CInputQueueProp *this, int a2, struct tagWND *a3)
{
  CInputQueueProp *v3; // esi

  v3 = this;
  LOBYTE(this) = *((_BYTE *)this + 24);
  if ( a3 == *((struct tagWND **)v3 + 1) )
  {
    if ( !(_BYTE)this )
    {
      if ( *((_DWORD *)v3 + 5) )
        HMAssignmentUnlock((char *)v3 + 20);
    }
    *((_DWORD *)v3 + 5) = a3;
    *((_BYTE *)v3 + 24) = 1;
  }
  else
  {
    if ( (_BYTE)this )
    {
      *((_DWORD *)v3 + 5) = 0;
      *((_BYTE *)v3 + 24) = 0;
    }
    HMAssignmentLock(this, a2);
  }
}
