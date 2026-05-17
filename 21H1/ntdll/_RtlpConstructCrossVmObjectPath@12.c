/*
 * XREFs of _RtlpConstructCrossVmObjectPath@12 @ 0x4B35AB97
 * Callers:
 *     _RtlConstructCrossVmMutexPath@12 @ 0x4B35AB80 (_RtlConstructCrossVmMutexPath@12.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlStringFromGUIDEx@12 @ 0x4B2ED180 (_RtlStringFromGUIDEx@12.c)
 */

int __fastcall RtlpConstructCrossVmObjectPath(int *a1, int a2, int a3)
{
  int StringRoutine; // edi
  int appended; // esi
  int *v5; // ecx
  UNICODE_STRING v7; // [esp+Ch] [ebp-20h] BYREF
  UNICODE_STRING UnicodeString; // [esp+14h] [ebp-18h] BYREF
  int v9; // [esp+1Ch] [ebp-10h] BYREF
  int v10; // [esp+20h] [ebp-Ch]
  int *v11; // [esp+24h] [ebp-8h]
  int v12; // [esp+28h] [ebp-4h]

  v11 = a1;
  v9 = 7340032;
  v12 = a2;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  *(_DWORD *)&v7.Length = 0;
  v7.Buffer = 0;
  v10 = 0;
  if ( a3 )
    HIWORD(v9) = 190;
  StringRoutine = NtdllpAllocateStringRoutine(a3 != 0 ? 190 : 112);
  v10 = StringRoutine;
  if ( StringRoutine )
  {
    appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v9, (const void **)&dword_4B281C40);
    if ( appended < 0
      || (appended = RtlAppendUnicodeToString((unsigned __int16 *)&v9, L"\\"), appended < 0)
      || a3
      && ((appended = RtlStringFromGUIDEx(a3, (int)&UnicodeString, 1), appended < 0)
       || (appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v9, (const void **)&UnicodeString),
           appended < 0)
       || (appended = RtlAppendUnicodeToString((unsigned __int16 *)&v9, L"\\"), appended < 0))
      || (appended = RtlStringFromGUIDEx(v12, (int)&v7, 1), appended < 0)
      || (appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v9, (const void **)&v7), appended < 0) )
    {
      StringRoutine = v10;
    }
    else
    {
      v5 = v11;
      StringRoutine = 0;
      *v11 = v9;
      v5[1] = v10;
    }
  }
  else
  {
    appended = -1073741801;
  }
  RtlFreeAnsiString(&UnicodeString);
  RtlFreeAnsiString(&v7);
  if ( StringRoutine )
    RtlDeleteBoundaryDescriptor(StringRoutine);
  return appended;
}
