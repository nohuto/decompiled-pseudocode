/*
 * XREFs of ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18007F844
 * Callers:
 *     ?AdvanceFrame@CD3DDevice@@QEAAJXZ @ 0x18007F3E4 (-AdvanceFrame@CD3DDevice@@QEAAJXZ.c)
 * Callees:
 *     ?RemoveAt@?$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z @ 0x1800402F0 (-RemoveAt@-$DynArray@PEAVCScratchRenderTargetBitmap@@$0A@@@QEAAJI@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 */

void __fastcall CRenderTargetBitmapCache::AgeRenderTargetBitmaps(CRenderTargetBitmapCache *this)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rbp

  v1 = 0LL;
  if ( g_pComposition )
    v1 = *((_QWORD *)g_pComposition + 62);
  LODWORD(v3) = *((_DWORD *)this + 6);
  if ( (_DWORD)v3 )
  {
    do
    {
      v3 = (unsigned int)(v3 - 1);
      v4 = *(_QWORD *)(*(_QWORD *)this + 8 * v3);
      if ( (unsigned __int64)(v1 - *(_QWORD *)(v4 + 168)) >= 0x20 )
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v3);
        *(_BYTE *)(v4 + 176) = 0;
        CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v4);
      }
    }
    while ( (_DWORD)v3 );
    LODWORD(v5) = *((_DWORD *)this + 6);
    while ( (_DWORD)v5 && *((_DWORD *)this + 6) > 0x20u )
    {
      v5 = (unsigned int)(v5 - 1);
      v6 = *(_QWORD *)(*(_QWORD *)this + 8 * v5);
      if ( v1 != *(_QWORD *)(v6 + 168) )
      {
        DynArray<CScratchRenderTargetBitmap *,0>::RemoveAt((__int64 *)this, v5);
        *(_BYTE *)(v6 + 176) = 0;
        CMILRefCountBaseT<IUnknown>::InternalRelease((volatile signed __int32 *)v6);
      }
    }
  }
}
