/*
 * XREFs of ??_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01CE600
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

DirectComposition::CGenericMarshaler *__fastcall DirectComposition::CGenericMarshaler::`scalar deleting destructor'(
        DirectComposition::CGenericMarshaler *this,
        char a2)
{
  __int64 *v2; // rbx
  __int64 *v5; // rsi

  v2 = (__int64 *)*((_QWORD *)this + 8);
  v5 = &v2[*((_QWORD *)this + 9)];
  while ( v2 != v5 )
    Win32FreePool(*v2++);
  Win32FreePool(*((_QWORD *)this + 8));
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
