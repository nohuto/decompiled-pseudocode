/*
 * XREFs of _NtUserGetHimetricScaleFactorFromPixelLocation@20 @ 0x162E74
 * Callers:
 *     <none>
 * Callees:
 *     __MonitorFromPoint@16 @ 0x25420 (__MonitorFromPoint@16.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __GetPointerDeviceRects@12 @ 0xCB44C (__GetPointerDeviceRects@12.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 *     _GetHimetricScaleForMonitor@12 @ 0x151143 (_GetHimetricScaleForMonitor@12.c)
 */

int __stdcall NtUserGetHimetricScaleFactorFromPixelLocation(int a1, int **a2, int a3, _DWORD *a4, int *a5)
{
  int v5; // ebx
  _DWORD *v6; // edi
  int *v7; // esi
  int v8; // ecx
  unsigned int v9; // edx
  _DWORD *ScreenRect; // eax
  void *v11; // eax
  int v13[4]; // [esp+10h] [ebp-74h] BYREF
  _BYTE v14[8]; // [esp+20h] [ebp-64h] BYREF
  int v15; // [esp+2Ch] [ebp-58h]
  int v16; // [esp+34h] [ebp-50h]
  int v17; // [esp+38h] [ebp-4Ch] BYREF
  int **v18; // [esp+3Ch] [ebp-48h]
  unsigned int v19; // [esp+40h] [ebp-44h] BYREF
  int v20; // [esp+44h] [ebp-40h] BYREF
  _DWORD Buf2[4]; // [esp+48h] [ebp-3Ch] BYREF
  _DWORD Buf1[5]; // [esp+58h] [ebp-2Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+6Ch] [ebp-18h]

  v20 = a1;
  v18 = a2;
  v16 = a3;
  v5 = 1;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  memset(Buf1, 0, 16);
  v17 = 0;
  if ( !a1 )
    goto LABEL_18;
  v6 = a4;
  if ( !a4 )
    goto LABEL_18;
  v7 = a5;
  if ( !a5 )
    goto LABEL_18;
  if ( !ResolveMouseOrPointerDevice(v20, &v17, 0) || *(_DWORD *)(v17 + 12) != 7 )
  {
    if ( _GetPointerDeviceRects(v20, 0, Buf1) )
    {
      v8 = 1;
      v20 = 1;
      v9 = 1;
      v19 = 1;
      if ( *(_DWORD *)*_gpDispInfo > 1u )
      {
        ScreenRect = GetScreenRect(v13);
        Buf2[0] = *ScreenRect;
        Buf2[1] = ScreenRect[1];
        Buf2[2] = ScreenRect[2];
        Buf2[3] = ScreenRect[3];
        if ( !memcmp(Buf1, Buf2, 0x10u) )
        {
          v11 = (void *)_MonitorFromPoint((int)v18, v16, 2u, 0);
          GetHimetricScaleForMonitor(v11, &v19, (unsigned int *)&v20);
          v9 = v19;
          v8 = v20;
        }
        else
        {
          v8 = 1;
          v9 = 1;
        }
        v6 = a4;
        v7 = a5;
      }
      goto LABEL_13;
    }
LABEL_18:
    v5 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_19;
  }
  v8 = 1;
  v20 = 1;
  v9 = 1;
  v19 = 1;
LABEL_13:
  ms_exc.registration.TryLevel = 0;
  v18 = (int **)_MmUserProbeAddress;
  if ( (unsigned int)v6 >= _MmUserProbeAddress )
    v6 = (_DWORD *)_MmUserProbeAddress;
  *v6 = v9;
  if ( v7 >= *v18 )
    v7 = *v18;
  *v7 = v8;
  v15 = 1;
  ms_exc.registration.TryLevel = -2;
LABEL_19:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit();
  return v5;
}
