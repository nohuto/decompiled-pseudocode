/*
 * XREFs of ??1CGradientBrush@@MEAA@XZ @ 0x1801E6A8C
 * Callers:
 *     ??_GCRadialGradientBrush@@UEAAPEAXI@Z @ 0x18016DBB0 (--_GCRadialGradientBrush@@UEAAPEAXI@Z.c)
 *     ??_ECLinearGradientBrush@@UEAAPEAXI@Z @ 0x1801D28B0 (--_ECLinearGradientBrush@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8E4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1CGradientSource@@MEAA@XZ @ 0x180209D54 (--1CGradientSource@@MEAA@XZ.c)
 */

void __fastcall CGradientBrush::~CGradientBrush(struct CResource **this)
{
  struct CResource **v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  struct CResource *v5; // rcx
  struct CResource *v6; // rcx

  CResource::UnRegisterNotifierInternal((CResource *)this, this[21]);
  v2 = (struct CResource **)this[15];
  v3 = 0LL;
  v4 = (unsigned __int64)(this[16] - (struct CResource *)v2 + 7) >> 3;
  if ( v2 > (struct CResource **)this[16] )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, *v2);
      ++v3;
      ++v2;
    }
    while ( v3 != v4 );
  }
  v5 = this[18];
  if ( v5 )
  {
    std::_Deallocate<16,0>(v5, 20 * ((this[20] - v5) / 20));
    this[18] = 0LL;
    this[19] = 0LL;
    this[20] = 0LL;
  }
  v6 = this[15];
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, (this[17] - v6) & 0xFFFFFFFFFFFFFFF8uLL);
    this[15] = 0LL;
    this[16] = 0LL;
    this[17] = 0LL;
  }
  CGradientSource::~CGradientSource((CGradientSource *)(this + 10));
  CBrush::~CBrush((CBrush *)this);
}
