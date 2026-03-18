/*
 * XREFs of _NtUserKillTimer@8 @ 0x2C66E
 * Callers:
 *     <none>
 * Callees:
 *     _FindTimer@20 @ 0x92EB2 (_FindTimer@20.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserKillTimer(int a1, int a2)
{
  int v2; // ebx
  int Timer; // esi
  unsigned int v5; // ecx
  _DWORD *v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // ecx
  int v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // ecx
  _DWORD *v13; // eax

  EnterCrit(0, 1);
  if ( _gpresUser && UserIsUserCritSecInExclusive() && (++_gdwInAtomicOperation, _gpAtomickCheckStacks) )
  {
    v5 = 0;
    v2 = ++_gdwAtomicCheckSerial;
    if ( _gdwAtomicCheckLogSize )
    {
      v6 = (_DWORD *)_gpAtomickCheckStacks;
      while ( *v6 )
      {
        ++v5;
        v6 += 9;
        if ( v5 >= _gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v7 = 36 * v5;
      *(_DWORD *)(v7 + _gpAtomickCheckStacks) = _gdwAtomicCheckSerial;
      *(_DWORD *)(v7 + _gpAtomickCheckStacks + 4) = PsGetCurrentThreadId();
      v8 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v10 = MEMORY[0xFFDF0324];
        v11 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
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
        v9 = v8 * (v10 << 8) + (((unsigned int)v8 * (unsigned __int64)v11) >> 24);
      }
      else
      {
        v9 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      *(_DWORD *)(v7 + _gpAtomickCheckStacks + 8) = v9;
      RtlWalkFrameChain((PVOID *)(v7 + _gpAtomickCheckStacks + 12), 6u, 0x200u);
      v2 = _gdwAtomicCheckSerial;
    }
  }
  else
  {
    v2 = a1;
  }
LABEL_5:
  if ( a1 && !ValidateHwnd(a1) )
    Timer = 0;
  else
    Timer = FindTimer(0, 1, 0);
  if ( _gpresUser )
  {
    if ( UserIsUserCritSecInExclusive() )
    {
      --_gdwInAtomicOperation;
      if ( _gpAtomickCheckStacks )
      {
        v12 = 0;
        if ( _gdwAtomicCheckLogSize )
        {
          v13 = (_DWORD *)_gpAtomickCheckStacks;
          while ( *v13 != v2 )
          {
            ++v12;
            v13 += 9;
            if ( v12 >= _gdwAtomicCheckLogSize )
              goto LABEL_11;
          }
          *(_DWORD *)(36 * v12 + _gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return Timer;
}
