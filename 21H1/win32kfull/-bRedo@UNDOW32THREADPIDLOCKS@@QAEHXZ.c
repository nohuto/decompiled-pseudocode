/*
 * XREFs of ?bRedo@UNDOW32THREADPIDLOCKS@@QAEHXZ @ 0xE5B8C
 * Callers:
 *     ??0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z @ 0x66EB0 (--0ENUMUNDERLAYS@@QAE@PAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@@Z.c)
 *     ?bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0xE52D4 (-bSpBltFromScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUS.c)
 *     ?bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1DD39B (-bSpBltScreenToScreen@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_.c)
 * Callees:
 *     <none>
 */

int __thiscall UNDOW32THREADPIDLOCKS::bRedo(int **this)
{
  int v2; // edi
  int v4; // edx
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ebx
  int *v8; // eax
  int v9; // eax
  signed __int32 v10; // [esp+Ch] [ebp-8h] BYREF
  signed __int32 v11; // [esp+10h] [ebp-4h] BYREF

  v2 = 1;
  if ( !this[2] )
  {
LABEL_2:
    if ( !this[3] )
      return v2;
    v9 = SURFACE::Map(*(_DWORD *)(*this[1] + 504), 0, 0);
    goto LABEL_16;
  }
  v4 = **this;
  v5 = *(_DWORD *)(v4 + 504);
  if ( !this[3] )
  {
    if ( SURFACE::Map(v5, 0, **this) == 2 )
    {
      *(_DWORD *)(**this + 32) |= 1u;
      v2 = 0;
    }
    goto LABEL_2;
  }
  v6 = this[1];
  v10 = *(_DWORD *)(v4 + 504);
  v7 = *(_DWORD *)(*v6 + 504);
  if ( v7 >= v5 )
  {
    if ( SURFACE::Map(v5, 0, v4) == 2 )
    {
      *(_DWORD *)(**this + 32) |= 1u;
      v2 = 0;
    }
    v10 = 0;
    _InterlockedOr(&v10, 0);
    v9 = SURFACE::Map(v7, 0, 0);
LABEL_16:
    if ( v9 != 2 )
      return v2;
    v8 = this[1];
LABEL_18:
    *(_DWORD *)(*v8 + 32) |= 1u;
    return 0;
  }
  if ( SURFACE::Map(v7, 0, 0) == 2 )
  {
    *(_DWORD *)(*this[1] + 32) |= 1u;
    v2 = 0;
  }
  v11 = 0;
  _InterlockedOr(&v11, 0);
  if ( SURFACE::Map(v10, 0, **this) == 2 )
  {
    v8 = *this;
    goto LABEL_18;
  }
  return v2;
}
