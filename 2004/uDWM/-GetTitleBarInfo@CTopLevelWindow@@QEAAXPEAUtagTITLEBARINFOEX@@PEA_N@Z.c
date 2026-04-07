/*
 * XREFs of ?GetTitleBarInfo@CTopLevelWindow@@QEAAXPEAUtagTITLEBARINFOEX@@PEA_N@Z @ 0x180002E48
 * Callers:
 *     ?GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z @ 0x1800072E4 (-GetTitleBarInfo@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_GETTITLEBARINFO@@@Z.c)
 * Callees:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x180002C94 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x18003ED6C (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     floor_0 @ 0x18005603A (floor_0.c)
 *     memset_0 @ 0x180056082 (memset_0.c)
 */

void __fastcall CTopLevelWindow::GetTitleBarInfo(CTopLevelWindow *this, struct tagTITLEBARINFOEX *a2, bool *a3)
{
  DWORD v6; // ecx
  int SystemMetrics; // eax
  LONG v8; // ecx
  int v9; // r8d
  int v10; // edx
  RECT *v11; // r14
  DWORD *v12; // rdi
  int i; // esi
  __int64 v14; // rdx
  int v15; // eax
  int v16; // [rsp+20h] [rbp-48h] BYREF
  RECT v17; // [rsp+24h] [rbp-44h]

  if ( CTopLevelWindow::HasRenderedBorder(*((_DWORD *)this + 148)) )
  {
    *a3 = 1;
    *(_OWORD *)a2->rgstate = 0LL;
    *(_QWORD *)&a2->rgstate[4] = 0LL;
    memset_0(a2->rgrect, 0, sizeof(a2->rgrect));
    v6 = a2->rgstate[0] | 0x100000;
    a2->rgstate[0] = v6;
    if ( (*(_DWORD *)(*((_QWORD *)this + 91) + 100LL) & 0xC00000) != 0 )
    {
      a2->rcTitleBar.left = *((_DWORD *)this + 149);
      SystemMetrics = GetSystemMetrics(8);
      a2->rcTitleBar.top = (int)floor_0((float)((float)SystemMetrics * *(float *)(*((_QWORD *)this + 91) + 304LL)) + 0.5);
      v8 = *((_DWORD *)this + 30) - *((_DWORD *)this + 150);
      a2->rcTitleBar.right = v8;
      a2->rcTitleBar.bottom = *((_DWORD *)this + 151);
      v9 = *((_DWORD *)this + 148);
      if ( (v9 & 0x10000) != 0 )
      {
        v10 = *(_DWORD *)(*((_QWORD *)this + 66) + 120LL);
        if ( (v9 & 0x20000) != 0 )
          a2->rcTitleBar.right = v8 - v10;
        else
          a2->rcTitleBar.left += v10;
      }
      OffsetRect(
        &a2->rcTitleBar,
        *(_DWORD *)(*((_QWORD *)this + 91) + 48LL),
        *(_DWORD *)(*((_QWORD *)this + 91) + 52LL));
      a2->rgstate[1] = 0x8000;
      v11 = &a2->rgrect[2];
      v12 = &a2->rgstate[2];
      for ( i = 2; i <= 5; ++i )
      {
        v14 = 1LL;
        switch ( i )
        {
          case 2:
            v16 = 1;
            break;
          case 3:
            v16 = 2;
            v14 = 2LL;
            break;
          case 4:
            v16 = 0;
            v14 = 0LL;
            break;
          case 5:
            v16 = 3;
            v14 = 3LL;
            break;
        }
        v15 = *((_DWORD *)this + 148);
        if ( (v15 & dword_1800CC9B8[2 * v14]) != 0 )
        {
          if ( (v15 & dword_1800CC9B8[2 * v14 + 1]) != 0 )
          {
            if ( *(_DWORD *)(*((_QWORD *)this + v14 + 61) + 376LL) == 2 )
              *v12 |= 8u;
          }
          else
          {
            *v12 |= 1u;
          }
        }
        else
        {
          *v12 |= 0x8000u;
        }
        if ( (*v12 & 0x8000) == 0 )
        {
          CTopLevelWindow::NcAdornmentInfoQuery(this, (struct NCADORNMENT_INFO *)&v16);
          if ( (*((_BYTE *)this + 592) & 0x20) != 0 )
          {
            v17.top = *((_DWORD *)this + 163);
            if ( i == 5 )
              v17.right = *((_DWORD *)this + 30) - *((_DWORD *)this + 162);
          }
          *v11 = v17;
        }
        ++v12;
        ++v11;
      }
    }
    else
    {
      a2->rgstate[0] = v6 | 0x8000;
    }
  }
  else
  {
    *a3 = 0;
  }
}
