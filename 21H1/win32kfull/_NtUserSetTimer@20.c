/*
 * XREFs of _NtUserSetTimer@20 @ 0x2CA4E
 * Callers:
 *     <none>
 * Callees:
 *     _InternalSetTimer@24 @ 0x2CB62 (_InternalSetTimer@24.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongSub@12 @ 0x145E8B (_ULongSub@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserSetTimer(int a1, int a2, unsigned int a3, int a4, ULONG a5)
{
  int v5; // ebx
  unsigned int v6; // esi
  ULONG v7; // edi
  int v8; // esi
  unsigned int v10; // ecx
  _DWORD *v11; // eax
  int v12; // edi
  int v13; // ebx
  int v14; // ecx
  int v15; // esi
  unsigned int v16; // edx
  unsigned int v17; // ecx
  _DWORD *v18; // eax
  ULONG v19; // [esp+0h] [ebp-1Ch]
  ULONG *v20; // [esp+4h] [ebp-18h]
  int v21; // [esp+14h] [ebp-8h]
  ULONG ulMinuend; // [esp+18h] [ebp-4h] BYREF

  EnterCrit(0, 1);
  if ( _gpresUser && UserIsUserCritSecInExclusive() && (++_gdwInAtomicOperation, _gpAtomickCheckStacks) )
  {
    v10 = 0;
    v21 = ++_gdwAtomicCheckSerial;
    if ( _gdwAtomicCheckLogSize )
    {
      v11 = (_DWORD *)_gpAtomickCheckStacks;
      while ( *v11 )
      {
        ++v10;
        v11 += 9;
        if ( v10 >= _gdwAtomicCheckLogSize )
          goto LABEL_5;
      }
      v12 = 36 * v10;
      *(_DWORD *)(v12 + _gpAtomickCheckStacks) = _gdwAtomicCheckSerial;
      *(_DWORD *)(v12 + _gpAtomickCheckStacks + 4) = PsGetCurrentThreadId();
      v13 = MEMORY[0xFFDF0004];
      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
      {
        v15 = MEMORY[0xFFDF0324];
        v16 = MEMORY[0xFFDF0320];
        if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
        {
          do
          {
            _mm_pause();
            v15 = MEMORY[0xFFDF0324];
            v16 = MEMORY[0xFFDF0320];
          }
          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
          v13 = MEMORY[0xFFDF0004];
        }
        v14 = v13 * (v15 << 8) + (((unsigned int)v13 * (unsigned __int64)v16) >> 24);
      }
      else
      {
        v14 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
      }
      *(_DWORD *)(v12 + _gpAtomickCheckStacks + 8) = v14;
      RtlWalkFrameChain((PVOID *)(v12 + _gpAtomickCheckStacks + 12), 6u, 0x200u);
    }
  }
  else
  {
    v21 = a1;
  }
LABEL_5:
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
    {
LABEL_36:
      v8 = 0;
      goto LABEL_18;
    }
  }
  else
  {
    v5 = 0;
  }
  v6 = a3;
  if ( a3 < 0xA )
    v6 = 10;
  if ( v6 > 0x7FFFFFFF )
    v6 = 0x7FFFFFFF;
  v7 = a5;
  if ( a5 == 2147483637 )
  {
    ulMinuend = 0;
    if ( ULongSub((ULONG)&ulMinuend, v19, v20) >= 0 )
    {
      v7 = ulMinuend;
      goto LABEL_15;
    }
LABEL_39:
    v8 = 0;
    UserSetLastError(87);
    goto LABEL_18;
  }
  if ( a5 != -1 && (v6 + a5 < v6 || v6 + a5 > 0x7FFFFFFF) )
    goto LABEL_39;
LABEL_15:
  if ( v5 && PsGetCurrentProcessWin32Process() != *(_DWORD *)(*(_DWORD *)(v5 + 8) + 232) )
  {
    UserSetLastError(5);
    goto LABEL_36;
  }
  v8 = InternalSetTimer(v5, a2, v6, a4, v7, 0);
LABEL_18:
  if ( _gpresUser )
  {
    if ( UserIsUserCritSecInExclusive() )
    {
      --_gdwInAtomicOperation;
      if ( _gpAtomickCheckStacks )
      {
        v17 = 0;
        if ( _gdwAtomicCheckLogSize )
        {
          v18 = (_DWORD *)_gpAtomickCheckStacks;
          while ( *v18 != v21 )
          {
            ++v17;
            v18 += 9;
            if ( v17 >= _gdwAtomicCheckLogSize )
              goto LABEL_21;
          }
          *(_DWORD *)(36 * v17 + _gpAtomickCheckStacks) = 0;
        }
      }
    }
  }
LABEL_21:
  UserSessionSwitchLeaveCrit();
  return v8;
}
