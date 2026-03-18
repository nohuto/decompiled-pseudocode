/*
 * XREFs of ??_GCGenericMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C01D6900
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CGenericMarshaler *__fastcall DirectComposition::CGenericMarshaler::`scalar deleting destructor'(
        DirectComposition::CGenericMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 *v3; // rbx
  char v4; // bp
  __int64 *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8

  v3 = (__int64 *)*((_QWORD *)this + 8);
  v4 = a2;
  v6 = &v3[*((_QWORD *)this + 9)];
  while ( v3 != v6 )
    Win32FreePool(*v3++, a2, a3);
  Win32FreePool(*((_QWORD *)this + 8), a2, a3);
  if ( (v4 & 1) != 0 )
    Win32FreePool((__int64)this, v7, v8);
  return this;
}
