/*
 * XREFs of ?ValidateSmwp@@YGHPAUtagSMWP@@PAH@Z @ 0x35120
 * Callers:
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 * Callees:
 *     ?ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z @ 0x38C50 (-ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __usercall ValidateSmwp@<eax>(_DWORD *a1@<edx>, int a2@<ecx>, struct tagCVR *a3@<esi>)
{
  _DWORD *v4; // ebx
  _DWORD *v5; // ecx
  int v6; // eax
  _DWORD *v7; // esi
  int v8; // edi
  struct tagCVR *v10; // [esp-4h] [ebp-10h]
  struct tagWND *v11; // [esp+0h] [ebp-Ch]
  int v12; // [esp+8h] [ebp-4h]

  v4 = a1;
  LOBYTE(a1) = 1;
  v5 = *(_DWORD **)(a2 + 24);
  *v4 = 1;
  v6 = HMValidateHandleNoSecure(*v5, a1);
  if ( !v6 )
    return 0;
  v10 = a3;
  v7 = *(_DWORD **)(a2 + 24);
  v8 = *(_DWORD *)(a2 + 16);
  v12 = *(_DWORD *)(v6 + 56);
  while ( 1 )
  {
    if ( --v8 < 0 )
      return 1;
    if ( !ValidateWindowPos(v10, v11) )
    {
      *v7 = 0;
      goto LABEL_8;
    }
    if ( *(_DWORD *)(_HMObjectFromHandle(*v7) + 56) != v12 )
      break;
    if ( (v7[6] & 0x2000) != 0 )
      *v4 = 0;
LABEL_8:
    v7 += 32;
  }
  UserSetLastError(1441);
  return 0;
}
