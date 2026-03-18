/*
 * XREFs of ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C0241F34
 * Callers:
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C01D949C (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(CInputQueueProp *this, struct tagWND *a2)
{
  char v4; // cl
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_BYTE *)this + 40);
  if ( a2 == *((struct tagWND **)this + 1) )
  {
    if ( !v4 && *((_QWORD *)this + 4) )
      HMAssignmentUnlock((char *)this + 32);
    *((_QWORD *)this + 4) = a2;
    *((_BYTE *)this + 40) = 1;
  }
  else
  {
    if ( v4 )
    {
      *((_QWORD *)this + 4) = 0LL;
      *((_BYTE *)this + 40) = 0;
    }
    v5[0] = (char *)this + 32;
    v5[1] = a2;
    HMAssignmentLock(v5);
  }
}
