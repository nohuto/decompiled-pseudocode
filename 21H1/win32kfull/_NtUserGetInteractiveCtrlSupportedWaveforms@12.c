/*
 * XREFs of _NtUserGetInteractiveCtrlSupportedWaveforms@12 @ 0x1632FE
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QAEJKPAPAU_WAVEFORM_INFO@@PAJ@Z @ 0x1ADDA6 (-GetDeviceSupportedWaveforms@InteractiveControlManager@@QAEJKPAPAU_WAVEFORM_INFO@@PAJ@Z.c)
 */

int __stdcall NtUserGetInteractiveCtrlSupportedWaveforms(unsigned __int16 a1, volatile void *a2, signed int *Address)
{
  int v3; // esi
  int v4; // ecx
  signed int v5; // ebx
  InteractiveControlManager *v6; // eax
  signed int v7; // ecx
  signed int *v8; // edx
  int v10; // [esp-4h] [ebp-44h]
  signed int v11; // [esp+1Ch] [ebp-24h]
  int v12; // [esp+20h] [ebp-20h] BYREF
  void *Src; // [esp+24h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v3 = 0;
  EnterSharedCrit(0, 1);
  v12 = 0;
  Src = 0;
  if ( !Address )
  {
    v10 = 87;
LABEL_3:
    v4 = v10;
LABEL_4:
    UserSetLastError((struct _NT_TIB *)v4);
    goto LABEL_22;
  }
  ms_exc.registration.TryLevel = 0;
  ProbeForRead(Address, 4u, 4u);
  v5 = *Address;
  v11 = *Address;
  if ( a2 && v5 > 0 )
    ProbeForWrite(a2, v5, 1u);
  ms_exc.registration.TryLevel = -2;
  v6 = InteractiveControlManager::Instance();
  if ( InteractiveControlManager::GetDeviceSupportedWaveforms(v6, a1, (struct _WAVEFORM_INFO **)&Src, &v12) >= 0 )
  {
    if ( (unsigned int)v12 >= 0xFFFFFFF )
    {
      v4 = 534;
      goto LABEL_4;
    }
    v7 = 8 * v12;
    if ( v5 > 0 && v5 < v7 )
    {
      v10 = 122;
      goto LABEL_3;
    }
    ms_exc.registration.TryLevel = 1;
    v8 = Address;
    if ( (unsigned int)Address >= _MmUserProbeAddress )
      v8 = (signed int *)_MmUserProbeAddress;
    *v8 = *v8;
    if ( a2 && Src && v11 >= v7 )
    {
      *Address = v7;
      memcpy((void *)a2, Src, v7);
    }
    else
    {
      *Address = v7;
    }
    ms_exc.registration.TryLevel = -2;
    v3 = 1;
  }
LABEL_22:
  UserSessionSwitchLeaveCrit();
  return v3;
}
