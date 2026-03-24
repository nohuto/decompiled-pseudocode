/*
 * XREFs of ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@IEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x180060784
 * Callers:
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x180060730 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?GetCurrentFrameId@@YA_KXZ @ 0x180090244 (-GetCurrentFrameId@@YA_KXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8AF4 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C0950 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?RemoveAt@?$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z @ 0x1800D5CE0 (-RemoveAt@-$DynArray@PEAVCCursorVisualReference@@$0A@@@QEAAJI@Z.c)
 */

void __fastcall CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
        CRenderTargetBitmapCache *this,
        struct CScratchRenderTargetBitmap *a2)
{
  unsigned __int64 CurrentFrameId; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdi
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  int v10; // ebx
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  CMILCOMBase *v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  if ( *((_BYTE *)a2 + 177) )
    --*((_DWORD *)this + 10);
  CurrentFrameId = GetCurrentFrameId();
  *(_QWORD *)(v5 + 168) = CurrentFrameId;
  LODWORD(v6) = *((_DWORD *)this + 6);
  if ( (unsigned int)v6 >= 0x20 )
  {
    v11 = GetCurrentFrameId();
    do
    {
      v4 = *(_QWORD *)this;
      v6 = (unsigned int)(v6 - 1);
      v12 = *(_QWORD *)(*(_QWORD *)this + 8 * v6);
      if ( v11 - *(_QWORD *)(v12 + 168) > 1 )
      {
        DynArray<CCursorVisualReference *,0>::RemoveAt(this, (unsigned int)v6);
        *(_BYTE *)(v12 + 176) = 0;
        CRenderTargetBitmap::Release((CRenderTargetBitmap *)v12);
      }
    }
    while ( (_DWORD)v6 );
    LODWORD(v6) = *((_DWORD *)this + 6);
  }
  v7 = v6 + 1;
  if ( (int)v6 + 1 < (unsigned int)v6 )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    if ( v7 <= *((_DWORD *)this + 5) )
    {
      *(_QWORD *)(*(_QWORD *)this + 8LL * (unsigned int)v6) = v13;
      *((_DWORD *)this + 6) = v7;
LABEL_7:
      CMILCOMBase::InternalAddRef(v13);
      return;
    }
    v8 = DynArrayImpl<0>::AddMultipleAndSet(this, 8LL, 1LL, &v13);
    v10 = v8;
    if ( v8 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xC0u, 0LL);
  }
  if ( v10 >= 0 )
    goto LABEL_7;
}
