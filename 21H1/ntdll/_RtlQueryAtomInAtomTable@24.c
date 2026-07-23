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

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  NTSTATUS v6; // esi
  int v7; // eax
  int v8; // ecx
  unsigned __int16 *v9; // eax
  unsigned int v10; // edi
  ULONG v11; // eax
  wchar_t *v12; // eax
  ULONG v14; // eax
  _BYTE v15[12]; // [esp-8h] [ebp-6Ch]
  wchar_t Buffer[18]; // [esp+28h] [ebp-3Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+4Ch] [ebp-18h]

  if ( (unsigned __int8)RtlpLockAtomTable(AtomTableHandle) )
  {
    ms_exc.registration.TryLevel = 0;
    if ( Atom < 0xC000u )
    {
      if ( !Atom )
      {
        v6 = -1073741811;
        goto LABEL_15;
      }
      v6 = 0;
      if ( AtomUsage )
        *AtomUsage = 1;
      if ( AtomFlags )
        *AtomFlags = 1;
      if ( !AtomName )
        goto LABEL_15;
      *(_DWORD *)&v15[4] = Atom;
      *(_DWORD *)v15 = L"#%u";
      v10 = 2 * _snwprintf_s(Buffer, 0xFFFFFFFF00000010uLL, *(const size_t *)v15, *(const wchar_t *const *)&v15[8]);
      v14 = *AtomNameLength;
      if ( v10 >= *AtomNameLength )
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
      v7 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, Atom & 0x3FFF);
      v8 = v7;
      if ( !v7 )
        goto LABEL_15;
      if ( *(_WORD *)(v7 + 6) != Atom )
        goto LABEL_15;
      v9 = (unsigned __int16 *)(v7 + 8);
      if ( v8 == -8 )
        goto LABEL_15;
      v6 = 0;
      if ( AtomUsage )
        *AtomUsage = *v9;
      if ( AtomFlags )
        *AtomFlags = *(unsigned __int16 *)(v8 + 10);
      if ( !AtomName )
        goto LABEL_15;
      v10 = 2 * *(unsigned __int8 *)(v8 + 12);
      v11 = *AtomNameLength;
      if ( v10 >= *AtomNameLength )
      {
        if ( v11 < 2 )
        {
          *AtomNameLength = v10;
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
        *(_DWORD *)&v15[4] = v10;
        memcpy(AtomName, v12, *(size_t *)&v15[4]);
        AtomName[v10 >> 1] = 0;
        *AtomNameLength = v10;
LABEL_15:
        ms_exc.registration.TryLevel = -2;
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 2);
        return v6;
      }
    }
    v6 = -1073741789;
    goto LABEL_15;
  }
  return -1073741811;
}
