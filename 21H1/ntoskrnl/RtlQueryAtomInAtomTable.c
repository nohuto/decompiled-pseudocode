/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x140638160
 * Callers:
 *     NtQueryInformationAtom @ 0x1406CEE40 (NtQueryInformationAtom.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlpLookupLowBox @ 0x1402A5B18 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1403D2DC0 (_snwprintf_s.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlpLockAtomTable @ 0x1406383A4 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1406383F0 (RtlpAtomMapAtomToHandleEntry.c)
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
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // edi
  ULONG v13; // eax
  unsigned int v14; // esi
  ULONG v15; // eax
  NTSTATUS v17; // [rsp+30h] [rbp-88h]
  wchar_t DstBuf[16]; // [rsp+58h] [rbp-60h] BYREF

  v8 = Atom;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return -1073741811;
  if ( (unsigned __int16)v8 >= 0xC000u )
  {
    v17 = -1073741816;
    v10 = RtlpAtomMapAtomToHandleEntry(AtomTableHandle, v8 & 0x3FFF);
    v11 = v10;
    if ( !v10 || *(_WORD *)(v10 + 10) != (_WORD)v8 || !RtlpLookupLowBox((__int64)AtomTableHandle, v10, 0) )
      goto LABEL_32;
    v17 = 0;
    if ( AtomUsage )
      *AtomUsage = *(unsigned __int16 *)(v11 + 36);
    if ( AtomFlags )
      *AtomFlags = *(unsigned __int16 *)(v11 + 38);
    if ( !AtomName )
      goto LABEL_32;
    v12 = 2 * *(unsigned __int8 *)(v11 + 40);
    v13 = *AtomNameLength;
    if ( v12 >= *AtomNameLength )
    {
      if ( v13 < 2 )
      {
        *AtomNameLength = v12;
LABEL_31:
        v17 = -1073741789;
        goto LABEL_32;
      }
      v12 = v13 - 2;
    }
    if ( v12 )
    {
      memmove(AtomName, (const void *)(v11 + 42), v12);
      AtomName[(unsigned __int64)v12 >> 1] = 0;
      *AtomNameLength = v12;
      goto LABEL_32;
    }
    goto LABEL_31;
  }
  if ( !(_WORD)v8 )
  {
    v17 = -1073741811;
    goto LABEL_32;
  }
  v17 = 0;
  if ( AtomUsage )
    *AtomUsage = 1;
  if ( AtomFlags )
    *AtomFlags = 1;
  if ( !AtomName )
    goto LABEL_32;
  v14 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
  v15 = *AtomNameLength;
  if ( v14 >= *AtomNameLength )
  {
    if ( v15 < 2 )
      goto LABEL_29;
    v14 = v15 - 2;
  }
  if ( !v14 )
  {
LABEL_29:
    v17 = -1073741789;
    goto LABEL_32;
  }
  memmove(AtomName, DstBuf, v14);
  AtomName[(unsigned __int64)v14 >> 1] = 0;
  *AtomNameLength = v14;
LABEL_32:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((char *)AtomTableHandle + 8);
  KeAbPostRelease((ULONG_PTR)AtomTableHandle + 8);
  KeLeaveCriticalRegion();
  return v17;
}
