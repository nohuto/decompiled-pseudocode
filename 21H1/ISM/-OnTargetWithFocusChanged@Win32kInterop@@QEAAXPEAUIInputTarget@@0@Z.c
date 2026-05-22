/*
 * XREFs of ?OnTargetWithFocusChanged@Win32kInterop@@QEAAXPEAUIInputTarget@@0@Z @ 0x180041FDC
 * Callers:
 *     ?OnTargetWithFocusChanged@OneCoreUAPInputHost@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000AD20 (-OnTargetWithFocusChanged@OneCoreUAPInputHost@@UEAAJPEAUIInputTarget@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Win32kInterop::OnTargetWithFocusChanged(
        Win32kInterop *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int64 **v3; // rcx
  __int64 *i; // rax

  if ( a2 != a3 )
  {
    v3 = (__int64 **)*((_QWORD *)this + 25);
    for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
    {
      if ( *((_BYTE *)i + 41) )
        *((_BYTE *)i + 40) = 1;
    }
  }
}
