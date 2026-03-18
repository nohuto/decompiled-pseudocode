/*
 * XREFs of _xxxSendShutdownData@8 @ 0x194F33
 * Callers:
 *     _xxxProcessEventMessage@8 @ 0x13A0E (_xxxProcessEventMessage@8.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _SfnCOPYDATA@32 @ 0xA297A (_SfnCOPYDATA@32.c)
 *     __GetWindowIcon@8 @ 0xC4AB8 (__GetWindowIcon@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall xxxSendShutdownData(int a1, int a2)
{
  _DWORD *v4; // eax
  int v5; // esi
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned __int16 *Prop; // eax
  unsigned int v11; // [esp+0h] [ebp-440h]
  const unsigned __int16 *v12; // [esp+4h] [ebp-43Ch]
  _DWORD v13[3]; // [esp+Ch] [ebp-434h] BYREF
  _DWORD v14[265]; // [esp+18h] [ebp-428h] BYREF

  memset(v14, 0, 0x41Cu);
  if ( gspwndBSDR )
  {
    if ( a1 == 0xFFFF )
    {
LABEL_20:
      v13[2] = v14;
      v14[0] = a1;
      v13[0] = 0;
      v13[1] = 1052;
      SfnCOPYDATA(
        (int *)gspwndBSDR,
        809,
        a2,
        (int)v13,
        *(_DWORD *)(*((_DWORD *)gspwndBSDR + 5) + 84),
        *(_DWORD *)(_gpsi + 408),
        0,
        0);
      return 0;
    }
    v4 = (_DWORD *)ValidateHwndEx(a1, 0, 0);
    if ( !a2 )
    {
      if ( v4 )
        *(_DWORD *)(v4[5] + 144) &= ~0x4000u;
      goto LABEL_20;
    }
    v5 = (int)v4;
    if ( v4 )
    {
      v6 = v4[5];
      if ( *v4 == ghwndBlocking )
      {
        a2 = 2;
LABEL_9:
        *(_DWORD *)(v6 + 144) |= 0x4000u;
        v14[1] = _GetWindowIcon((int)v4, 1);
        v7 = *(_DWORD *)(*(_DWORD *)(v5 + 20) + 116);
        if ( v7 )
        {
          v8 = (v7 >> 1) + 1;
          if ( v8 > 0x105 )
            v8 = 261;
          RtlStringCchCopyW(v8, (char *)&v14[132] + 2, *(unsigned __int16 **)(v5 + 100), v11, v12);
        }
        else
        {
          HIWORD(v14[132]) = 0;
        }
        Prop = (unsigned __int16 *)_GetProp(v5, (unsigned __int16)gatomShutdownBlockingReason, 1);
        if ( Prop )
          RtlStringCchCopyW(261, (char *)&v14[2], Prop, v11, v12);
        else
          LOWORD(v14[2]) = 0;
        goto LABEL_20;
      }
      if ( *(_DWORD *)(v6 + 148) == 1 )
        goto LABEL_9;
    }
  }
  return 0;
}
