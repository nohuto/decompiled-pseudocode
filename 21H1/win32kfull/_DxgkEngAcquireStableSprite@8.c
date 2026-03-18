/*
 * XREFs of _DxgkEngAcquireStableSprite@8 @ 0xBF486
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall DxgkEngAcquireStableSprite(int a1, int a2)
{
  _DWORD *result; // eax
  _DWORD *v3; // esi
  unsigned int v4; // ebx
  int v5; // edi

  GreAcquireSemaphoreSharedInternal(_ghsemSprite);
  result = (_DWORD *)EtwTraceGreLockAcquireSemaphoreShared(L"ghsemSprite", _ghsemSprite);
  if ( a2 )
  {
    result = (_DWORD *)UserGetHDEV();
    v3 = result;
    if ( result )
    {
      if ( result[26] )
      {
        v4 = 0;
        do
        {
          v5 = *(_DWORD *)(v3[27] + 4 * v4);
          GreAcquireSemaphore(*(_DWORD *)(v5 + 152));
          result = (_DWORD *)EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_DWORD *)(v5 + 152), 8);
          ++v4;
        }
        while ( v4 < v3[26] );
      }
      else
      {
        GreAcquireSemaphore(result[38]);
        return (_DWORD *)EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", v3[38], 8);
      }
    }
  }
  return result;
}
