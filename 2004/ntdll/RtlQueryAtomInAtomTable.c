/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x18004C220
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x18004C8F8 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x18004C924 (RtlpAtomMapAtomToHandleEntry.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x180096AF0 (_snwprintf_s.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  int v8; // ebx
  NTSTATUS v10; // edi
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned __int16 *v13; // rax
  unsigned int v14; // esi
  ULONG v15; // eax
  unsigned __int64 v16; // rbx
  ULONG v17; // eax
  wchar_t Buffer[16]; // [rsp+40h] [rbp-68h] BYREF

  v8 = Atom;
  if ( (unsigned __int8)RtlpLockAtomTable() )
  {
    if ( (unsigned __int16)v8 < 0xC000u )
    {
      if ( !(_WORD)v8 )
      {
        v10 = -1073741811;
        goto LABEL_31;
      }
      v10 = 0;
      if ( AtomUsage )
        *AtomUsage = 1;
      if ( AtomFlags )
        *AtomFlags = 1;
      if ( !AtomName )
        goto LABEL_31;
      v14 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
      v17 = *AtomNameLength;
      if ( v14 >= *AtomNameLength )
      {
        v14 = v17 - 2;
        if ( v17 < 2 )
          v14 = 0;
      }
      if ( v14 )
      {
        memmove(AtomName, Buffer, v14);
        v16 = (unsigned __int64)v14 >> 1;
        goto LABEL_14;
      }
    }
    else
    {
      v10 = -1073741816;
      v11 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, v8 & 0x3FFF);
      v12 = v11;
      if ( !v11 )
        goto LABEL_31;
      if ( *(_WORD *)(v11 + 10) != (_WORD)v8 )
        goto LABEL_31;
      v13 = (unsigned __int16 *)(v11 + 12);
      if ( !v13 )
        goto LABEL_31;
      v10 = 0;
      if ( AtomUsage )
        *AtomUsage = *v13;
      if ( AtomFlags )
        *AtomFlags = *(unsigned __int16 *)(v12 + 14);
      if ( !AtomName )
        goto LABEL_31;
      v14 = 2 * *(unsigned __int8 *)(v12 + 16);
      v15 = *AtomNameLength;
      if ( v14 >= *AtomNameLength )
      {
        if ( v15 < 2 )
        {
          *AtomNameLength = v14;
          v14 = 0;
        }
        else
        {
          v14 = v15 - 2;
        }
      }
      if ( v14 )
      {
        memmove(AtomName, (const void *)(v12 + 18), v14);
        v16 = (unsigned __int64)v14 >> 1;
LABEL_14:
        AtomName[v16] = 0;
        *AtomNameLength = v14;
LABEL_31:
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)AtomTableHandle + 1);
        return v10;
      }
    }
    v10 = -1073741789;
    goto LABEL_31;
  }
  return -1073741811;
}
