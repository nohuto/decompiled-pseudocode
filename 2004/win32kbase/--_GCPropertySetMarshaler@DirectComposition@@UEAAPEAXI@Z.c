/*
 * XREFs of ??_GCPropertySetMarshaler@DirectComposition@@UEAAPEAXI@Z @ 0x1C009B120
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

DirectComposition::CPropertySetMarshaler *__fastcall DirectComposition::CPropertySetMarshaler::`scalar deleting destructor'(
        DirectComposition::CPropertySetMarshaler *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 11);
  if ( v4 )
  {
    Win32FreePool(v4);
    *((_QWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 24) = 0;
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    Win32FreePool(v5);
    *((_QWORD *)this + 9) = 0LL;
  }
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 20) = 0;
  if ( (a2 & 1) != 0 )
    Win32FreePool((__int64)this);
  return this;
}
