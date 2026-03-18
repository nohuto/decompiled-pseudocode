/*
 * XREFs of DxgkEngReleaseStableSprite @ 0x1C02787B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C002D44C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DxgkEngReleaseStableSprite(__int64 a1, int a2)
{
  unsigned int v2; // edi
  __int64 HDEV; // rax
  __int64 v4; // rbx
  unsigned int v5; // eax

  v2 = 0;
  if ( a2 )
  {
    HDEV = UserGetHDEV();
    v4 = HDEV;
    if ( HDEV )
    {
      v5 = *(_DWORD *)(HDEV + 148);
      if ( v5 )
      {
        do
        {
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(*(_QWORD *)(*(_QWORD *)(v4 + 152) + 8LL * (v5 - v2 - 1)) + 208LL));
          v5 = *(_DWORD *)(v4 + 148);
          ++v2;
        }
        while ( v2 < v5 );
      }
      else
      {
        SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v4 + 208));
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  return GreReleaseSemaphoreInternal(ghsemSprite);
}
