/*
 * XREFs of _NtUserGetRawInputData@20 @ 0x164590
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtUserGetRawInputData(int a1, int a2, _DWORD *Address, ULONG a4, void *Src)
{
  int v5; // esi
  SIZE_T v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // edi
  _DWORD *v9; // ecx
  _DWORD *v10; // ecx
  SIZE_T *v11; // esi
  _DWORD *v12; // edi
  _BYTE v14[8]; // [esp+10h] [ebp-44h] BYREF
  SIZE_T v15; // [esp+24h] [ebp-30h]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]
  _DWORD *Srca; // [esp+6Ch] [ebp+18h]

  v5 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  v6 = 16;
  if ( Src != (void *)16 )
    goto LABEL_2;
  v7 = (_DWORD *)HMValidateHandle(a1, 18);
  if ( !v7 || (Srca = v7 + 4, v7[4] > 2u) )
  {
    UserSetLastError((struct _NT_TIB *)6);
    v5 = -1;
    goto LABEL_27;
  }
  if ( a2 == 268435459 )
  {
    v6 = v7[5];
  }
  else if ( a2 != 268435461 )
  {
LABEL_2:
    v5 = -1;
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_27;
  }
  v8 = Address;
  if ( !Address )
  {
    ms_exc.registration.TryLevel = 0;
    v9 = (_DWORD *)a4;
    if ( a4 >= _MmUserProbeAddress )
      v9 = (_DWORD *)_MmUserProbeAddress;
    *v9 = v6;
LABEL_13:
    ms_exc.registration.TryLevel = -2;
    goto LABEL_27;
  }
  ms_exc.registration.TryLevel = 1;
  v10 = (_DWORD *)a4;
  v11 = (SIZE_T *)a4;
  if ( a4 >= _MmUserProbeAddress )
    v11 = (SIZE_T *)_MmUserProbeAddress;
  v15 = *v11;
  ms_exc.registration.TryLevel = -2;
  if ( v15 < v6 )
  {
    v5 = -1;
    ms_exc.registration.TryLevel = 3;
    if ( a4 >= _MmUserProbeAddress )
      v10 = (_DWORD *)_MmUserProbeAddress;
    *v10 = v6;
    UserSetLastError((struct _NT_TIB *)0x7A);
    goto LABEL_13;
  }
  ms_exc.registration.TryLevel = 2;
  if ( a2 == 268435459 )
  {
    ProbeForWrite(Address, v6, 4u);
    memcpy(Address, Srca, v6);
  }
  else
  {
    if ( (unsigned int)Address >= _MmUserProbeAddress )
      v8 = (_DWORD *)_MmUserProbeAddress;
    *v8 = *Srca;
    v12 = v8 + 1;
    *v12++ = v7[5];
    *v12 = v7[6];
    v12[1] = v7[7];
  }
  ms_exc.registration.TryLevel = -2;
  v5 = v6;
LABEL_27:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit();
  return v5;
}
