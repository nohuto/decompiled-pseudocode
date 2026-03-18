/*
 * XREFs of _NtUserDestroyCursor@8 @ 0x7857C
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     ?_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z @ 0x785EE (-_DestroyCursor@@YG_NPAUtagCURSOR@@K@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

BOOL __stdcall NtUserDestroyCursor(int a1, int a2)
{
  BOOL v2; // esi
  int v3; // edi
  struct tagCURSOR *v5; // [esp+0h] [ebp-10h]
  unsigned int v6; // [esp+4h] [ebp-Ch]
  _BYTE v7[8]; // [esp+8h] [ebp-8h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v7);
  v3 = HMValidateHandle(a1, 3);
  if ( v3 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        UserSetLastError(87);
        goto LABEL_6;
      }
    }
    else if ( PsGetCurrentProcess() != _gpepCSRSS && *(_DWORD *)(v3 + 12) != PsGetCurrentProcessWin32Process() )
    {
      goto LABEL_8;
    }
    if ( *(_DWORD *)(v3 + 24) == v3 )
    {
      v2 = _DestroyCursor(v5, v6);
      goto LABEL_6;
    }
LABEL_8:
    UserSetLastError(5);
  }
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v7);
  UserSessionSwitchLeaveCrit();
  return v2;
}
