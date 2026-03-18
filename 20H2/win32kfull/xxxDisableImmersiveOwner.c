/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C0208D18
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C01F77D0 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00C9A9C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall xxxDisableImmersiveOwner(struct tagWND *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ebx

  v4 = 0;
  if ( (unsigned int)xxxEnableWindowWorker(a1, 0) )
  {
    UserSetLastError(5LL, v2, v3);
  }
  else
  {
    v4 = 1;
    SetOrClrWF(1, (__int64)a1, 0xDA01u, 0);
  }
  return v4;
}
