/*
 * XREFs of ?_UpdateLinkInfo@DXGMONITOR@@QEAAJ_N@Z @ 0x1C0208D18
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0208B34 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJPEAV1@AEAVIMonitorDeferredEventSource@DxgMonitor@.c)
 *     ?OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1C020B690 (-OnUsageUpdated@DXGMONITOR@@QEAAXAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGMONITOR::_UpdateLinkInfo(DXGMONITOR *this, unsigned __int8 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // ebx
  char v5; // r14
  int v6; // eax
  __int64 v7; // rcx
  int v8; // esi
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rcx
  int v12; // ebx
  char v13; // al
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // eax
  DXGMONITOR *v19; // rdx
  __int64 v20; // r8
  __int128 v21; // [rsp+20h] [rbp-20h] BYREF

  *((_BYTE *)this + 177) &= ~4u;
  v3 = *((_QWORD *)this + 21);
  v21 = 0LL;
  v4 = a2;
  v5 = 1;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3) < 0x7000 )
  {
    v8 = -1073741637;
    goto LABEL_34;
  }
  v6 = *((_DWORD *)this + 45);
  v7 = *((_QWORD *)this + 24);
  HIDWORD(v21) = 0;
  LODWORD(v21) = v6;
  *(_QWORD *)((char *)&v21 + 4) = v4;
  v8 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 48LL))(v7, (char *)&v21 + 4);
  if ( v8 < 0 )
  {
    v5 = 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 24) + 96LL))(*((_QWORD *)this + 24), &v21);
    v8 = v9;
    if ( v9 < 0 )
    {
      if ( v9 != -1073741637 )
        WdLogSingleEntry3(2LL, this, *((unsigned int *)this + 45), v9);
      goto LABEL_34;
    }
  }
  v10 = 127;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 64LL))(*((_QWORD *)this + 21)) )
    v10 = 1663;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21)) >= 2600 )
  {
    if ( SBYTE8(v21) < 0 )
      WdLogSingleEntry1(2LL, *((unsigned int *)this + 45));
    v10 |= 0x800u;
  }
  v11 = *((_QWORD *)this + 21);
  DWORD2(v21) &= ~0x80u;
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11) < 2400 )
  {
    if ( (~v10 & DWORD2(v21)) != 0 )
    {
      WdLogSingleEntry1(2LL, *((unsigned int *)this + 45));
      DWORD2(v21) &= v10;
    }
    goto LABEL_17;
  }
  v12 = v10 | 0x300;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21)) >= 2500 )
    v12 |= 0x400u;
  if ( (~v12 & DWORD2(v21)) == 0
    && ((*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21)) > 2400
     || v5
     || (WORD4(v21) & 0x100) == 0) )
  {
    if ( ((WORD4(v21) & 0x200) != 0 || (WORD4(v21) & 0x400) != 0)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 64LL))(*((_QWORD *)this + 21))
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 72LL))(*((_QWORD *)this + 21)) )
    {
      v8 = -1073741823;
      v20 = *((unsigned int *)this + 45);
      v19 = this;
      goto LABEL_33;
    }
LABEL_17:
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 96LL))(*((_QWORD *)this + 21));
    v14 = DWORD2(v21);
    if ( v13 )
    {
      v14 = DWORD2(v21) | 0x800;
      DWORD2(v21) |= 0x800u;
    }
    v15 = DWORD1(v21);
    *((_BYTE *)this + 177) |= 4u;
    *((_DWORD *)this + 90) = v14;
    v16 = *((_QWORD *)this + 21);
    *((_DWORD *)this + 89) = v15;
    if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16) >= 2400 )
    {
      v17 = HIDWORD(v21);
      *((_DWORD *)this + 91) = HIDWORD(v21);
      if ( (v17 & 3) == 0 )
        return (unsigned int)v8;
      WdLogSingleEntry3(2LL, v17, this, *((unsigned int *)this + 45));
    }
    *((_DWORD *)this + 91) = 0;
    return (unsigned int)v8;
  }
  v8 = -1073741823;
  v19 = (DXGMONITOR *)*((unsigned int *)this + 45);
  v20 = -1073741823LL;
LABEL_33:
  WdLogSingleEntry2(2LL, v19, v20);
LABEL_34:
  *(_QWORD *)((char *)this + 356) = 0LL;
  *((_DWORD *)this + 91) = 0;
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 21) + 8LL))(*((_QWORD *)this + 21)) >= 2400 )
    WdLogSingleEntry2(2LL, *((unsigned int *)this + 45), v8);
  else
    return 0;
  return (unsigned int)v8;
}
