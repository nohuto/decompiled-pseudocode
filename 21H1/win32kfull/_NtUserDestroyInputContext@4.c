/*
 * XREFs of _NtUserDestroyInputContext@4 @ 0x160B48
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _DestroyInputContext@4 @ 0x14F099 (_DestroyInputContext@4.c)
 */

int __stdcall NtUserDestroyInputContext(int a1)
{
  int v1; // esi
  _DWORD *v2; // eax
  _BYTE v4[8]; // [esp+4h] [ebp-8h] BYREF

  v1 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v4);
  if ( (*_gpsi & 4) != 0 )
  {
    v2 = (_DWORD *)HMValidateHandle(a1, 17);
    if ( v2 )
      v1 = DestroyInputContext(v2);
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x78);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v4);
  UserSessionSwitchLeaveCrit();
  return v1;
}
