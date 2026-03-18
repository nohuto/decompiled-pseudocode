/*
 * XREFs of ?Initialize@?$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@AEAA_NXZ @ 0x1C00AC84C
 * Callers:
 *     ?Create@?$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C00AC7F0 (-Create@-$CSectionEntry@$0BFAAA@$0BFA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C00ABBB0 (-Create@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C00ACC18 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C00ACC60 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<86016,336>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  PVOID *v5; // rax
  bool result; // al

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x15000, a2);
  a1[2] = Section;
  result = 0;
  if ( Section )
  {
    if ( (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x15000, v4) >= 0 )
    {
      v5 = NSInstrumentation::CSectionBitmapAllocator<24576,96>::Create(a1[3]);
      a1[4] = v5;
      if ( v5 )
        return 1;
    }
  }
  return result;
}
