/*
 * XREFs of ?_UpdateFinalLocation@CLivePreview@@AEAAXPEAUtagRECT@@@Z @ 0x180084200
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x18003F9DC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 */

void __fastcall CLivePreview::_UpdateFinalLocation(CLivePreview *this, struct tagRECT *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  HMONITOR v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  RECT rc1; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  if ( !a2 || IsRectEmpty(a2) )
  {
    *((_BYTE *)this + 588) = 0;
  }
  else
  {
    v5 = *((_QWORD *)this + 65);
    *(struct tagRECT *)((char *)this + 572) = *a2;
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 112) != 1 )
      {
        *((_BYTE *)this + 588) = !EqualRect((const RECT *)(v5 + 48), a2);
        return;
      }
      v6 = MonitorFromWindow(*(HWND *)(v5 + 40), 0);
    }
    else
    {
      v6 = *(HMONITOR *)(*((_QWORD *)this + 67) + 64LL);
    }
    if ( v6 )
    {
      v7 = *((_QWORD *)this + 67);
      rc1 = 0LL;
      v8 = 0;
      v9 = *(_DWORD *)(v7 + 40);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v7 + 16);
        while ( *(HMONITOR *)(v10 + 24LL * v8 + 16) != v6 )
        {
          if ( ++v8 >= v9 )
            goto LABEL_15;
        }
        rc1 = *(RECT *)(v10 + 24LL * v8);
      }
LABEL_15:
      if ( !EqualRect(&rc1, a2) )
      {
        v11 = *((_QWORD *)this + 67);
        v12 = *(_DWORD *)(v11 + 40);
        if ( v12 )
        {
          v13 = *(_QWORD *)(v11 + 16);
          while ( *(HMONITOR *)(v13 + 24LL * v2 + 16) != v6 )
          {
            if ( ++v2 >= v12 )
              goto LABEL_22;
          }
          *(_OWORD *)(v13 + 24LL * v2) = *(_OWORD *)((char *)this + 572);
        }
LABEL_22:
        *((_BYTE *)this + 588) = 1;
      }
    }
  }
}
