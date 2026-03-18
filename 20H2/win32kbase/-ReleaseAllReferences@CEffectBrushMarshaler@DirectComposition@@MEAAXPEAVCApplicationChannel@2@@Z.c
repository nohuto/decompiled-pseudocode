/*
 * XREFs of ?ReleaseAllReferences@CEffectBrushMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00A5C20
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C00599C4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CEffectBrushMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi

  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[9]);
  v4 = this[10];
  this[9] = 0LL;
  DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  v5 = (__int64)this[11];
  this[10] = 0LL;
  if ( v5 )
  {
    v6 = 0LL;
    if ( *((_DWORD *)this + 24) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this[11] + v6));
        v6 = (unsigned int)(v6 + 1);
      }
      while ( (unsigned int)v6 < *((_DWORD *)this + 24) );
      v5 = (__int64)this[11];
    }
    Win32FreePool(v5);
    this[11] = 0LL;
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 25) = 0;
  }
}
