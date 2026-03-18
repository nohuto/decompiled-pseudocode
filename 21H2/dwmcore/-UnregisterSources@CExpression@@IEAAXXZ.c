/*
 * XREFs of ?UnregisterSources@CExpression@@IEAAXXZ @ 0x18006FC4C
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x18006FB8C (--1CExpression@@UEAA@XZ.c)
 *     ?SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z @ 0x180214DB0 (-SetOwner@CExpression@@UEAAXPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     ?RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z @ 0x18006FED8 (-RemoveSourceAnimation@CResource@@QEAAXPEAVCBaseExpression@@I@Z.c)
 */

void __fastcall CExpression::UnregisterSources(CExpression *this)
{
  char v2; // cl
  struct CBaseExpression *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  CResource *v7; // rcx

  v2 = *((_BYTE *)this + 456);
  if ( (v2 & 2) != 0 )
  {
    v3 = this;
    if ( *((_QWORD *)this + 56) )
      v3 = (struct CBaseExpression *)*((_QWORD *)this + 56);
    v4 = 0LL;
    if ( *((_DWORD *)this + 110) )
    {
      do
      {
        v5 = *((_QWORD *)this + 54);
        v6 = *(_QWORD *)(*((_QWORD *)this + 52) + 8LL * *(unsigned int *)(v5 + 24 * v4 + 20));
        if ( v6 )
        {
          v7 = *(CResource **)(v6 + 16);
          if ( v7 )
            CResource::RemoveSourceAnimation(v7, v3, *(_DWORD *)(v5 + 24 * v4));
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 110) );
      v2 = *((_BYTE *)this + 456);
    }
    *((_BYTE *)this + 456) = v2 & 0xFD;
  }
}
