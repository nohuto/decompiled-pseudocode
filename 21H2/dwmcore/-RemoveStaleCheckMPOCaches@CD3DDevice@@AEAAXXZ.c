/*
 * XREFs of ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x1800F207C
 * Callers:
 *     ?PostPresent@CComposition@@QEAAJ_N@Z @ 0x180077330 (-PostPresent@CComposition@@QEAAJ_N@Z.c)
 * Callees:
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180090244 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@0@0AEAV?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1800F13FC (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@.c)
 *     ??4?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800F1EF0 (--4-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEA.c)
 */

void __fastcall CD3DDevice::RemoveStaleCheckMPOCaches(CD3DDevice *this)
{
  CCheckMPOCache ***v1; // rsi
  CCheckMPOCache ***v3; // rbx
  unsigned __int64 CurrentFrameId; // rax
  CCheckMPOCache ***i; // rdi

  v1 = (CCheckMPOCache ***)*((_QWORD *)this + 172);
  v3 = (CCheckMPOCache ***)*((_QWORD *)this + 171);
  if ( v3 != v1 )
  {
    CurrentFrameId = GetCurrentFrameId();
    do
    {
      if ( CurrentFrameId - (unsigned __int64)(*v3)[111] > 0x1E )
        break;
      ++v3;
    }
    while ( v3 != v1 );
    if ( v3 != v1 )
    {
      for ( i = v3 + 1; i != v1; ++i )
      {
        if ( GetCurrentFrameId() - (unsigned __int64)(*i)[111] <= 0x1E )
          std::unique_ptr<CCheckMPOCache>::operator=(v3++, i);
      }
    }
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CCheckMPOCache>>>((char ***)v3, *((char ****)this + 172));
  *((_QWORD *)this + 172) = v3;
}
