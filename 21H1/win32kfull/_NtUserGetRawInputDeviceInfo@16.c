/*
 * XREFs of _NtUserGetRawInputDeviceInfo@16 @ 0xC336E
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __stdcall NtUserGetRawInputDeviceInfo(size_t MaxCount, int a2, _BYTE *Address, ULONG a4)
{
  int v4; // ebx
  SIZE_T *v5; // edx
  int v6; // eax
  int v7; // edi
  SIZE_T v8; // ecx
  _DWORD *v9; // eax
  int v11; // ecx
  _DWORD *v12; // eax
  int v13; // [esp-4h] [ebp-64h]
  _BYTE v14[8]; // [esp+10h] [ebp-50h] BYREF
  int v15; // [esp+34h] [ebp-2Ch]
  SIZE_T v16; // [esp+3Ch] [ebp-24h]
  SIZE_T Length; // [esp+40h] [ebp-20h]
  int v18; // [esp+44h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]
  size_t MaxCounta; // [esp+68h] [ebp+8h]

  v4 = 0;
  v16 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
  ms_exc.registration.TryLevel = 0;
  v5 = (SIZE_T *)a4;
  if ( a4 >= _MmUserProbeAddress )
    v5 = (SIZE_T *)_MmUserProbeAddress;
  Length = *v5;
  v16 = Length;
  ms_exc.registration.TryLevel = -2;
  v6 = HMValidateHandle(MaxCount, 19);
  v7 = v6;
  v15 = v6;
  if ( !v6 )
  {
    UserSetLastError((struct _NT_TIB *)6);
    goto LABEL_31;
  }
  if ( a2 != 536870917 )
  {
    switch ( a2 )
    {
      case 536870919:
        v8 = (*(unsigned __int16 *)(v6 + 128) >> 1) + 1;
LABEL_7:
        MaxCounta = v8;
        goto LABEL_8;
      case 536870923:
        v13 = 32;
LABEL_16:
        v8 = v13;
        goto LABEL_7;
      case 536870924:
        v13 = 44;
        goto LABEL_16;
    }
    UserSetLastError((struct _NT_TIB *)0x57);
LABEL_31:
    v4 = -1;
    goto LABEL_13;
  }
  if ( *(_BYTE *)(v6 + 24) == 2 )
  {
    v8 = *(_DWORD *)(*(_DWORD *)(v6 + 276) + 84);
    goto LABEL_7;
  }
  v8 = 0;
  MaxCounta = 0;
LABEL_8:
  if ( !Address )
  {
    ms_exc.registration.TryLevel = 1;
    v9 = (_DWORD *)a4;
    if ( a4 >= _MmUserProbeAddress )
      v9 = (_DWORD *)_MmUserProbeAddress;
    *v9 = v8;
    goto LABEL_12;
  }
  if ( Length < v8 )
  {
    v4 = -1;
    v18 = -1;
    ms_exc.registration.TryLevel = 3;
    v12 = (_DWORD *)a4;
    if ( a4 >= _MmUserProbeAddress )
      v12 = (_DWORD *)_MmUserProbeAddress;
    *v12 = v8;
    UserSetLastError((struct _NT_TIB *)0x7A);
    goto LABEL_12;
  }
  ms_exc.registration.TryLevel = 2;
  ProbeForWrite(Address, Length, 4u);
  switch ( a2 )
  {
    case 536870917:
      if ( *(_BYTE *)(v7 + 24) == 2 )
      {
        v4 = MaxCounta;
        memcpy(Address, *(const void **)(*(_DWORD *)(v7 + 276) + 8), MaxCounta);
        goto LABEL_12;
      }
      goto LABEL_28;
    case 536870919:
      v4 = MaxCounta;
      if ( MaxCounta <= 2 )
      {
        v4 = -1;
        v18 = -1;
      }
      else
      {
        memcpy(Address, *(const void **)(v7 + 132), *(unsigned __int16 *)(v7 + 128));
        *((_WORD *)Address + 1) = 92;
        *(_WORD *)&Address[2 * MaxCounta - 2] = 0;
      }
      goto LABEL_12;
    case 536870923:
      if ( Length == MaxCounta )
      {
        if ( ((unsigned __int8)Address & 3) == 0 )
        {
          if ( (unsigned int)Address >= _MmUserProbeAddress )
            *(_BYTE *)_MmUserProbeAddress = 0;
          *Address = *Address;
          Address[28] = Address[28];
          memset(Address, 0, 0x20u);
          *(_DWORD *)Address = MaxCounta;
          v11 = v15;
          if ( *(_BYTE *)(v15 + 24) )
          {
            if ( *(_BYTE *)(v15 + 24) != 1 )
            {
              v4 = MaxCounta;
              if ( *(_BYTE *)(v15 + 24) == 2 )
              {
                *((_DWORD *)Address + 1) = 2;
                *((_DWORD *)Address + 2) = *(unsigned __int16 *)(*(_DWORD *)(v11 + 276) + 90);
                *((_DWORD *)Address + 3) = *(unsigned __int16 *)(*(_DWORD *)(v11 + 276) + 92);
                *((_DWORD *)Address + 4) = *(unsigned __int16 *)(*(_DWORD *)(v11 + 276) + 94);
                *((_WORD *)Address + 10) = *(_WORD *)(*(_DWORD *)(v11 + 276) + 22);
                *((_WORD *)Address + 11) = *(_WORD *)(*(_DWORD *)(v11 + 276) + 20);
              }
              goto LABEL_12;
            }
            *((_DWORD *)Address + 1) = 1;
            *((_DWORD *)Address + 2) = *(_DWORD *)(v11 + 304);
            *((_DWORD *)Address + 3) = *(_DWORD *)(v11 + 308);
            *((_DWORD *)Address + 4) = *(unsigned __int16 *)(v11 + 278);
            *((_DWORD *)Address + 5) = *(unsigned __int16 *)(v11 + 280);
            *((_DWORD *)Address + 6) = *(unsigned __int16 *)(v11 + 282);
            *((_DWORD *)Address + 7) = *(unsigned __int16 *)(v11 + 284);
          }
          else
          {
            *((_DWORD *)Address + 2) = *(_WORD *)(v15 + 276) & 0x7FFF;
            *((_DWORD *)Address + 3) = *(unsigned __int16 *)(v11 + 278);
            *((_DWORD *)Address + 4) = *(unsigned __int16 *)(v11 + 280);
            *((_DWORD *)Address + 5) = *(unsigned __int16 *)(v11 + 276) >> 15;
          }
          goto LABEL_28;
        }
LABEL_44:
        ExRaiseDatatypeMisalignment();
      }
LABEL_42:
      v4 = -1;
      v18 = -1;
      UserSetLastError((struct _NT_TIB *)0x57);
      goto LABEL_12;
  }
  if ( Length != MaxCounta )
    goto LABEL_42;
  if ( ((unsigned __int8)Address & 3) != 0 )
    goto LABEL_44;
  if ( (unsigned int)Address >= _MmUserProbeAddress )
    *(_BYTE *)_MmUserProbeAddress = 0;
  *Address = *Address;
  Address[40] = Address[40];
  memset(Address, 0, 0x2Cu);
  RIMFillDeviceHealthInfo(Address, v7);
LABEL_28:
  v4 = MaxCounta;
LABEL_12:
  ms_exc.registration.TryLevel = -2;
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
  UserSessionSwitchLeaveCrit();
  return v4;
}
