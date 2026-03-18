/*
 * XREFs of ?Initialize@?$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@AAE_NXZ @ 0x1A2BAD
 * Callers:
 *     ?Create@?$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@XZ @ 0x1A2860 (-Create@-$CSectionEntry@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@XZ.c)
 * Callees:
 *     ?PlatformMapViewInSessionSpace@NSInstrumentation@@YGJPAXPAPAXI@Z @ 0xE9B4C (-PlatformMapViewInSessionSpace@NSInstrumentation@@YGJPAXPAPAXI@Z.c)
 *     ?PlatformCreateSection@NSInstrumentation@@YGPAXI@Z @ 0xE9B7A (-PlatformCreateSection@NSInstrumentation@@YGPAXI@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@QAE@Z @ 0x1A280C (-Create@-$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@QAE@Z.c)
 */

bool __thiscall NSInstrumentation::CSectionEntry<20480,72>::Initialize(int this)
{
  PVOID Section; // eax
  _DWORD *v3; // eax
  bool result; // al
  void *v5; // [esp+0h] [ebp-Ch]
  void **v6; // [esp+4h] [ebp-8h]
  unsigned int v7; // [esp+8h] [ebp-4h]

  Section = NSInstrumentation::PlatformCreateSection((void *)0x5000);
  *(_DWORD *)(this + 8) = Section;
  result = 0;
  if ( Section )
  {
    if ( NSInstrumentation::PlatformMapViewInSessionSpace(
           (PVOID *)(this + 12),
           Section,
           (NSInstrumentation *)0x5000,
           v5,
           v6,
           v7) >= 0 )
    {
      v3 = NSInstrumentation::CSectionBitmapAllocator<20480,72>::Create(*(void **)(this + 12));
      *(_DWORD *)(this + 16) = v3;
      if ( v3 )
        return 1;
    }
  }
  return result;
}
