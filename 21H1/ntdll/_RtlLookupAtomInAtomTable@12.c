/*
 * XREFs of _RtlLookupAtomInAtomTable@12 @ 0x4B2E0270
 * Callers:
 *     <none>
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHashStringToAtom@28 @ 0x4B2E032F (_RtlpHashStringToAtom@28.c)
 *     _RtlGetIntegerAtom@8 @ 0x4B2E0440 (_RtlGetIntegerAtom@8.c)
 *     _RtlpLockAtomTable@4 @ 0x4B2E04D4 (_RtlpLockAtomTable@4.c)
 *     _RtlpAtomMapAtomToHandleEntry@8 @ 0x4B2E04EF (_RtlpAtomMapAtomToHandleEntry@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 */

int __stdcall RtlLookupAtomInAtomTable(int a1, _WORD *a2, _WORD *a3)
{
  int v3; // ecx
  int v4; // esi
  int v5; // edi
  _WORD *v6; // ecx
  __int16 v7; // ax
  _BYTE v9[4]; // [esp+10h] [ebp-28h] BYREF
  int v10; // [esp+18h] [ebp-20h]
  int v11; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  if ( (unsigned __int8)RtlpLockAtomTable(a1) )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned __int8)RtlGetIntegerAtom(a2, &v11) )
    {
      v7 = v11;
      if ( (unsigned __int16)v11 < 0xC000u )
      {
        v4 = 0;
      }
      else
      {
        v7 = 0;
        LOWORD(v11) = 0;
        v4 = -1073741811;
      }
      v10 = v4;
      v6 = a3;
      if ( !a3 )
        goto LABEL_10;
      goto LABEL_9;
    }
    if ( *a2 )
    {
      v4 = RtlpHashStringToAtom(v3, 0, 0, v9, &v11);
      v10 = v4;
      if ( v4 < 0 )
        goto LABEL_10;
      v5 = v11;
      if ( v11 )
      {
        if ( RtlpAtomMapAtomToHandleEntry(a1, *(unsigned __int16 *)(v11 + 4)) )
        {
          v4 = 0;
          v10 = 0;
          v6 = a3;
          if ( a3 )
          {
            v7 = *(_WORD *)(v5 + 6);
LABEL_9:
            *v6 = v7;
          }
LABEL_10:
          ms_exc.registration.TryLevel = -2;
          RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a1 + 8));
          return v4;
        }
        v4 = -1073741816;
      }
      else
      {
        v4 = -1073741772;
      }
    }
    else
    {
      v4 = -1073741773;
    }
    v10 = v4;
    goto LABEL_10;
  }
  return -1073741811;
}
