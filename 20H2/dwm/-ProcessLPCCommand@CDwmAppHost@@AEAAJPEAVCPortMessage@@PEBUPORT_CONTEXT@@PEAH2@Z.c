/*
 * XREFs of ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001130
 * Callers:
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001110 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 * Callees:
 *     ?LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z @ 0x1400012DC (-LpcNotifySettingsChange@CDwmAppHost@@AEAAJK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000171C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x1400017F0 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x1400024E4 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 *     IsDWMGhostHandleGhostMsgPresent @ 0x1400046E4 (IsDWMGhostHandleGhostMsgPresent.c)
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDwmAppHost::ProcessLPCCommand(
        CDwmAppHost *this,
        struct CPortMessage *a2,
        const struct PORT_CONTEXT *a3,
        int *a4,
        int *a5)
{
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // r10
  __int16 v10; // dx
  CDwmAppHost *v11; // rcx
  unsigned int v12; // eax
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  CDwmAppHost *v20; // rcx
  void *v21; // [rsp+28h] [rbp-10h]

  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct CPortMessage *, struct CPortMessage *, const struct PORT_CONTEXT *))(*(_QWORD *)a2 + 16LL))(
         a2,
         a2,
         a3);
  v9 = v8;
  v10 = *(_WORD *)(v8 + 4) >> 15;
  *a4 = 1;
  *a5 = 0;
  v11 = (CDwmAppHost *)((*(_WORD *)(v8 + 4) & 0x7FFFu) - 1);
  if ( (*(_WORD *)(v8 + 4) & 0x7FFF) == 1 )
  {
    v17 = *(_DWORD *)(v8 + 40);
    if ( v17 < 0x40000034 && v17 >= 0x20000004 )
      goto LABEL_5;
    v18 = v17 - 536870913;
    if ( v18 )
    {
      v19 = v18 - 2;
      if ( v19 )
      {
        if ( v19 != 536870961 )
          goto LABEL_5;
        if ( (_BYTE)v10 && (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
        {
          DWMGhostHandleGhostMsg(a2);
          *a5 = 1;
        }
      }
      else if ( *(_DWORD *)(v9 + 8) == (_DWORD)qword_140015B20 )
      {
        CSettingsManager::PropagateUserLogon((CSettingsManager *)&qword_140015B48, 0LL, 0LL, 1);
        (*(void (__fastcall **)(struct CPortMessage *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, 0LL);
        *a5 = 1;
      }
    }
    else if ( *(_DWORD *)(v9 + 8) == (_DWORD)qword_140015B20 )
    {
      (*(void (__fastcall **)(struct CPortMessage *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, 0LL);
      *a5 = 1;
      CDwmAppHost::Shutdown(v20, -805305602);
    }
  }
  else
  {
    if ( (*(_WORD *)(v8 + 4) & 0x7FFF) != 3 )
      return v7;
    v12 = *(_DWORD *)(v8 + 40);
    if ( v12 < 0x40000034 && v12 >= 0x20000003 )
      goto LABEL_5;
    v14 = v12 - 536870914;
    if ( v14 )
    {
      v15 = v14 - 536870962;
      if ( v15 )
      {
        if ( v15 == 2 )
        {
          if ( (_BYTE)v10 )
          {
            HIBYTE(word_140015BB0) = 1;
            v16 = CDwmAppHost::LpcNotifySettingsChange(v11, 0x21u);
            v7 = v16;
            if ( v16 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x204u, v21);
            HIBYTE(word_140015BB0) = 0;
            if ( (v7 & 0x80000000) != 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1A2u, v21);
          }
          return v7;
        }
LABEL_5:
        *a4 = 0;
        return v7;
      }
      if ( (_BYTE)v10 && (unsigned __int8)IsDWMGhostHandleGhostMsgPresent() )
        DWMGhostHandleGhostMsg(a2);
    }
    else if ( *(_DWORD *)(v9 + 8) == (_DWORD)qword_140015B20 )
    {
      CSettingsManager::PropagateUserLogon(
        (CSettingsManager *)&qword_140015B48,
        *(HKEY *)(v9 + 52),
        *(HKEY *)(v9 + 60),
        *(_DWORD *)(v9 + 68) != 0);
    }
  }
  return v7;
}
