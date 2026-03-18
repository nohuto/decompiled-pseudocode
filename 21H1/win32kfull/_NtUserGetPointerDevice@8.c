/*
 * XREFs of _NtUserGetPointerDevice@8 @ 0x163D8B
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __GetPointerDeviceInfoProperties@8 @ 0x159B80 (__GetPointerDeviceInfoProperties@8.c)
 */

int __stdcall NtUserGetPointerDevice(int a1, volatile void *Address)
{
  int v2; // esi
  _BYTE v4[8]; // [esp+10h] [ebp-30h] BYREF
  int v5; // [esp+1Ch] [ebp-24h]
  ULONG v6; // [esp+24h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v2 = 0;
  v6 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v4);
  if ( a1 && Address )
  {
    if ( ResolveMouseOrPointerDevice(a1, &v6, 0) )
    {
      ms_exc.registration.TryLevel = 0;
      ProbeForWrite(Address, 0x428u, 4u);
      _GetPointerDeviceInfoProperties((size_t)Address, v6);
      v2 = 1;
      v5 = 1;
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v4);
  UserSessionSwitchLeaveCrit();
  return v2;
}
