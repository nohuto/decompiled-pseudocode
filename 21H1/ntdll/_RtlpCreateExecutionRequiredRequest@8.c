/*
 * XREFs of _RtlpCreateExecutionRequiredRequest@8 @ 0x4B36FC1E
 * Callers:
 *     _RtlQueryProcessDebugInformation@12 @ 0x4B336B50 (_RtlQueryProcessDebugInformation@12.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 *     _ZwPowerInformation@20 @ 0x4B2F2F70 (_ZwPowerInformation@20.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall RtlpCreateExecutionRequiredRequest(int a1, HANDLE *a2)
{
  int result; // eax
  int v5; // esi
  int v6[7]; // [esp+10h] [ebp-50h] BYREF
  char v7; // [esp+2Ch] [ebp-34h]
  _DWORD v8[2]; // [esp+30h] [ebp-30h] BYREF
  UNICODE_STRING DestinationString; // [esp+38h] [ebp-28h] BYREF
  _DWORD v10[2]; // [esp+4Ch] [ebp-14h] BYREF
  char v11; // [esp+54h] [ebp-Ch]
  int v12; // [esp+58h] [ebp-8h]
  HANDLE Handle; // [esp+5Ch] [ebp-4h] BYREF

  v6[0] = 32;
  result = ZwQueryInformationProcess(a1, 0, (int)v6, 32, 0);
  if ( result >= 0 )
  {
    if ( (v7 & 0x40) != 0 )
    {
      v8[0] = 0;
      v8[1] = 1;
      RtlInitUnicodeString(&DestinationString, L"QueryDebugInformation request");
      v5 = ZwPowerInformation(72, (int)v8, 28, (int)&Handle, 4);
      if ( v5 >= 0 )
      {
        v10[0] = Handle;
        v10[1] = 3;
        v11 = 1;
        v12 = a1;
        v5 = ZwPowerInformation(44, (int)v10, 16, 0, 0);
        if ( v5 >= 0 )
          *a2 = Handle;
        else
          NtClose(Handle);
      }
      return v5;
    }
    else
    {
      *a2 = 0;
      return 0;
    }
  }
  return result;
}
