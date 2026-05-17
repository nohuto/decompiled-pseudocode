/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x180059250
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlpLockAtomTable @ 0x180059958 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180059984 (RtlpAtomMapAtomToHandleEntry.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _snwprintf_s @ 0x1800971F0 (_snwprintf_s.c)
 *     Feature_2482235707__private_IsEnabledDeviceUsage @ 0x18009CD18 (Feature_2482235707__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x1800A44C0 (memmove.c)
 */

__int64 __fastcall RtlQueryAtomInAtomTable(
        __int64 a1,
        unsigned __int16 a2,
        _DWORD *a3,
        _DWORD *a4,
        void *a5,
        unsigned int *a6)
{
  int v8; // esi
  unsigned int v10; // ebx
  unsigned int v11; // edi
  unsigned int v12; // esi
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int16 *v15; // rax
  unsigned int v16; // eax
  wchar_t Buffer[16]; // [rsp+50h] [rbp-68h] BYREF

  v8 = a2;
  if ( !(unsigned __int8)RtlpLockAtomTable() )
    return 3221225485LL;
  v10 = *a6 & 0xFFFFFFFE;
  if ( (unsigned __int16)v8 >= 0xC000u )
  {
    v11 = -1073741816;
    v13 = RtlpAtomMapAtomToHandleEntry(a1, v8 & 0x3FFF);
    v14 = v13;
    if ( !v13 )
      goto LABEL_37;
    if ( *(_WORD *)(v13 + 10) != (_WORD)v8 )
      goto LABEL_37;
    v15 = (unsigned __int16 *)(v13 + 12);
    if ( !v15 )
      goto LABEL_37;
    v11 = 0;
    if ( a3 )
      *a3 = *v15;
    if ( a4 )
      *a4 = *(unsigned __int16 *)(v14 + 14);
    if ( !a5 )
      goto LABEL_37;
    v12 = 2 * *(unsigned __int8 *)(v14 + 16);
    if ( (unsigned int)Feature_2482235707__private_IsEnabledDeviceUsage(0LL) )
    {
      if ( v12 < v10 )
        goto LABEL_33;
      if ( v10 >= 2 )
      {
        v12 = v10 - 2;
        goto LABEL_33;
      }
    }
    else
    {
      v16 = *a6;
      if ( v12 < *a6 )
        goto LABEL_33;
      if ( v16 >= 2 )
      {
        v12 = v16 - 2;
        goto LABEL_33;
      }
    }
    *a6 = v12;
    v12 = 0;
LABEL_33:
    if ( v12 )
    {
      memmove(a5, (const void *)(v14 + 18), v12);
      *((_WORD *)a5 + ((unsigned __int64)v12 >> 1)) = 0;
      goto LABEL_35;
    }
LABEL_36:
    v11 = -1073741789;
    goto LABEL_37;
  }
  if ( (_WORD)v8 )
  {
    v11 = 0;
    if ( a3 )
      *a3 = 1;
    if ( a4 )
      *a4 = 1;
    if ( !a5 )
      goto LABEL_37;
    v12 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
    if ( v12 >= v10 )
    {
      if ( v10 < 2 )
        v12 = 0;
      else
        v12 = v10 - 2;
    }
    if ( v12 )
    {
      memmove(a5, Buffer, v12);
      *((_WORD *)a5 + ((unsigned __int64)v12 >> 1)) = 0;
LABEL_35:
      *a6 = v12;
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  v11 = -1073741811;
LABEL_37:
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
  return v11;
}
