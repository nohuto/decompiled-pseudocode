/*
 * XREFs of _NtUserGetPhysicalDeviceRect@8 @ 0x163CBA
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserGetPhysicalDeviceRect(int a1, _DWORD *a2)
{
  int v2; // esi
  _DWORD *v3; // esi
  _BYTE v5[8]; // [esp+10h] [ebp-30h] BYREF
  int v6; // [esp+1Ch] [ebp-24h]
  int v7; // [esp+24h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v2 = 0;
  v7 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
  if ( a1 && a2 )
  {
    if ( ResolveMouseOrPointerDevice(a1, &v7, 0) )
    {
      ms_exc.registration.TryLevel = 0;
      if ( (unsigned int)a2 >= _MmUserProbeAddress )
        *(_DWORD *)_MmUserProbeAddress = 0;
      *a2 = *a2;
      a2[1] = a2[1];
      a2[2] = a2[2];
      a2[3] = a2[3];
      v3 = (_DWORD *)(v7 + 128);
      *a2 = *(_DWORD *)(v7 + 128);
      a2[1] = *++v3;
      a2[2] = *++v3;
      a2[3] = v3[1];
      v2 = 1;
      v6 = 1;
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)6);
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
  UserSessionSwitchLeaveCrit();
  return v2;
}
