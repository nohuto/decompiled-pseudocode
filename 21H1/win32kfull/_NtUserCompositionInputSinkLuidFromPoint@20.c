/*
 * XREFs of _NtUserCompositionInputSinkLuidFromPoint@20 @ 0x1602D5
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _RequestInputSinkInfoFromPoint@4 @ 0x17B95E (_RequestInputSinkInfoFromPoint@4.c)
 */

int __stdcall NtUserCompositionInputSinkLuidFromPoint(
        int a1,
        unsigned int a2,
        volatile void *Address,
        _DWORD *a4,
        volatile void *a5)
{
  int v5; // ebx
  int CurrentProcess; // eax
  int *v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // esi
  _DWORD *v11; // edi
  _DWORD *v12; // ecx
  char v13; // cl
  void *v14; // eax
  _BYTE v16[64]; // [esp+10h] [ebp-D4h] BYREF
  _DWORD v17[25]; // [esp+50h] [ebp-94h] BYREF
  CPPEH_RECORD ms_exc; // [esp+CCh] [ebp-18h]

  ExEnterCriticalRegionAndAcquireResourceExclusive(_gpresDitCompositionInputSinkQuery);
  v5 = 0;
  EnterCrit(0, 1);
  memset(v17, 0, sizeof(v17));
  if ( a1 == 6 || !a1 )
  {
    CurrentProcess = PsGetCurrentProcess();
    if ( IsProcessDwm(CurrentProcess) )
    {
      UserSetLastError((struct _NT_TIB *)5);
    }
    else
    {
      ms_exc.registration.TryLevel = 0;
      v7 = (int *)a2;
      if ( a2 + 8 < a2 || a2 + 8 > _MmUserProbeAddress )
        v7 = (int *)_MmUserProbeAddress;
      v8 = *v7;
      v9 = v7[1];
      v17[1] = v8;
      v17[2] = v9;
      ms_exc.registration.TryLevel = 1;
      ProbeForWrite(Address, 8u, 1u);
      v10 = v17[0] | 1;
      v17[0] |= 1u;
      v11 = a4;
      if ( a4 )
      {
        ProbeForWrite(a4, 4u, 4u);
        v10 |= 2u;
        v17[0] = v10;
        *a4 = 0;
      }
      if ( a5 )
      {
        ProbeForWrite(a5, 0x40u, 1u);
        v17[0] = v10 | 4;
        memset(v16, 0, sizeof(v16));
        qmemcpy((void *)a5, v16, 0x40u);
        v11 = a4;
      }
      ms_exc.registration.TryLevel = -2;
      v17[3] = a1;
      v5 = RequestInputSinkInfoFromPoint(v17);
      if ( v5 )
      {
        ms_exc.registration.TryLevel = 2;
        v12 = Address;
        if ( (unsigned int)Address >= _MmUserProbeAddress )
          v12 = (_DWORD *)_MmUserProbeAddress;
        *v12 = v17[5];
        v12[1] = v17[6];
        v13 = v17[0];
        if ( (v17[0] & 2) != 0 )
        {
          if ( (unsigned int)v11 >= _MmUserProbeAddress )
            v11 = (_DWORD *)_MmUserProbeAddress;
          *v11 = v17[7];
        }
        if ( (v13 & 4) != 0 )
        {
          v14 = (void *)a5;
          if ( (unsigned int)a5 >= _MmUserProbeAddress )
            v14 = (void *)_MmUserProbeAddress;
          qmemcpy(v14, &v17[8], 0x40u);
        }
        ms_exc.registration.TryLevel = -2;
      }
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  ExReleaseResourceAndLeaveCriticalRegion(_gpresDitCompositionInputSinkQuery);
  return v5;
}
