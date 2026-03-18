/*
 * XREFs of ?OnDeviceRemoval@Edgy@@YGXPAX@Z @ 0x16E058
 * Callers:
 *     _PostDeviceNotification@20 @ 0xC9CA6 (_PostDeviceNotification@20.c)
 * Callees:
 *     ?_RemoveListenersForDevice@Edgy@@YGXAAUtagEDGY_DATA@@PAX@Z @ 0x16EF07 (-_RemoveListenersForDevice@Edgy@@YGXAAUtagEDGY_DATA@@PAX@Z.c)
 */

void __usercall Edgy::OnDeviceRemoval(Edgy *a1@<edi>)
{
  int v1; // esi
  int i; // edi
  Edgy *v3; // [esp-4h] [ebp-Ch]
  struct tagEDGY_DATA *v4; // [esp+0h] [ebp-8h]
  void *v5; // [esp+4h] [ebp-4h]

  v1 = _grpWinStaList;
  if ( _grpWinStaList )
  {
    v3 = a1;
    do
    {
      for ( i = *(_DWORD *)(v1 + 8); i; i = *(_DWORD *)(i + 16) )
      {
        if ( *(_DWORD *)(i + 140) )
          Edgy::_RemoveListenersForDevice(v3, v4, v5);
      }
      v1 = *(_DWORD *)(v1 + 4);
    }
    while ( v1 );
  }
}
