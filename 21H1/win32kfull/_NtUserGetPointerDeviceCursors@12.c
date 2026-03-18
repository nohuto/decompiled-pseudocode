/*
 * XREFs of _NtUserGetPointerDeviceCursors@12 @ 0x163E51
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __GetPointerDeviceCursors@12 @ 0x159AF3 (__GetPointerDeviceCursors@12.c)
 */

int __stdcall NtUserGetPointerDeviceCursors(int a1, ULONG a2, volatile void *Address)
{
  int PointerDeviceCursors; // esi
  _DWORD *v4; // edi
  unsigned int v5; // ebx
  unsigned int *v6; // ecx
  _BYTE v8[8]; // [esp+10h] [ebp-38h] BYREF
  int v9; // [esp+28h] [ebp-20h] BYREF
  int v10; // [esp+2Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+30h] [ebp-18h]

  PointerDeviceCursors = 0;
  v9 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v8);
  if ( a1 && (v4 = (_DWORD *)a2) != 0 )
  {
    if ( ResolveMouseOrPointerDevice(a1, &v9, 0) )
    {
      v5 = *(_DWORD *)(v9 + 868);
      if ( Address )
      {
        ms_exc.registration.TryLevel = 1;
        v6 = (unsigned int *)a2;
        if ( a2 >= _MmUserProbeAddress )
          v6 = (unsigned int *)_MmUserProbeAddress;
        if ( *v6 >= v5 )
        {
          ProbeForWrite(Address, 8 * v5, 4u);
          PointerDeviceCursors = _GetPointerDeviceCursors(v9, v5, (int)Address);
          v10 = PointerDeviceCursors;
          if ( PointerDeviceCursors )
          {
            if ( a2 >= _MmUserProbeAddress )
              v4 = (_DWORD *)_MmUserProbeAddress;
            *v4 = v5;
          }
        }
        else
        {
          if ( a2 >= _MmUserProbeAddress )
            v4 = (_DWORD *)_MmUserProbeAddress;
          *v4 = v5;
          v10 = 0;
          UserSetLastError((struct _NT_TIB *)0x7A);
        }
      }
      else
      {
        ms_exc.registration.TryLevel = 0;
        if ( a2 >= _MmUserProbeAddress )
          v4 = (_DWORD *)_MmUserProbeAddress;
        *v4 = v5;
        PointerDeviceCursors = 1;
        v10 = 1;
      }
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
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v8);
  UserSessionSwitchLeaveCrit();
  return PointerDeviceCursors;
}
