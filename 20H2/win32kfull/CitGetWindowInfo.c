/*
 * XREFs of CitGetWindowInfo @ 0x1C01125F0
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     _MonitorFromRect @ 0x1C00C9880 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall CitGetWindowInfo(__int64 a1, _WORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int16 v5; // bx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // al
  char v10; // cl
  __int16 v11; // cx
  __int16 v12; // r8
  int v13; // edx
  __int16 v14; // r8
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  struct tagRECT *Prop; // rax
  struct tagRECT v18; // [rsp+20h] [rbp-38h] BYREF

  result = GetTopLevelWindow(a1);
  v4 = result;
  if ( result )
  {
    v5 = 32;
    v18 = *(struct tagRECT *)(*(_QWORD *)(result + 40) + 88LL);
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 31LL) & 0x20) != 0 )
    {
      Prop = (struct tagRECT *)GetProp(result, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
      if ( Prop )
        v18 = *Prop;
    }
    LogicalToPhysicalDPIRect(&v18, &v18, *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL), 0LL);
    *a2 = LOWORD(v18.right) - LOWORD(v18.left);
    a2[1] = LOWORD(v18.bottom) - LOWORD(v18.top);
    v7 = MonitorFromRect(&v18, 1LL, 18LL, v6);
    if ( v7 )
      CitGetMonitorInfo(v7, a2);
    v8 = *(_QWORD *)(v4 + 40);
    v9 = *(_BYTE *)(v8 + 31);
    if ( (v9 & 0x20) != 0 )
    {
      v11 = 1;
    }
    else if ( (v9 & 1) != 0 )
    {
      v11 = 2;
    }
    else
    {
      v10 = *(_BYTE *)(v8 + 233);
      if ( (v10 & 3) == 3 )
      {
        v11 = 5;
      }
      else if ( (v10 & 1) != 0 )
      {
        v11 = 3;
      }
      else if ( (v10 & 2) != 0 )
      {
        v11 = 4;
      }
      else
      {
        v11 = 0;
        if ( *(char *)(v8 + 234) < 0 )
          v11 = 6;
      }
    }
    v12 = 0;
    v13 = (*(_DWORD *)(v8 + 288) & 0xF) - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
        v12 = 2;
    }
    else
    {
      v12 = 1;
    }
    v14 = v11 | (8 * v12);
    a2[4] = v14;
    v15 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL) + 284LL);
    if ( v15 > 0x60u )
    {
      if ( v15 > 0x78u )
      {
        if ( v15 > 0x90u )
        {
          if ( v15 > 0xA8u )
          {
            v5 = 192;
            if ( v15 > 0xC0u )
            {
              if ( v15 > 0xF0u )
              {
                if ( v15 > 0x120u )
                  v5 = 224;
              }
              else
              {
                v5 = 160;
              }
            }
            else
            {
              v5 = 128;
            }
          }
          else
          {
            v5 = 96;
          }
        }
        else
        {
          v5 = 64;
        }
      }
    }
    else
    {
      v5 = 0;
    }
    v16 = (unsigned __int16)atomDWMProp;
    a2[4] = v5 | v14;
    result = GetProp(v4, v16, 1LL);
    if ( result )
    {
      result = *(unsigned int *)result;
      if ( (result & 0x2000) != 0 )
      {
        result = 256LL;
        a2[4] |= 0x100u;
      }
    }
  }
  return result;
}
