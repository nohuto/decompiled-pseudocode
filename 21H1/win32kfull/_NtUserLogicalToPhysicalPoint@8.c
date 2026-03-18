/*
 * XREFs of _NtUserLogicalToPhysicalPoint@8 @ 0x1660DB
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _DCEPtInRect@12 @ 0x150BB6 (_DCEPtInRect@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserLogicalToPhysicalPoint(int a1, int *a2)
{
  int v2; // ebx
  int v3; // esi
  int *v4; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // eax
  int v9; // ecx
  int v10; // eax
  BOOL v11; // eax
  int v13; // [esp+10h] [ebp-3Ch] BYREF
  int v14; // [esp+14h] [ebp-38h]
  int v15; // [esp+18h] [ebp-34h] BYREF
  int v16; // [esp+1Ch] [ebp-30h]
  int v17; // [esp+2Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]
  int v19; // [esp+54h] [ebp+8h]
  int v20; // [esp+54h] [ebp+8h]
  BOOL v21; // [esp+54h] [ebp+8h]

  v2 = 0;
  v15 = 0;
  v16 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v3 = ValidateHwnd(a1);
  v19 = v3;
  if ( v3 )
  {
    ms_exc.registration.TryLevel = 0;
    v4 = (int *)_MmUserProbeAddress;
    if ( (unsigned int)a2 < _MmUserProbeAddress )
      v4 = a2;
    v15 = *v4;
    v16 = v4[1];
    ms_exc.registration.TryLevel = -2;
    CurrentThread = KeGetCurrentThread();
    if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 260) + 148) & 1) != 0 )
      goto LABEL_16;
    v6 = KeGetCurrentThread();
    if ( (*(_BYTE *)(*(_DWORD *)(W32GetThreadWin32Thread(v6) + 260) + 148) & 0x20) != 0 )
      goto LABEL_16;
    v7 = *(_DWORD *)(*(_DWORD *)(v3 + 20) + 184);
    v8 = (v7 >> 8) ^ ((unsigned int)W32GetCurrentThreadDpiAwarenessContext() >> 8);
    v3 = v19;
    if ( (v8 & 0x1FF) != 0 )
      goto LABEL_15;
    v9 = *(_DWORD *)(*(_DWORD *)(v19 + 20) + 184);
    if ( (v9 & 0xF) != 2 || (v20 = 1, (v9 & 0x20000000) == 0) )
      v20 = 0;
    v10 = (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2
       && (W32GetCurrentThreadDpiAwarenessContext() & 0x20000000) != 0;
    if ( v20 == v10 )
    {
LABEL_16:
      v21 = DCEPtInRect((_DWORD *)(*(_DWORD *)(v3 + 20) + 52), v15, v16);
      TransformPointBetweenCoordinateSpaces(&v15, &v15, 0, v3);
      v11 = v21;
    }
    else
    {
LABEL_15:
      v13 = 0;
      v14 = 0;
      TransformPointBetweenCoordinateSpaces(&v13, &v15, v3, 0);
      v11 = DCEPtInRect((_DWORD *)(*(_DWORD *)(v3 + 20) + 52), v13, v14);
    }
    if ( v11 )
    {
      ms_exc.registration.TryLevel = 1;
      if ( (unsigned int)a2 >= _MmUserProbeAddress )
        *(_DWORD *)_MmUserProbeAddress = 0;
      *a2 = *a2;
      a2[1] = a2[1];
      *a2 = v15;
      a2[1] = v16;
      v2 = 1;
      v17 = 1;
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
