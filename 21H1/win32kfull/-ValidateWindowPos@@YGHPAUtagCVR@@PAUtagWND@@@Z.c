/*
 * XREFs of ?ValidateWindowPos@@YGHPAUtagCVR@@PAUtagWND@@@Z @ 0x38C50
 * Callers:
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _xxxEndDeferWindowPosEx@8 @ 0x34486 (_xxxEndDeferWindowPosEx@8.c)
 *     ?ValidateSmwp@@YGHPAUtagSMWP@@PAH@Z @ 0x35120 (-ValidateSmwp@@YGHPAUtagSMWP@@PAH@Z.c)
 * Callees:
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _FSwpTopmost@4 @ 0xA5E62 (_FSwpTopmost@4.c)
 */

int __fastcall ValidateWindowPos(int a1, int a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  bool v5; // zf
  int DesktopWindow; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // eax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int v15; // ecx
  int v16; // [esp+Ch] [ebp-8h]
  int v17; // [esp+10h] [ebp-4h]

  v16 = a2;
  LOBYTE(a2) = 1;
  v3 = (_DWORD *)HMValidateHandleNoSecure(*(_DWORD *)a1, a2);
  v4 = v3;
  if ( v3 )
  {
    v5 = (*(_BYTE *)(a1 + 24) & 4) == 0;
    *(_DWORD *)(a1 + 84) = v3[2];
    if ( !v5 )
      return 1;
    DesktopWindow = _GetDesktopWindow(v3);
    v8 = v4[14];
    v17 = DesktopWindow;
    if ( *(char *)(v4[5] + 11) >= 0 )
    {
      v9 = *(_DWORD *)(a1 + 4);
      if ( v9 == -1 || v9 == -2 )
      {
        v10 = v4[14];
        if ( v8 != DesktopWindow )
          return 0;
        goto LABEL_23;
      }
      if ( v9 )
      {
        v10 = v4[14];
        if ( v9 != 1 )
        {
          LOBYTE(v10) = 1;
          v11 = HMValidateHandleNoSecure(v9, v10);
          v12 = v11;
          if ( !v11 || *(char *)(*(_DWORD *)(v11 + 20) + 11) < 0 )
          {
            UserSetLastError(6);
            return 0;
          }
          if ( v4 == (_DWORD *)v11 )
            return 0;
          v10 = v4[14];
          if ( v10 != *(_DWORD *)(v11 + 56) )
            return 0;
          if ( !v16 )
            return 1;
          if ( v8 == v17 )
          {
            if ( FSwpTopmost(v4) )
            {
              if ( !FSwpTopmost(v12) )
                return 0;
            }
            else
            {
              v13 = *(_DWORD *)(v12 + 48);
              if ( v13 && FSwpTopmost(v13) )
                return 0;
            }
          }
        }
        goto LABEL_23;
      }
      if ( !v16 )
        return 1;
      if ( v8 != DesktopWindow || FSwpTopmost(v4) || (v15 = *(_DWORD *)(v14 + 60)) == 0 || !FSwpTopmost(v15) )
      {
        v10 = v8;
LABEL_23:
        if ( !v16 || v16 == v10 )
          return 1;
      }
    }
  }
  return 0;
}
