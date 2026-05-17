/*
 * XREFs of _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8
 * Callers:
 *     _RtlAddAtomToAtomTable@12 @ 0x4B2E00D0 (_RtlAddAtomToAtomTable@12.c)
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHashStringToAtom@28 @ 0x4B2E032F (_RtlpHashStringToAtom@28.c)
 *     _RtlGetIntegerAtom@8 @ 0x4B2E0440 (_RtlGetIntegerAtom@8.c)
 *     _RtlpLockAtomTable@4 @ 0x4B2E04D4 (_RtlpLockAtomTable@4.c)
 *     _RtlpInsertStringAtom@8 @ 0x4B2E0590 (_RtlpInsertStringAtom@8.c)
 *     _RtlpAllocateAtomTableEntry@12 @ 0x4B2E0744 (_RtlpAllocateAtomTableEntry@12.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __fastcall RtlAddAtomToAtomTableEx(int a1, _WORD *a2, unsigned __int16 *a3, int a4)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // esi
  int v9; // edx
  int AtomTableEntry; // eax
  int v11; // edi
  size_t v12; // eax
  unsigned __int16 v14; // ax
  _WORD *v17; // [esp+1Ch] [ebp-30h] BYREF
  int *v18; // [esp+20h] [ebp-2Ch] BYREF
  int v19; // [esp+24h] [ebp-28h] BYREF
  size_t Size; // [esp+28h] [ebp-24h] BYREF
  int v21; // [esp+2Ch] [ebp-20h]
  unsigned __int16 v22; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  if ( (unsigned __int8)RtlpLockAtomTable(a1) )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned __int8)RtlGetIntegerAtom(a2, &v22) )
    {
      v14 = v22;
      if ( v22 >= 0xC000u )
      {
        v14 = 0;
        v22 = 0;
        v8 = -1073741811;
      }
      else
      {
        v8 = 0;
      }
      v21 = v8;
      if ( a3 )
        *a3 = v14;
      goto LABEL_13;
    }
    if ( *a2 )
    {
      v8 = RtlpHashStringToAtom(v6, &v18, &Size, &v17, &v19);
      v21 = v8;
      if ( v8 < 0 )
        goto LABEL_13;
      v9 = v19;
      if ( v19 )
      {
        if ( *v17 == 0xFFFF )
          v17[1] |= 1u;
        else
          ++*v17;
        if ( a3 )
          *a3 = *(_WORD *)(v9 + 6);
        v8 = 0;
      }
      else
      {
        if ( v18 )
        {
          v8 = -1073741801;
          v21 = -1073741801;
          AtomTableEntry = RtlpAllocateAtomTableEntry(v7);
          v11 = AtomTableEntry;
          v19 = AtomTableEntry;
          if ( AtomTableEntry )
          {
            memcpy((void *)(AtomTableEntry + 14), a2, Size);
            v12 = Size >> 1;
            *(_BYTE *)(v11 + 12) = Size >> 1;
            *(_WORD *)(v11 + 2 * (unsigned __int8)v12 + 14) = 0;
            if ( !(unsigned __int8)RtlpInsertStringAtom(a1, v11) )
            {
              RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v11);
              v8 = v21;
              goto LABEL_13;
            }
            *(_WORD *)(v11 + 6) = *(_WORD *)(v11 + 4) | 0xC000;
            *v18 = v11;
            if ( a3 )
              *a3 = *(_WORD *)(v11 + 6);
            v8 = 0;
            goto LABEL_12;
          }
LABEL_13:
          ms_exc.registration.TryLevel = -2;
          RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 8));
          return v8;
        }
        v8 = -1073741811;
      }
    }
    else
    {
      v8 = -1073741773;
    }
LABEL_12:
    v21 = v8;
    goto LABEL_13;
  }
  return -1073741811;
}
