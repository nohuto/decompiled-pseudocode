/*
 * XREFs of _NtUserDrawIconEx@44 @ 0x90A70
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z @ 0x750D8 (-GetVirtualizedCursorSize@@YGXPAUtagCURSOR@@PAH1@Z.c)
 *     ?GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z @ 0x7523E (-GetAnimatedCursorFrame@@YGPAUtagCURSOR@@QAUtagACON@@H@Z.c)
 *     ?GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x7528E (-GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __DrawIconEx@36 @ 0x90AF8 (__DrawIconEx@36.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserDrawIconEx(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        ULONG a11)
{
  int v11; // ebx
  _DWORD *v12; // eax
  struct tagCURSOR *VirtualizedDpiCursor; // eax
  INT *AnimatedCursorFrame; // esi
  int *v16; // [esp+0h] [ebp-3Ch]
  int *v17; // [esp+4h] [ebp-38h]
  _BYTE v18[8]; // [esp+10h] [ebp-2Ch] BYREF
  int v19; // [esp+1Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v11 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  v12 = (_DWORD *)HMValidateHandle(a4, 3);
  if ( v12 )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v12);
    AnimatedCursorFrame = (INT *)VirtualizedDpiCursor;
    if ( a10 )
    {
      if ( (*((_BYTE *)VirtualizedDpiCursor + 44) & 8) == 0
        || (AnimatedCursorFrame = (INT *)GetAnimatedCursorFrame((int)VirtualizedDpiCursor, 0)) != 0 )
      {
        ms_exc.registration.TryLevel = 0;
        if ( a11 >= _MmUserProbeAddress )
          *(_BYTE *)_MmUserProbeAddress = 0;
        *(_BYTE *)a11 = *(_BYTE *)a11;
        *(_BYTE *)(a11 + 27) = *(_BYTE *)(a11 + 27);
        *(_DWORD *)a11 = AnimatedCursorFrame[13];
        *(_DWORD *)(a11 + 4) = AnimatedCursorFrame[14];
        *(_DWORD *)(a11 + 24) = AnimatedCursorFrame[20];
        GetVirtualizedCursorSize((INT *)(a11 + 16), AnimatedCursorFrame, (INT *)(a11 + 20), v16, v17);
        *(_DWORD *)(a11 + 8) = AnimatedCursorFrame[22];
        *(_DWORD *)(a11 + 12) = AnimatedCursorFrame[23];
        v11 = 1;
        v19 = 1;
        ms_exc.registration.TryLevel = -2;
      }
    }
    else
    {
      v11 = _DrawIconEx(a1, a2, a3, VirtualizedDpiCursor, a5, a6, a7, a8, a9);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  UserSessionSwitchLeaveCrit();
  return v11;
}
