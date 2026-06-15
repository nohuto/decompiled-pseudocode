/*
 * XREFs of ??$_Setp@VCStreamConnectionImpl@CMonitorManager@@@?$shared_ptr@VCStreamConnection@@@std@@AEAAXPEAVCStreamConnectionImpl@CMonitorManager@@U?$integral_constant@_N$0A@@1@@Z @ 0x1800F9554
 * Callers:
 *     ?CreateStreamConnection@CMonitorManager@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAV?$shared_ptr@VCStreamConnection@@@3@@Z @ 0x1800FA8B8 (-CreateStreamConnection@CMonitorManager@@QEAAJAEBV-$basic_string@GU-$char_traits@G@std@@V-$alloc.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056070 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::shared_ptr<CStreamConnection>::_Setp<CMonitorManager::CStreamConnectionImpl>(
        _QWORD *a1,
        __int64 a2)
{
  _DWORD *result; // rax

  result = operator new(0x18uLL);
  if ( result )
  {
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = &std::_Ref_count<CMonitorManager::CStreamConnectionImpl>::`vftable';
    *((_QWORD *)result + 2) = a2;
  }
  *a1 = a2;
  a1[1] = result;
  return result;
}
