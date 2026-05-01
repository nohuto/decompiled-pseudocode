/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_52ee436932253a320c8b1bf838bed70e___::CTaskWrapper__lambda_52ee436932253a320c8b1bf838bed70e_____lambda_52ee436932253a320c8b1bf838bed70e___ @ 0x18038C590
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_52ee436932253a320c8b1bf838bed70e___ @ 0x18038C8C0 (Windows--Internal--ComTaskPool--QueueTask__lambda_52ee436932253a320c8b1bf838bed70e___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180038890 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_52ee436932253a320c8b1bf838bed70e___::CTaskWrapper__lambda_52ee436932253a320c8b1bf838bed70e_____lambda_52ee436932253a320c8b1bf838bed70e___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  a1[2] = *a2;
  v4 = a2 + 1;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  v5 = a2 + 2;
  a1[4] = 0LL;
  if ( a1 + 4 != a2 + 2 )
  {
    a1[4] = *v5;
    *v5 = 0LL;
  }
  *a1 = off_18049C6B0;
  return a1;
}
