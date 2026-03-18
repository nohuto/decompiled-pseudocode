/*
 * XREFs of ?ReleaseAllReferences@CExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0029980
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0029A70 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     ?ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z @ 0x1C0029AC0 (-ReleaseWeakReference@CApplicationChannel@DirectComposition@@QEAAXPEAVCWeakReferenceBase@2@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CExpressionMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rcx
  __int64 v5; // rsi
  struct DirectComposition::CResourceMarshaler *v6; // rcx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v4 = this[24];
  if ( v4 )
  {
    v5 = 0LL;
    if ( *((_DWORD *)this + 50) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseWeakReference(
          a2,
          *((struct DirectComposition::CWeakReferenceBase **)this[24] + v5));
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < *((_DWORD *)this + 50) );
      v4 = this[24];
    }
    Win32FreePool(v4);
    this[24] = 0LL;
  }
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  v6 = this[26];
  if ( v6 )
  {
    Win32FreePool(v6);
    this[26] = 0LL;
  }
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  v7 = this[16];
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    this[16] = 0LL;
  }
  v8 = this[19];
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
    this[19] = 0LL;
  }
}
