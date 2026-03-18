/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C0209BA0
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C01F8640 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0021EFC (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 */

__int64 __fastcall xxxDisableImmersiveOwner(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // ebx

  v6 = 0;
  if ( (unsigned int)xxxEnableWindowWorker(a1, 0, a3) )
  {
    UserSetLastError(5LL, v4, v5);
  }
  else
  {
    v6 = 1;
    SetOrClrWF(1, (__int64)a1, 0xDA01u, 0);
  }
  return v6;
}
