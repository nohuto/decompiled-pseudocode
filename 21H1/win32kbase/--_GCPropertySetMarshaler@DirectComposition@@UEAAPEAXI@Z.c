/*
 * XREFs of ??_GCPropertySetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C00943F0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

DirectComposition::CPropertySetMarshaler *__fastcall DirectComposition::CPropertySetMarshaler::`scalar deleting destructor'(
        DirectComposition::CPropertySetMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  char v4; // di
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = a2;
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    Win32FreePool(v5, a2, a3);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 24) = 0;
  v6 = *((_QWORD *)this + 9);
  if ( v6 )
  {
    Win32FreePool(v6, a2, a3);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 20) = 0;
  if ( (v4 & 1) != 0 )
    Win32FreePool((__int64)this, a2, a3);
  return this;
}
