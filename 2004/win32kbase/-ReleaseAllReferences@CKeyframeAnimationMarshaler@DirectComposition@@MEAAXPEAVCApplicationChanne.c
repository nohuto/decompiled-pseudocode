/*
 * XREFs of ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0045080
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0098ED4 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009D440 (-ReleaseAllReferences@CBaseExpressionMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2.c)
 */

void __fastcall DirectComposition::CKeyframeAnimationMarshaler::ReleaseAllReferences(
        struct DirectComposition::CResourceMarshaler **this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rcx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rcx

  DirectComposition::CBaseExpressionMarshaler::ReleaseAllReferences(
    (DirectComposition::CBaseExpressionMarshaler *)this,
    a2);
  v4 = this[24];
  if ( v4 )
  {
    v9 = 0;
    if ( *((_DWORD *)this + 50) )
    {
      do
        DirectComposition::CApplicationChannel::ReleaseResource(
          a2,
          *((struct DirectComposition::CResourceMarshaler **)this[24] + v9++));
      while ( v9 < *((_DWORD *)this + 50) );
      v4 = this[24];
    }
    Win32FreePool(v4);
    this[24] = 0LL;
    this[25] = 0LL;
  }
  v5 = this[16];
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    this[16] = 0LL;
    this[18] = 0LL;
    this[17] = 0LL;
    *((_DWORD *)this + 38) = 0;
  }
  v6 = this[38];
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(
      a2,
      (struct DirectComposition::CResourceMarshaler *)((char *)v6 + 16));
    this[38] = 0LL;
  }
  v7 = this[20];
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    this[20] = 0LL;
    this[21] = 0LL;
    this[22] = 0LL;
  }
  v8 = this[26];
  if ( v8 )
  {
    v10 = 0;
    if ( *((_DWORD *)this + 54) )
    {
      do
      {
        v11 = v10++;
        v12 = *((_QWORD *)this[26] + 2 * v11);
        --*(_DWORD *)(v12 + 20);
      }
      while ( v10 < *((_DWORD *)this + 54) );
      v8 = this[26];
    }
    Win32FreePool(v8);
    this[26] = 0LL;
    this[27] = 0LL;
  }
}
