/*
 * XREFs of ?ResetDragThresholds@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C122C
 * Callers:
 *     ?DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z @ 0x1C01BE1F0 (-DoTPButtonProcessing@CPTPEngine@@AEAAHPEAUPTPInput@@HKPEAH@Z.c)
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z @ 0x1C01BF3D4 (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@KW4tagPTP_PROCESSING_MODE@@@Z.c)
 *     ?ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z @ 0x1C01C0ED8 (-ProcessTapsFor3orMoreContacts@CPTPEngine@@AEAAHPEAUPTPInput@@K@Z.c)
 *     ?RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1C01C12CC (-RunStateMachine@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     ?SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z @ 0x1C01C2D08 (-SetupDragRectsForContact@CPTPEngine@@AEAAXPEAUCContactState@@@Z.c)
 */

void __fastcall CPTPEngine::ResetDragThresholds(CPTPEngine *this, struct PTPInput *a2)
{
  unsigned int v2; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  char *v7; // rsi
  int v8; // eax

  v2 = 0;
  if ( *((_DWORD *)a2 + 12) )
  {
    v5 = (_QWORD *)((char *)a2 + 96);
    do
    {
      v6 = (unsigned int)(*((_DWORD *)v5 - 9) % *((_DWORD *)this + 4));
      v7 = (char *)this + 392 * v6 + 1160;
      v8 = *(_DWORD *)v7;
      if ( (*(_DWORD *)v7 & 1) != 0 )
      {
        if ( (v8 & 2) == 0 )
        {
          *((_QWORD *)v7 + 1) = *v5;
          *((_QWORD *)v7 + 5) = *v5;
          CPTPEngine::SetupDragRectsForContact(this, (CPTPEngine *)((char *)this + 392 * v6 + 1160));
          v8 = *(_DWORD *)v7;
        }
        *(_DWORD *)v7 = v8 & 0xFFFDFFFB;
      }
      ++v2;
      v5 += 12;
    }
    while ( v2 < *((_DWORD *)a2 + 12) );
  }
}
