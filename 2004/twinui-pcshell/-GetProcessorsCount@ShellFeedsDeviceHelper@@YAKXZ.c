/*
 * XREFs of ?GetProcessorsCount@ShellFeedsDeviceHelper@@YAKXZ @ 0x18009AD20
 * Callers:
 *     ?GetDeviceConfiguration@ShellFeedsDeviceHelper@@YA?BV?$tuple@W4DeviceType@ShellFeedsDeviceHelper@@_N_KK@std@@XZ @ 0x18009A994 (-GetDeviceConfiguration@ShellFeedsDeviceHelper@@YA-BV-$tuple@W4DeviceType@ShellFeedsDeviceHelper.c)
 *     ?GetDeviceType@ShellFeedsDeviceHelper@@YA?AW4DeviceType@1@XZ @ 0x18009AA3C (-GetDeviceType@ShellFeedsDeviceHelper@@YA-AW4DeviceType@1@XZ.c)
 * Callees:
 *     ??$make_unique_cotaskmem@$$BY0A@E@wil@@YA?AV?$unique_ptr@$$BY0A@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@_K@Z @ 0x180098AA8 (--$make_unique_cotaskmem@$$BY0A@E@wil@@YA-AV-$unique_ptr@$$BY0A@EU-$function_deleter@P6AXPEAX@Z$.c)
 */

__int64 __fastcall ShellFeedsDeviceHelper::GetProcessorsCount(ShellFeedsDeviceHelper *this)
{
  unsigned int v1; // ebx
  bool LogicalProcessorInformation; // di
  BOOL v3; // eax
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdi
  int v8; // edx
  unsigned __int64 v9; // r10
  __int64 v10; // r11
  int v11; // eax
  DWORD ReturnedLength; // [rsp+30h] [rbp+8h] BYREF
  PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer; // [rsp+38h] [rbp+10h] BYREF

  ReturnedLength = 0;
  v1 = 0;
  LogicalProcessorInformation = GetLogicalProcessorInformation(0LL, &ReturnedLength);
  if ( GetLastError() == 122 && !LogicalProcessorInformation )
  {
    wil::make_unique_cotaskmem<unsigned char [0]>((char **)&Buffer, ReturnedLength);
    v3 = GetLogicalProcessorInformation(Buffer, &ReturnedLength);
    v4 = Buffer;
    if ( v3 )
    {
      LODWORD(v5) = 0;
      if ( ReturnedLength >= 0x20uLL )
      {
        v6 = 0LL;
        do
        {
          if ( *(LOGICAL_PROCESSOR_RELATIONSHIP *)((char *)&Buffer->Relationship + v6) == RelationProcessorCore )
          {
            v7 = *(ULONG_PTR *)((char *)&Buffer->ProcessorMask + v6);
            v8 = 0;
            v9 = 0x8000000000000000uLL;
            v10 = 64LL;
            do
            {
              v11 = (v7 & v9) != 0;
              v9 >>= 1;
              v8 += v11;
              --v10;
            }
            while ( v10 );
            v1 += v8;
          }
          v5 = (unsigned int)(v5 + 32);
          v6 = (unsigned int)v5;
        }
        while ( v5 + 32 <= (unsigned __int64)ReturnedLength );
      }
    }
    Buffer = 0LL;
    if ( v4 )
      CoTaskMemFree(v4);
  }
  return v1;
}
