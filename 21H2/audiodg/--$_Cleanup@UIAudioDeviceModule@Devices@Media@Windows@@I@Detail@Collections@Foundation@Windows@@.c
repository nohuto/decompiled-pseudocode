/*
 * XREFs of ??$_Cleanup@UIAudioDeviceModule@Devices@Media@Windows@@I@Detail@Collections@Foundation@Windows@@YAXQEAPEAUIAudioDeviceModule@Devices@Media@3@I@Z @ 0x14001FF50
 * Callers:
 *     ??$_IteratorGetMany@U?$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Foundation@Windows@@PEAUIBuffer@Streams@Storage@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@123@IPEAPEAUIBuffer@Streams@Storage@3@PEAI@Z @ 0x140020180 (--$_IteratorGetMany@U-$IIterator_impl@PEAUIBuffer@Streams@Storage@Windows@@$00@Collections@Found.c)
 *     ??$_VectorGetMany@U?$IVectorView_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@Collections@Foundation@Windows@@PEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@4@@Detail@Collections@Foundation@Windows@@YAJPEAU?$IVectorView_impl@U?$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@PEAUIAudioDeviceBrokerDevice@2345@@Internal@Foundation@Windows@@$00@123@IIPEAPEAUIAudioDeviceBrokerDevice@Internal@Devices@Media@3@PEAI@Z @ 0x140020250 (--$_VectorGetMany@U-$IVectorView_impl@U-$AggregateType@PEAVAudioDeviceBrokerDevice@Internal@Devi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Detail::_Cleanup<Windows::Media::Devices::IAudioDeviceModule,unsigned int>(
        _QWORD *a1,
        unsigned int a2)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v3 = a2;
    do
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
      *a1++ = 0LL;
      --v3;
    }
    while ( v3 );
  }
  return result;
}
