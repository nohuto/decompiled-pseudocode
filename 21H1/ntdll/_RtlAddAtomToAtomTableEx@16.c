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

int __fastcall RtlAddAtomToAtomTableEx(_RTL_SRWLOCK *a1, WCHAR *a2, USHORT *a3, int a4)
{
  int v6; // ecx
  int v7; // ecx
  int v8; // esi
  int v9; // edx
  int AtomTableEntry; // eax
  int v11; // edi
  unsigned int v12; // eax
  USHORT v14; // ax
  size_t v15; // [esp-4h] [ebp-50h]
  _WORD *v18; // [esp+1Ch] [ebp-30h] BYREF
  _DWORD *v19; // [esp+20h] [ebp-2Ch] BYREF
  int v20; // [esp+24h] [ebp-28h] BYREF
  unsigned int Size; // [esp+28h] [ebp-24h] BYREF
  int Size_4; // [esp+2Ch] [ebp-20h]
  USHORT IntegerAtom; // [esp+30h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  if ( (unsigned __int8)RtlpLockAtomTable(a1) )
  {
    ms_exc.registration.TryLevel = 0;
    if ( RtlGetIntegerAtom(a2, &IntegerAtom) )
    {
      v14 = IntegerAtom;
      if ( IntegerAtom >= 0xC000u )
      {
        v14 = 0;
        IntegerAtom = 0;
        v8 = -1073741811;
      }
      else
      {
        v8 = 0;
      }
      Size_4 = v8;
      if ( a3 )
        *a3 = v14;
      goto LABEL_13;
    }
    if ( *a2 )
    {
      v8 = RtlpHashStringToAtom(v6, &v19, &Size, &v18, &v20);
      Size_4 = v8;
      if ( v8 < 0 )
        goto LABEL_13;
      v9 = v20;
      if ( v20 )
      {
        if ( *v18 == 0xFFFF )
          v18[1] |= 1u;
        else
          ++*v18;
        if ( a3 )
          *a3 = *(_WORD *)(v9 + 6);
        v8 = 0;
      }
      else
      {
        if ( v19 )
        {
          v8 = -1073741801;
          Size_4 = -1073741801;
          AtomTableEntry = RtlpAllocateAtomTableEntry(v7);
          v11 = AtomTableEntry;
          v20 = AtomTableEntry;
          if ( AtomTableEntry )
          {
            LODWORD(v15) = Size;
            memcpy((void *)(AtomTableEntry + 14), a2, v15);
            v12 = Size >> 1;
            *(_BYTE *)(v11 + 12) = Size >> 1;
            *(_WORD *)(v11 + 2 * (unsigned __int8)v12 + 14) = 0;
            if ( !(unsigned __int8)RtlpInsertStringAtom(a1, v11) )
            {
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v11);
              v8 = Size_4;
              goto LABEL_13;
            }
            *(_WORD *)(v11 + 6) = *(_WORD *)(v11 + 4) | 0xC000;
            *v19 = v11;
            if ( a3 )
              *a3 = *(_WORD *)(v11 + 6);
            v8 = 0;
            goto LABEL_12;
          }
LABEL_13:
          ms_exc.registration.TryLevel = -2;
          RtlReleaseSRWLockExclusive(a1 + 2);
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
    Size_4 = v8;
    goto LABEL_13;
  }
  return -1073741811;
}
