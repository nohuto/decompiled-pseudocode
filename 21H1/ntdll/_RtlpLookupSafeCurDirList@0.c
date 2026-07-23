/*
 * XREFs of _RtlpLookupSafeCurDirList@0 @ 0x4B33D088
 * Callers:
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlQueryEnvironmentVariable_U@12 @ 0x4B2DB100 (_RtlQueryEnvironmentVariable_U@12.c)
 *     _RtlExpandEnvironmentStrings_U@16 @ 0x4B2DC330 (_RtlExpandEnvironmentStrings_U@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _NtEnumerateValueKey@24 @ 0x4B2F2A90 (_NtEnumerateValueKey@24.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlpEnsureTailingSlashAndAddToList@8 @ 0x4B33D020 (_RtlpEnsureTailingSlashAndAddToList@8.c)
 */

int __stdcall RtlpLookupSafeCurDirList()
{
  int result; // eax
  _DWORD *Heap; // eax
  _DWORD *v2; // esi
  HANDLE v3; // edi
  NTSTATUS v4; // edx
  signed __int32 v5; // ecx
  ULONG v6; // edi
  NTSTATUS i; // eax
  _UNICODE_STRING *p_Destination; // edx
  signed __int32 v9; // edi
  _DWORD *v10; // eax
  int v11; // ecx
  PVOID v12; // [esp-Ch] [ebp-684h]
  SIZE_T v13; // [esp-4h] [ebp-67Ch]
  _DWORD *v14; // [esp-4h] [ebp-67Ch]
  _UNICODE_STRING Destination; // [esp+10h] [ebp-668h] BYREF
  _UNICODE_STRING ValueName; // [esp+18h] [ebp-660h] BYREF
  _UNICODE_STRING Value; // [esp+20h] [ebp-658h] BYREF
  ULONG ResultLength; // [esp+28h] [ebp-650h] BYREF
  HANDLE KeyHandle; // [esp+2Ch] [ebp-64Ch] BYREF
  _BYTE v20[4]; // [esp+30h] [ebp-648h] BYREF
  int v21; // [esp+34h] [ebp-644h]
  char v22; // [esp+3Ch] [ebp-63Ch] BYREF
  _BYTE v23[4]; // [esp+248h] [ebp-430h] BYREF
  int v24; // [esp+24Ch] [ebp-42Ch]
  int v25; // [esp+250h] [ebp-428h]
  char v26; // [esp+254h] [ebp-424h] BYREF
  _BYTE KeyValueInformation[12]; // [esp+458h] [ebp-220h] BYREF
  int v28; // [esp+464h] [ebp-214h]
  char v29; // [esp+468h] [ebp-210h] BYREF

  result = dword_4B3A393C;
  *(_DWORD *)&Destination.Length = 34078720;
  Destination.Buffer = 0;
  *(_DWORD *)&Value.Length = 34078720;
  Value.Buffer = 0;
  *(_DWORD *)&ValueName.Length = 0x2000000;
  ValueName.Buffer = 0;
  if ( dword_4B3A393C == -1 )
  {
    ValueName.Buffer = (wchar_t *)&v26;
    Value.Buffer = (wchar_t *)&v22;
    Destination.Buffer = (wchar_t *)&v29;
    LODWORD(v13) = 8;
    Heap = RtlAllocateHeap(LdrpHeap, NtdllBaseTag + 0x40000, v13);
    v2 = Heap;
    if ( Heap )
    {
      Heap[1] = Heap;
      *Heap = Heap;
      v3 = dword_4B3A69E8;
      KeyHandle = dword_4B3A69E8;
      if ( !dword_4B3A69E8 )
      {
        v4 = ZwOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&stru_4B281BC0);
        if ( v4 >= 0 )
        {
          v5 = (signed __int32)KeyHandle;
        }
        else
        {
          v5 = -1;
          KeyHandle = (HANDLE)-1;
        }
        v3 = (HANDLE)_InterlockedCompareExchange((volatile signed __int32 *)&dword_4B3A69E8, v5, 0);
        if ( v3 )
        {
          if ( v4 >= 0 )
            NtClose(KeyHandle);
          KeyHandle = v3;
        }
        else
        {
          v3 = KeyHandle;
        }
      }
      if ( (v3 != (HANDLE)-1
         && ZwQueryValueKey(
              v3,
              (PUNICODE_STRING)&stru_4B281BB0,
              KeyValuePartialInformation,
              KeyValueInformation,
              0x10u,
              &ResultLength) >= 0
         && ResultLength == 16
         && v28
         && (v28 == 1 ? v28 : 0) != 0
         || RtlQueryEnvironmentVariable_U(0, (PUNICODE_STRING)&stru_4B281BB8, &Value) >= 0
         && RtlpEnsureTailingSlashAndAddToList((int)v2, (int)&Value) >= 0)
        && KeyHandle != (HANDLE)-1 )
      {
        v6 = 0;
        for ( i = NtEnumerateValueKey(KeyHandle, 0, KeyValueBasicInformation, v23, 0x20Cu, &ResultLength);
              i != -2147483622;
              i = NtEnumerateValueKey(KeyHandle, v6, KeyValueBasicInformation, v23, 0x20Cu, &ResultLength) )
        {
          if ( i != -2147483643 )
          {
            if ( i < 0 )
              break;
            if ( v25 && (v24 == 1 || v24 == 2) )
            {
              ValueName.Length = v25;
              if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v20, 0x214u, &ResultLength) >= 0
                && (v24 == 1 || v24 == 2) )
              {
                Value.Length = 2 * ((ResultLength - 12) >> 1) - 2;
                if ( v21 == 2 )
                {
                  if ( RtlExpandEnvironmentStrings_U(0, &Value, &Destination, 0) < 0 )
                    goto LABEL_34;
                  p_Destination = &Destination;
                }
                else
                {
                  p_Destination = &Value;
                }
                RtlpEnsureTailingSlashAndAddToList((int)v2, (int)p_Destination);
              }
            }
          }
LABEL_34:
          ++v6;
        }
      }
    }
    v9 = _InterlockedCompareExchange(&dword_4B3A393C, (signed __int32)v2, -1);
    if ( v9 == -1 )
    {
      return (int)v2;
    }
    else
    {
      if ( v2 )
      {
        while ( 1 )
        {
          v10 = (_DWORD *)*v2;
          if ( (_DWORD *)*v2 == v2 )
            break;
          if ( (_DWORD *)v10[1] != v2 || (v11 = *v10, *(_DWORD **)(*v10 + 4) != v10) )
            __fastfail(3u);
          v14 = (_DWORD *)*v2;
          v12 = LdrpHeap;
          *v2 = v11;
          *(_DWORD *)(v11 + 4) = v2;
          RtlFreeHeap(v12, 0, v14);
        }
        RtlFreeHeap(LdrpHeap, 0, v2);
      }
      return v9;
    }
  }
  return result;
}
