/*
 * XREFs of KeyboardClassCleanupQueue @ 0x1C0004CD8
 * Callers:
 *     KeyboardClassRemoveDevice @ 0x1C00053E0 (KeyboardClassRemoveDevice.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall KeyboardClassCleanupQueue(__int64 a1, __int64 a2, __int64 *a3)
{
  KSPIN_LOCK *v4; // rdi
  KIRQL v6; // r8
  __int64 ***v7; // rcx
  __int64 **v8; // rdx
  __int64 ****v9; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rbx
  __int64 **result; // rax
  __int64 *v13; // rax
  __int64 *v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v15; // [rsp+28h] [rbp-8h]

  v15 = &v14;
  v4 = (KSPIN_LOCK *)(a2 + 160);
  v14 = (__int64 *)&v14;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 160));
  v7 = *(__int64 ****)(a2 + 168);
  if ( v7 != (__int64 ***)(a2 + 168) )
  {
    do
    {
      v8 = *v7;
      if ( !a3 || v7[2][6] == a3 )
      {
        if ( v8[1] != (__int64 *)v7 || (v9 = (__int64 ****)v7[1], *v9 != v7) )
LABEL_16:
          __fastfail(3u);
        *v9 = (__int64 ***)v8;
        v8[1] = (__int64 *)v9;
        if ( _InterlockedExchange64((volatile __int64 *)v7 - 8, 0LL) )
        {
          *(v7 - 14) = 0LL;
          *((_DWORD *)v7 - 30) = -1073741536;
          v10 = v15;
          if ( *v15 != (__int64 *)&v14 )
            goto LABEL_16;
          v7[1] = v15;
          *v7 = &v14;
          *v10 = v7;
          v15 = (__int64 **)v7;
        }
        else
        {
          v7[1] = (__int64 **)v7;
          *v7 = (__int64 **)v7;
        }
      }
      v7 = (__int64 ***)v8;
    }
    while ( v8 != (__int64 **)(a2 + 168) );
  }
  KeReleaseSpinLock(v4, v6);
  while ( 1 )
  {
    v11 = v14;
    result = &v14;
    if ( v14 == (__int64 *)&v14 )
      return result;
    if ( (__int64 **)v14[1] != &v14 )
      goto LABEL_16;
    v13 = (__int64 *)*v14;
    if ( *(__int64 **)(*v14 + 8) != v14 )
      goto LABEL_16;
    v14 = (__int64 *)*v14;
    v13[1] = (__int64)&v14;
    IofCompleteRequest((PIRP)(v11 - 21), 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 32), v11 - 21, 0x20u);
  }
}
