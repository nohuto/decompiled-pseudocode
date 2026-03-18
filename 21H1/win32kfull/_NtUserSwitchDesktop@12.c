/*
 * XREFs of _NtUserSwitchDesktop@12 @ 0xAF4AC
 * Callers:
 *     <none>
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxSwitchDesktopWithFade@20 @ 0xAF188 (_xxxSwitchDesktopWithFade@20.c)
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 */

BOOL __stdcall NtUserSwitchDesktop(int a1, unsigned int a2, int a3)
{
  BOOL v3; // esi
  int v4; // eax
  PVOID v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD v10[3]; // [esp+8h] [ebp-10h] BYREF
  PVOID Object; // [esp+14h] [ebp-4h] BYREF

  memset(v10, 0, sizeof(v10));
  v3 = 0;
  Object = 0;
  EnterCrit(0, 1);
  if ( (*(_DWORD *)(_gptiCurrent + 264) & 0x20000000) != 0 )
    v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 416) + 12) & 0x40;
  else
    v4 = 0;
  if ( v4 )
    goto LABEL_15;
  if ( (int)ValidateHdesk(a1, 1, 256, &Object) < 0 )
    goto LABEL_11;
  if ( (*(_BYTE *)(*((_DWORD *)Object + 5) + 32) & 4) != 0 )
  {
    ObfDereferenceObject(Object);
LABEL_15:
    UserSetLastError((struct _NT_TIB *)5);
    goto LABEL_11;
  }
  PushW32ThreadLock((int)Object, v10, (int)UserDereferenceObject);
  v5 = Object;
  if ( Object )
  {
    ObfReferenceObject(Object);
    v5 = Object;
  }
  ObfDereferenceObject(v5);
  if ( a2 )
    v7 = xxxSwitchDesktopWithFade(*((_DWORD *)Object + 5), (int)Object, v6, a2, a3);
  else
    v7 = xxxSwitchDesktop(*((_DWORD *)Object + 5), Object, 0, a3);
  v8 = v7;
  PopAndFreeW32ThreadLock((int)v10);
  v3 = v8 >= 0;
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return v3;
}
