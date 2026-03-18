/*
 * XREFs of _NtUserCopyAcceleratorTable@12 @ 0x9DBB2
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserCopyAcceleratorTable(int a1, char *Address, unsigned int a3)
{
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int i; // edx
  int v8; // ecx
  _BYTE v9[8]; // [esp+10h] [ebp-34h] BYREF
  int v10; // [esp+1Ch] [ebp-28h]
  int v11; // [esp+20h] [ebp-24h]
  int v12; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  v11 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
  v3 = HMValidateHandle(a1, 8);
  v4 = v3;
  if ( v3 )
  {
    if ( Address )
    {
      ms_exc.registration.TryLevel = 0;
      v5 = a3;
      if ( a3 > 0x2AAAAAAA )
        ExRaiseAccessViolation();
      ProbeForWrite(Address, 6 * a3, 1u);
      if ( (signed int)a3 > *(_DWORD *)(v4 + 12) )
        v5 = *(_DWORD *)(v4 + 12);
      v10 = v5;
      for ( i = 0; ; ++i )
      {
        v12 = i;
        if ( i >= v5 )
          break;
        v8 = 6 * i;
        *(_BYTE *)(v8 + v4 + 17) = 0;
        *(_DWORD *)&Address[v8] = *(_DWORD *)(6 * i + v4 + 16);
        *(_WORD *)&Address[v8 + 4] = *(_WORD *)(6 * i + v4 + 20);
        Address[v8] &= ~0x80u;
      }
      ms_exc.registration.TryLevel = -2;
    }
    else
    {
      v5 = *(_DWORD *)(v3 + 12);
    }
  }
  else
  {
    v5 = 0;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
  UserSessionSwitchLeaveCrit();
  return v5;
}
