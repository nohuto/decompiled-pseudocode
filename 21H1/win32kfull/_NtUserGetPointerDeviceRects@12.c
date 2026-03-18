/*
 * XREFs of _NtUserGetPointerDeviceRects@12 @ 0xCB364
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __GetPointerDeviceRects@12 @ 0xCB44C (__GetPointerDeviceRects@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 */

int __stdcall NtUserGetPointerDeviceRects(int a1, _DWORD *a2, ULONG a3)
{
  int v3; // ebx
  _DWORD *v4; // eax
  _DWORD *v5; // edi
  _DWORD *v6; // edx
  _BYTE v8[8]; // [esp+20h] [ebp-4Ch] BYREF
  int v9; // [esp+2Ch] [ebp-40h]
  _DWORD *v10; // [esp+34h] [ebp-38h]
  int v11; // [esp+38h] [ebp-34h]
  ULONG v12; // [esp+3Ch] [ebp-30h]
  int v13; // [esp+40h] [ebp-2Ch] BYREF
  int v14; // [esp+44h] [ebp-28h]
  int v15; // [esp+48h] [ebp-24h]
  int v16; // [esp+4Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+54h] [ebp-18h]

  v11 = a1;
  v10 = a2;
  v12 = a3;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v3 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  if ( v11 && a2 && v12 && _GetPointerDeviceRects(&v13) )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a2 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    v4 = v10;
    v5 = v10;
    *v10 = *a2;
    *++v5 = a2[1];
    *++v5 = a2[2];
    v5[1] = a2[3];
    v6 = (_DWORD *)v12;
    if ( v12 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    *v6 = *v6;
    v6[1] = v6[1];
    v6[2] = v6[2];
    v6[3] = v6[3];
    *v4 = 0;
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
    *v6 = v13;
    v6[1] = v14;
    v6[2] = v15;
    v6[3] = v16;
    v3 = 1;
    v9 = 1;
    ms_exc.registration.TryLevel = -2;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  UserSessionSwitchLeaveCrit();
  return v3;
}
