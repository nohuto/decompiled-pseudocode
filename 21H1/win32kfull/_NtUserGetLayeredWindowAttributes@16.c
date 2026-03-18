/*
 * XREFs of _NtUserGetLayeredWindowAttributes@16 @ 0x1635F9
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __GetLayeredWindowAttributes@16 @ 0x153A92 (__GetLayeredWindowAttributes@16.c)
 */

int __stdcall NtUserGetLayeredWindowAttributes(int a1, ULONG a2, ULONG a3, ULONG a4)
{
  int v4; // eax
  int v5; // esi
  int LayeredWindowAttributes; // esi
  struct HWND__ *v7; // ecx
  _BYTE *v8; // ecx
  _DWORD *v9; // ecx
  _BYTE v11[8]; // [esp+10h] [ebp-34h] BYREF
  unsigned int v12; // [esp+20h] [ebp-24h] BYREF
  struct HWND__ v13; // [esp+24h] [ebp-20h] BYREF
  char v14; // [esp+2Bh] [ebp-19h] BYREF
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v13.unused = 0;
  v14 = 0;
  v12 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v11);
  v4 = ValidateHwnd(a1);
  v5 = v4;
  if ( !v4 )
    goto LABEL_2;
  if ( IsWindowDesktopComposed(v4) && (*(_BYTE *)(*(_DWORD *)(v5 + 20) + 144) & 0x20) != 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
LABEL_2:
    LayeredWindowAttributes = 0;
    goto LABEL_20;
  }
  LayeredWindowAttributes = _GetLayeredWindowAttributes(v5, &v13, &v14, &v12);
  if ( LayeredWindowAttributes )
  {
    ms_exc.registration.TryLevel = 0;
    v7 = (struct HWND__ *)a2;
    if ( a2 )
    {
      if ( a2 >= _MmUserProbeAddress )
        v7 = (struct HWND__ *)_MmUserProbeAddress;
      *(_DWORD *)v7 = v13.unused;
    }
    v8 = (_BYTE *)a3;
    if ( a3 )
    {
      if ( a3 >= _MmUserProbeAddress )
        v8 = (_BYTE *)_MmUserProbeAddress;
      *v8 = v14;
    }
    v9 = (_DWORD *)a4;
    if ( a4 )
    {
      if ( a4 >= _MmUserProbeAddress )
        v9 = (_DWORD *)_MmUserProbeAddress;
      *v9 = v12 & 3;
    }
    ms_exc.registration.TryLevel = -2;
  }
LABEL_20:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v11);
  UserSessionSwitchLeaveCrit();
  return LayeredWindowAttributes;
}
