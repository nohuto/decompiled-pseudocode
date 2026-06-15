/*
 * XREFs of ??$_IteratorGetMany@U?$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundation@Windows@@PEAUIBuffer@Streams@Storage@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@123@IPEAPEAUIBuffer@Streams@Storage@3@PEAI@Z @ 0x1400200A0
 * Callers:
 *     ?GetMany@?$IIterator_impl@U?$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@PEAUIAudioDeviceModule@234@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@UEAAJIPEAPEAUIAudioDeviceModule@Devices@Media@4@PEAI@Z @ 0x140023250 (-GetMany@-$IIterator_impl@U-$AggregateType@PEAVAudioDeviceModule@Devices@Media@Windows@@PEAUIAud.c)
 * Callees:
 *     memset_0 @ 0x14001DF78 (memset_0.c)
 *     ??$_Cleanup@UIAudioDeviceModule@Devices@Media@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIAudioDeviceModule@Devices@Media@3@I@Z @ 0x14001FE70 (--$_Cleanup@UIAudioDeviceModule@Devices@Media@Windows@@I@Detail@Collections@Foundation@Windows@@.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_IteratorGetMany<Windows::Foundation::Collections::IIterator_impl<Windows::Storage::Streams::IBuffer *,1>,Windows::Storage::Streams::IBuffer *>(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  char v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  v8 = 0LL;
  memset_0(a3, 0, 8LL * a2);
  *a4 = 0;
  v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v11);
  if ( v9 < 0 )
    goto LABEL_8;
  do
  {
    if ( !v11 || (unsigned int)v8 >= a2 )
      break;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a1 + 48LL))(a1, &a3[v8]);
    if ( v9 < 0 )
      goto LABEL_8;
    v8 = (unsigned int)(v8 + 1);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v11);
  }
  while ( v9 >= 0 );
  if ( v9 < 0 )
LABEL_8:
    Windows::Foundation::Collections::Detail::_Cleanup<Windows::Media::Devices::IAudioDeviceModule,unsigned int>(
      a3,
      *a4);
  else
    *a4 = v8;
  return (unsigned int)v9;
}
