/*
 * XREFs of _DxgkEngReleaseStableSprite@8 @ 0xBF76E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DxgkEngReleaseStableSprite(int a1, int a2)
{
  _DWORD *HDEV; // eax
  _DWORD *v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // eax
  int v7; // edi
  unsigned int v8; // [esp+10h] [ebp+Ch]

  if ( a2 )
  {
    HDEV = (_DWORD *)UserGetHDEV();
    v4 = HDEV;
    if ( HDEV )
    {
      v5 = HDEV[26];
      if ( v5 )
      {
        v6 = 0;
        v8 = 0;
        do
        {
          v7 = *(_DWORD *)(v4[27] + 4 * (v5 - v6) - 4);
          EtwTraceGreLockReleaseSemaphore(L"hsem", *(_DWORD *)(v7 + 152));
          GreReleaseSemaphoreInternal(*(_DWORD *)(v7 + 152));
          v5 = v4[26];
          v6 = v8 + 1;
          v8 = v6;
        }
        while ( v6 < v5 );
      }
      else
      {
        EtwTraceGreLockReleaseSemaphore(L"hsem", HDEV[38]);
        GreReleaseSemaphoreInternal(v4[38]);
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", _ghsemSprite);
  return GreReleaseSemaphoreInternal(_ghsemSprite);
}
