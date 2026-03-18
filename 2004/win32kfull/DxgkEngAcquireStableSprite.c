/*
 * XREFs of DxgkEngAcquireStableSprite @ 0x1C0277790
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C004BB00 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 */

void __fastcall DxgkEngAcquireStableSprite(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned int v5; // edi
  __int64 HDEV; // rax
  __int64 v7; // rbx

  v4 = a2;
  GreAcquireSemaphoreSharedInternal(ghsemSprite, a2, a3, a4);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", ghsemSprite);
  v5 = 0;
  if ( v4 )
  {
    HDEV = UserGetHDEV();
    v7 = HDEV;
    if ( HDEV )
    {
      if ( *(_DWORD *)(HDEV + 148) )
      {
        do
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(*(_QWORD *)(*(_QWORD *)(v7 + 152) + 8LL * v5++) + 208LL));
        while ( v5 < *(_DWORD *)(v7 + 148) );
      }
      else
      {
        SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(HDEV + 208));
      }
    }
  }
}
