/*
 * XREFs of ?ReleaseAllReferences@CFilterEffectMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01E23C0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CFilterEffectMarshaler::ReleaseAllReferences(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi

  v5 = *((_QWORD *)this + 10);
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_DWORD *)this + 18) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *(struct DirectComposition::CResourceMarshaler **)(*((_QWORD *)this + 10) + 8 * v6));
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 18) );
      v5 = *((_QWORD *)this + 10);
    }
    Win32FreePool(v5, (__int64)a2, a3);
    *((_QWORD *)this + 10) = 0LL;
  }
}
