/*
 * XREFs of _NtUserFindWindowEx@20 @ 0x2C716
 * Callers:
 *     <none>
 * Callees:
 *     __FindWindowEx@20 @ 0x2D034 (__FindWindowEx@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _LeaveEditionCrit@0 @ 0xCCA50 (_LeaveEditionCrit@0.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserFindWindowEx(unsigned __int16 *a1, int a2, ULONG a3, wchar_t *Str1, int a5)
{
  unsigned int v5; // ecx
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // edx
  int v9; // ecx
  int v10; // esi
  unsigned int v11; // eax
  int *v12; // ecx
  int v13; // edx
  wchar_t *v14; // esi
  int v15; // ecx
  int *Window; // eax
  int v17; // esi
  unsigned int v18; // ecx
  _DWORD *v19; // edi
  int v21; // [esp+28h] [ebp-28h]
  int v22; // [esp+30h] [ebp-20h]
  unsigned __int16 *CurrentThread; // [esp+58h] [ebp+8h]
  unsigned int v24; // [esp+58h] [ebp+8h]
  ULONG v25; // [esp+60h] [ebp+10h]
  ULONG v26; // [esp+60h] [ebp+10h]
  wchar_t *Str1a; // [esp+64h] [ebp+14h]

  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  if ( _gpresUser )
  {
    if ( UserIsUserCritSecInExclusive() )
    {
      ++_gdwInAtomicOperation;
      if ( _gpAtomickCheckStacks )
      {
        v22 = ++_gdwAtomicCheckSerial;
        v5 = 0;
        if ( _gdwAtomicCheckLogSize )
        {
          v6 = (_DWORD *)_gpAtomickCheckStacks;
          while ( *v6 )
          {
            ++v5;
            v6 += 9;
            if ( v5 >= _gdwAtomicCheckLogSize )
              goto LABEL_17;
          }
          v7 = 36 * v5;
          *(_DWORD *)(v7 + _gpAtomickCheckStacks) = _gdwAtomicCheckSerial;
          *(_DWORD *)(_gpAtomickCheckStacks + v7 + 4) = PsGetCurrentThreadId();
          v8 = MEMORY[0xFFDF0004];
          if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
          {
            v10 = MEMORY[0xFFDF0324];
            if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
            {
              v11 = MEMORY[0xFFDF0320];
            }
            else
            {
              do
              {
                _mm_pause();
                v10 = MEMORY[0xFFDF0324];
                v11 = MEMORY[0xFFDF0320];
              }
              while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
              v8 = MEMORY[0xFFDF0004];
            }
            v9 = MEMORY[0xFFDF0004] * (v10 << 8) + (((unsigned int)v8 * (unsigned __int64)v11) >> 24);
          }
          else
          {
            v9 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
          }
          *(_DWORD *)(_gpAtomickCheckStacks + v7 + 8) = v9;
          RtlWalkFrameChain((PVOID *)(v7 + _gpAtomickCheckStacks + 12), 6u, 0x200u);
        }
      }
    }
  }
LABEL_17:
  if ( a1 == (unsigned __int16 *)-3 )
  {
    CurrentThread = (unsigned __int16 *)KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
      PsGetThreadWin32Thread(CurrentThread);
  }
  else if ( a1 && !ValidateHwnd(a1) )
  {
    goto LABEL_43;
  }
  if ( !a2 || ValidateHwnd(a2) )
  {
    v12 = (int *)a3;
    if ( a3 >= _MmUserProbeAddress )
      v12 = (int *)_MmUserProbeAddress;
    v13 = *v12;
    v21 = *v12;
    v24 = v12[1];
    v14 = Str1;
    if ( (unsigned int)Str1 >= _MmUserProbeAddress )
      v14 = (wchar_t *)_MmUserProbeAddress;
    v15 = *(_DWORD *)v14;
    Str1a = (wchar_t *)*((_DWORD *)v14 + 1);
    if ( (v24 & 0xFFFF0000) != 0 )
    {
      v25 = v24 + (unsigned __int16)v13 + 2;
      if ( v25 <= v24 || v25 >= _MmUserProbeAddress )
        goto LABEL_37;
      if ( (unsigned __int16)v13 > HIWORD(v21) || (v13 & 1) != 0 )
      {
        if ( (v13 & 1) == 0 )
          goto LABEL_37;
        goto LABEL_36;
      }
    }
    v26 = (ULONG)Str1a + (unsigned __int16)v15 + 2;
    if ( v26 > (unsigned int)Str1a && v26 < _MmUserProbeAddress )
    {
      if ( (unsigned __int16)v15 <= (unsigned __int16)HIWORD(*(_DWORD *)v14) )
      {
        if ( (v15 & 1) == 0 )
        {
          Window = (int *)_FindWindowEx((unsigned __int16 *)v24, Str1a, a5);
          if ( Window )
          {
            v17 = *Window;
            goto LABEL_47;
          }
          goto LABEL_43;
        }
LABEL_36:
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
        goto LABEL_37;
      }
      if ( (v15 & 1) != 0 )
        goto LABEL_36;
    }
LABEL_37:
    ExRaiseAccessViolation();
  }
LABEL_43:
  v17 = 0;
LABEL_47:
  if ( _gpresUser )
  {
    if ( UserIsUserCritSecInExclusive() )
    {
      --_gdwInAtomicOperation;
      if ( _gpAtomickCheckStacks )
      {
        v18 = 0;
        if ( _gdwAtomicCheckLogSize )
        {
          v19 = (_DWORD *)_gpAtomickCheckStacks;
          while ( *v19 != v22 )
          {
            ++v18;
            v19 += 9;
            if ( v18 >= _gdwAtomicCheckLogSize )
              goto LABEL_56;
          }
          *(_DWORD *)(36 * v18 + _gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_56:
  LeaveEditionCrit();
  return v17;
}
