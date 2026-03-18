/*
 * XREFs of _NtUserAssociateInputContext@12 @ 0xAE5CC
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _AssociateInputContextEx@12 @ 0xAE640 (_AssociateInputContextEx@12.c)
 */

int __stdcall NtUserAssociateInputContext(int a1, int a2, int a3)
{
  int v3; // esi
  _BYTE v5[8]; // [esp+8h] [ebp-8h] BYREF

  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
  if ( !ValidateHwnd(a1) )
    goto LABEL_7;
  if ( (*_gpsi & 4) == 0 )
  {
    UserSetLastError((struct _NT_TIB *)0x78);
LABEL_7:
    v3 = 2;
    goto LABEL_5;
  }
  if ( a2 && !HMValidateHandle(a2, 17) )
    goto LABEL_7;
  v3 = AssociateInputContextEx(a3);
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
  UserSessionSwitchLeaveCrit();
  return v3;
}
