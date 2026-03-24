/*
 * XREFs of ?ProcessTrigger@CLegacyAnimationTrigger@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER@@@Z @ 0x18001FD18
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x180029EC0 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CLegacyAnimationTrigger::ProcessTrigger(
        CLegacyAnimationTrigger *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYANIMATIONTRIGGER_TRIGGER *a3)
{
  __int64 v3; // rsi
  int v4; // edi
  __int64 v6; // rbp
  _QWORD *v8; // rcx
  int v9; // eax
  unsigned int v10; // ecx

  v3 = *((_QWORD *)a3 + 1);
  v4 = 0;
  if ( !v3 )
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 456LL);
  v6 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= *((_DWORD *)this + 20) )
    {
LABEL_5:
      *((_QWORD *)this + 11) = v3;
      return (unsigned int)v4;
    }
    v8 = *(_QWORD **)(*((_QWORD *)this + 7) + 8 * v6);
    if ( v8[15] )
    {
      v8[17] = v3;
      v8[26] = v3;
      v9 = CBaseAnimation::RegisterAnimateResource(*(CBaseAnimation **)(*((_QWORD *)this + 7) + 8 * v6));
      v4 = v9;
      if ( v9 < 0 )
        break;
    }
    v6 = (unsigned int)(v6 + 1);
    if ( v4 < 0 )
      goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x21u, 0LL);
  return (unsigned int)v4;
}
