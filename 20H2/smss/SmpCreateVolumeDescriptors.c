/*
 * XREFs of SmpCreateVolumeDescriptors @ 0x14000AE80
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000768C (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpCreateVolumeDescriptor @ 0x14000B3BC (SmpCreateVolumeDescriptor.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 */

__int64 SmpCreateVolumeDescriptors()
{
  NTSTATUS InformationProcess; // r8d
  __int64 v1; // rbx
  __int64 v2; // rdx
  WCHAR *v3; // rcx
  WCHAR v4; // ax
  WCHAR *v5; // rax
  WCHAR *v6; // rcx
  WCHAR v7; // ax
  WCHAR *v8; // rax
  WCHAR i; // bx
  int v10; // eax
  __int64 v12; // rcx
  struct _UNICODE_STRING v13; // [rsp+38h] [rbp-19h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-9h] BYREF
  _DWORD ProcessInformation[10]; // [rsp+58h] [rbp+7h] BYREF
  WCHAR SourceString[8]; // [rsp+80h] [rbp+2Fh] BYREF
  WCHAR v17[8]; // [rsp+90h] [rbp+3Fh] BYREF

  InformationProcess = NtQueryInformationProcess(
                         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                         ProcessDeviceMap,
                         ProcessInformation,
                         0x24u,
                         0LL);
  if ( InformationProcess < 0 )
  {
    v12 = 2LL * (_InterlockedIncrement(&SmpPagefileLogIndex) % 32);
    *((_DWORD *)&SmpPagefileLog + 2 * v12) = 1646;
    *((_DWORD *)&SmpPagefileLog + 2 * v12 + 1) = InformationProcess;
    *((_QWORD *)&SmpPagefileLog + v12 + 1) = 0LL;
    return (unsigned int)InformationProcess;
  }
  else
  {
    v1 = 8LL;
    v2 = 8LL;
    v3 = SourceString;
    do
    {
      if ( v2 == -2147483638 )
        break;
      v4 = *(WCHAR *)((char *)v3 + (char *)L"\\??\\A:\\" - (char *)SourceString);
      if ( !v4 )
        break;
      *v3++ = v4;
      --v2;
    }
    while ( v2 );
    v5 = v3 - 1;
    if ( v2 )
      v5 = v3;
    *v5 = 0;
    RtlInitUnicodeStringEx(&DestinationString, SourceString);
    v6 = v17;
    do
    {
      if ( v1 == -2147483638 )
        break;
      v7 = *(WCHAR *)((char *)v6 + (char *)L"\\??\\A:" - (char *)v17);
      if ( !v7 )
        break;
      *v6++ = v7;
      --v1;
    }
    while ( v1 );
    v8 = v6 - 1;
    if ( v1 )
      v8 = v6;
    *v8 = 0;
    RtlInitUnicodeStringEx(&v13, v17);
    for ( i = 67; i <= 0x5Au; ++i )
    {
      v10 = ProcessInformation[0];
      if ( _bittest(&v10, (unsigned __int8)(i - 65)) && (SmpPagefileOnOsVolume != 1 || i == SmpOsVolumeLetter) )
      {
        DestinationString.Buffer[4] = i;
        v13.Buffer[4] = i;
        SmpCreateVolumeDescriptor(i, &DestinationString, &v13);
      }
    }
    return SmpVolumeDescriptorList == (_QWORD)&SmpVolumeDescriptorList ? 0xC00000E9 : 0;
  }
}
