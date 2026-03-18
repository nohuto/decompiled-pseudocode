/*
 * XREFs of ??_ECManipulationMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6B00
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?Reset@?$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C01D7748 (-Reset@-$CDynamicArray@PEAUInjectManipulationArgs@@$0HHHAHDFF@@@QEAAX_N@Z.c)
 */

DirectComposition::CManipulationMarshaler *__fastcall DirectComposition::CManipulationMarshaler::`vector deleting destructor'(
        DirectComposition::CManipulationMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char *v3; // rbx
  __int64 v4; // rsi
  char v5; // bp
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8

  v3 = (char *)this + 128;
  v4 = 0LL;
  v5 = a2;
  if ( *((_DWORD *)this + 34) )
  {
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)v3 + 8 * v4);
      if ( v7 )
        Win32FreePool(v7, a2, a3);
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < *((_DWORD *)v3 + 2) );
  }
  CDynamicArray<InjectManipulationArgs *,2003858261>::Reset(v3);
  CDynamicArray<InjectManipulationArgs *,2003858261>::Reset(v3);
  if ( (v5 & 1) != 0 )
    Win32FreePool((__int64)this, v8, v9);
  return this;
}
