/*
 * XREFs of ?xxxSetClassIconEnum@@YAHPEAUtagWND@@_J@Z @ 0x1C023D830
 * Callers:
 *     xxxSetClassIcon @ 0x1C023D898 (xxxSetClassIcon.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C004ACA8 (IsToplevelWindowDesktopComposed.c)
 *     xxxRedrawTitle @ 0x1C00BF060 (xxxRedrawTitle.c)
 *     SendDwmIconChange @ 0x1C00C4E60 (SendDwmIconChange.c)
 *     DestroyWindowSmIcon @ 0x1C00D39BC (DestroyWindowSmIcon.c)
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
      SendDwmIconChange((unsigned __int64)a1);
  }
  return 1LL;
}
