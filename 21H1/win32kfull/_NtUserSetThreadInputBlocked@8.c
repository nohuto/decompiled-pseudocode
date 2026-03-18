/*
 * XREFs of _NtUserSetThreadInputBlocked@8 @ 0xC362A
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  unsigned int v4; // eax
  _BYTE v6[8]; // [esp+4h] [ebp-8h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  if ( a1 != 4096 )
    goto LABEL_9;
  v3 = *(_DWORD *)(_gptiCurrent + 688);
  if ( !a2 )
  {
    if ( (v3 & 0x8000) != 0 )
      goto LABEL_4;
LABEL_9:
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_7;
  }
  if ( (v3 & 0x8000) != 0 )
    goto LABEL_9;
LABEL_4:
  if ( a2 )
    v4 = v3 | 0x8000;
  else
    v4 = v3 & 0xFFFF7FFF;
  *(_DWORD *)(_gptiCurrent + 688) = v4;
  v2 = 1;
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  UserSessionSwitchLeaveCrit();
  return v2;
}
