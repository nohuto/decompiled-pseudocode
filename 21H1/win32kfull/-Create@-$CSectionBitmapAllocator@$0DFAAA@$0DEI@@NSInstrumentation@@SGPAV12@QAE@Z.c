/*
 * XREFs of ?Create@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@SGPAV12@QAE@Z @ 0x208C77
 * Callers:
 *     ?Initialize@?$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NXZ @ 0x208D7F (-Initialize@-$CSectionEntry@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NXZ.c)
 * Callees:
 *     ?Uninitialize@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAEXXZ @ 0x1543E9 (-Uninitialize@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAEXXZ.c)
 *     ?Initialize@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NPAE@Z @ 0x208D14 (-Initialize@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAE_NPAE@Z.c)
 */

_DWORD *__thiscall NSInstrumentation::CSectionBitmapAllocator<217088,840>::Create(void *this)
{
  _DWORD *result; // eax
  void *v3; // esi

  result = ExAllocatePoolWithTag(PagedPoolSession, 0x18u, 0x6F736955u);
  v3 = result;
  if ( result )
  {
    *result = 0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    result[4] = 0;
    result[5] = 0;
    if ( (unsigned __int8)NSInstrumentation::CSectionBitmapAllocator<217088,840>::Initialize(this) )
    {
      return v3;
    }
    else
    {
      NSInstrumentation::CSectionBitmapAllocator<217088,840>::Uninitialize((int)v3);
      ExFreePoolWithTag(v3, 0);
      return 0;
    }
  }
  return result;
}
