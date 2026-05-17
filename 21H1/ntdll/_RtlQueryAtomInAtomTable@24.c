/*
 * XREFs of _RtlQueryAtomInAtomTable@24 @ 0x4B2A9E90
 * Callers:
 *     <none>
 * Callees:
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpLockAtomTable@4 @ 0x4B2E04D4 (_RtlpLockAtomTable@4.c)
 *     _RtlpAtomMapAtomToHandleEntry@8 @ 0x4B2E04EF (_RtlpAtomMapAtomToHandleEntry@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     __snwprintf_s @ 0x4B2FF750 (__snwprintf_s.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

int __stdcall RtlQueryAtomInAtomTable(int a1, unsigned __int16 a2, _DWORD *a3, _DWORD *a4, void *a5, unsigned int *a6)
{
  int v6; // esi
  int v7; // eax
  int v8; // ecx
  unsigned __int16 *v9; // eax
  size_t v10; // edi
  unsigned int v11; // eax
  wchar_t *v12; // eax
  unsigned int v14; // eax
  wchar_t Buffer[18]; // [esp+28h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+4Ch] [ebp-18h]

  if ( (unsigned __int8)RtlpLockAtomTable(a1) )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a2 < 0xC000u )
    {
      if ( !a2 )
      {
        v6 = -1073741811;
        goto LABEL_15;
      }
      v6 = 0;
      if ( a3 )
        *a3 = 1;
      if ( a4 )
        *a4 = 1;
      if ( !a5 )
        goto LABEL_15;
      v10 = 2 * _snwprintf_s(Buffer, 0x10u, 0xFFFFFFFF, L"#%u", a2);
      v14 = *a6;
      if ( v10 >= *a6 )
      {
        if ( v14 < 2 )
          v10 = 0;
        else
          v10 = v14 - 2;
      }
      if ( v10 )
      {
        v12 = Buffer;
        goto LABEL_14;
      }
    }
    else
    {
      v6 = -1073741816;
      v7 = RtlpAtomMapAtomToHandleEntry(a1, a2 & 0x3FFF);
      v8 = v7;
      if ( !v7 )
        goto LABEL_15;
      if ( *(_WORD *)(v7 + 6) != a2 )
        goto LABEL_15;
      v9 = (unsigned __int16 *)(v7 + 8);
      if ( v8 == -8 )
        goto LABEL_15;
      v6 = 0;
      if ( a3 )
        *a3 = *v9;
      if ( a4 )
        *a4 = *(unsigned __int16 *)(v8 + 10);
      if ( !a5 )
        goto LABEL_15;
      v10 = 2 * *(unsigned __int8 *)(v8 + 12);
      v11 = *a6;
      if ( v10 >= *a6 )
      {
        if ( v11 < 2 )
        {
          *a6 = v10;
          v10 = 0;
        }
        else
        {
          v10 = v11 - 2;
        }
      }
      if ( v10 )
      {
        v12 = (wchar_t *)(v8 + 14);
LABEL_14:
        memcpy(a5, v12, v10);
        *((_WORD *)a5 + (v10 >> 1)) = 0;
        *a6 = v10;
LABEL_15:
        ms_exc.registration.TryLevel = -2;
        RtlReleaseSRWLockExclusive(a1 + 8);
        return v6;
      }
    }
    v6 = -1073741789;
    goto LABEL_15;
  }
  return -1073741811;
}
