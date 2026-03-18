/*
 * XREFs of ?RemoveComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C023E950
 * Callers:
 *     NtUserSetCoreWindowPartner @ 0x1C0004FB0 (NtUserSetCoreWindowPartner.c)
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C000512C (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z @ 0x1C023E97C (-RemoveComponentInternal@CoreWindowProp@@KAJPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall CoreWindowProp::RemoveComponent(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx
  __int64 v4; // r8

  v3 = CoreWindowProp::RemoveComponentInternal(a1, a2);
  if ( v3 )
    UserSetLastError(1168LL, v2, v4);
  return v3;
}
