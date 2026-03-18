/*
 * XREFs of GreLockDisplayArea @ 0x1C02862B8
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00719C4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C001BA8C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C001BAB8 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C004BB00 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreLockDisplayArea(__int64 a1, struct _RECTL *a2)
{
  __int64 v4; // r14
  __int64 v5; // rsi
  struct _RECTL v6; // xmm6
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // edx
  void (__fastcall *v10)(_QWORD, struct _RECTL *); // rax
  void (__fastcall *v11)(_QWORD, struct _RECTL *); // rsi
  struct _RECTL v12; // [rsp+20h] [rbp-50h] BYREF
  struct _RECTL v13; // [rsp+30h] [rbp-40h] BYREF
  struct _RECTL v14; // [rsp+40h] [rbp-30h] BYREF

  v13 = *a2;
  ERECTL::vOrder((ERECTL *)&v13);
  if ( !ERECTL::bWrapped((ERECTL *)&v13) )
  {
    if ( *(_DWORD *)(a1 + 148) )
    {
      v4 = 0LL;
      if ( !(unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        v4 = 1LL;
      }
      v5 = 0LL;
      if ( *(_DWORD *)(a1 + 148) )
      {
        v6 = v13;
        do
        {
          v7 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v5);
          v12 = v6;
          v8 = *(_DWORD *)(v7 + 2584);
          v9 = *(_DWORD *)(v7 + 2588);
          v12.right = v6.right - v8;
          v12.top = v6.top - v9;
          v12.bottom = v6.bottom - v9;
          v12.left = v13.left - v8;
          if ( bIntersect(&v12, (const struct _RECTL *)(v7 + 128), &v14) )
          {
            if ( v4 )
              SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(v7 + 208));
            v10 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(v7 + 3496);
            if ( v10 )
              v10(*(_QWORD *)(v7 + 1800), &v14);
          }
          v5 = (unsigned int)(v5 + 1);
        }
        while ( (unsigned int)v5 < *(_DWORD *)(a1 + 148) );
      }
    }
    else
    {
      v11 = *(void (__fastcall **)(_QWORD, struct _RECTL *))(a1 + 3496);
      if ( !(unsigned int)GreIsSemaphoreOwnedByCurrentThread(ghsemSprite) )
      {
        GreAcquireSemaphore(ghsemSprite);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 208));
      }
      if ( v11 )
        v11(*(_QWORD *)(a1 + 1800), a2);
    }
  }
}
