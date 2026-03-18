/*
 * XREFs of ?ReleaseAllReferences@CConditionalExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C01ED0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0029A70 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C008F624 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CConditionalExpressionMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdi

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v6 = (__int64)this[16];
  if ( v6 )
  {
    v7 = 0LL;
    if ( *((_DWORD *)this + 34) )
    {
      do
      {
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this[16] + v7));
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < *((_DWORD *)this + 34) );
      v6 = (__int64)this[16];
    }
    Win32FreePool(v6, v4, v5);
    this[16] = 0LL;
    *((_DWORD *)this + 34) = 0;
    *((_DWORD *)this + 35) = 0;
  }
  DirectComposition::CApplicationChannel::ReleaseResource(a2, this[18]);
  this[18] = 0LL;
}
