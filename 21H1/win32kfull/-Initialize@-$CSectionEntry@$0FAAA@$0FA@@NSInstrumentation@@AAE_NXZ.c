/*
 * XREFs of ?Initialize@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE_NXZ @ 0xE9A02
 * Callers:
 *     ?Create@?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@XZ @ 0xE99C6 (-Create@-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@XZ.c)
 * Callees:
 *     ?Create@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@QAE@Z @ 0xE9A44 (-Create@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@QAE@Z.c)
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YGJPAXPAPAXI@Z @ 0xE9B4C (-PlatformMapViewInSessionSpace@NSInstrumentation@@YGJPAXPAPAXI@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YGPAXI@Z @ 0xE9B7A (-PlatformCreateSection@NSInstrumentation@@YGPAXI@Z.c)
 */

bool __thiscall NSInstrumentation::CSectionEntry<20480,80>::Initialize(_DWORD *this)
{
  void *Section; // eax
  int v3; // eax
  bool result; // al
  NSInstrumentation *v5; // [esp+0h] [ebp-Ch]
  void *v6; // [esp+0h] [ebp-Ch]
  unsigned int v7; // [esp+4h] [ebp-8h]
  void **v8; // [esp+4h] [ebp-8h]
  unsigned int v9; // [esp+8h] [ebp-4h]

  Section = NSInstrumentation::PlatformCreateSection(v5, v7);
  this[2] = Section;
  result = 0;
  if ( Section )
  {
    if ( NSInstrumentation::PlatformMapViewInSessionSpace((NSInstrumentation *)0x5000, v6, v8, v9) >= 0 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<20480,80>::Create(this[3]);
      this[4] = v3;
      if ( v3 )
        return 1;
    }
  }
  return result;
}
