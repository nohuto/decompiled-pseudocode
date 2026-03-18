/*
 * XREFs of ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01DBD24
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DBBBC (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DC64C (xxxInjectTouchInput.c)
 * Callees:
 *     CreateTouchInputBuffer @ 0x1C01DD9F8 (CreateTouchInputBuffer.c)
 */

void __fastcall xxxSendToTouchStack(struct DEVICEINFO *a1, unsigned int a2, struct tagPOINTER_TOUCH_INFO *a3, ULONG a4)
{
  __int64 v4; // rax
  int v6; // r15d
  unsigned int v9; // ebp
  ULONG v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 CurrentProcessWin32Process; // rax

  v4 = *((_QWORD *)a1 + 58);
  *((_DWORD *)a1 + 64) = 0;
  v6 = (int)a3;
  v9 = 0;
  for ( *((_QWORD *)a1 + 33) = *(unsigned __int16 *)(v4 + 44); v9 < a2; v9 += 4 )
  {
    v10 = a4;
    if ( v9 )
      v10 = 0;
    CreateTouchInputBuffer((int)a1, a2, v6, v9, v10);
    v14 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v12, v11, v13) + 896);
    v15 = *(_QWORD *)(v14 + 88);
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v16, v17);
    RIMInjectInput(
      v15,
      *(_QWORD *)(*(_QWORD *)(CurrentProcessWin32Process + 896) + 96LL),
      0LL,
      *(_QWORD *)(*((_QWORD *)a1 + 58) + 24LL),
      *(unsigned __int16 *)(*((_QWORD *)a1 + 58) + 44LL));
  }
}
