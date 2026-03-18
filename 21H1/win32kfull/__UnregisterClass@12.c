/*
 * XREFs of __UnregisterClass@12 @ 0x47C72
 * Callers:
 *     _NtUserUnregisterClass@12 @ 0x48404 (_NtUserUnregisterClass@12.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     __InnerGetClassPtr@12 @ 0x47482 (__InnerGetClassPtr@12.c)
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall _UnregisterClass(unsigned __int16 *Atom, int a2, _DWORD *a3)
{
  _DWORD *v4; // ebx
  _DWORD *ClassPtr; // edx
  int v6; // ecx
  unsigned int v8; // [esp+0h] [ebp-44h]
  const unsigned __int16 *v9; // [esp+4h] [ebp-40h]
  _BYTE v10[8]; // [esp+10h] [ebp-34h] BYREF
  int v11; // [esp+1Ch] [ebp-28h]
  _DWORD *v12; // [esp+20h] [ebp-24h]
  int v13; // [esp+24h] [ebp-20h]
  unsigned __int16 *v14; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v11 = a2;
  v13 = 0;
  v12 = (_DWORD *)_gptiCurrent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v10);
  ms_exc.registration.TryLevel = 0;
  if ( ((unsigned int)Atom & 0xFFFF0000) != 0 )
  {
    if ( RtlStringCchCopyW(Atom, v8, v9) < 0 )
      Atom = 0;
    else
      Atom = (unsigned __int16 *)(unsigned __int16)UserFindAtom(&gawchAtomScratch);
  }
  else
  {
    Atom = (unsigned __int16 *)(unsigned __int16)Atom;
  }
  v14 = Atom;
  ms_exc.registration.TryLevel = -2;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v10);
  v4 = v12;
  v12 = (_DWORD *)v12[58];
  ClassPtr = _InnerGetClassPtr((__int16)Atom, v12 + 48, v11);
  if ( !ClassPtr )
  {
    ClassPtr = _InnerGetClassPtr((__int16)Atom, v12 + 49, 0);
    if ( !ClassPtr )
    {
      v6 = 1411;
LABEL_7:
      UserSetLastError(v6);
      return 0;
    }
    v13 = 1;
  }
  if ( *(_DWORD *)(*ClassPtr + 40) )
  {
    v6 = 1412;
    goto LABEL_7;
  }
  *a3 = *(_DWORD *)(*(_DWORD *)(*ClassPtr + 4) + 16);
  a3[1] = *(_DWORD *)(*(_DWORD *)(*ClassPtr + 4) + 20);
  a3[2] = 0;
  if ( v13 )
    *(_DWORD *)(v4[58] + 8) &= ~0x2000u;
  DestroyClass(v4[58], (_DWORD **)ClassPtr);
  return 1;
}
