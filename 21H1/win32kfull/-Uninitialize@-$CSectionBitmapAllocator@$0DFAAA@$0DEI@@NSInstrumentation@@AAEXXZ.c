/*
 * XREFs of ?Uninitialize@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@AAEXXZ @ 0x1543E9
 * Callers:
 *     ?Create@?$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@QAE@Z @ 0xE9A44 (-Create@-$CSectionBitmapAllocator@$0FAAA@$0FA@@NSInstrumentation@@SGPAV12@QAE@Z.c)
 *     ??1?$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ @ 0x1543A2 (--1-$CSectionEntry@$0FAAA@$0FA@@NSInstrumentation@@AAE@XZ.c)
 *     ?Create@?$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@SGPAV12@QAE@Z @ 0x184081 (-Create@-$CSectionBitmapAllocator@$0EAAA@$0DI@@NSInstrumentation@@SGPAV12@QAE@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@QAE@Z @ 0x1A280C (-Create@-$CSectionBitmapAllocator@$0FAAA@$0EI@@NSInstrumentation@@SGPAV12@QAE@Z.c)
 *     ?Create@?$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@SGPAV12@QAE@Z @ 0x208C77 (-Create@-$CSectionBitmapAllocator@$0DFAAA@$0DEI@@NSInstrumentation@@SGPAV12@QAE@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall NSInstrumentation::CSectionBitmapAllocator<217088,840>::Uninitialize(int this)
{
  int v2; // ecx
  int v3; // eax

  v2 = *(_DWORD *)(this + 12);
  v3 = *(_DWORD *)(this + 8);
  if ( v2 != v3 )
    RtlFindSetBits((PRTL_BITMAP)(v2 ^ v3), 1u, 0);
  if ( *(_DWORD *)this )
    ExFreePoolWithTag(*(PVOID *)this, 0);
  if ( *(_DWORD *)(this + 12) != *(_DWORD *)(this + 8) )
    ExFreePoolWithTag((PVOID)(*(_DWORD *)(this + 12) ^ *(_DWORD *)(this + 8)), 0);
}
