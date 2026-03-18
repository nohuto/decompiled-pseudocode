/*
 * XREFs of _xxxDisableImmersiveOwner@4 @ 0x16F409
 * Callers:
 *     _NtUserDisableImmersiveOwner@4 @ 0x160BAA (_NtUserDisableImmersiveOwner@4.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z @ 0x18A7C (-xxxEnableWindowWorker@@YGHPAUtagWND@@H@Z.c)
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __thiscall xxxDisableImmersiveOwner(void *this)
{
  int v2; // esi

  v2 = 0;
  if ( xxxEnableWindowWorker((int)this, 0) )
  {
    UserSetLastError((struct _NT_TIB *)5);
  }
  else
  {
    v2 = 1;
    SetOrClrWF(1, (int)this, 0x8A01u, 0);
  }
  return v2;
}
