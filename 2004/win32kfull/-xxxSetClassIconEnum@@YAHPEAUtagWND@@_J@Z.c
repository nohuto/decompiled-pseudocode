/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023EAD0
 * Callers:
 *     xxxSetClassIcon @ 0x1C023EB38 (xxxSetClassIcon.c)
 * Callees:
 *     SendDwmIconChange @ 0x1C002A5A0 (SendDwmIconChange.c)
 *     xxxRedrawTitle @ 0x1C0033990 (xxxRedrawTitle.c)
 *     DestroyWindowSmIcon @ 0x1C008E61C (DestroyWindowSmIcon.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C00B2CA8 (IsToplevelWindowDesktopComposed.c)
 */

__int64 __fastcall xxxSetClassIconEnum(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( *((_QWORD *)a1 + 17) == a2 )
  {
    v3 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v3 + 23) & 0x20) != 0 )
    {
      DestroyWindowSmIcon((__int64)a1);
      v3 = *((_QWORD *)a1 + 5);
    }
    if ( !*(_QWORD *)(v3 + 264) )
      xxxRedrawTitle((unsigned __int64 *)a1, 0xCu);
    if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
      SendDwmIconChange((__int64)a1);
  }
  return 1LL;
}
