/*
 * XREFs of _NtUserGetOwnerTransformedMonitorRect@16 @ 0x163BDD
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __GetOwnerTransformedMonitorRect@16 @ 0x151D96 (__GetOwnerTransformedMonitorRect@16.c)
 */

int __stdcall NtUserGetOwnerTransformedMonitorRect(int a1, int a2, int a3, ULONG a4)
{
  int v4; // esi
  _DWORD *v5; // ebx
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v8; // edi
  int v10; // [esp+10h] [ebp-38h] BYREF
  int v11; // [esp+14h] [ebp-34h]
  int v12; // [esp+18h] [ebp-30h]
  int v13; // [esp+1Ch] [ebp-2Ch]
  _BYTE v14[8]; // [esp+20h] [ebp-28h] BYREF
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v4 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v5 = (_DWORD *)ValidateHwnd(a1);
  if ( v5 )
  {
    v6 = (_DWORD *)ValidateHmonitor(a2);
    if ( v6 && (v7 = (_DWORD *)a4) != 0 )
    {
      _GetOwnerTransformedMonitorRect(v5, v6, a3, &v10);
      ms_exc.registration.TryLevel = 0;
      if ( a4 >= _MmUserProbeAddress )
        v7 = (_DWORD *)_MmUserProbeAddress;
      *v7 = v10;
      v8 = v7 + 1;
      *v8++ = v11;
      *v8 = v12;
      v8[1] = v13;
      ms_exc.registration.TryLevel = -2;
      v4 = 1;
    }
    else
    {
      UserSetLastError((struct _NT_TIB *)0x57);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit();
  return v4;
}
