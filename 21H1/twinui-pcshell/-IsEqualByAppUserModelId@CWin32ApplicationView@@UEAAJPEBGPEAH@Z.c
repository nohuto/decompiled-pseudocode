/*
 * XREFs of ?IsEqualByAppUserModelId@CWin32ApplicationView@@UEAAJPEBGPEAH@Z @ 0x18007F010
 * Callers:
 *     <none>
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWin32ApplicationView::IsEqualByAppUserModelId(
        CWin32ApplicationView *this,
        const unsigned __int16 *a2,
        int *a3)
{
  int v5; // edi
  int v6; // r9d
  const WCHAR *v7; // r10
  __int64 v8; // rax
  LPCWCH lpString1; // [rsp+30h] [rbp-28h] BYREF
  int cchCount1[2]; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+40h] [rbp-18h]

  *a3 = 0;
  lpString1 = 0LL;
  *(_QWORD *)cchCount1 = -1LL;
  v12 = -1LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, LPCWCH *))(**((_QWORD **)this + 27) + 32LL))(
         *((_QWORD *)this + 27),
         &lpString1);
  if ( v5 >= 0 )
  {
    v6 = -(a2 != 0LL);
    v7 = &word_1804BE2A8;
    if ( !a2 )
      a2 = &word_1804BE2A8;
    LODWORD(v8) = cchCount1[0];
    if ( *(_QWORD *)cchCount1 == -1LL )
    {
      if ( lpString1 )
      {
        v8 = -1LL;
        do
          ++v8;
        while ( lpString1[v8] );
      }
      else
      {
        LODWORD(v8) = 0;
      }
    }
    if ( lpString1 )
      v7 = lpString1;
    *a3 = CompareStringOrdinal(v7, v8, a2, v6, 1) == 2;
    v5 = 0;
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&lpString1);
  return (unsigned int)v5;
}
