/*
 * XREFs of sxsisol_ExpandEnvironmentStrings_UEx @ 0x4B33D614
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlExpandEnvironmentStrings_U@16 @ 0x4B2DC330 (_RtlExpandEnvironmentStrings_U@16.c)
 *     _RtlpEnsureBufferSize@12 @ 0x4B2E1480 (_RtlpEnsureBufferSize@12.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x4B33D614 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 */

NTSTATUS __fastcall sxsisol_ExpandEnvironmentStrings_UEx(int a1, _UNICODE_STRING *a2, PUNICODE_STRING a3)
{
  NTSTATUS v4; // esi
  unsigned int v6; // eax
  wchar_t **v7; // esi
  wchar_t *v8; // ecx
  unsigned __int16 Length; // cx
  unsigned __int16 v10; // ax
  NTSTATUS v11; // eax
  unsigned int v12; // eax
  size_t v13; // [esp-4h] [ebp-40h]
  _UNICODE_STRING Destination; // [esp+14h] [ebp-28h] BYREF
  ULONG ReturnedLength; // [esp+1Ch] [ebp-20h] BYREF
  int v16; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v16 = -1073741595;
  if ( !a2 || !a3 || a2 == a3 )
    return -1073741811;
  if ( a2->Length )
  {
    *(_DWORD *)&Destination.Length = 0;
    Destination.Buffer = 0;
    RtlEnterCriticalSection(&FastPebLock);
    ms_exc.registration.TryLevel = 0;
    v11 = RtlExpandEnvironmentStrings_U(0, a2, &Destination, &ReturnedLength);
    v4 = v11;
    v16 = v11;
    if ( v11 >= 0 || v11 == -1073741789 )
    {
      if ( ReturnedLength <= 0xFFFE )
      {
        v12 = ReturnedLength + 4;
        if ( ReturnedLength + 4 <= 0xFFFE )
        {
          if ( (a3 == (PUNICODE_STRING)-8 || v12 > *(_DWORD *)&a3[2].Length)
            && RtlpEnsureBufferSize(0, (int)&a3[1], v12) < 0 )
          {
            v4 = -1073741801;
          }
          else
          {
            a3->Buffer = *(wchar_t **)&a3[1].Length;
            a3->MaximumLength = a3[2].Length;
            v4 = 0;
          }
        }
        else
        {
          v4 = -1073741562;
        }
        v16 = v4;
        if ( v4 < 0 )
          goto LABEL_29;
        v4 = RtlExpandEnvironmentStrings_U(0, a2, a3, 0);
        v16 = v4;
        if ( v4 < 0 )
          goto LABEL_29;
        v4 = 0;
      }
      else
      {
        v4 = -1073741562;
      }
      v16 = v4;
    }
LABEL_29:
    ms_exc.registration.TryLevel = -2;
    RtlLeaveCriticalSection(&FastPebLock);
    return v4;
  }
  a3->Length = 0;
  v6 = a2->Length + 2;
  if ( v6 > 0xFFFE )
    return -1073741562;
  v7 = (wchar_t **)&a3[1];
  if ( (a3 == (PUNICODE_STRING)-8 || v6 > *(_DWORD *)&a3[2].Length)
    && RtlpEnsureBufferSize(0, (int)&a3[1], a2->Length + 2) < 0 )
  {
    return -1073741801;
  }
  v8 = *v7;
  a3->Buffer = *v7;
  LODWORD(v13) = a2->Length;
  memmove(&v8[a3->Length >> 1], a2->Buffer, v13);
  Length = a3->Length;
  a3->MaximumLength = a3->Length + a2->Length + 2;
  v10 = Length + a2->Length;
  a3->Length = v10;
  a3->Buffer[v10 >> 1] = 0;
  return 0;
}
