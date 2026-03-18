/*
 * XREFs of ?Initialize@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@AEAA_NXZ @ 0x1C004B038
 * Callers:
 *     ?Create@?$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ @ 0x1C004AFDC (-Create@-$CSectionEntry@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z @ 0x1C004B098 (-Create@-$CSectionBitmapAllocator@$0BEAAA@$0BEA@@NSInstrumentation@@SAPEAV12@QEAE@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z @ 0x1C004B9E0 (-PlatformMapViewInSessionSpace@NSInstrumentation@@YAJPEAXPEAPEAX_K@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z @ 0x1C004BA28 (-PlatformCreateSection@NSInstrumentation@@YAPEAXI@Z.c)
 */

bool __fastcall NSInstrumentation::CSectionEntry<81920,320>::Initialize(_QWORD *a1, unsigned int a2)
{
  NSInstrumentation *Section; // rax
  unsigned __int64 v4; // r9
  __int64 v5; // rax
  bool result; // al

  Section = (NSInstrumentation *)NSInstrumentation::PlatformCreateSection((NSInstrumentation *)0x14000, a2);
  a1[2] = Section;
  result = 0;
  if ( Section )
  {
    if ( (int)NSInstrumentation::PlatformMapViewInSessionSpace(Section, a1 + 3, (void **)0x14000, v4) >= 0 )
    {
      v5 = NSInstrumentation::CSectionBitmapAllocator<81920,320>::Create(a1[3]);
      a1[4] = v5;
      if ( v5 )
        return 1;
    }
  }
  return result;
}
